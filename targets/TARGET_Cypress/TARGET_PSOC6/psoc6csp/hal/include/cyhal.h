/*******************************************************************************
* File Name: cyhal.h
*
* Description:
* Top-level HAL header file that includes all available HAL header files. This
* will pull in all of the specific HAL files needed. Not all of these may be
* supported in the target device. The target device must provide a
* cyhal_hw_types.h file that is in the include path for the hal headers to
* depend on. The cyhal_hw_types.h file must provide definitions for each of
* the resource types consumed by the HAL driver functions. Additionally, the
* implementation may define a cyhal_implementation.h file that provides any
* custom includes. This file is optional per implementation.
*
********************************************************************************
* \copyright
* Copyright 2018-2019 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

/**
* \addtogroup group_hal
* \{
* TODO: high-level HAL description
* update hal/include/cyhal.h to change this text
* \} group_hal
*/

#pragma once

#include "cyhal_adc.h"
#include "cyhal_comp.h"
#include "cyhal_crc.h"
#include "cyhal_crc_impl.h"
#include "cyhal_dac.h"
#include "cyhal_dma.h"
#include "cyhal_flash.h"
#include "cyhal_gpio.h"
#include "cyhal_hwmgr.h"
#include "cyhal_i2c.h"
#include "cyhal_i2s.h"
#include "cyhal_interconnect.h"
#include "cyhal_lptimer.h"
#include "cyhal_opamp.h"
#include "cyhal_pdmpcm.h"
#include "cyhal_pwm.h"
#include "cyhal_qspi.h"
#include "cyhal_rtc.h"
#include "cyhal_sdhc.h"
#include "cyhal_sdio.h"
#include "cyhal_spi.h"
#include "cyhal_system.h"
#include "cyhal_timer.h"
#include "cyhal_trng.h"
#include "cyhal_uart.h"
#include "cyhal_usb_dev.h"

/** \} group_hal */

