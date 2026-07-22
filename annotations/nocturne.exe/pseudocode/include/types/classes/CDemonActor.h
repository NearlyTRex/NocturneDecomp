#pragma once

// Forward declarations
struct CPlatform;

// Dependencies
#include "system/basetypes.h"
#include "system/stdint.h"
#include "types/classes/CDemonActorTransformState.h"
#include "types/classes/CLocation.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/enums/EActorLifecycleState.h"
#include "types/unions/UActorVTable.h"
#include "types/unions/UOrientationVector.h"

// Structure: CDemonActor
// Ghidra size: 0x158 (344 bytes)
#pragma pack(push, 1)
typedef struct CDemonActor {
    char actor_name[32]; // 0x0
    CLocation location; // 0x20
    UOrientationVector orient; // 0x30
    CMatrix3x3f orient_matrix; // 0x3c
    int runtime_state; // 0x60
    int health; // 0x64
    uintptr_t validation_magic; // 0x68
    int direction_hint; // 0x6c
    EActorLifecycleState lifecycle_state; // 0x70
    float create_prob; // 0x74
    char create_event[100]; // 0x78
    struct CPlatform* standing_platform; // 0xdc
    CVector3f platform_position_delta; // 0xe0
    CVector3f platform_orientation_delta; // 0xec
    int is_renderable; // 0xf8
    int is_transparent; // 0xfc
    int collision_disabled; // 0x100
    int process_disabled; // 0x104
    CVector3i scale; // 0x108
    int blood_effect_timer; // 0x114
    uint blood_effect_color; // 0x118
    char footstep_sound_code[4]; // 0x11c
    int dead1; // 0x120
    int dead2; // 0x124
    CDemonActorTransformState previous_transform_state; // 0x128
    int render_needs_update; // 0x144
    int is_editor_hidden; // 0x148
    struct CDemonActor* next_actor; // 0x14c
    struct CDemonActor* prev_actor; // 0x150
    UActorVTable vtable; // 0x154
} CDemonActor;
#pragma pack(pop)

