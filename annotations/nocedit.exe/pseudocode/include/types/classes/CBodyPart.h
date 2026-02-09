#pragma once

// Forward declarations
struct CSimBox;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CBodyPart
// Ghidra size: 0xf30 (3888 bytes)
typedef struct CBodyPart {
    CDemonActor base; // 0x0
    int render_in_background; // 0x158
    char unk1[24]; // 0x15c
    int vertex_count; // 0x174
    int unk2; // 0x178
    int unk3; // 0x17c
    int tri_count; // 0x180
    char unk4[8]; // 0x184
    int texture_count; // 0x18c
    char unk5[2848]; // 0x190
    int dont_use_normals; // 0xcb0
    int transparent_geometry_flag; // 0xcb4
    int blood_type; // 0xcb8
    char unk6[8]; // 0xcbc
    int dont_pick_me_up; // 0xcc4
    int unk7; // 0xcc8
    struct CSimBox* sim_box; // 0xccc
    char unk8[600]; // 0xcd0
    struct CDemonActor* carried_by_actor; // 0xf28
    int unk9; // 0xf2c
} CBodyPart;

