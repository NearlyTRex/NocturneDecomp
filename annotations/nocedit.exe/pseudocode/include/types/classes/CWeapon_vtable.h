#pragma once

// Forward declarations
struct CVector3f;
struct CWeapon;

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CWeapon_fire.h"
#include "types/funcdefs/CWeapon_fireProjectile.h"
#include "types/funcdefs/CWeapon_getDamage.h"
#include "types/funcdefs/CWeapon_getMuzzlePoint.h"
#include "types/funcdefs/CWeapon_isReadyToFire.h"
#include "types/funcdefs/CWeapon_onFired.h"
#include "types/funcdefs/CWeapon_setWeaponState.h"
#include "types/funcdefs/CWeapon_updateLighting.h"

// Structure: CWeapon_vtable
// Ghidra size: 0x20 (32 bytes)
typedef struct CWeapon_vtable {
    CWeapon_onFired* onFired; // 0x0
    CWeapon_setWeaponState* setWeaponState; // 0x4
    CWeapon_getMuzzlePoint* getMuzzlePoint; // 0x8
    CWeapon_fire* fire; // 0xc
    CWeapon_isReadyToFire* isReadyToFire; // 0x10
    CWeapon_getDamage* getDamage; // 0x14
    CWeapon_fireProjectile* fireProjectile; // 0x18
    CWeapon_updateLighting* updateLighting; // 0x1c
} CWeapon_vtable;

