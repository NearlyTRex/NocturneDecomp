#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/COrientation.h"
#include "types/classes/CVector3f.h"

// Structure: CMansionPuzzleCircle
// Ghidra size: 0x1514 (5396 bytes)
typedef struct CMansionPuzzleCircle {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance panel_model; // 0x158
    CKeyFramedModelInstance gem_model; // 0x2d4
    CKeyFramedModelInstance model3; // 0x450
    CVector3f gem_pos; // 0x5cc
    COrientation gem_orient; // 0x5d8
    CVector3f emitter_pos; // 0x5e4
    int exists; // 0x5f0
    char unk2[72]; // 0x5f4
    int red; // 0x63c
    int green; // 0x640
    int blue; // 0x644
    char unk3[3788]; // 0x648
} CMansionPuzzleCircle;

