#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CFireEffect.h"
#include "types/classes/CPoly.h"
#include "types/classes/CSoundDevice.h"
#include "types/classes/CVector3d.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CWeapon.h"
#include "types/enums/EGroundType.h"

// =============================================================================
// MISC - System Header
// =============================================================================

// Forward declarations
struct CDemonActor;
struct CFireEffect;
struct CPoly;
struct CSoundDevice;
struct CVector3d;
struct CVector3f;
struct CWeapon;

// Function Definition: dt_11b7af31
typedef void dt_11b7af31(struct CPoly* param, struct CVector3d* param1);

// Function Definition: dt_486ab265
typedef void dt_486ab265(struct CFireEffect* this_ptr, struct CVector3f* origin, struct CVector3f* hit_position, float beam_width, float reticle_intensity, struct CVector3f* reflection_normal, int red, int green, int blue, float halo_spread);

// Function Definition: dt_536b4adf
typedef int dt_536b4adf(struct CSoundDevice* param);

// Function Definition: dt_7b31f90f
typedef struct CVector3f* dt_7b31f90f(struct CWeapon* param);

// Function Definition: dt_8b5e4c9e
typedef struct CVector3f* dt_8b5e4c9e(struct CWeapon* param);

// Function Definition: dt_b76712a0
typedef struct CVector3f* dt_b76712a0(struct CWeapon* param, struct CVector3f* param1);

// Function Definition: dt_d91e5264
typedef void dt_d91e5264(struct CSoundDevice* param);

// Function Definition: dt_eba4d65c
typedef void dt_eba4d65c(struct CDemonActor* param, struct CVector3f* param1, EGroundType param2);

