#pragma once

// Structure: CAnvil
// Ghidra size: 0x344 (836 bytes)
typedef struct CAnvil {
    CDemonActor base_actor; // 0x0
    char model_name[380]; // 0x158
    char drop_condition[100]; // 0x2d4
    float drop_height; // 0x338
    int triggered; // 0x33c
    float yvel; // 0x340
} CAnvil;

