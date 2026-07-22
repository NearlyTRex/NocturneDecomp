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
// Ghidra size: 0x3678 (13944 bytes)
#pragma pack(push, 1)
typedef struct CLightActor {
    CBoxActor base; // 0x0
    ELightActorType light_actor_type; // 0x66c
    CDemonLight light; // 0x670
    CVector3f blight_pos; // 0x361c
    UOrientationVector light_orient; // 0x3628
    float flicker_timer; // 0x3634
    CDemonGlobe globe; // 0x3638
} CLightActor;
#pragma pack(pop)

