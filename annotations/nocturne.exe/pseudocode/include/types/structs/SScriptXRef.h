#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"

// Structure: SScriptXRef
// Ghidra size: 0x114 (276 bytes)
#pragma pack(push, 1)
typedef struct SScriptXRef {
    char name[256]; // 0x0
    int type; // 0x100, (0=event tested, 1=event raised, 2=persistent, 3=game flag, 4=timer, 5/6=counter, 7=actor ref, 8=sfx set, 9=sfx ref, 10=actor var set, 11=actor var ref, 12=ini var)
    struct CDemonActor* actor; // 0x104
    int property_index; // 0x108
    int line_number; // 0x10c
    int display_index; // 0x110
} SScriptXRef;
#pragma pack(pop)

