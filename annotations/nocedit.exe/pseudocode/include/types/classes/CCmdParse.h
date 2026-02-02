#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCmdParm.h"

// Structure: CCmdParse
// Ghidra size: 0x2128 (8488 bytes)
typedef struct CCmdParse {
    char* template_text; // 0x0
    char cmd_name[100]; // 0x4
    char argument_text[100]; // 0x68
    int param_count; // 0xcc
    CCmdParm params[10]; // 0xd0
    char remaining_text[200]; // 0x2060
} CCmdParse;

