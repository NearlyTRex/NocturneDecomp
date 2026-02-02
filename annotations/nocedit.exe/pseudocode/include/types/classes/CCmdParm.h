#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/enums/ECmdParmType.h"

// Structure: CCmdParm
// Ghidra size: 0x328 (808 bytes)
typedef struct CCmdParm {
    char prefix_text[100]; // 0x0
    char parsed_value[400]; // 0x64
    char template_name[100]; // 0x1f4
    ECmdParmType param_type; // 0x258
    char modifier_string[100]; // 0x25c
    char default_value[104]; // 0x2c0
} CCmdParm;

