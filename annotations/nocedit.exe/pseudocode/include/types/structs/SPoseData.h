#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CQuaternion4f.h"
#include "types/classes/CVector3f.h"

// Structure: SPoseData
// Ghidra size: 0x64c (1612 bytes)
typedef struct SPoseData {
    CVector3f root_position; // 0x0
    CQuaternion4f bone_rotations[100]; // 0xc
} SPoseData;

