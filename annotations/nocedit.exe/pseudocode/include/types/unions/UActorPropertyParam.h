#pragma once

// Dependencies
#include "system/basetypes.h"

// Union: UActorPropertyParam
#pragma pack(push, 1)
typedef union UActorPropertyParam {
    int v_int;
    float v_float;
    void* v_ptr;
} UActorPropertyParam;
#pragma pack(pop)

