#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBoxActor.h"
#include "types/classes/CVector3f.h"
#include "types/enums/ELightActorType.h"
#include "types/unions/UOrientationVector.h"

// Structure: CLightActor
// Ghidra size: 0x3678 (13944 bytes)
typedef struct CLightActor {
    CBoxActor base; // 0x0
    ELightActorType light_actor_type; // 0x66c
    char unk1[56]; // 0x670
    float light_fov; // 0x6a8
    char unk2[260]; // 0x6ac
    float light_falloff; // 0x7b0
    char unk3[7024]; // 0x7b4
    int light_status; // 0x2324
    char unk4[4852]; // 0x2328
    CVector3f blight_pos; // 0x361c
    UOrientationVector light_orient; // 0x3628
    char unk5[68]; // 0x3634
} CLightActor;

