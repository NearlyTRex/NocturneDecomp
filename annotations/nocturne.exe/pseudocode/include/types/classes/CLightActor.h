#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBoxActor.h"
#include "types/classes/CDemonGlobe.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CVector3f.h"
#include "types/enums/ELightActorType.h"
#include "types/unions/UOrientationVector.h"

// Structure: CLightActor
// Ghidra size: 0x3670 (13936 bytes)
#pragma pack(push, 1)
typedef struct CLightActor {
    CBoxActor base; // 0x0
    ELightActorType light_actor_type; // 0x664
    CDemonLight light; // 0x668
    CVector3f blight_pos; // 0x3614
    UOrientationVector light_orient; // 0x3620
    float flicker_timer; // 0x362c
    CDemonGlobe globe; // 0x3630
} CLightActor;
#pragma pack(pop)

