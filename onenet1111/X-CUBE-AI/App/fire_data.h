/**
  ******************************************************************************
  * @file    fire_data.h
  * @author  AST Embedded Analytics Research Platform
  * @date    Thu Jul  7 18:34:23 2022
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

#ifndef FIRE_DATA_H
#define FIRE_DATA_H
#pragma once

#include "fire_config.h"
#include "ai_platform.h"

#define AI_FIRE_DATA_CONFIG               (NULL)

#define AI_FIRE_DATA_ACTIVATIONS_SIZE     (86016)

#define AI_FIRE_DATA_ACTIVATIONS_COUNT    (1)

#define AI_FIRE_DATA_WEIGHTS_SIZE         (2024068)

#define AI_FIRE_DATA_WEIGHTS_COUNT        (1)

#define AI_FIRE_DATA_ACTIVATIONS(ptr_)  \
  AI_BUFFER_OBJ_INIT( \
    AI_BUFFER_FORMAT_U8, \
    AI_FIRE_DATA_ACTIVATIONS_COUNT, 1, AI_FIRE_DATA_ACTIVATIONS_SIZE, 1, \
    AI_HANDLE_PTR(ptr_) )

#define AI_FIRE_DATA_WEIGHTS(ptr_)  \
  AI_BUFFER_OBJ_INIT( \
    AI_BUFFER_FORMAT_U8|AI_BUFFER_FMT_FLAG_CONST, \
    AI_FIRE_DATA_WEIGHTS_COUNT, 1, AI_FIRE_DATA_WEIGHTS_SIZE, 1, \
    AI_HANDLE_PTR(ptr_) )

AI_API_DECLARE_BEGIN




/*!
 * @brief Get network weights array pointer as a handle ptr.
 * @ingroup fire_data
 * @return a ai_handle pointer to the weights array
 */
AI_DEPRECATED
AI_API_ENTRY
ai_handle ai_fire_data_weights_get(void);


/*!
 * @brief Get network params configuration data structure.
 * @ingroup fire_data
 * @return true if a valid configuration is present, false otherwise
 */
AI_API_ENTRY
ai_bool ai_fire_data_params_get(ai_handle network, ai_network_params* params);


AI_API_DECLARE_END

#endif /* FIRE_DATA_H */

