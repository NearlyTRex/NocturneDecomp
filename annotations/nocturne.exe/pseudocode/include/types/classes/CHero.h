#pragma once

// Forward declarations
struct CBoxActor;
struct CDemonActor;
struct CDoor;
struct CLadder;
struct CLever;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CInventory.h"
#include "types/classes/CPathMap.h"
#include "types/classes/CVector3f.h"
#include "types/enums/EAimMode.h"
#include "types/enums/EHeroControlType.h"
#include "types/enums/EHeroTask.h"
#include "types/structs/SPlayerInput.h"
#include "types/unions/UOrientationVector.h"

// Structure: CHero
// Ghidra size: 0x1fa3c (129596 bytes)
#pragma pack(push, 1)
typedef struct CHero {
    CCharacter base; // 0x0
    float invincibility_timer; // 0xbc8c
    EHeroControlType control_type; // 0xbc90
    SPlayerInput player_input; // 0xbc94
    CPathMap path_map; // 0xbcc0
    EAimMode aim_mode; // 0x1f59c
    CInventory inventory; // 0x1f5a0
    int is_wearing_gas_mask; // 0x1fa00
    struct CDoor* door_to_open; // 0x1fa04
    struct CDemonActor* object_to_pick_up; // 0x1fa08
    struct CBoxActor* pushed_object; // 0x1fa0c
    struct CLever* lever_to_pull; // 0x1fa10
    struct CLadder* ladder_to_climb; // 0x1fa14
    struct CDemonActor* nearby_interactive_actor; // 0x1fa18
    struct CDemonActor* target_actor; // 0x1fa1c
    CVector3f target_position; // 0x1fa20
    UOrientationVector target_orientation; // 0x1fa2c
    EHeroTask ai_task; // 0x1fa38
} CHero;
#pragma pack(pop)

