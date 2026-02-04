#pragma once

// Dependencies
#include "system/basetypes.h"

// Union: UActorPropertyParam
typedef union UActorPropertyParam {
    int v_int;
    float v_float;
    void* v_ptr;
} UActorPropertyParam;

