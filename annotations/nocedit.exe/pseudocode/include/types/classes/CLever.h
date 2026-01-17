#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CLever
// Ghidra size: 0x814 (2068 bytes)
typedef struct CLever {
    CDemonActor base_actor; // 0x0
    char* model_name; // 0x158
    char field_348[116]; // 0x15c
    char model_name_alt; // 0x1d0
    char field_465[263]; // 0x1d1
    int lever_type; // 0x2d8
    float param; // 0x2dc
    char* on_event; // 0x2e0
    char field_740[96]; // 0x2e4
    char* off_event; // 0x344
    char field_840[96]; // 0x348
    char* sound; // 0x3a8
    char field_940[96]; // 0x3ac
    int momentary_flag; // 0x40c
    int linked_lever; // 0x410
    undefined4 end_vertex_index; // 0x414
    undefined4 moving; // 0x418
    float move_to_pct; // 0x41c
    int rules; // 0x420
    char field_1060[1000]; // 0x424
    int allowed_sides; // 0x80c
    int enable_collision; // 0x810
} CLever;

