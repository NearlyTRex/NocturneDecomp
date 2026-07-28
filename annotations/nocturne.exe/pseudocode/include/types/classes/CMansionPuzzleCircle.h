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
// Ghidra size: 0x150c (5388 bytes)
#pragma pack(push, 1)
typedef struct CMansionPuzzleCircle {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance panel_model; // 0x150
    CKeyFramedModelInstance gem_model; // 0x2cc
    CKeyFramedModelInstance reflector_model; // 0x448
    CVector3f gem_pos; // 0x5c4
    UOrientationVector gem_orient; // 0x5d0
    UVector3 emitter_pos; // 0x5dc
    SPanel panels[12]; // 0x5e8
    SGem gems[12]; // 0xa98
    SReflector reflectors[2]; // 0x1338
    int laser_color_r[12]; // 0x13f8
    int laser_color_g[12]; // 0x1428
    int laser_color_b[12]; // 0x1458
    int laser_intensity[12]; // 0x1488
    SMRGLTextureLod light_texture; // 0x14b8
    float bbox_extent; // 0x1500
    float panel_radius; // 0x1504
    float bbox_height; // 0x1508
} CMansionPuzzleCircle;
#pragma pack(pop)

