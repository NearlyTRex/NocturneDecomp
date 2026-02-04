#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/enums/EActorPropertyType.h"
#include "types/unions/UActorPropertyParam.h"

// Structure: CActorProperty
// Ghidra size: 0xec (236 bytes)
typedef struct CActorProperty {
    EActorPropertyType type; // 0x0
    char name[80]; // 0x4
    int enabled_flag; // 0x54
    int auto_update_flag; // 0x58
    UActorPropertyParam param1; // 0x5c, has_bounds, allow_none, index, count
    UActorPropertyParam param2; // 0x60, min, pairs_ptr
    UActorPropertyParam param3; // 0x64, max, max_length
    void* data_ptr; // 0x68
    UActorPropertyParam param4; // 0x6c, default, step
    char string1[20]; // 0x70, search_path
    char string2[100]; // 0x84, choices, extension
    void* callback; // 0xe8
} CActorProperty;

