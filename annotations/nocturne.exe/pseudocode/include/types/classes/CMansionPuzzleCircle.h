#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SGem.h"
#include "types/structs/SMRGLTextureLod.h"
#include "types/structs/SPanel.h"
#include "types/structs/SReflector.h"
#include "types/unions/UOrientationVector.h"
#include "types/unions/UVector3.h"

// Structure: CMansionPuzzleCircle
// Ghidra size: 0x1514 (5396 bytes)
#pragma pack(push, 1)
typedef struct CMansionPuzzleCircle {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance panel_model; // 0x158
    CKeyFramedModelInstance gem_model; // 0x2d4
    CKeyFramedModelInstance reflector_model; // 0x450
    CVector3f gem_pos; // 0x5cc
    UOrientationVector gem_orient; // 0x5d8
    UVector3 emitter_pos; // 0x5e4
    SPanel panels[12]; // 0x5f0
    SGem gems[12]; // 0xaa0
    SReflector reflectors[2]; // 0x1340
    int laser_color_r[12]; // 0x1400
    int laser_color_g[12]; // 0x1430
    int laser_color_b[12]; // 0x1460
    int laser_intensity[12]; // 0x1490
    SMRGLTextureLod light_texture; // 0x14c0
    float bbox_extent; // 0x1508
    float panel_radius; // 0x150c
    float bbox_height; // 0x1510
} CMansionPuzzleCircle;
#pragma pack(pop)

