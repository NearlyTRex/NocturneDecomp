#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBoxActor.h"
#include "types/enums/ELightActorType.h"

// Structure: CLightActor
// Ghidra size: 0x3678 (13944 bytes)
typedef struct CLightActor {
    CBoxActor base; // 0x0
    ELightActorType light_actor_type; // 0x66c
    undefined1 unk[12296]; // 0x670
} CLightActor;

