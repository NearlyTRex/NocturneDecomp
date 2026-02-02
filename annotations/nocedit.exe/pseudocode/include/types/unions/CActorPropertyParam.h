#pragma once

// Dependencies
#include "system/basetypes.h"

// Union: CActorPropertyParam
typedef union CActorPropertyParam {
    int v_int;
    float v_float;
    void* v_ptr;
} CActorPropertyParam;

