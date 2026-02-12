#pragma once

// Forward declarations
struct CBodyPart;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CQuaternion4f.h"
#include "types/classes/CVector3f.h"

// Structure: SBoneGuyBox
// Ghidra size: 0x48 (72 bytes)
typedef struct SBoneGuyBox {
    CVector3f pos; // 0x0
    CVector3f orient; // 0xc
    CQuaternion4f dest_orient; // 0x18
    CQuaternion4f start_orient; // 0x28
    CVector3f source_pos; // 0x38
    struct CBodyPart* body_part; // 0x44
} SBoneGuyBox;

