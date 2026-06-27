#pragma once

// Forward declarations
struct CCharacter;
struct CDemonActor;
struct CDoor;
struct CMatrix3x4f;
struct CVector3f;
struct SDamageInfo;

// Dependencies
#include "system/basetypes.h"
#include "types/enums/EDeathState.h"
#include "types/funcdefs/CCharacter_applyDamage.h"
#include "types/funcdefs/CCharacter_attractActorToward.h"
#include "types/funcdefs/CCharacter_canBeAttracted.h"
#include "types/funcdefs/CCharacter_canBeGrabbed.h"
#include "types/funcdefs/CCharacter_canWalk.h"
#include "types/funcdefs/CCharacter_checkCylinderCollisionWorld.h"
#include "types/funcdefs/CCharacter_clearDoorTarget.h"
#include "types/funcdefs/CCharacter_dropCarriedObject.h"
#include "types/funcdefs/CCharacter_getCarryObjToBodyXForm.h"
#include "types/funcdefs/CCharacter_getDeathState.h"
#include "types/funcdefs/CCharacter_getGrabbed.h"
#include "types/funcdefs/CCharacter_getGrabber.h"
#include "types/funcdefs/CCharacter_getPartDominantBone.h"
#include "types/funcdefs/CCharacter_hasDoorTarget.h"
#include "types/funcdefs/CCharacter_isGrabbable.h"
#include "types/funcdefs/CCharacter_isWalkComplete.h"
#include "types/funcdefs/CCharacter_kill.h"
#include "types/funcdefs/CCharacter_onVictimLost.h"
#include "types/funcdefs/CCharacter_processDamage.h"
#include "types/funcdefs/CCharacter_releaseFromGrab.h"
#include "types/funcdefs/CCharacter_releaseVictim.h"
#include "types/funcdefs/CCharacter_setDoorTarget.h"
#include "types/funcdefs/CCharacter_setWalkTarget.h"
#include "types/funcdefs/CCharacter_setWalkTargetImmediate.h"
#include "types/funcdefs/CCharacter_setWalkTimeout.h"
#include "types/funcdefs/CCharacter_testDamageLine.h"

// Structure: CCharacter_vtable
// Ghidra size: 0x68 (104 bytes)
typedef struct CCharacter_vtable {
    CCharacter_applyDamage* applyDamage; // 0x0
    CCharacter_kill* kill; // 0x4
    CCharacter_canWalk* canWalk; // 0x8
    CCharacter_isGrabbable* isGrabbable; // 0xc
    CCharacter_canBeGrabbed* canBeGrabbed; // 0x10
    CCharacter_getGrabbed* getGrabbed; // 0x14
    CCharacter_releaseFromGrab* releaseFromGrab; // 0x18
    CCharacter_getGrabber* getGrabber; // 0x1c
    CCharacter_releaseVictim* releaseVictim; // 0x20
    CCharacter_onVictimLost* onVictimLost; // 0x24
    CCharacter_checkCylinderCollisionWorld* checkCylinderCollisionWorld; // 0x28
    CCharacter_testDamageLine* testDamageLine; // 0x2c
    CCharacter_processDamage* processDamage; // 0x30
    CCharacter_getDeathState* getDeathState; // 0x34, 0=alive,1=dying,2=dead
    CCharacter_attractActorToward* attractActorToward; // 0x38
    CCharacter_canBeAttracted* canBeAttracted; // 0x3c
    CCharacter_getPartDominantBone* getPartDominantBone; // 0x40
    CCharacter_setDoorTarget* setDoorTarget; // 0x44
    CCharacter_clearDoorTarget* clearDoorTarget; // 0x48
    CCharacter_hasDoorTarget* hasDoorTarget; // 0x4c
    CCharacter_dropCarriedObject* dropCarriedObject; // 0x50
    CCharacter_getCarryObjToBodyXForm* getCarryObjToBodyXForm; // 0x54
    CCharacter_setWalkTarget* setWalkTarget; // 0x58
    CCharacter_setWalkTargetImmediate* setWalkTargetImmediate; // 0x5c
    CCharacter_setWalkTimeout* setWalkTimeout; // 0x60
    CCharacter_isWalkComplete* isWalkComplete; // 0x64
} CCharacter_vtable;

