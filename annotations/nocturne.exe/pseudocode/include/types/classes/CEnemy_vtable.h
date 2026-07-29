#pragma once

// Forward declarations
struct CEnemy;
struct CVector3f;

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CEnemy_getTargetPoint.h"
#include "types/funcdefs/CEnemy_updateVictim.h"

// Structure: CEnemy_vtable
// Ghidra size: 0x8 (8 bytes)
typedef struct CEnemy_vtable {
    CEnemy_getTargetPoint* getTargetPoint; // 0x0
    CEnemy_updateVictim* updateVictim; // 0x4
} CEnemy_vtable;

