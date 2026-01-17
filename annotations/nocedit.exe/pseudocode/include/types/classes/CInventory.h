#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CAmmo.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorTransformState.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonActor_vtable.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CLightGun.h"
#include "types/classes/CLocation.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/COrientation.h"
#include "types/classes/CPathMap.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/classes/CWeapon.h"
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

// Structure: CInventory
// Ghidra size: 0x460 (1120 bytes)
typedef struct CInventory {
    float battery_charge; // 0x0
    struct CDemonActor* owner; // 0x4
    int item_count; // 0x8
    struct CDemonActor* items[100]; // 0xc
    float item_angles[100]; // 0x19c
    int save_version; // 0x32c
    struct CWeapon* selected_weapon; // 0x330
    struct CDemonActor* selected_item; // 0x334
    float weapon_highlight_timer; // 0x338
    float item_highlight_timer; // 0x33c
    float inventory_display_timer; // 0x340
    float message_display_timer; // 0x344
    float ammo_detail_timer; // 0x348
    char message_text[256]; // 0x34c
    int render_mode_flag; // 0x44c
    int preserve_items; // 0x450
    struct CLightGun* light_gun_ptr; // 0x454
    struct CAmmo* ammo_ptr; // 0x458
    int cached_ammo_count; // 0x45c
} CInventory;

