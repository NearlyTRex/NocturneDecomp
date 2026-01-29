#pragma once

// Forward declarations
struct CActorPropertyList;
struct CBoundingBox3D;
struct CDemonActor;
struct CDemonActorType;
struct COrientation;
struct CPathMap;
struct CVector3f;
struct SCollisionInfo;
struct SCollisionReturnInfo;
struct SDamageInfo;
struct SInteractionInfo;
struct SInteractionState;
struct SIntersectXZCylinder;
struct SSurfaceInfo;
struct _FILE;

// Dependencies
#include "system/basetypes.h"
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
#include "types/funcdefs/CDemonActor_processFootstepAt.h"
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

// Structure: CDemonActor_vtable
// Ghidra size: 0xec (236 bytes)
typedef struct CDemonActor_vtable {
    CDemonActor_setup* setup; // 0x0
    CDemonActor_process* process; // 0x4
    CDemonActor_renderOpaque* renderOpaque; // 0x8
    CDemonActor_renderTransparent* renderTransparent; // 0xc
    CDemonActor_renderBackground* renderBackground; // 0x10
    CDemonActor_getBoundingBox* getBoundingBox; // 0x14
    CDemonActor_processFootstep* processFootstep; // 0x18
    CDemonActor_processFootstepAt* processFootstepAtOffset; // 0x1c
    CDemonActor_handleFootstep* handleFootstep; // 0x20
    CDemonActor_playSound* playSound; // 0x24
    CDemonActor_playAmbientSound* playAmbientSound; // 0x28
    CDemonActor_playSoundWithVolume* playSoundWithVolume; // 0x2c
    CDemonActor_playAmbientSoundWithVolume* playAmbientSoundWithVolume; // 0x30
    CDemonActor_hasCollision* hasCollision; // 0x34
    CDemonActor_cylinderGroundCheck* cylinderGroundCheck; // 0x38
    CDemonActor_getGroundType* getGroundType; // 0x3c
    CDemonActor_getBlockVirtualDirectorFlag* getBlockVirtualDirectorFlag; // 0x40
    CDemonActor_allowBulletHoles* allowBulletHoles; // 0x44
    CDemonActor_updateCollisionData* updateCollisionData; // 0x48
    CDemonActor_getTargetPoints* getTargetPoints; // 0x4c
    CDemonActor_renderTargetPoints* renderTargetPoints; // 0x50
    CDemonActor_isActiveTarget* isActiveTarget; // 0x54
    CDemonActor_evaluateTriggerCondition* evaluateTriggerCondition; // 0x58
    CDemonActor_processActionButton* processActionButton; // 0x5c
    CDemonActor_setPositionAndOrientation* setPositionAndOrientation; // 0x60
    CDemonActor_onPickup* onPickup; // 0x64
    CDemonActor_shouldIgnoreForTargeting* shouldIgnoreForTargeting; // 0x68
    CDemonActor_getAllowedMeleeAttackTypes* getAllowedMeleeAttackTypes; // 0x6c
    CDemonActor_processMeleeHit* processMeleeHit; // 0x70
    CDemonActor_fillAttackDamageInfo* fillAttackDamageInfo; // 0x74
    CDemonActor_playAttackHitEffects* playAttackHitEffects; // 0x78
    CDemonActor_canPickup* canPickup; // 0x7c
    CDemonActor_pickup* pickup; // 0x80
    CDemonActor_onDropped* onDropped; // 0x84
    CDemonActor_drop* drop; // 0x88
    CDemonActor_getCarrier* getCarrier; // 0x8c
    CDemonActor_getInteractionInfo* getInteractionInfo; // 0x90
    CDemonActor_startInteraction* startInteraction; // 0x94
    CDemonActor_updateInteraction* updateInteraction; // 0x98
    CDemonActor_stopInteraction* stopInteraction; // 0x9c
    CDemonActor_spawnFlies* spawnFlies; // 0xa0
    CDemonActor_testCylinderCollision* testCylinderCollision; // 0xa4
    CDemonActor_testLineIntersection* testLineIntersection; // 0xa8
    CDemonActor_getSurfaceProperties* getSurfaceProperties; // 0xac
    CDemonActor_customRayIntersect* customRayIntersect; // 0xb0
    CDemonActor_customIntersectCylinderXZ* customIntersectCylinderXZ; // 0xb4
    CDemonActor_customGetFloorHeight* customGetFloorHeight; // 0xb8
    CDemonActor_getPathMap* getPathMap; // 0xbc
    CDemonActor_calculateChecksum* calculateChecksum; // 0xc0
    CDemonActor_getActorType* getActorType; // 0xc4
    CDemonActor_onAreaDeleted* onAreaDeleted; // 0xc8
    CDemonActor_onActorDeleted* onActorDeleted; // 0xcc
    CDemonActor_processInEditor* processInEditor; // 0xd0
    CDemonActor_getPropertyList* getPropertyList; // 0xd4
    CDemonActor_initializeInEditor* initializeInEditor; // 0xd8
    CDemonActor_showEditorHelp* showEditorHelp; // 0xdc
    CDemonActor_writeDependencies* writeDependencies; // 0xe0
    CDemonActor_dtor* dtor; // 0xe4
    CDemonActor_serialize* serialize; // 0xe8
} CDemonActor_vtable;

