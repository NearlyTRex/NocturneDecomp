#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActor.h"
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
#include "types/structs/SCarryHand.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SCollisionReturnInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SInteractionInfo.h"
#include "types/structs/SInteractionState.h"
#include "types/structs/SIntersectXZCylinder.h"
#include "types/structs/SSurfaceInfo.h"

// Structure: CCharacter
// Ghidra size: 0xbe24 (48676 bytes)
typedef struct CCharacter {
    CDemonActor base_actor; // 0x0
    CDeformableModelInstance model; // 0x158
    char field_9228[48]; // 0x240c
    float hit_points; // 0x243c
    float max_hit_points; // 0x2440
    int health_bar_mode; // 0x2444
    char descriptive_name[100]; // 0x2448
    SCarryHand carry_hands[2]; // 0x24ac
    char talk_to_me_event[100]; // 0x2534
    struct CDemonActor* grabbed_by; // 0x2598
    int grabbed_type; // 0x259c
    char field_9632[124]; // 0x25a0
    float size_scale; // 0x261c
    char field_9760[1140]; // 0x2620
    int cloth_count; // 0x2a94
    char cloth_data[37772]; // 0x2a98
} CCharacter;

