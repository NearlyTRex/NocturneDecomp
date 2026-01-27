#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CLever
// Ghidra size: 0x814 (2068 bytes)
typedef struct CLever {
    CDemonActor base; // 0x0
    char* model_name; // 0x158
    char unk1[116]; // 0x15c
    char model_name_alt; // 0x1d0
    char unk2[263]; // 0x1d1
    int lever_type; // 0x2d8
    float param; // 0x2dc
    char* on_event; // 0x2e0
    char unk3[96]; // 0x2e4
    char* off_event; // 0x344
    char unk4[96]; // 0x348
    char* sound; // 0x3a8
    char unk5[96]; // 0x3ac
    int momentary_flag; // 0x40c
    int linked_lever; // 0x410
    undefined4 end_vertex_index; // 0x414
    undefined4 moving; // 0x418
    float move_to_pct; // 0x41c
    int rules; // 0x420
    char unk6[1000]; // 0x424
    int allowed_sides; // 0x80c
    int enable_collision; // 0x810
} CLever;

