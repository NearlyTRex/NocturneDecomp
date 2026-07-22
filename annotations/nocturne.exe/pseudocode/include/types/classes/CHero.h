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
// Ghidra size: 0x1fbd4 (130004 bytes)
#pragma pack(push, 1)
typedef struct CHero {
    CCharacter base; // 0x0
    float invincibility_timer; // 0xbe24
    EHeroControlType control_type; // 0xbe28
    SPlayerInput player_input; // 0xbe2c
    CPathMap path_map; // 0xbe58
    EAimMode aim_mode; // 0x1f734
    CInventory inventory; // 0x1f738
    int is_wearing_gas_mask; // 0x1fb98
    struct CDoor* door_to_open; // 0x1fb9c
    struct CDemonActor* object_to_pick_up; // 0x1fba0
    struct CBoxActor* pushed_object; // 0x1fba4
    struct CLever* lever_to_pull; // 0x1fba8
    struct CLadder* ladder_to_climb; // 0x1fbac
    struct CDemonActor* nearby_interactive_actor; // 0x1fbb0
    struct CDemonActor* target_actor; // 0x1fbb4
    CVector3f target_position; // 0x1fbb8
    UOrientationVector target_orientation; // 0x1fbc4
    EHeroTask ai_task; // 0x1fbd0
} CHero;
#pragma pack(pop)

