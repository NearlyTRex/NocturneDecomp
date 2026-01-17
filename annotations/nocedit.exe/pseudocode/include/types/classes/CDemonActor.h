#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDemonActorTransformState.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonActor_vtable.h"
#include "types/classes/CLocation.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/COrientation.h"
#include "types/classes/CPathMap.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/funcdefs/CDemonActor_allowBulletHoles.h"
#include "types/funcdefs/CDemonActor_calculateChecksum.h"
#include "types/funcdefs/CDemonActor_canPickup.h"
#include "types/funcdefs/CDemonActor_customGetFloorHeight.h"
#include "types/funcdefs/CDemonActor_customIntersectCylinderXZ.h"
#include "types/funcdefs/CDemonActor_customRayIntersect.h"
#include "types/funcdefs/CDemonActor_cylinderGroundCheck.h"
#include "types/funcdefs/CDemonActor_drop.h"
#include "types/funcdefs/CDemonActor_dtor.h"
#include "types/funcdefs/CDemonActor_evaluateTriggerCondition.h"
#include "types/funcdefs/CDemonActor_fillAttackDamageInfo.h"
#include "types/funcdefs/CDemonActor_getActorType.h"
#include "types/funcdefs/CDemonActor_getAllowedMeleeAttackTypes.h"
#include "types/funcdefs/CDemonActor_getBlockVirtualDirectorFlag.h"
#include "types/funcdefs/CDemonActor_getBoundingBox.h"
#include "types/funcdefs/CDemonActor_getCarrier.h"
#include "types/funcdefs/CDemonActor_getGroundType.h"
#include "types/funcdefs/CDemonActor_getInteractionInfo.h"
#include "types/funcdefs/CDemonActor_getPathMap.h"
#include "types/funcdefs/CDemonActor_getPropertyList.h"
#include "types/funcdefs/CDemonActor_getSurfaceProperties.h"
#include "types/funcdefs/CDemonActor_getTargetPoints.h"
#include "types/funcdefs/CDemonActor_handleFootstep.h"
#include "types/funcdefs/CDemonActor_hasCollision.h"
#include "types/funcdefs/CDemonActor_initializeInEditor.h"
#include "types/funcdefs/CDemonActor_isActiveTarget.h"
#include "types/funcdefs/CDemonActor_onActorDeleted.h"
#include "types/funcdefs/CDemonActor_onAreaDeleted.h"
#include "types/funcdefs/CDemonActor_onDropped.h"
#include "types/funcdefs/CDemonActor_onPickup.h"
#include "types/funcdefs/CDemonActor_pickup.h"
#include "types/funcdefs/CDemonActor_playAmbientSound.h"
#include "types/funcdefs/CDemonActor_playAmbientSoundWithVolume.h"
#include "types/funcdefs/CDemonActor_playAttackHitEffects.h"
#include "types/funcdefs/CDemonActor_playSound.h"
#include "types/funcdefs/CDemonActor_playSoundWithVolume.h"
#include "types/funcdefs/CDemonActor_process.h"
#include "types/funcdefs/CDemonActor_processActionButton.h"
#include "types/funcdefs/CDemonActor_processFootstep.h"
#include "types/funcdefs/CDemonActor_processFootstepAtOffset.h"
#include "types/funcdefs/CDemonActor_processInEditor.h"
#include "types/funcdefs/CDemonActor_processMeleeHit.h"
#include "types/funcdefs/CDemonActor_renderBackground.h"
#include "types/funcdefs/CDemonActor_renderOpaque.h"
#include "types/funcdefs/CDemonActor_renderTargetPoints.h"
#include "types/funcdefs/CDemonActor_renderTransparent.h"
#include "types/funcdefs/CDemonActor_serialize.h"
#include "types/funcdefs/CDemonActor_setPositionAndOrientation.h"
#include "types/funcdefs/CDemonActor_setup.h"
#include "types/funcdefs/CDemonActor_shouldIgnoreForTargeting.h"
#include "types/funcdefs/CDemonActor_showEditorHelp.h"
#include "types/funcdefs/CDemonActor_spawnFlies.h"
#include "types/funcdefs/CDemonActor_startInteraction.h"
#include "types/funcdefs/CDemonActor_stopInteraction.h"
#include "types/funcdefs/CDemonActor_testCylinderCollision.h"
#include "types/funcdefs/CDemonActor_testLineIntersection.h"
#include "types/funcdefs/CDemonActor_updateCollisionData.h"
#include "types/funcdefs/CDemonActor_updateInteraction.h"
#include "types/funcdefs/CDemonActor_writeDependencies.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SCollisionReturnInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SInteractionInfo.h"
#include "types/structs/SInteractionState.h"
#include "types/structs/SIntersectXZCylinder.h"
#include "types/structs/SSurfaceInfo.h"

// Structure: CDemonActor
// Ghidra size: 0x158 (344 bytes)
typedef struct CDemonActor {
    char actor_name[32]; // 0x0
    CLocation location; // 0x20
    COrientation orient; // 0x30
    CMatrix3x3f orient_matrix; // 0x3c
    int runtime_state; // 0x60
    int health; // 0x64
    int field_104; // 0x68
    int field_108; // 0x6c
    int was_created; // 0x70
    float create_prob; // 0x74
    char create_event[100]; // 0x78
    int field_220; // 0xdc
    CVector3f field_224; // 0xe0
    CVector3f field_236; // 0xec
    int field_248; // 0xf8
    int is_transparent; // 0xfc
    int field_256; // 0x100
    int field_260; // 0x104
    CVector3i scale; // 0x108
    int field_276; // 0x114
    int field_280; // 0x118
    int field_284; // 0x11c
    int field_288; // 0x120
    int field_292; // 0x124
    CDemonActorTransformState previous_transform_state; // 0x128
    int field_324; // 0x144
    int field_328; // 0x148
    struct CDemonActor* next_actor; // 0x14c
    int field_336; // 0x150
    struct CDemonActor_vtable* vtable; // 0x154
} CDemonActor;

