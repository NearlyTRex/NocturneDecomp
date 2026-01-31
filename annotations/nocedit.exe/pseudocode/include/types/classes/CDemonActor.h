#pragma once

// Forward declarations
struct CPlatform;

// Dependencies
#include "system/basetypes.h"
#include "system/stdint.h"
#include "types/classes/CDemonActorTransformState.h"
#include "types/classes/CLocation.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/COrientation.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/unions/CDemonActor_union_vtable.h"

// Structure: CDemonActor
// Ghidra size: 0x158 (344 bytes)
typedef struct CDemonActor {
    char actor_name[32]; // 0x0
    CLocation location; // 0x20
    COrientation orient; // 0x30
    CMatrix3x3f orient_matrix; // 0x3c
    int runtime_state; // 0x60
    int health; // 0x64
    uintptr_t validation_magic; // 0x68
    int unk1; // 0x6c
    int was_created; // 0x70
    float create_prob; // 0x74
    char create_event[100]; // 0x78
    struct CPlatform* standing_platform; // 0xdc
    CVector3f unk3; // 0xe0
    CVector3f unk4; // 0xec
    int is_renderable; // 0xf8
    int is_transparent; // 0xfc
    int unk6; // 0x100
    float unk7; // 0x104
    CVector3i scale; // 0x108
    int blood_effect_timer; // 0x114
    int unk9; // 0x118
    char footstep_sound_code[4]; // 0x11c
    int unk11; // 0x120
    int unk12; // 0x124
    CDemonActorTransformState previous_transform_state; // 0x128
    int unk13; // 0x144
    int unk14; // 0x148
    struct CDemonActor* next_actor; // 0x14c
    struct CDemonActor* prev_actor; // 0x150
    CDemonActor_union_vtable vtable; // 0x154
} CDemonActor;

