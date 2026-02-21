#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x660000
// =============================================================================

// CCharacter_vtable
CCharacter_vtable DAT_00660120 = {
    .applyDamage = (CCharacter_applyDamage *)core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0,
    .kill = (CCharacter_kill *)core_hero_cpp_CHero_kill_FUN_004f3af0,
    .canWalk = (CCharacter_canWalk *)core_hero_cpp_CHero_canWalk_FUN_004f28a0,
    .isGrabbable = (CCharacter_isGrabbable *)core_hero_cpp_CHero_isGrabbable_FUN_004f2880,
    .canBeGrabbed = (CCharacter_canBeGrabbed *)core_hero_cpp_CHero_canBeGrabbed_FUN_004f2890,
    .getGrabbed = (CCharacter_getGrabbed *)core_hero_cpp_CHero_getGrabbed_FUN_004f28d0,
    .releaseFromGrab = (CCharacter_releaseFromGrab *)core_hero_cpp_CHero_releaseFromGrab_FUN_004f29b0,
    .getGrabber = (CCharacter_getGrabber *)core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80,
    .releaseVictim = (CCharacter_releaseVictim *)core_charactr_cpp_CCharacter_releaseVictim_FUN_0042bf70,
    .onVictimLost = (CCharacter_onVictimLost *)core_charactr_cpp_CCharacter_releaseVictim_FUN_0042bf70,
    .checkCylinderCollisionWorld = (CCharacter_checkCylinderCollisionWorld *)core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110,
    .testDamageLine = (CCharacter_testDamageLine *)core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180,
    .processDamage = (CCharacter_processDamage *)core_icepick_cpp_CIcePick_processDamage_FUN_004f95b0,
    .getDeathState = (CCharacter_isDeathState *)core_charactr_cpp_CCharacter_getDeathState_FUN_0042c580,
    .attractActorToward = (CCharacter_attractActorToward *)core_charactr_cpp_CCharacter_attractActorToward_FUN_0042c010,
    .canBeAttracted = (CCharacter_canBeAttracted *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getPartDominantBone = (CCharacter_getPartDominantBone *)core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0,
    .setDoorTarget = (CCharacter_setDoorTarget *)core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50,
    .clearDoorTarget = (CCharacter_clearDoorTarget *)core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60,
    .hasDoorTarget = (CCharacter_hasDoorTarget *)core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90,
    .dropCarriedObject = (CCharacter_dropCarriedObject *)core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0,
    .getCarryObjToBodyXForm = (CCharacter_getCarryObjToBodyXForm *)core_icepick_cpp_CIcePick_getCarryObjToBodyXForm_FUN_004f8b20,
    .setWalkTarget = (CCharacter_setWalkTarget *)core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920,
    .setWalkTargetImmediate = (CCharacter_setWalkTargetImmediate *)core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0,
    .setWalkTimeout = (CCharacter_setWalkTimeout *)core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20,
    .isWalkComplete = (CCharacter_isWalkComplete *)core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30
};
CCharacter_vtable DAT_006602E0 = {
    .applyDamage = (CCharacter_applyDamage *)core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0,
    .kill = (CCharacter_kill *)core_charactr_cpp_CCharacter_kill_FUN_00428e30,
    .canWalk = (CCharacter_canWalk *)core_charactr_cpp_CCharacter_canWalk_FUN_0042ca60,
    .isGrabbable = (CCharacter_isGrabbable *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .canBeGrabbed = (CCharacter_canBeGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getGrabbed = (CCharacter_getGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .releaseFromGrab = (CCharacter_releaseFromGrab *)core_charactr_cpp_CCharacter_releaseFromGrab_FUN_0042bf40,
    .getGrabber = (CCharacter_getGrabber *)core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80,
    .releaseVictim = (CCharacter_releaseVictim *)core_enemy_cpp_CEnemy_releaseVictim_FUN_004aa030,
    .onVictimLost = (CCharacter_onVictimLost *)core_enemy_cpp_CEnemy_onVictimLost_FUN_004aa0c0,
    .checkCylinderCollisionWorld = (CCharacter_checkCylinderCollisionWorld *)core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110,
    .testDamageLine = (CCharacter_testDamageLine *)core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180,
    .processDamage = (CCharacter_processDamage *)core_imp_cpp_CImp_processDamage_FUN_004fae00,
    .getDeathState = (CCharacter_isDeathState *)core_charactr_cpp_CCharacter_getDeathState_FUN_0042c580,
    .attractActorToward = (CCharacter_attractActorToward *)core_imp_cpp_CImp_attractActorToward_FUN_004faaf0,
    .canBeAttracted = (CCharacter_canBeAttracted *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getPartDominantBone = (CCharacter_getPartDominantBone *)core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0,
    .setDoorTarget = (CCharacter_setDoorTarget *)core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50,
    .clearDoorTarget = (CCharacter_clearDoorTarget *)core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60,
    .hasDoorTarget = (CCharacter_hasDoorTarget *)core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90,
    .dropCarriedObject = (CCharacter_dropCarriedObject *)core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0,
    .getCarryObjToBodyXForm = (CCharacter_getCarryObjToBodyXForm *)core_imp_cpp_CImp_getCarryObjToBodyXForm_FUN_004fa920,
    .setWalkTarget = (CCharacter_setWalkTarget *)core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920,
    .setWalkTargetImmediate = (CCharacter_setWalkTargetImmediate *)core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0,
    .setWalkTimeout = (CCharacter_setWalkTimeout *)core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20,
    .isWalkComplete = (CCharacter_isWalkComplete *)core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30
};
CCharacter_vtable DAT_00660820 = {
    .applyDamage = (CCharacter_applyDamage *)core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0,
    .kill = (CCharacter_kill *)core_charactr_cpp_CCharacter_kill_FUN_00428e30,
    .canWalk = (CCharacter_canWalk *)core_charactr_cpp_CCharacter_canWalk_FUN_0042ca60,
    .isGrabbable = (CCharacter_isGrabbable *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .canBeGrabbed = (CCharacter_canBeGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getGrabbed = (CCharacter_getGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .releaseFromGrab = (CCharacter_releaseFromGrab *)core_charactr_cpp_CCharacter_releaseFromGrab_FUN_0042bf40,
    .getGrabber = (CCharacter_getGrabber *)core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80,
    .releaseVictim = (CCharacter_releaseVictim *)core_enemy_cpp_CEnemy_releaseVictim_FUN_004aa030,
    .onVictimLost = (CCharacter_onVictimLost *)core_enemy_cpp_CEnemy_onVictimLost_FUN_004aa0c0,
    .checkCylinderCollisionWorld = (CCharacter_checkCylinderCollisionWorld *)core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110,
    .testDamageLine = (CCharacter_testDamageLine *)core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180,
    .processDamage = (CCharacter_processDamage *)core_larva_cpp_CLarva_processDamage_FUN_00503a20,
    .getDeathState = (CCharacter_isDeathState *)core_charactr_cpp_CCharacter_getDeathState_FUN_0042c580,
    .attractActorToward = (CCharacter_attractActorToward *)core_charactr_cpp_CCharacter_attractActorToward_FUN_0042c010,
    .canBeAttracted = (CCharacter_canBeAttracted *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getPartDominantBone = (CCharacter_getPartDominantBone *)core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0,
    .setDoorTarget = (CCharacter_setDoorTarget *)core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50,
    .clearDoorTarget = (CCharacter_clearDoorTarget *)core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60,
    .hasDoorTarget = (CCharacter_hasDoorTarget *)core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90,
    .dropCarriedObject = (CCharacter_dropCarriedObject *)core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0,
    .getCarryObjToBodyXForm = (CCharacter_getCarryObjToBodyXForm *)core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300,
    .setWalkTarget = (CCharacter_setWalkTarget *)core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920,
    .setWalkTargetImmediate = (CCharacter_setWalkTargetImmediate *)core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0,
    .setWalkTimeout = (CCharacter_setWalkTimeout *)core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20,
    .isWalkComplete = (CCharacter_isWalkComplete *)core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30
};
CCharacter_vtable DAT_00661510 = {
    .applyDamage = (CCharacter_applyDamage *)core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0,
    .kill = (CCharacter_kill *)core_charactr_cpp_CCharacter_kill_FUN_00428e30,
    .canWalk = (CCharacter_canWalk *)core_charactr_cpp_CCharacter_canWalk_FUN_0042ca60,
    .isGrabbable = (CCharacter_isGrabbable *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .canBeGrabbed = (CCharacter_canBeGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getGrabbed = (CCharacter_getGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .releaseFromGrab = (CCharacter_releaseFromGrab *)core_charactr_cpp_CCharacter_releaseFromGrab_FUN_0042bf40,
    .getGrabber = (CCharacter_getGrabber *)core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80,
    .releaseVictim = (CCharacter_releaseVictim *)core_enemy_cpp_CEnemy_releaseVictim_FUN_004aa030,
    .onVictimLost = (CCharacter_onVictimLost *)core_enemy_cpp_CEnemy_onVictimLost_FUN_004aa0c0,
    .checkCylinderCollisionWorld = (CCharacter_checkCylinderCollisionWorld *)core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110,
    .testDamageLine = (CCharacter_testDamageLine *)core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180,
    .processDamage = (CCharacter_processDamage *)core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10,
    .getDeathState = (CCharacter_isDeathState *)core_mimic_cpp_CMimic_getDeathState_FUN_005208a0,
    .attractActorToward = (CCharacter_attractActorToward *)core_charactr_cpp_CCharacter_attractActorToward_FUN_0042c010,
    .canBeAttracted = (CCharacter_canBeAttracted *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getPartDominantBone = (CCharacter_getPartDominantBone *)core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0,
    .setDoorTarget = (CCharacter_setDoorTarget *)core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50,
    .clearDoorTarget = (CCharacter_clearDoorTarget *)core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60,
    .hasDoorTarget = (CCharacter_hasDoorTarget *)core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90,
    .dropCarriedObject = (CCharacter_dropCarriedObject *)core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0,
    .getCarryObjToBodyXForm = (CCharacter_getCarryObjToBodyXForm *)core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300,
    .setWalkTarget = (CCharacter_setWalkTarget *)core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920,
    .setWalkTargetImmediate = (CCharacter_setWalkTargetImmediate *)core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0,
    .setWalkTimeout = (CCharacter_setWalkTimeout *)core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20,
    .isWalkComplete = (CCharacter_isWalkComplete *)core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30
};
CCharacter_vtable DAT_00661880 = {
    .applyDamage = (CCharacter_applyDamage *)core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0,
    .kill = (CCharacter_kill *)core_charactr_cpp_CCharacter_kill_FUN_00428e30,
    .canWalk = (CCharacter_canWalk *)core_charactr_cpp_CCharacter_canWalk_FUN_0042ca60,
    .isGrabbable = (CCharacter_isGrabbable *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .canBeGrabbed = (CCharacter_canBeGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getGrabbed = (CCharacter_getGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .releaseFromGrab = (CCharacter_releaseFromGrab *)core_charactr_cpp_CCharacter_releaseFromGrab_FUN_0042bf40,
    .getGrabber = (CCharacter_getGrabber *)core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80,
    .releaseVictim = (CCharacter_releaseVictim *)core_enemy_cpp_CEnemy_releaseVictim_FUN_004aa030,
    .onVictimLost = (CCharacter_onVictimLost *)core_enemy_cpp_CEnemy_onVictimLost_FUN_004aa0c0,
    .checkCylinderCollisionWorld = (CCharacter_checkCylinderCollisionWorld *)core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110,
    .testDamageLine = (CCharacter_testDamageLine *)core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180,
    .processDamage = (CCharacter_processDamage *)core_mobster_cpp_CMobster_processDamage_FUN_00527740,
    .getDeathState = (CCharacter_isDeathState *)core_charactr_cpp_CCharacter_getDeathState_FUN_0042c580,
    .attractActorToward = (CCharacter_attractActorToward *)core_charactr_cpp_CCharacter_attractActorToward_FUN_0042c010,
    .canBeAttracted = (CCharacter_canBeAttracted *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getPartDominantBone = (CCharacter_getPartDominantBone *)core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0,
    .setDoorTarget = (CCharacter_setDoorTarget *)core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50,
    .clearDoorTarget = (CCharacter_clearDoorTarget *)core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60,
    .hasDoorTarget = (CCharacter_hasDoorTarget *)core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90,
    .dropCarriedObject = (CCharacter_dropCarriedObject *)core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0,
    .getCarryObjToBodyXForm = (CCharacter_getCarryObjToBodyXForm *)core_mobster_cpp_CMobster_getCarryObjToBodyXForm_FUN_00526b20,
    .setWalkTarget = (CCharacter_setWalkTarget *)core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920,
    .setWalkTargetImmediate = (CCharacter_setWalkTargetImmediate *)core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0,
    .setWalkTimeout = (CCharacter_setWalkTimeout *)core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20,
    .isWalkComplete = (CCharacter_isWalkComplete *)core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30
};
CCharacter_vtable DAT_00661A30 = {
    .applyDamage = (CCharacter_applyDamage *)core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0,
    .kill = (CCharacter_kill *)core_hero_cpp_CHero_kill_FUN_004f3af0,
    .canWalk = (CCharacter_canWalk *)core_hero_cpp_CHero_canWalk_FUN_004f28a0,
    .isGrabbable = (CCharacter_isGrabbable *)core_hero_cpp_CHero_isGrabbable_FUN_004f2880,
    .canBeGrabbed = (CCharacter_canBeGrabbed *)core_hero_cpp_CHero_canBeGrabbed_FUN_004f2890,
    .getGrabbed = (CCharacter_getGrabbed *)core_hero_cpp_CHero_getGrabbed_FUN_004f28d0,
    .releaseFromGrab = (CCharacter_releaseFromGrab *)core_hero_cpp_CHero_releaseFromGrab_FUN_004f29b0,
    .getGrabber = (CCharacter_getGrabber *)core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80,
    .releaseVictim = (CCharacter_releaseVictim *)core_charactr_cpp_CCharacter_releaseVictim_FUN_0042bf70,
    .onVictimLost = (CCharacter_onVictimLost *)core_charactr_cpp_CCharacter_releaseVictim_FUN_0042bf70,
    .checkCylinderCollisionWorld = (CCharacter_checkCylinderCollisionWorld *)core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110,
    .testDamageLine = (CCharacter_testDamageLine *)core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180,
    .processDamage = (CCharacter_processDamage *)core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0,
    .getDeathState = (CCharacter_isDeathState *)core_charactr_cpp_CCharacter_getDeathState_FUN_0042c580,
    .attractActorToward = (CCharacter_attractActorToward *)core_charactr_cpp_CCharacter_attractActorToward_FUN_0042c010,
    .canBeAttracted = (CCharacter_canBeAttracted *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getPartDominantBone = (CCharacter_getPartDominantBone *)core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0,
    .setDoorTarget = (CCharacter_setDoorTarget *)core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50,
    .clearDoorTarget = (CCharacter_clearDoorTarget *)core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60,
    .hasDoorTarget = (CCharacter_hasDoorTarget *)core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90,
    .dropCarriedObject = (CCharacter_dropCarriedObject *)core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0,
    .getCarryObjToBodyXForm = (CCharacter_getCarryObjToBodyXForm *)core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300,
    .setWalkTarget = (CCharacter_setWalkTarget *)core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920,
    .setWalkTargetImmediate = (CCharacter_setWalkTargetImmediate *)core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0,
    .setWalkTimeout = (CCharacter_setWalkTimeout *)core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20,
    .isWalkComplete = (CCharacter_isWalkComplete *)core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30
};
CCharacter_vtable DAT_00661E80 = {
    .applyDamage = (CCharacter_applyDamage *)core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0,
    .kill = (CCharacter_kill *)core_charactr_cpp_CCharacter_kill_FUN_00428e30,
    .canWalk = (CCharacter_canWalk *)core_npc_cpp_CNPC_FUN_00544e10,
    .isGrabbable = (CCharacter_isGrabbable *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .canBeGrabbed = (CCharacter_canBeGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getGrabbed = (CCharacter_getGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .releaseFromGrab = (CCharacter_releaseFromGrab *)core_charactr_cpp_CCharacter_releaseFromGrab_FUN_0042bf40,
    .getGrabber = (CCharacter_getGrabber *)core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80,
    .releaseVictim = (CCharacter_releaseVictim *)core_charactr_cpp_CCharacter_releaseVictim_FUN_0042bf70,
    .onVictimLost = (CCharacter_onVictimLost *)core_charactr_cpp_CCharacter_releaseVictim_FUN_0042bf70,
    .checkCylinderCollisionWorld = (CCharacter_checkCylinderCollisionWorld *)core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110,
    .testDamageLine = (CCharacter_testDamageLine *)core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180,
    .processDamage = (CCharacter_processDamage *)core_npc_cpp_CNPC_processDamage_FUN_00544d30,
    .getDeathState = (CCharacter_isDeathState *)core_charactr_cpp_CCharacter_getDeathState_FUN_0042c580,
    .attractActorToward = (CCharacter_attractActorToward *)core_charactr_cpp_CCharacter_attractActorToward_FUN_0042c010,
    .canBeAttracted = (CCharacter_canBeAttracted *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getPartDominantBone = (CCharacter_getPartDominantBone *)core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0,
    .setDoorTarget = (CCharacter_setDoorTarget *)core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50,
    .clearDoorTarget = (CCharacter_clearDoorTarget *)core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60,
    .hasDoorTarget = (CCharacter_hasDoorTarget *)core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90,
    .dropCarriedObject = (CCharacter_dropCarriedObject *)core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0,
    .getCarryObjToBodyXForm = (CCharacter_getCarryObjToBodyXForm *)core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300,
    .setWalkTarget = (CCharacter_setWalkTarget *)core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920,
    .setWalkTargetImmediate = (CCharacter_setWalkTargetImmediate *)core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0,
    .setWalkTimeout = (CCharacter_setWalkTimeout *)core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20,
    .isWalkComplete = (CCharacter_isWalkComplete *)core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30
};
CCharacter_vtable DAT_00662050 = {
    .applyDamage = (CCharacter_applyDamage *)core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0,
    .kill = (CCharacter_kill *)core_charactr_cpp_CCharacter_kill_FUN_00428e30,
    .canWalk = (CCharacter_canWalk *)core_npc_cpp_CNPC_FUN_00544e10,
    .isGrabbable = (CCharacter_isGrabbable *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .canBeGrabbed = (CCharacter_canBeGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getGrabbed = (CCharacter_getGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .releaseFromGrab = (CCharacter_releaseFromGrab *)core_charactr_cpp_CCharacter_releaseFromGrab_FUN_0042bf40,
    .getGrabber = (CCharacter_getGrabber *)core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80,
    .releaseVictim = (CCharacter_releaseVictim *)core_charactr_cpp_CCharacter_releaseVictim_FUN_0042bf70,
    .onVictimLost = (CCharacter_onVictimLost *)core_charactr_cpp_CCharacter_releaseVictim_FUN_0042bf70,
    .checkCylinderCollisionWorld = (CCharacter_checkCylinderCollisionWorld *)core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110,
    .testDamageLine = (CCharacter_testDamageLine *)core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180,
    .processDamage = (CCharacter_processDamage *)core_npc_cpp_CNPC_processDamage_FUN_00544d30,
    .getDeathState = (CCharacter_isDeathState *)core_charactr_cpp_CCharacter_getDeathState_FUN_0042c580,
    .attractActorToward = (CCharacter_attractActorToward *)core_charactr_cpp_CCharacter_attractActorToward_FUN_0042c010,
    .canBeAttracted = (CCharacter_canBeAttracted *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getPartDominantBone = (CCharacter_getPartDominantBone *)core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0,
    .setDoorTarget = (CCharacter_setDoorTarget *)core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50,
    .clearDoorTarget = (CCharacter_clearDoorTarget *)core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60,
    .hasDoorTarget = (CCharacter_hasDoorTarget *)core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90,
    .dropCarriedObject = (CCharacter_dropCarriedObject *)core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0,
    .getCarryObjToBodyXForm = (CCharacter_getCarryObjToBodyXForm *)core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300,
    .setWalkTarget = (CCharacter_setWalkTarget *)core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920,
    .setWalkTargetImmediate = (CCharacter_setWalkTargetImmediate *)core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0,
    .setWalkTimeout = (CCharacter_setWalkTimeout *)core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20,
    .isWalkComplete = (CCharacter_isWalkComplete *)core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30
};
CCharacter_vtable DAT_00662550 = {
    .applyDamage = (CCharacter_applyDamage *)core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0,
    .kill = (CCharacter_kill *)core_hero_cpp_CHero_kill_FUN_004f3af0,
    .canWalk = (CCharacter_canWalk *)core_hero_cpp_CHero_canWalk_FUN_004f28a0,
    .isGrabbable = (CCharacter_isGrabbable *)core_hero_cpp_CHero_isGrabbable_FUN_004f2880,
    .canBeGrabbed = (CCharacter_canBeGrabbed *)core_hero_cpp_CHero_canBeGrabbed_FUN_004f2890,
    .getGrabbed = (CCharacter_getGrabbed *)core_hero_cpp_CHero_getGrabbed_FUN_004f28d0,
    .releaseFromGrab = (CCharacter_releaseFromGrab *)core_hero_cpp_CHero_releaseFromGrab_FUN_004f29b0,
    .getGrabber = (CCharacter_getGrabber *)core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80,
    .releaseVictim = (CCharacter_releaseVictim *)core_charactr_cpp_CCharacter_releaseVictim_FUN_0042bf70,
    .onVictimLost = (CCharacter_onVictimLost *)core_charactr_cpp_CCharacter_releaseVictim_FUN_0042bf70,
    .checkCylinderCollisionWorld = (CCharacter_checkCylinderCollisionWorld *)core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110,
    .testDamageLine = (CCharacter_testDamageLine *)core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180,
    .processDamage = (CCharacter_processDamage *)core_scat_cpp_CScat_processDamage_FUN_00557ea0,
    .getDeathState = (CCharacter_isDeathState *)core_charactr_cpp_CCharacter_getDeathState_FUN_0042c580,
    .attractActorToward = (CCharacter_attractActorToward *)core_charactr_cpp_CCharacter_attractActorToward_FUN_0042c010,
    .canBeAttracted = (CCharacter_canBeAttracted *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getPartDominantBone = (CCharacter_getPartDominantBone *)core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0,
    .setDoorTarget = (CCharacter_setDoorTarget *)core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50,
    .clearDoorTarget = (CCharacter_clearDoorTarget *)core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60,
    .hasDoorTarget = (CCharacter_hasDoorTarget *)core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90,
    .dropCarriedObject = (CCharacter_dropCarriedObject *)core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0,
    .getCarryObjToBodyXForm = (CCharacter_getCarryObjToBodyXForm *)core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300,
    .setWalkTarget = (CCharacter_setWalkTarget *)core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920,
    .setWalkTargetImmediate = (CCharacter_setWalkTargetImmediate *)core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0,
    .setWalkTimeout = (CCharacter_setWalkTimeout *)core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20,
    .isWalkComplete = (CCharacter_isWalkComplete *)core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30
};
CCharacter_vtable DAT_00662780 = {
    .applyDamage = (CCharacter_applyDamage *)core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0,
    .kill = (CCharacter_kill *)core_charactr_cpp_CCharacter_kill_FUN_00428e30,
    .canWalk = (CCharacter_canWalk *)core_charactr_cpp_CCharacter_canWalk_FUN_0042ca60,
    .isGrabbable = (CCharacter_isGrabbable *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .canBeGrabbed = (CCharacter_canBeGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getGrabbed = (CCharacter_getGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .releaseFromGrab = (CCharacter_releaseFromGrab *)core_charactr_cpp_CCharacter_releaseFromGrab_FUN_0042bf40,
    .getGrabber = (CCharacter_getGrabber *)core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80,
    .releaseVictim = (CCharacter_releaseVictim *)core_enemy_cpp_CEnemy_releaseVictim_FUN_004aa030,
    .onVictimLost = (CCharacter_onVictimLost *)core_enemy_cpp_CEnemy_onVictimLost_FUN_004aa0c0,
    .checkCylinderCollisionWorld = (CCharacter_checkCylinderCollisionWorld *)core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110,
    .testDamageLine = (CCharacter_testDamageLine *)core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180,
    .processDamage = (CCharacter_processDamage *)core_sentinel_cpp_CSentinel_processDamage_FUN_00568cd0,
    .getDeathState = (CCharacter_isDeathState *)core_charactr_cpp_CCharacter_getDeathState_FUN_0042c580,
    .attractActorToward = (CCharacter_attractActorToward *)core_sentinel_cpp_CSentinel_attractActorToward_FUN_00568b70,
    .canBeAttracted = (CCharacter_canBeAttracted *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getPartDominantBone = (CCharacter_getPartDominantBone *)core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0,
    .setDoorTarget = (CCharacter_setDoorTarget *)core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50,
    .clearDoorTarget = (CCharacter_clearDoorTarget *)core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60,
    .hasDoorTarget = (CCharacter_hasDoorTarget *)core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90,
    .dropCarriedObject = (CCharacter_dropCarriedObject *)core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0,
    .getCarryObjToBodyXForm = (CCharacter_getCarryObjToBodyXForm *)core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300,
    .setWalkTarget = (CCharacter_setWalkTarget *)core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920,
    .setWalkTargetImmediate = (CCharacter_setWalkTargetImmediate *)core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0,
    .setWalkTimeout = (CCharacter_setWalkTimeout *)core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20,
    .isWalkComplete = (CCharacter_isWalkComplete *)core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30
};
CCharacter_vtable DAT_00663070 = {
    .applyDamage = (CCharacter_applyDamage *)core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0,
    .kill = (CCharacter_kill *)core_charactr_cpp_CCharacter_kill_FUN_00428e30,
    .canWalk = (CCharacter_canWalk *)core_charactr_cpp_CCharacter_canWalk_FUN_0042ca60,
    .isGrabbable = (CCharacter_isGrabbable *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .canBeGrabbed = (CCharacter_canBeGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getGrabbed = (CCharacter_getGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .releaseFromGrab = (CCharacter_releaseFromGrab *)core_charactr_cpp_CCharacter_releaseFromGrab_FUN_0042bf40,
    .getGrabber = (CCharacter_getGrabber *)core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80,
    .releaseVictim = (CCharacter_releaseVictim *)core_enemy_cpp_CEnemy_releaseVictim_FUN_004aa030,
    .onVictimLost = (CCharacter_onVictimLost *)core_enemy_cpp_CEnemy_onVictimLost_FUN_004aa0c0,
    .checkCylinderCollisionWorld = (CCharacter_checkCylinderCollisionWorld *)core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110,
    .testDamageLine = (CCharacter_testDamageLine *)core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180,
    .processDamage = (CCharacter_processDamage *)core_smiley_cpp_CSmiley_processDamage_FUN_005a3580,
    .getDeathState = (CCharacter_isDeathState *)core_charactr_cpp_CCharacter_getDeathState_FUN_0042c580,
    .attractActorToward = (CCharacter_attractActorToward *)core_smiley_cpp_CSmiley_attractActorToward_FUN_005a3160,
    .canBeAttracted = (CCharacter_canBeAttracted *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getPartDominantBone = (CCharacter_getPartDominantBone *)core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0,
    .setDoorTarget = (CCharacter_setDoorTarget *)core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50,
    .clearDoorTarget = (CCharacter_clearDoorTarget *)core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60,
    .hasDoorTarget = (CCharacter_hasDoorTarget *)core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90,
    .dropCarriedObject = (CCharacter_dropCarriedObject *)core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0,
    .getCarryObjToBodyXForm = (CCharacter_getCarryObjToBodyXForm *)core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300,
    .setWalkTarget = (CCharacter_setWalkTarget *)core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920,
    .setWalkTargetImmediate = (CCharacter_setWalkTargetImmediate *)core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0,
    .setWalkTimeout = (CCharacter_setWalkTimeout *)core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20,
    .isWalkComplete = (CCharacter_isWalkComplete *)core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30
};
CCharacter_vtable DAT_00663870 = {
    .applyDamage = (CCharacter_applyDamage *)core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0,
    .kill = (CCharacter_kill *)core_hero_cpp_CHero_kill_FUN_004f3af0,
    .canWalk = (CCharacter_canWalk *)core_hero_cpp_CHero_canWalk_FUN_004f28a0,
    .isGrabbable = (CCharacter_isGrabbable *)core_hero_cpp_CHero_isGrabbable_FUN_004f2880,
    .canBeGrabbed = (CCharacter_canBeGrabbed *)core_hero_cpp_CHero_canBeGrabbed_FUN_004f2890,
    .getGrabbed = (CCharacter_getGrabbed *)core_stranger_cpp_CStranger_getGrabbed_FUN_005c66a0,
    .releaseFromGrab = (CCharacter_releaseFromGrab *)core_hero_cpp_CHero_releaseFromGrab_FUN_004f29b0,
    .getGrabber = (CCharacter_getGrabber *)core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80,
    .releaseVictim = (CCharacter_releaseVictim *)core_charactr_cpp_CCharacter_releaseVictim_FUN_0042bf70,
    .onVictimLost = (CCharacter_onVictimLost *)core_charactr_cpp_CCharacter_releaseVictim_FUN_0042bf70,
    .checkCylinderCollisionWorld = (CCharacter_checkCylinderCollisionWorld *)core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110,
    .testDamageLine = (CCharacter_testDamageLine *)core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180,
    .processDamage = (CCharacter_processDamage *)core_stranger_cpp_CStranger_processDamage_FUN_005c48b0,
    .getDeathState = (CCharacter_isDeathState *)core_stranger_cpp_CStranger_getDeathState_FUN_005c67c0,
    .attractActorToward = (CCharacter_attractActorToward *)core_charactr_cpp_CCharacter_attractActorToward_FUN_0042c010,
    .canBeAttracted = (CCharacter_canBeAttracted *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getPartDominantBone = (CCharacter_getPartDominantBone *)core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0,
    .setDoorTarget = (CCharacter_setDoorTarget *)core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50,
    .clearDoorTarget = (CCharacter_clearDoorTarget *)core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60,
    .hasDoorTarget = (CCharacter_hasDoorTarget *)core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90,
    .dropCarriedObject = (CCharacter_dropCarriedObject *)core_stranger_cpp_CStranger_dropCarriedObject_FUN_005c67f0,
    .getCarryObjToBodyXForm = (CCharacter_getCarryObjToBodyXForm *)core_stranger_cpp_CStranger_getCarryObjToBodyXForm_FUN_005c5170,
    .setWalkTarget = (CCharacter_setWalkTarget *)core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920,
    .setWalkTargetImmediate = (CCharacter_setWalkTargetImmediate *)core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0,
    .setWalkTimeout = (CCharacter_setWalkTimeout *)core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20,
    .isWalkComplete = (CCharacter_isWalkComplete *)core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30
};
CCharacter_vtable DAT_00663A30 = {
    .applyDamage = (CCharacter_applyDamage *)core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0,
    .kill = (CCharacter_kill *)core_charactr_cpp_CCharacter_kill_FUN_00428e30,
    .canWalk = (CCharacter_canWalk *)core_charactr_cpp_CCharacter_canWalk_FUN_0042ca60,
    .isGrabbable = (CCharacter_isGrabbable *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .canBeGrabbed = (CCharacter_canBeGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getGrabbed = (CCharacter_getGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .releaseFromGrab = (CCharacter_releaseFromGrab *)core_charactr_cpp_CCharacter_releaseFromGrab_FUN_0042bf40,
    .getGrabber = (CCharacter_getGrabber *)core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80,
    .releaseVictim = (CCharacter_releaseVictim *)core_enemy_cpp_CEnemy_releaseVictim_FUN_004aa030,
    .onVictimLost = (CCharacter_onVictimLost *)core_enemy_cpp_CEnemy_onVictimLost_FUN_004aa0c0,
    .checkCylinderCollisionWorld = (CCharacter_checkCylinderCollisionWorld *)core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110,
    .testDamageLine = (CCharacter_testDamageLine *)core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180,
    .processDamage = (CCharacter_processDamage *)core_succubus_cpp_CSuccubus_processDamage_FUN_005c7760,
    .getDeathState = (CCharacter_isDeathState *)core_charactr_cpp_CCharacter_getDeathState_FUN_0042c580,
    .attractActorToward = (CCharacter_attractActorToward *)core_charactr_cpp_CCharacter_attractActorToward_FUN_0042c010,
    .canBeAttracted = (CCharacter_canBeAttracted *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getPartDominantBone = (CCharacter_getPartDominantBone *)core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0,
    .setDoorTarget = (CCharacter_setDoorTarget *)core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50,
    .clearDoorTarget = (CCharacter_clearDoorTarget *)core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60,
    .hasDoorTarget = (CCharacter_hasDoorTarget *)core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90,
    .dropCarriedObject = (CCharacter_dropCarriedObject *)core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0,
    .getCarryObjToBodyXForm = (CCharacter_getCarryObjToBodyXForm *)core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300,
    .setWalkTarget = (CCharacter_setWalkTarget *)core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920,
    .setWalkTargetImmediate = (CCharacter_setWalkTargetImmediate *)core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0,
    .setWalkTimeout = (CCharacter_setWalkTimeout *)core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20,
    .isWalkComplete = (CCharacter_isWalkComplete *)core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30
};
CCharacter_vtable DAT_00663E50 = {
    .applyDamage = (CCharacter_applyDamage *)core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0,
    .kill = (CCharacter_kill *)core_hero_cpp_CHero_kill_FUN_004f3af0,
    .canWalk = (CCharacter_canWalk *)core_hero_cpp_CHero_canWalk_FUN_004f28a0,
    .isGrabbable = (CCharacter_isGrabbable *)core_hero_cpp_CHero_isGrabbable_FUN_004f2880,
    .canBeGrabbed = (CCharacter_canBeGrabbed *)core_hero_cpp_CHero_canBeGrabbed_FUN_004f2890,
    .getGrabbed = (CCharacter_getGrabbed *)core_svetlana_cpp_CSvetlana_FUN_005d9ec0,
    .releaseFromGrab = (CCharacter_releaseFromGrab *)core_hero_cpp_CHero_releaseFromGrab_FUN_004f29b0,
    .getGrabber = (CCharacter_getGrabber *)core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80,
    .releaseVictim = (CCharacter_releaseVictim *)core_charactr_cpp_CCharacter_releaseVictim_FUN_0042bf70,
    .onVictimLost = (CCharacter_onVictimLost *)core_charactr_cpp_CCharacter_releaseVictim_FUN_0042bf70,
    .checkCylinderCollisionWorld = (CCharacter_checkCylinderCollisionWorld *)core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110,
    .testDamageLine = (CCharacter_testDamageLine *)core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180,
    .processDamage = (CCharacter_processDamage *)core_svetlana_cpp_CSvetlana_processDamage_FUN_005d9d30,
    .getDeathState = (CCharacter_isDeathState *)core_charactr_cpp_CCharacter_getDeathState_FUN_0042c580,
    .attractActorToward = (CCharacter_attractActorToward *)core_charactr_cpp_CCharacter_attractActorToward_FUN_0042c010,
    .canBeAttracted = (CCharacter_canBeAttracted *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getPartDominantBone = (CCharacter_getPartDominantBone *)core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0,
    .setDoorTarget = (CCharacter_setDoorTarget *)core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50,
    .clearDoorTarget = (CCharacter_clearDoorTarget *)core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60,
    .hasDoorTarget = (CCharacter_hasDoorTarget *)core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90,
    .dropCarriedObject = (CCharacter_dropCarriedObject *)core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0,
    .getCarryObjToBodyXForm = (CCharacter_getCarryObjToBodyXForm *)core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300,
    .setWalkTarget = (CCharacter_setWalkTarget *)core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920,
    .setWalkTargetImmediate = (CCharacter_setWalkTargetImmediate *)core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0,
    .setWalkTimeout = (CCharacter_setWalkTimeout *)core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20,
    .isWalkComplete = (CCharacter_isWalkComplete *)core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30
};
CCharacter_vtable DAT_00664000 = {
    .applyDamage = (CCharacter_applyDamage *)core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0,
    .kill = (CCharacter_kill *)core_charactr_cpp_CCharacter_kill_FUN_00428e30,
    .canWalk = (CCharacter_canWalk *)core_npc_cpp_CNPC_FUN_00544e10,
    .isGrabbable = (CCharacter_isGrabbable *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .canBeGrabbed = (CCharacter_canBeGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getGrabbed = (CCharacter_getGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .releaseFromGrab = (CCharacter_releaseFromGrab *)core_charactr_cpp_CCharacter_releaseFromGrab_FUN_0042bf40,
    .getGrabber = (CCharacter_getGrabber *)core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80,
    .releaseVictim = (CCharacter_releaseVictim *)core_charactr_cpp_CCharacter_releaseVictim_FUN_0042bf70,
    .onVictimLost = (CCharacter_onVictimLost *)core_charactr_cpp_CCharacter_releaseVictim_FUN_0042bf70,
    .checkCylinderCollisionWorld = (CCharacter_checkCylinderCollisionWorld *)core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110,
    .testDamageLine = (CCharacter_testDamageLine *)core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180,
    .processDamage = (CCharacter_processDamage *)core_tbplayer_cpp_CBassPlayer_processDamage_FUN_005da240,
    .getDeathState = (CCharacter_isDeathState *)core_charactr_cpp_CCharacter_getDeathState_FUN_0042c580,
    .attractActorToward = (CCharacter_attractActorToward *)core_charactr_cpp_CCharacter_attractActorToward_FUN_0042c010,
    .canBeAttracted = (CCharacter_canBeAttracted *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getPartDominantBone = (CCharacter_getPartDominantBone *)core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0,
    .setDoorTarget = (CCharacter_setDoorTarget *)core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50,
    .clearDoorTarget = (CCharacter_clearDoorTarget *)core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60,
    .hasDoorTarget = (CCharacter_hasDoorTarget *)core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90,
    .dropCarriedObject = (CCharacter_dropCarriedObject *)core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0,
    .getCarryObjToBodyXForm = (CCharacter_getCarryObjToBodyXForm *)core_tbplayer_cpp_CBassPlayer_getCarryObjToBodyXForm_FUN_005da120,
    .setWalkTarget = (CCharacter_setWalkTarget *)core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920,
    .setWalkTargetImmediate = (CCharacter_setWalkTargetImmediate *)core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0,
    .setWalkTimeout = (CCharacter_setWalkTimeout *)core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20,
    .isWalkComplete = (CCharacter_isWalkComplete *)core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30
};
CCharacter_vtable DAT_00664160 = {
    .applyDamage = (CCharacter_applyDamage *)core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0,
    .kill = (CCharacter_kill *)core_charactr_cpp_CCharacter_kill_FUN_00428e30,
    .canWalk = (CCharacter_canWalk *)core_npc_cpp_CNPC_FUN_00544e10,
    .isGrabbable = (CCharacter_isGrabbable *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .canBeGrabbed = (CCharacter_canBeGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getGrabbed = (CCharacter_getGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .releaseFromGrab = (CCharacter_releaseFromGrab *)core_charactr_cpp_CCharacter_releaseFromGrab_FUN_0042bf40,
    .getGrabber = (CCharacter_getGrabber *)core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80,
    .releaseVictim = (CCharacter_releaseVictim *)core_charactr_cpp_CCharacter_releaseVictim_FUN_0042bf70,
    .onVictimLost = (CCharacter_onVictimLost *)core_charactr_cpp_CCharacter_releaseVictim_FUN_0042bf70,
    .checkCylinderCollisionWorld = (CCharacter_checkCylinderCollisionWorld *)core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110,
    .testDamageLine = (CCharacter_testDamageLine *)core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180,
    .processDamage = (CCharacter_processDamage *)core_tbplayer_cpp_CDrummer_processDamage_FUN_005da510,
    .getDeathState = (CCharacter_isDeathState *)core_charactr_cpp_CCharacter_getDeathState_FUN_0042c580,
    .attractActorToward = (CCharacter_attractActorToward *)core_charactr_cpp_CCharacter_attractActorToward_FUN_0042c010,
    .canBeAttracted = (CCharacter_canBeAttracted *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getPartDominantBone = (CCharacter_getPartDominantBone *)core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0,
    .setDoorTarget = (CCharacter_setDoorTarget *)core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50,
    .clearDoorTarget = (CCharacter_clearDoorTarget *)core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60,
    .hasDoorTarget = (CCharacter_hasDoorTarget *)core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90,
    .dropCarriedObject = (CCharacter_dropCarriedObject *)core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0,
    .getCarryObjToBodyXForm = (CCharacter_getCarryObjToBodyXForm *)core_tbplayer_cpp_CDrummer_getCarryObjToBodyXForm_FUN_005da370,
    .setWalkTarget = (CCharacter_setWalkTarget *)core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920,
    .setWalkTargetImmediate = (CCharacter_setWalkTargetImmediate *)core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0,
    .setWalkTimeout = (CCharacter_setWalkTimeout *)core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20,
    .isWalkComplete = (CCharacter_isWalkComplete *)core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30
};
CCharacter_vtable DAT_00664560 = {
    .applyDamage = (CCharacter_applyDamage *)core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0,
    .kill = (CCharacter_kill *)core_charactr_cpp_CCharacter_kill_FUN_00428e30,
    .canWalk = (CCharacter_canWalk *)core_charactr_cpp_CCharacter_canWalk_FUN_0042ca60,
    .isGrabbable = (CCharacter_isGrabbable *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .canBeGrabbed = (CCharacter_canBeGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getGrabbed = (CCharacter_getGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .releaseFromGrab = (CCharacter_releaseFromGrab *)core_charactr_cpp_CCharacter_releaseFromGrab_FUN_0042bf40,
    .getGrabber = (CCharacter_getGrabber *)core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80,
    .releaseVictim = (CCharacter_releaseVictim *)core_enemy_cpp_CEnemy_releaseVictim_FUN_004aa030,
    .onVictimLost = (CCharacter_onVictimLost *)core_enemy_cpp_CEnemy_onVictimLost_FUN_004aa0c0,
    .checkCylinderCollisionWorld = (CCharacter_checkCylinderCollisionWorld *)core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110,
    .testDamageLine = (CCharacter_testDamageLine *)core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180,
    .processDamage = (CCharacter_processDamage *)core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10,
    .getDeathState = (CCharacter_isDeathState *)core_charactr_cpp_CCharacter_getDeathState_FUN_0042c580,
    .attractActorToward = (CCharacter_attractActorToward *)core_tentacle_cpp_CTentacle_FUN_005db9d0,
    .canBeAttracted = (CCharacter_canBeAttracted *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getPartDominantBone = (CCharacter_getPartDominantBone *)core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0,
    .setDoorTarget = (CCharacter_setDoorTarget *)core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50,
    .clearDoorTarget = (CCharacter_clearDoorTarget *)core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60,
    .hasDoorTarget = (CCharacter_hasDoorTarget *)core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90,
    .dropCarriedObject = (CCharacter_dropCarriedObject *)core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0,
    .getCarryObjToBodyXForm = (CCharacter_getCarryObjToBodyXForm *)core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300,
    .setWalkTarget = (CCharacter_setWalkTarget *)core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920,
    .setWalkTargetImmediate = (CCharacter_setWalkTargetImmediate *)core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0,
    .setWalkTimeout = (CCharacter_setWalkTimeout *)core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20,
    .isWalkComplete = (CCharacter_isWalkComplete *)core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30
};
CCharacter_vtable DAT_00664DC0 = {
    .applyDamage = (CCharacter_applyDamage *)core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0,
    .kill = (CCharacter_kill *)core_charactr_cpp_CCharacter_kill_FUN_00428e30,
    .canWalk = (CCharacter_canWalk *)core_charactr_cpp_CCharacter_canWalk_FUN_0042ca60,
    .isGrabbable = (CCharacter_isGrabbable *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .canBeGrabbed = (CCharacter_canBeGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getGrabbed = (CCharacter_getGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .releaseFromGrab = (CCharacter_releaseFromGrab *)core_charactr_cpp_CCharacter_releaseFromGrab_FUN_0042bf40,
    .getGrabber = (CCharacter_getGrabber *)core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80,
    .releaseVictim = (CCharacter_releaseVictim *)core_enemy_cpp_CEnemy_releaseVictim_FUN_004aa030,
    .onVictimLost = (CCharacter_onVictimLost *)core_enemy_cpp_CEnemy_onVictimLost_FUN_004aa0c0,
    .checkCylinderCollisionWorld = (CCharacter_checkCylinderCollisionWorld *)core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110,
    .testDamageLine = (CCharacter_testDamageLine *)core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180,
    .processDamage = (CCharacter_processDamage *)core_tvbat_cpp_CTVBat_processDamage_FUN_005e5130,
    .getDeathState = (CCharacter_isDeathState *)core_tvbat_cpp_CTVBat_getDeathState_FUN_005e5100,
    .attractActorToward = (CCharacter_attractActorToward *)core_charactr_cpp_CCharacter_attractActorToward_FUN_0042c010,
    .canBeAttracted = (CCharacter_canBeAttracted *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getPartDominantBone = (CCharacter_getPartDominantBone *)core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0,
    .setDoorTarget = (CCharacter_setDoorTarget *)core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50,
    .clearDoorTarget = (CCharacter_clearDoorTarget *)core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60,
    .hasDoorTarget = (CCharacter_hasDoorTarget *)core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90,
    .dropCarriedObject = (CCharacter_dropCarriedObject *)core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0,
    .getCarryObjToBodyXForm = (CCharacter_getCarryObjToBodyXForm *)core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300,
    .setWalkTarget = (CCharacter_setWalkTarget *)core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920,
    .setWalkTargetImmediate = (CCharacter_setWalkTargetImmediate *)core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0,
    .setWalkTimeout = (CCharacter_setWalkTimeout *)core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20,
    .isWalkComplete = (CCharacter_isWalkComplete *)core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30
};
CCharacter_vtable DAT_00664F80 = {
    .applyDamage = (CCharacter_applyDamage *)core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0,
    .kill = (CCharacter_kill *)core_charactr_cpp_CCharacter_kill_FUN_00428e30,
    .canWalk = (CCharacter_canWalk *)core_charactr_cpp_CCharacter_canWalk_FUN_0042ca60,
    .isGrabbable = (CCharacter_isGrabbable *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .canBeGrabbed = (CCharacter_canBeGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getGrabbed = (CCharacter_getGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .releaseFromGrab = (CCharacter_releaseFromGrab *)core_charactr_cpp_CCharacter_releaseFromGrab_FUN_0042bf40,
    .getGrabber = (CCharacter_getGrabber *)core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80,
    .releaseVictim = (CCharacter_releaseVictim *)core_enemy_cpp_CEnemy_releaseVictim_FUN_004aa030,
    .onVictimLost = (CCharacter_onVictimLost *)core_enemy_cpp_CEnemy_onVictimLost_FUN_004aa0c0,
    .checkCylinderCollisionWorld = (CCharacter_checkCylinderCollisionWorld *)core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110,
    .testDamageLine = (CCharacter_testDamageLine *)core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180,
    .processDamage = (CCharacter_processDamage *)core_vampboss_cpp_CVampireBoss_processDamage_FUN_005e7030,
    .getDeathState = (CCharacter_isDeathState *)core_vampboss_cpp_CVampireBoss_getDeathState_FUN_005e7270,
    .attractActorToward = (CCharacter_attractActorToward *)core_charactr_cpp_CCharacter_attractActorToward_FUN_0042c010,
    .canBeAttracted = (CCharacter_canBeAttracted *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getPartDominantBone = (CCharacter_getPartDominantBone *)core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0,
    .setDoorTarget = (CCharacter_setDoorTarget *)core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50,
    .clearDoorTarget = (CCharacter_clearDoorTarget *)core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60,
    .hasDoorTarget = (CCharacter_hasDoorTarget *)core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90,
    .dropCarriedObject = (CCharacter_dropCarriedObject *)core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0,
    .getCarryObjToBodyXForm = (CCharacter_getCarryObjToBodyXForm *)core_vampboss_cpp_CVampireBoss_getCarryObjToBodyXForm_FUN_005e6b80,
    .setWalkTarget = (CCharacter_setWalkTarget *)core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920,
    .setWalkTargetImmediate = (CCharacter_setWalkTargetImmediate *)core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0,
    .setWalkTimeout = (CCharacter_setWalkTimeout *)core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20,
    .isWalkComplete = (CCharacter_isWalkComplete *)core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30
};
CCharacter_vtable DAT_00665870 = {
    .applyDamage = (CCharacter_applyDamage *)core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0,
    .kill = (CCharacter_kill *)core_charactr_cpp_CCharacter_kill_FUN_00428e30,
    .canWalk = (CCharacter_canWalk *)core_charactr_cpp_CCharacter_canWalk_FUN_0042ca60,
    .isGrabbable = (CCharacter_isGrabbable *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .canBeGrabbed = (CCharacter_canBeGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getGrabbed = (CCharacter_getGrabbed *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .releaseFromGrab = (CCharacter_releaseFromGrab *)core_charactr_cpp_CCharacter_releaseFromGrab_FUN_0042bf40,
    .getGrabber = (CCharacter_getGrabber *)core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80,
    .releaseVictim = (CCharacter_releaseVictim *)core_enemy_cpp_CEnemy_releaseVictim_FUN_004aa030,
    .onVictimLost = (CCharacter_onVictimLost *)core_enemy_cpp_CEnemy_onVictimLost_FUN_004aa0c0,
    .checkCylinderCollisionWorld = (CCharacter_checkCylinderCollisionWorld *)core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110,
    .testDamageLine = (CCharacter_testDamageLine *)core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180,
    .processDamage = (CCharacter_processDamage *)core_werewolf_cpp_CWerewolf_processDamage_FUN_005f1ac0,
    .getDeathState = (CCharacter_isDeathState *)core_werewolf_cpp_CWerewolf_getDeathState_FUN_005f1db0,
    .attractActorToward = (CCharacter_attractActorToward *)core_charactr_cpp_CCharacter_attractActorToward_FUN_0042c010,
    .canBeAttracted = (CCharacter_canBeAttracted *)core_charactr_cpp_CCharacter_isGrabbable_FUN_0042bf30,
    .getPartDominantBone = (CCharacter_getPartDominantBone *)core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0,
    .setDoorTarget = (CCharacter_setDoorTarget *)core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50,
    .clearDoorTarget = (CCharacter_clearDoorTarget *)core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60,
    .hasDoorTarget = (CCharacter_hasDoorTarget *)core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90,
    .dropCarriedObject = (CCharacter_dropCarriedObject *)core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0,
    .getCarryObjToBodyXForm = (CCharacter_getCarryObjToBodyXForm *)core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300,
    .setWalkTarget = (CCharacter_setWalkTarget *)core_werewolf_cpp_CWerewolf_setWalkTarget_FUN_005f11a0,
    .setWalkTargetImmediate = (CCharacter_setWalkTargetImmediate *)core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0,
    .setWalkTimeout = (CCharacter_setWalkTimeout *)core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20,
    .isWalkComplete = (CCharacter_isWalkComplete *)core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30
};
CCharacter_vtable DAT_00665AD0 = {
    .applyDamage = (CCharacter_applyDamage *)core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0,
    .kill = (CCharacter_kill *)core_charactr_cpp_CCharacter_kill_FUN_00428e30,
    .canWalk = (CCharacter_canWalk *)core_charactr_cpp_CCharacter_canWalk_FUN_0042ca60,
    .isGrabbable = (CCharacter_isGrabbable *)core_zombie_cpp_CZombie_isGrabbable_FUN_005fc920,
    .canBeGrabbed = (CCharacter_canBeGrabbed *)core_zombie_cpp_CZombie_canBeGrabbed_FUN_005fc960,
    .getGrabbed = (CCharacter_getGrabbed *)core_zombie_cpp_CZombie_getGrabbed_FUN_005fc970,
    .releaseFromGrab = (CCharacter_releaseFromGrab *)core_charactr_cpp_CCharacter_releaseFromGrab_FUN_0042bf40,
    .getGrabber = (CCharacter_getGrabber *)core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80,
    .releaseVictim = (CCharacter_releaseVictim *)core_enemy_cpp_CEnemy_releaseVictim_FUN_004aa030,
    .onVictimLost = (CCharacter_onVictimLost *)core_enemy_cpp_CEnemy_onVictimLost_FUN_004aa0c0,
    .checkCylinderCollisionWorld = (CCharacter_checkCylinderCollisionWorld *)core_charactr_cpp_CCharacter_checkCylinderCollisionWorld_FUN_0042c110,
    .testDamageLine = (CCharacter_testDamageLine *)core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180,
    .processDamage = (CCharacter_processDamage *)core_zombie_cpp_CZombie_processDamage_FUN_005fc4f0,
    .getDeathState = (CCharacter_isDeathState *)core_charactr_cpp_CCharacter_getDeathState_FUN_0042c580,
    .attractActorToward = (CCharacter_attractActorToward *)core_charactr_cpp_CCharacter_attractActorToward_FUN_0042c010,
    .canBeAttracted = (CCharacter_canBeAttracted *)core_zombie_cpp_CZombie_canBeAttracted_FUN_005fc120,
    .getPartDominantBone = (CCharacter_getPartDominantBone *)core_charactr_cpp_CCharacter_getPartDominantBone_FUN_0042a3f0,
    .setDoorTarget = (CCharacter_setDoorTarget *)core_charactr_cpp_CCharacter_setDoorTarget_FUN_0042cd50,
    .clearDoorTarget = (CCharacter_clearDoorTarget *)core_charactr_cpp_CCharacter_clearDoorTarget_FUN_0042cd60,
    .hasDoorTarget = (CCharacter_hasDoorTarget *)core_charactr_cpp_CCharacter_hasDoorTarget_FUN_0042cd90,
    .dropCarriedObject = (CCharacter_dropCarriedObject *)core_charactr_cpp_CCharacter_dropCarriedObject_FUN_0042cfe0,
    .getCarryObjToBodyXForm = (CCharacter_getCarryObjToBodyXForm *)core_zombie_cpp_CZombie_getCarryObjToBodyXForm_FUN_005fb1f0,
    .setWalkTarget = (CCharacter_setWalkTarget *)core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920,
    .setWalkTargetImmediate = (CCharacter_setWalkTargetImmediate *)core_charactr_cpp_CCharacter_setWalkTargetImmediate_FUN_0042c9d0,
    .setWalkTimeout = (CCharacter_setWalkTimeout *)core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20,
    .isWalkComplete = (CCharacter_isWalkComplete *)core_charactr_cpp_CCharacter_isWalkComplete_FUN_0042ca30
};

// CConsole*
CConsole* g_CConsolePtr = (CConsole*)&g_CConsoleInstance;

// CDemonActor_vtable
CDemonActor_vtable g_CIcePickVTable = {
    .setup = (CDemonActor_setup *)core_icepick_cpp_CIcePick_setup_FUN_004f7e80,
    .process = (CDemonActor_process *)core_icepick_cpp_CIcePick_process_FUN_004f80b0,
    .renderOpaque = (CDemonActor_renderOpaque *)core_icepick_cpp_CIcePick_renderOpaque_FUN_004f95a0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0,
    .renderBackground = (CDemonActor_renderBackground *)core_charactr_cpp_CCharacter_renderBackground_FUN_0042a390,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_hero_cpp_CHero_canLookAt_FUN_004f37d0,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_charactr_cpp_CCharacter_drop_FUN_0042bf90,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_hero_cpp_CHero_testCylinderCollision_FUN_004f2580,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_hero_cpp_CHero_testLineIntersection_FUN_004f25c0,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_hero_cpp_CHero_getPathMap_FUN_004f2870,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0,
    .getActorType = (CDemonActor_getActorType *)core_icepick_cpp_CIcePick_getActorType_FUN_004f7de0,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_icepick_cpp_CIcePick_onActorDeleted_FUN_004f9780,
    .processInEditor = (CDemonActor_processInEditor *)core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800,
    .getPropertyList = (CDemonActor_getPropertyList *)core_icepick_cpp_CIcePick_getPropertyList_FUN_004f97a0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_icepick_cpp_CIcePick_addFilesToExtract_FUN_004f97c0,
    .dtor = (CDemonActor_dtor *)core_icepick_cpp_CIcePick_dtor_FUN_004f97e0,
    .archive = (CDemonActor_archive *)core_icepick_cpp_CIcePick_archive_FUN_004f9590
};
CDemonActor_vtable g_CImpVTable = {
    .setup = (CDemonActor_setup *)core_imp_cpp_CImp_setup_FUN_004f9910,
    .process = (CDemonActor_process *)core_imp_cpp_CImp_process_FUN_004f9c30,
    .renderOpaque = (CDemonActor_renderOpaque *)core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0,
    .renderBackground = (CDemonActor_renderBackground *)core_enemy_cpp_CEnemy_renderBackground_FUN_004a9fa0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_imp_cpp_CImp_hasCollision_FUN_004fb0f0,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_imp_cpp_CImp_getTargetPoints_FUN_004faf40,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_charactr_cpp_CCharacter_canLookAt_FUN_0042de50,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_charactr_cpp_CCharacter_drop_FUN_0042bf90,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0,
    .getActorType = (CDemonActor_getActorType *)core_imp_cpp_CImp_getActorType_FUN_004f9890,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0,
    .processInEditor = (CDemonActor_processInEditor *)core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800,
    .getPropertyList = (CDemonActor_getPropertyList *)core_imp_cpp_CImp_getPropertyList_FUN_004fb110,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_imp_cpp_CImp_addFilesToExtract_FUN_004fb150,
    .dtor = (CDemonActor_dtor *)core_imp_cpp_CImp_dtor_FUN_004fb180,
    .archive = (CDemonActor_archive *)core_imp_cpp_CImp_archive_FUN_004fab00
};
CDemonActor_vtable g_CKeyActorVTable = {
    .setup = (CDemonActor_setup *)core_keyactor_cpp_CKeyActor_setup_FUN_005016f0,
    .process = (CDemonActor_process *)core_keyactor_cpp_CKeyActor_process_FUN_00501710,
    .renderOpaque = (CDemonActor_renderOpaque *)core_keyactor_cpp_CKeyActor_renderOpaque_FUN_005017c0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_keyactor_cpp_CKeyActor_getBoundingBox_FUN_00501830,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_keyactor_cpp_CKeyActor_hasCollision_FUN_005018f0,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_keyactor_cpp_CKeyActor_onPickup_FUN_00501920,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_keyactor_cpp_CKeyActor_canPickup_FUN_00501900,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_keyactor_cpp_CKeyActor_getActorType_FUN_00501680,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040,
    .getPropertyList = (CDemonActor_getPropertyList *)core_keyactor_cpp_CKeyActor_getPropertyList_FUN_00501940,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_keyactor_cpp_CKeyActor_addFilesToExtract_FUN_00501990,
    .dtor = (CDemonActor_dtor *)core_keyactor_cpp_CKeyActor_dtor_FUN_005019b0,
    .archive = (CDemonActor_archive *)core_keyactor_cpp_CKeyActor_archive_FUN_00501880
};
CDemonActor_vtable g_CLadderVTable = {
    .setup = (CDemonActor_setup *)core_ladder_cpp_CLadder_setup_FUN_005025f0,
    .process = (CDemonActor_process *)core_ladder_cpp_CLadder_process_FUN_00502610,
    .renderOpaque = (CDemonActor_renderOpaque *)core_ladder_cpp_CLadder_renderOpaque_FUN_00502620,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_ladder_cpp_CLadder_getBoundingBox_FUN_005028c0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_ladder_cpp_CLadder_hasCollision_FUN_00502a40,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_ladder_cpp_CLadder_getGroundType_FUN_00502c90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_ladder_cpp_CLadder_getActorType_FUN_00502530,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_ladder_cpp_CLadder_onActorDeleted_FUN_00502e90,
    .processInEditor = (CDemonActor_processInEditor *)core_ladder_cpp_CLadder_processInEditor_FUN_00502d00,
    .getPropertyList = (CDemonActor_getPropertyList *)core_ladder_cpp_CLadder_getPropertyList_FUN_00502ca0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_ladder_cpp_CLadder_showEditorHelp_FUN_00502e50,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_ladder_cpp_CLadder_addFilesToExtract_FUN_00502eb0,
    .dtor = (CDemonActor_dtor *)core_ladder_cpp_CLadder_dtor_FUN_00502ed0,
    .archive = (CDemonActor_archive *)core_ladder_cpp_CLadder_archive_FUN_005029c0
};
CDemonActor_vtable g_CLarvaVTable = {
    .setup = (CDemonActor_setup *)core_larva_cpp_CLarva_setup_FUN_00503020,
    .process = (CDemonActor_process *)core_larva_cpp_CLarva_process_FUN_00503080,
    .renderOpaque = (CDemonActor_renderOpaque *)core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0,
    .renderBackground = (CDemonActor_renderBackground *)core_enemy_cpp_CEnemy_renderBackground_FUN_004a9fa0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_larva_cpp_CLarva_getTargetPoints_FUN_00503c00,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_charactr_cpp_CCharacter_canLookAt_FUN_0042de50,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_charactr_cpp_CCharacter_drop_FUN_0042bf90,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0,
    .getActorType = (CDemonActor_getActorType *)core_larva_cpp_CLarva_getActorType_FUN_00502f80,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0,
    .processInEditor = (CDemonActor_processInEditor *)core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800,
    .getPropertyList = (CDemonActor_getPropertyList *)core_larva_cpp_CLarva_getPropertyList_FUN_00503c50,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_larva_cpp_CLarva_addFilesToExtract_FUN_00503c90,
    .dtor = (CDemonActor_dtor *)core_larva_cpp_CLarva_dtor_FUN_00503cc0,
    .archive = (CDemonActor_archive *)core_larva_cpp_CLarva_archive_FUN_00503960
};
CDemonActor_vtable g_CLeverVTable = {
    .setup = (CDemonActor_setup *)core_lever_cpp_CLever_setup_FUN_005048a0,
    .process = (CDemonActor_process *)core_lever_cpp_CLever_process_FUN_00504920,
    .renderOpaque = (CDemonActor_renderOpaque *)core_lever_cpp_CLever_renderOpaque_FUN_00504cf0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_lever_cpp_CLever_getBoundingBox_FUN_00504d80,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_lever_cpp_CLever_hasCollision_FUN_00505060,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_lever_cpp_CLever_getActorType_FUN_005047c0,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040,
    .getPropertyList = (CDemonActor_getPropertyList *)core_lever_cpp_CLever_getPropertyList_FUN_00505240,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_lever_cpp_CLever_showEditorHelp_FUN_00505390,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_lever_cpp_CLever_addFilesToExtract_FUN_00505370,
    .dtor = (CDemonActor_dtor *)core_lever_cpp_CLever_dtor_FUN_00505430,
    .archive = (CDemonActor_archive *)core_lever_cpp_CLever_archive_FUN_00504e80
};
CDemonActor_vtable g_CLightGunVTable = {
    .setup = (CDemonActor_setup *)core_weapon_cpp_CWeapon_setup_FUN_005edff0,
    .process = (CDemonActor_process *)core_lightgun_cpp_CLightGun_process_FUN_00506450,
    .renderOpaque = (CDemonActor_renderOpaque *)core_weapon_cpp_CWeapon_renderOpaque_FUN_005ee030,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_weapon_cpp_CWeapon_getBoundingBox_FUN_005ee0c0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_weapon_cpp_CWeapon_hasCollision_FUN_005ee330,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_weapon_cpp_CWeapon_onPickup_FUN_005ee650,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_weapon_cpp_CWeapon_canPickup_FUN_005ee340,
    .pickup = (CDemonActor_pickup *)core_weapon_cpp_CWeapon_pickup_FUN_005ee3e0,
    .onDropped = (CDemonActor_onDropped *)core_weapon_cpp_CWeapon_onDropped_FUN_005ee3f0,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_weapon_cpp_CWeapon_getCarrier_FUN_005ee490,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_lightgun_cpp_CLightGun_getActorType_FUN_005058f0,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040,
    .getPropertyList = (CDemonActor_getPropertyList *)core_weapon_cpp_CWeapon_getPropertyList_FUN_005ee9f0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_lightgun_cpp_CLightGun_addFilesToExtract_FUN_005066f0,
    .dtor = (CDemonActor_dtor *)core_lightgun_cpp_CLightGun_dtor_FUN_00506a50,
    .archive = (CDemonActor_archive *)core_weapon_cpp_CWeapon_archive_FUN_005ee250
};
CDemonActor_vtable g_CLightConeVTable = {
    .setup = (CDemonActor_setup *)core_litecone_cpp_CLightCone_setup_FUN_00506bb0,
    .process = (CDemonActor_process *)core_litecone_cpp_CLightCone_process_FUN_00506bc0,
    .renderOpaque = (CDemonActor_renderOpaque *)core_actor_cpp_CDemonActor_renderOpaque_FUN_00408aa0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_litecone_cpp_CLightCone_renderTransparent_FUN_00506c20,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_litecone_cpp_CLightCone_getBoundingBox_FUN_00506cb0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_litecone_cpp_CLightCone_hasCollision_FUN_00506d90,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_litecone_cpp_CLightCone_getActorType_FUN_00506b00,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040,
    .getPropertyList = (CDemonActor_getPropertyList *)core_litecone_cpp_CLightCone_getPropertyList_FUN_00506da0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0,
    .dtor = (CDemonActor_dtor *)core_litecone_cpp_CLightCone_dtor_FUN_00506e30,
    .archive = (CDemonActor_archive *)core_litecone_cpp_CLightCone_archive_FUN_00506d00
};
CDemonActor_vtable g_CMansionPuzzleCircleVTable = {
    .setup = (CDemonActor_setup *)core_manpuz_cpp_CMansionPuzzleCircle_setup_FUN_00508a70,
    .process = (CDemonActor_process *)core_manpuz_cpp_CMansionPuzzleCircle_process_FUN_005091d0,
    .renderOpaque = (CDemonActor_renderOpaque *)core_manpuz_cpp_CMansionPuzzleCircle_renderOpaque_FUN_005090d0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_manpuz_cpp_CMansionPuzzleCircle_getBoundingBox_FUN_005092e0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_manpuz_cpp_CMansionPuzzleCircle_hasCollision_FUN_00509320,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_manpuz_cpp_CMansionPuzzleCircle_onLaserHit_FUN_005097e0,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_00509330,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_manpuz_cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_00509720,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_manpuz_cpp_CMansionPuzzleCircle_customGetFloorHeight_FUN_005097d0,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_manpuz_cpp_CMansionPuzzleCircle_getActorType_FUN_00508910,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_manpuz_cpp_CMansionPuzzleCircle_processInEditor_FUN_0050b440,
    .getPropertyList = (CDemonActor_getPropertyList *)core_manpuz_cpp_CMansionPuzzleCircle_getPropertyList_FUN_0050b3e0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_manpuz_cpp_CMansionPuzzleCircle_addFilesToExtract_FUN_0050b7d0,
    .dtor = (CDemonActor_dtor *)core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_0050b890,
    .archive = (CDemonActor_archive *)core_manpuz_cpp_CMansionPuzzleCircle_archive_FUN_0050adf0
};
CDemonActor_vtable g_CMirrorHackVTable = {
    .setup = (CDemonActor_setup *)core_manpuz_cpp_CMirrorHack_setup_FUN_0050b160,
    .process = (CDemonActor_process *)core_manpuz_cpp_CMirrorHack_process_FUN_0050b1d0,
    .renderOpaque = (CDemonActor_renderOpaque *)core_manpuz_cpp_CMirrorHack_renderOpaque_FUN_0050b180,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_manpuz_cpp_CMirrorHack_getBoundingBox_FUN_0050b260,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_manpuz_cpp_CMirrorHack_hasCollision_FUN_0050b2b0,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_manpuz_cpp_CMirrorHack_getInteractionInfo_FUN_0050b2f0,
    .startInteraction = (CDemonActor_startInteraction *)core_manpuz_cpp_CMirrorHack_startInteraction_FUN_0050b340,
    .updateInteraction = (CDemonActor_updateInteraction *)core_manpuz_cpp_CMirrorHack_updateInteraction_FUN_0050b360,
    .stopInteraction = (CDemonActor_stopInteraction *)core_manpuz_cpp_CMirrorHack_stopUsing_FUN_0050b3c0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_manpuz_cpp_CMirrorHack_onLaserHit_FUN_0050b2c0,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_manpuz_cpp_CMirrorHack_getActorType_FUN_0050b100,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040,
    .getPropertyList = (CDemonActor_getPropertyList *)core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_manpuz_cpp_CMirrorHack_addFilesToExtract_FUN_0050b810,
    .dtor = (CDemonActor_dtor *)core_manpuz_cpp_CMirrorHack_dtor_FUN_0050b840,
    .archive = (CDemonActor_archive *)core_actor_cpp_CDemonActor_archive_FUN_0040c1c0
};
CDemonActor_vtable g_CMarqueeVTable = {
    .setup = (CDemonActor_setup *)core_marquee_cpp_CMarquee_setup_FUN_0050bd60,
    .process = (CDemonActor_process *)core_marquee_cpp_CMarquee_process_FUN_0050bda0,
    .renderOpaque = (CDemonActor_renderOpaque *)core_marquee_cpp_CMarquee_renderOpaque_FUN_0050be50,
    .renderTransparent = (CDemonActor_renderTransparent *)core_marquee_cpp_CMarquee_renderTransparent_FUN_0050c050,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_marquee_cpp_CMarquee_getBoundingBox_FUN_0050c380,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_marquee_cpp_CMarquee_hasCollision_FUN_0050c370,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_marquee_cpp_CMarquee_getActorType_FUN_0050bb50,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040,
    .getPropertyList = (CDemonActor_getPropertyList *)core_marquee_cpp_CMarquee_getPropertyList_FUN_0050c3e0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_marquee_cpp_CMarquee_addFilesToExtract_FUN_0050c480,
    .dtor = (CDemonActor_dtor *)core_marquee_cpp_CMarquee_dtor_FUN_0050c4c0,
    .archive = (CDemonActor_archive *)core_marquee_cpp_CMarquee_archive_FUN_0050c2f0
};
CDemonActor_vtable g_CMeleeVTable = {
    .setup = (CDemonActor_setup *)core_weapon_cpp_CWeapon_setup_FUN_005edff0,
    .process = (CDemonActor_process *)core_melee_cpp_CMelee_process_FUN_0050ec10,
    .renderOpaque = (CDemonActor_renderOpaque *)core_weapon_cpp_CWeapon_renderOpaque_FUN_005ee030,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_weapon_cpp_CWeapon_getBoundingBox_FUN_005ee0c0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_weapon_cpp_CWeapon_hasCollision_FUN_005ee330,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_weapon_cpp_CWeapon_onPickup_FUN_005ee650,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_melee_cpp_CMelee_getAllowedMeleeAttackTypes_FUN_0050eae0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_melee_cpp_CMelee_fillAttackDamageInfo_FUN_0050eaf0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_melee_cpp_CMelee_playAttackHitEffects_FUN_0050eb50,
    .canPickup = (CDemonActor_canPickup *)core_melee_cpp_CMelee_canPickup_FUN_0050eab0,
    .pickup = (CDemonActor_pickup *)core_weapon_cpp_CWeapon_pickup_FUN_005ee3e0,
    .onDropped = (CDemonActor_onDropped *)core_weapon_cpp_CWeapon_onDropped_FUN_005ee3f0,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_weapon_cpp_CWeapon_getCarrier_FUN_005ee490,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_melee_cpp_CMelee_getActorType_FUN_0050e7c0,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040,
    .getPropertyList = (CDemonActor_getPropertyList *)core_melee_cpp_CMelee_getPropertyList_FUN_0050ecf0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_weapon_cpp_CWeapon_addFilesToExtract_FUN_005eea60,
    .dtor = (CDemonActor_dtor *)core_melee_cpp_CMelee_dtor_FUN_0050edf0,
    .archive = (CDemonActor_archive *)core_melee_cpp_CMelee_archive_FUN_0050e920
};
CDemonActor_vtable g_CMimicVTable = {
    .setup = (CDemonActor_setup *)core_mimic_cpp_CMimic_setup_FUN_0051f3e0,
    .process = (CDemonActor_process *)core_mimic_cpp_CMimic_process_FUN_0051f780,
    .renderOpaque = (CDemonActor_renderOpaque *)core_mimic_cpp_CMimic_renderOpaque_FUN_00520870,
    .renderTransparent = (CDemonActor_renderTransparent *)core_mimic_cpp_CMimic_renderTransparent_FUN_00520890,
    .renderBackground = (CDemonActor_renderBackground *)core_mimic_cpp_CMimic_renderBackground_FUN_005208b0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_mimic_cpp_CMimic_hasCollision_FUN_00520a00,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_enemy_cpp_CEnemy_getTargetPoints_FUN_004a97c0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_charactr_cpp_CCharacter_canLookAt_FUN_0042de50,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_charactr_cpp_CCharacter_drop_FUN_0042bf90,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0,
    .getActorType = (CDemonActor_getActorType *)core_mimic_cpp_CMimic_getActorType_FUN_0051f1c0,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_mimic_cpp_CMimic_onActorDeleted_FUN_00520da0,
    .processInEditor = (CDemonActor_processInEditor *)core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800,
    .getPropertyList = (CDemonActor_getPropertyList *)core_mimic_cpp_CMimic_getPropertyList_FUN_00520d10,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_mimic_cpp_CMimic_addFilesToExtract_FUN_00520dd0,
    .dtor = (CDemonActor_dtor *)core_mimic_cpp_CMimic_dtor_FUN_0051f2c0,
    .archive = (CDemonActor_archive *)core_mimic_cpp_CMimic_archive_FUN_00520930
};
CDemonActor_vtable g_CMinecarVTable = {
    .setup = (CDemonActor_setup *)core_minecar_cpp_CMinecar_setup_FUN_00520e90,
    .process = (CDemonActor_process *)core_minecar_cpp_CMinecar_process_FUN_00520eb0,
    .renderOpaque = (CDemonActor_renderOpaque *)core_platfrm_cpp_CPlatform_renderOpaque_FUN_0054d720,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_platfrm_cpp_CPlatform_renderBackground_FUN_0054d9b0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_platfrm_cpp_CPlatform_getBoundingBox_FUN_0054db70,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_platfrm_cpp_CPlatform_hasCollision_FUN_0054e180,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_platfrm_cpp_CPlatform_getGroundType_FUN_0054e1c0,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_platfrm_cpp_CPlatform_getBlockVirtualDirectorFlag_FUN_0054e1d0,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_platfrm_cpp_CPlatform_allowBulletHoles_FUN_0054e1a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_minecar_cpp_CMinecar_getActorType_FUN_00520e80,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_platfrm_cpp_CPlatform_processInEditor_FUN_0054ea00,
    .getPropertyList = (CDemonActor_getPropertyList *)core_platfrm_cpp_CPlatform_getPropertyList_FUN_0054e7d0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_platfrm_cpp_CPlatform_showEditorHelp_FUN_0054f060,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_platfrm_cpp_CPlatform_addFilesToExtract_FUN_0054f2a0,
    .dtor = (CDemonActor_dtor *)core_minecar_cpp_CMineCar_dtor_FUN_00520f40,
    .archive = (CDemonActor_archive *)core_platfrm_cpp_CPlatform_archive_FUN_0054dbc0
};
CDemonActor_vtable g_CMobsterVTable = {
    .setup = (CDemonActor_setup *)core_mobster_cpp_CMobster_setup_FUN_00525340,
    .process = (CDemonActor_process *)core_mobster_cpp_CMobster_process_FUN_00525840,
    .renderOpaque = (CDemonActor_renderOpaque *)core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0,
    .renderBackground = (CDemonActor_renderBackground *)core_enemy_cpp_CEnemy_renderBackground_FUN_004a9fa0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_mobster_cpp_CMobster_hasCollision_FUN_005279d0,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_mobster_cpp_CMobster_getTargetPoints_FUN_005278d0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_charactr_cpp_CCharacter_canLookAt_FUN_0042de50,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_charactr_cpp_CCharacter_drop_FUN_0042bf90,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0,
    .getActorType = (CDemonActor_getActorType *)core_mobster_cpp_CMobster_getActorType_FUN_005251f0,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0,
    .processInEditor = (CDemonActor_processInEditor *)core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800,
    .getPropertyList = (CDemonActor_getPropertyList *)core_mobster_cpp_CMobster_getPropertyList_FUN_00527b70,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_mobster_cpp_CMobster_addFilesToExtract_FUN_00527c40,
    .dtor = (CDemonActor_dtor *)core_mobster_cpp_CMobster_dtor_FUN_00527c70,
    .archive = (CDemonActor_archive *)core_mobster_cpp_CMobster_archive_FUN_00527230
};
CDemonActor_vtable g_CMolochVTable = {
    .setup = (CDemonActor_setup *)core_moloch_cpp_CMoloch_setup_FUN_00528c70,
    .process = (CDemonActor_process *)core_moloch_cpp_CMoloch_process_FUN_00528d20,
    .renderOpaque = (CDemonActor_renderOpaque *)core_moloch_cpp_CMoloch_renderOpaque_FUN_00529750,
    .renderTransparent = (CDemonActor_renderTransparent *)core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0,
    .renderBackground = (CDemonActor_renderBackground *)core_charactr_cpp_CCharacter_renderBackground_FUN_0042a390,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_hero_cpp_CHero_canLookAt_FUN_004f37d0,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_charactr_cpp_CCharacter_drop_FUN_0042bf90,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_hero_cpp_CHero_testCylinderCollision_FUN_004f2580,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_hero_cpp_CHero_testLineIntersection_FUN_004f25c0,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_hero_cpp_CHero_getPathMap_FUN_004f2870,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0,
    .getActorType = (CDemonActor_getActorType *)core_moloch_cpp_CMoloch_getActorType_FUN_00528b20,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0,
    .processInEditor = (CDemonActor_processInEditor *)core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800,
    .getPropertyList = (CDemonActor_getPropertyList *)core_moloch_cpp_CMoloch_getPropertyList_FUN_00529950,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_moloch_cpp_CMoloch_addFilesToExtract_FUN_005299b0,
    .dtor = (CDemonActor_dtor *)core_moloch_cpp_CMoloch_dtor_FUN_00528bf0,
    .archive = (CDemonActor_archive *)core_moloch_cpp_CMoloch_archive_FUN_00529880
};
CDemonActor_vtable g_CNPCVTable = {
    .setup = (CDemonActor_setup *)core_npc_cpp_CNPC_setup_FUN_00544870,
    .process = (CDemonActor_process *)core_npc_cpp_CNPC_process_FUN_005448b0,
    .renderOpaque = (CDemonActor_renderOpaque *)core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0,
    .renderBackground = (CDemonActor_renderBackground *)core_npc_cpp_CNPC_renderBackground_FUN_00544b70,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_charactr_cpp_CCharacter_canLookAt_FUN_0042de50,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_charactr_cpp_CCharacter_drop_FUN_0042bf90,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_npc_cpp_CNPC_getPathMap_FUN_00544e30,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0,
    .getActorType = (CDemonActor_getActorType *)core_npc_cpp_CNPC_getActorType_FUN_005447d0,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0,
    .processInEditor = (CDemonActor_processInEditor *)core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800,
    .getPropertyList = (CDemonActor_getPropertyList *)core_npc_cpp_CNPC_getPropertyList_FUN_00544e40,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0,
    .dtor = (CDemonActor_dtor *)core_npc_cpp_CNPC_dtor_FUN_004f4700,
    .archive = (CDemonActor_archive *)core_npc_cpp_CNPC_archive_FUN_00544ba0
};
CDemonActor_vtable g_CPassengerVTable = {
    .setup = (CDemonActor_setup *)core_passngr_cpp_CPassenger_setup_FUN_00545d30,
    .process = (CDemonActor_process *)core_passngr_cpp_CPassenger_process_FUN_00545ef0,
    .renderOpaque = (CDemonActor_renderOpaque *)core_passngr_cpp_CPassenger_renderOpaque_FUN_005460c0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0,
    .renderBackground = (CDemonActor_renderBackground *)core_npc_cpp_CNPC_renderBackground_FUN_00544b70,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_charactr_cpp_CCharacter_canLookAt_FUN_0042de50,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_charactr_cpp_CCharacter_drop_FUN_0042bf90,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_npc_cpp_CNPC_getPathMap_FUN_00544e30,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0,
    .getActorType = (CDemonActor_getActorType *)core_passngr_cpp_CPassenger_getActorType_FUN_00545b20,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0,
    .processInEditor = (CDemonActor_processInEditor *)core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800,
    .getPropertyList = (CDemonActor_getPropertyList *)core_passngr_cpp_CPassenger_getPropertyList_FUN_00546270,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_passngr_cpp_CPassenger_addFilesToExtract_FUN_005462f0,
    .dtor = (CDemonActor_dtor *)core_passngr_cpp_CPassenger_dtor_FUN_00545c10,
    .archive = (CDemonActor_archive *)core_passngr_cpp_CPassenger_archive_FUN_00546190
};
CDemonActor_vtable g_CPendulumVTable = {
    .setup = (CDemonActor_setup *)core_pendulum_cpp_CPendulum_setup_FUN_005494a0,
    .process = (CDemonActor_process *)core_pendulum_cpp_CPendulum_process_FUN_0054a180,
    .renderOpaque = (CDemonActor_renderOpaque *)core_pendulum_cpp_CPendulum_renderOpaque_FUN_0054a2f0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_pendulum_cpp_CPendulum_getBoundingBox_FUN_0054a360,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_pendulum_cpp_CPendulum_hasCollision_FUN_0054a550,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_pendulum_cpp_CPendulum_getGroundType_FUN_0054a590,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_pendulum_cpp_CPendulum_getActorType_FUN_00549380,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_pendulum_cpp_CPendulum_processInEditor_FUN_0054a790,
    .getPropertyList = (CDemonActor_getPropertyList *)core_pendulum_cpp_CPendulum_getPropertyList_FUN_0054a5f0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_pendulum_cpp_CPendulum_addFilesToExtract_FUN_0054a7b0,
    .dtor = (CDemonActor_dtor *)core_pendulum_cpp_CPendulum_dtor_FUN_0054a7d0,
    .archive = (CDemonActor_archive *)core_pendulum_cpp_CPendulum_archive_FUN_0054a3b0
};
CDemonActor_vtable g_CPlatformVTable = {
    .setup = (CDemonActor_setup *)core_platfrm_cpp_CPlatform_setup_FUN_0054ca20,
    .process = (CDemonActor_process *)core_platfrm_cpp_CPlatform_process_FUN_0054cc30,
    .renderOpaque = (CDemonActor_renderOpaque *)core_platfrm_cpp_CPlatform_renderOpaque_FUN_0054d720,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_platfrm_cpp_CPlatform_renderBackground_FUN_0054d9b0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_platfrm_cpp_CPlatform_getBoundingBox_FUN_0054db70,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_platfrm_cpp_CPlatform_hasCollision_FUN_0054e180,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_platfrm_cpp_CPlatform_getGroundType_FUN_0054e1c0,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_platfrm_cpp_CPlatform_getBlockVirtualDirectorFlag_FUN_0054e1d0,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_platfrm_cpp_CPlatform_allowBulletHoles_FUN_0054e1a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_platfrm_cpp_CPlatform_getActorType_FUN_0054c840,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_platfrm_cpp_CPlatform_processInEditor_FUN_0054ea00,
    .getPropertyList = (CDemonActor_getPropertyList *)core_platfrm_cpp_CPlatform_getPropertyList_FUN_0054e7d0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_platfrm_cpp_CPlatform_showEditorHelp_FUN_0054f060,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_platfrm_cpp_CPlatform_addFilesToExtract_FUN_0054f2a0,
    .dtor = (CDemonActor_dtor *)core_conveyor_cpp_CPlatform_dtor_FUN_00442380,
    .archive = (CDemonActor_archive *)core_platfrm_cpp_CPlatform_archive_FUN_0054dbc0
};
CDemonActor_vtable g_CScatVTable = {
    .setup = (CDemonActor_setup *)core_scat_cpp_CScat_setup_FUN_00556f90,
    .process = (CDemonActor_process *)core_scat_cpp_CScat_process_FUN_005571f0,
    .renderOpaque = (CDemonActor_renderOpaque *)core_scat_cpp_CScat_renderOpaque_FUN_00557df0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0,
    .renderBackground = (CDemonActor_renderBackground *)core_charactr_cpp_CCharacter_renderBackground_FUN_0042a390,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_hero_cpp_CHero_canLookAt_FUN_004f37d0,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_charactr_cpp_CCharacter_drop_FUN_0042bf90,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_hero_cpp_CHero_testCylinderCollision_FUN_004f2580,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_hero_cpp_CHero_testLineIntersection_FUN_004f25c0,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_hero_cpp_CHero_getPathMap_FUN_004f2870,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0,
    .getActorType = (CDemonActor_getActorType *)core_scat_cpp_CScat_getActorType_FUN_00556ec0,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_scat_cpp_CScat_onActorDeleted_FUN_00559100,
    .processInEditor = (CDemonActor_processInEditor *)core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800,
    .getPropertyList = (CDemonActor_getPropertyList *)core_scat_cpp_CScat_getPropertyList_FUN_00559120,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_scat_cpp_CScat_addFilesToExtract_FUN_00559140,
    .dtor = (CDemonActor_dtor *)core_scat_cpp_CScat_dtor_FUN_00559160,
    .archive = (CDemonActor_archive *)core_scat_cpp_CSCat_archive_FUN_00557db0
};
CDemonActor_vtable g_CSentinelVTable = {
    .setup = (CDemonActor_setup *)core_sentinel_cpp_CSentinel_setup_FUN_00567e20,
    .process = (CDemonActor_process *)core_sentinel_cpp_CSentinel_process_FUN_00568030,
    .renderOpaque = (CDemonActor_renderOpaque *)core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0,
    .renderBackground = (CDemonActor_renderBackground *)core_enemy_cpp_CEnemy_renderBackground_FUN_004a9fa0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_sentinel_cpp_CSentinel_hasCollision_FUN_00568ef0,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_sentinel_cpp_CSentinel_getTargetPoints_FUN_00568dd0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_charactr_cpp_CCharacter_canLookAt_FUN_0042de50,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_charactr_cpp_CCharacter_drop_FUN_0042bf90,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0,
    .getActorType = (CDemonActor_getActorType *)core_sentinel_cpp_CSentinel_getActorType_FUN_00567da0,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0,
    .processInEditor = (CDemonActor_processInEditor *)core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800,
    .getPropertyList = (CDemonActor_getPropertyList *)core_sentinel_cpp_CSentinel_getPropertyList_FUN_00568f10,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_sentinel_cpp_CSentinel_addFilesToExtract_FUN_00568f50,
    .dtor = (CDemonActor_dtor *)core_sentinel_cpp_CSentinel_dtor_FUN_00568f80,
    .archive = (CDemonActor_archive *)core_sentinel_cpp_CSentinel_archive_FUN_00568c70
};
CDemonActor_vtable g_CShotgunVTable = {
    .setup = (CDemonActor_setup *)core_weapon_cpp_CWeapon_setup_FUN_005edff0,
    .process = (CDemonActor_process *)core_shotgun_cpp_CShotgun_process_FUN_00587f70,
    .renderOpaque = (CDemonActor_renderOpaque *)core_weapon_cpp_CWeapon_renderOpaque_FUN_005ee030,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_weapon_cpp_CWeapon_getBoundingBox_FUN_005ee0c0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_weapon_cpp_CWeapon_hasCollision_FUN_005ee330,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_weapon_cpp_CWeapon_onPickup_FUN_005ee650,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_weapon_cpp_CWeapon_canPickup_FUN_005ee340,
    .pickup = (CDemonActor_pickup *)core_weapon_cpp_CWeapon_pickup_FUN_005ee3e0,
    .onDropped = (CDemonActor_onDropped *)core_weapon_cpp_CWeapon_onDropped_FUN_005ee3f0,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_weapon_cpp_CWeapon_getCarrier_FUN_005ee490,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_shotgun_cpp_CShotgun_getActorType_FUN_00587ed0,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040,
    .getPropertyList = (CDemonActor_getPropertyList *)core_weapon_cpp_CWeapon_getPropertyList_FUN_005ee9f0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_weapon_cpp_CWeapon_addFilesToExtract_FUN_005eea60,
    .dtor = (CDemonActor_dtor *)core_shotgun_cpp_CShotgun_dtor_FUN_00588ae0,
    .archive = (CDemonActor_archive *)core_weapon_cpp_CWeapon_archive_FUN_005ee250
};
CDemonActor_vtable g_CShovelVTable = {
    .setup = (CDemonActor_setup *)core_weapon_cpp_CWeapon_setup_FUN_005edff0,
    .process = (CDemonActor_process *)core_weapon_cpp_CWeapon_process_FUN_005ee110,
    .renderOpaque = (CDemonActor_renderOpaque *)core_weapon_cpp_CWeapon_renderOpaque_FUN_005ee030,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_weapon_cpp_CWeapon_getBoundingBox_FUN_005ee0c0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_weapon_cpp_CWeapon_hasCollision_FUN_005ee330,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_weapon_cpp_CWeapon_onPickup_FUN_005ee650,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_weapon_cpp_CWeapon_canPickup_FUN_005ee340,
    .pickup = (CDemonActor_pickup *)core_weapon_cpp_CWeapon_pickup_FUN_005ee3e0,
    .onDropped = (CDemonActor_onDropped *)core_weapon_cpp_CWeapon_onDropped_FUN_005ee3f0,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_weapon_cpp_CWeapon_getCarrier_FUN_005ee490,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_shovel_cpp_CShovel_getActorType_FUN_00588b90,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040,
    .getPropertyList = (CDemonActor_getPropertyList *)core_weapon_cpp_CWeapon_getPropertyList_FUN_005ee9f0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_weapon_cpp_CWeapon_addFilesToExtract_FUN_005eea60,
    .dtor = (CDemonActor_dtor *)core_shovel_cpp_CShovel_dtor_FUN_00588c80,
    .archive = (CDemonActor_archive *)core_weapon_cpp_CWeapon_archive_FUN_005ee250
};
CDemonActor_vtable g_CSimBoxVTable = {
    .setup = (CDemonActor_setup *)core_simbox_cpp_CSimBox_setup_FUN_00588e00,
    .process = (CDemonActor_process *)core_simbox_cpp_CSimBox_process_FUN_00588f20,
    .renderOpaque = (CDemonActor_renderOpaque *)core_simbox_cpp_CSimBox_renderOpaque_FUN_005890f0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_simbox_cpp_CSimBox_getBoundingBox_FUN_00589160,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_simbox_cpp_CSimBox_hasCollision_FUN_00589260,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_simbox_cpp_CSimBox_getActorType_FUN_00588d30,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040,
    .getPropertyList = (CDemonActor_getPropertyList *)core_simbox_cpp_CSimBox_getPropertyList_FUN_00589310,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_simbox_cpp_CSimBox_addFilesToExtract_FUN_005893c0,
    .dtor = (CDemonActor_dtor *)core_simbox_cpp_CSimBox_dtor_FUN_005893e0,
    .archive = (CDemonActor_archive *)core_simbox_cpp_CSimBox_archive_FUN_005891b0
};
CDemonActor_vtable g_CSmileyVTable = {
    .setup = (CDemonActor_setup *)core_smiley_cpp_CSmiley_setup_FUN_005a24d0,
    .process = (CDemonActor_process *)core_smiley_cpp_CSmiley_process_FUN_005a2800,
    .renderOpaque = (CDemonActor_renderOpaque *)core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0,
    .renderBackground = (CDemonActor_renderBackground *)core_enemy_cpp_CEnemy_renderBackground_FUN_004a9fa0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_smiley_cpp_CSmiley_hasCollision_FUN_005a37f0,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_smiley_cpp_CSmiley_getTargetPoints_FUN_005a3690,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_charactr_cpp_CCharacter_canLookAt_FUN_0042de50,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_charactr_cpp_CCharacter_drop_FUN_0042bf90,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0,
    .getActorType = (CDemonActor_getActorType *)core_smiley_cpp_CSmiley_getActorType_FUN_005a2420,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0,
    .processInEditor = (CDemonActor_processInEditor *)core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800,
    .getPropertyList = (CDemonActor_getPropertyList *)core_smiley_cpp_CSmiley_getPropertyList_FUN_005a3810,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_smiley_cpp_CSmiley_addFilesToExtract_FUN_005a3850,
    .dtor = (CDemonActor_dtor *)core_smiley_cpp_CSmiley_dtor_FUN_005a3880,
    .archive = (CDemonActor_archive *)core_smiley_cpp_CSmiley_archive_FUN_005a3220
};
CDemonActor_vtable g_CSpikeVTable = {
    .setup = (CDemonActor_setup *)core_spike_cpp_CSpike_setup_FUN_005b8360,
    .process = (CDemonActor_process *)core_spike_cpp_CSpike_process_FUN_005b8410,
    .renderOpaque = (CDemonActor_renderOpaque *)core_spike_cpp_CSpike_renderOpaque_FUN_005b8730,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_spike_cpp_CSpike_getBoundingBox_FUN_005b87a0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_spike_cpp_CSpike_hasCollision_FUN_005b8940,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_spike_cpp_CSpike_getActorType_FUN_005b8210,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_spike_cpp_CSpike_processInEditor_FUN_005b9020,
    .getPropertyList = (CDemonActor_getPropertyList *)core_spike_cpp_CSpike_getPropertyList_FUN_005b8e90,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_spike_cpp_CSpike_addFilesToExtract_FUN_005b9030,
    .dtor = (CDemonActor_dtor *)core_spike_cpp_CSpike_dtor_FUN_005b9050,
    .archive = (CDemonActor_archive *)core_spike_cpp_CSpike_archive_FUN_005b87f0
};
CDemonActor_vtable g_CStairsVTable = {
    .setup = (CDemonActor_setup *)core_stairs_cpp_CStairs_setup_FUN_005b9be0,
    .process = (CDemonActor_process *)core_stairs_cpp_CStairs_process_FUN_005b9c00,
    .renderOpaque = (CDemonActor_renderOpaque *)core_stairs_cpp_CStairs_renderOpaque_FUN_005b9c10,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_stairs_cpp_CStairs_getBoundingBox_FUN_005ba490,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_stairs_cpp_CStairs_hasCollision_FUN_005ba570,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_stairs_cpp_CStairs_getGroundType_FUN_005ba6f0,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_stairs_cpp_CStairs_customRayIntersect_FUN_005ba590,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_stairs_cpp_CStairs_customIntersectCylinderXZ_FUN_005ba660,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_stairs_cpp_CStairs_customGetFloorHeight_FUN_005ba6a0,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_stairs_cpp_CStairs_getActorType_FUN_005b9b60,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_stairs_cpp_CStairs_onActorDeleted_FUN_005babf0,
    .processInEditor = (CDemonActor_processInEditor *)core_stairs_cpp_CStairs_processInEditor_FUN_005ba900,
    .getPropertyList = (CDemonActor_getPropertyList *)core_stairs_cpp_CStairs_getPropertyList_FUN_005ba840,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_stairs_cpp_CStairs_showEditorHelp_FUN_005bab90,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0,
    .dtor = (CDemonActor_dtor *)core_stairs_cpp_CStairs_dtor_FUN_005bac10,
    .archive = (CDemonActor_archive *)core_stairs_cpp_CStairs_archive_FUN_005ba4f0
};
CDemonActor_vtable g_CTempleStoneVTable = {
    .setup = (CDemonActor_setup *)core_boxactor_cpp_CBoxActor_setup_FUN_00421830,
    .process = (CDemonActor_process *)core_boxactor_cpp_CBoxActor_process_FUN_004219e0,
    .renderOpaque = (CDemonActor_renderOpaque *)core_boxactor_cpp_CBoxActor_renderOpaque_FUN_00421e00,
    .renderTransparent = (CDemonActor_renderTransparent *)core_boxactor_cpp_CBoxActor_renderTransparent_FUN_00421ef0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_boxactor_cpp_CBoxActor_getBoundingBox_FUN_00421fe0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_boxactor_cpp_CBoxActor_hasCollision_FUN_00422340,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_boxactor_cpp_CBoxActor_getGroundType_FUN_00422560,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_boxactor_cpp_CBoxActor_getBlockVirtualDirectorFlag_FUN_00422330,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_boxactor_cpp_CBoxActor_setPositionAndOrientation_FUN_00422640,
    .onPickup = (CDemonActor_onPickup *)core_boxactor_cpp_CBoxActor_onPickup_FUN_00422570,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_boxactor_cpp_CBoxActor_getAllowedMeleeAttackTypes_FUN_004226d0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_stone_cpp_CTempleStone_canPickup_FUN_005bad70,
    .pickup = (CDemonActor_pickup *)core_boxactor_cpp_CBoxActor_pickup_FUN_004224e0,
    .onDropped = (CDemonActor_onDropped *)core_boxactor_cpp_CBoxActor_onDropped_FUN_004224f0,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_boxactor_cpp_CBoxActor_getCarrier_FUN_00422550,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_stone_cpp_CTempleStone_getActorType_FUN_005bad00,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_boxactor_cpp_CBoxActor_processInEditor_FUN_004228e0,
    .getPropertyList = (CDemonActor_getPropertyList *)core_stone_cpp_CTempleStone_getPropertyList_FUN_005badd0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_boxactor_cpp_CBoxActor_addFilesToExtract_FUN_00422900,
    .dtor = (CDemonActor_dtor *)core_stone_cpp_CTempleStone_dtor_FUN_005bae10,
    .archive = (CDemonActor_archive *)core_stone_cpp_CTempleStone_archive_FUN_005bad40
};
CDemonActor_vtable g_CStrangerVTable = {
    .setup = (CDemonActor_setup *)core_stranger_cpp_CStranger_setup_FUN_005bb4b0,
    .process = (CDemonActor_process *)core_stranger_cpp_CStranger_process_FUN_005bb830,
    .renderOpaque = (CDemonActor_renderOpaque *)core_stranger_cpp_CStranger_renderOpaque_FUN_005c3150,
    .renderTransparent = (CDemonActor_renderTransparent *)core_stranger_cpp_CStranger_renderTransparent_FUN_005c3710,
    .renderBackground = (CDemonActor_renderBackground *)core_charactr_cpp_CCharacter_renderBackground_FUN_0042a390,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_hero_cpp_CHero_canLookAt_FUN_004f37d0,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_stranger_cpp_CStranger_setPositionAndOrientation_FUN_005bfb10,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_stranger_cpp_CStranger_drop_FUN_005c6850,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_hero_cpp_CHero_testCylinderCollision_FUN_004f2580,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_hero_cpp_CHero_testLineIntersection_FUN_004f25c0,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_hero_cpp_CHero_getPathMap_FUN_004f2870,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0,
    .getActorType = (CDemonActor_getActorType *)core_stranger_cpp_CStranger_getActorType_FUN_005bb110,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_stranger_cpp_CStranger_onActorDeleted_FUN_005c68a0,
    .processInEditor = (CDemonActor_processInEditor *)core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800,
    .getPropertyList = (CDemonActor_getPropertyList *)core_stranger_cpp_CStranger_getPropertyList_FUN_005c68f0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_stranger_cpp_CStranger_addFilesToExtract_FUN_005c6910,
    .dtor = (CDemonActor_dtor *)core_stranger_cpp_CStranger_dtor_FUN_005c69c0,
    .archive = (CDemonActor_archive *)core_stranger_cpp_CStranger_archive_FUN_005c2fe0
};
CDemonActor_vtable g_CSuccubusVTable = {
    .setup = (CDemonActor_setup *)core_succubus_cpp_CSuccubus_setup_FUN_005c6b60,
    .process = (CDemonActor_process *)core_succubus_cpp_CSuccubus_process_FUN_005c6e90,
    .renderOpaque = (CDemonActor_renderOpaque *)core_succubus_cpp_CSuccubus_renderOpaque_FUN_005c7590,
    .renderTransparent = (CDemonActor_renderTransparent *)core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0,
    .renderBackground = (CDemonActor_renderBackground *)core_enemy_cpp_CEnemy_renderBackground_FUN_004a9fa0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_succubus_cpp_CSuccubus_hasCollision_FUN_005c7790,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_succubus_cpp_CSuccubus_getTargetPoints_FUN_005c7780,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_charactr_cpp_CCharacter_canLookAt_FUN_0042de50,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_charactr_cpp_CCharacter_drop_FUN_0042bf90,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0,
    .getActorType = (CDemonActor_getActorType *)core_succubus_cpp_CSuccubus_getActorType_FUN_005c6a70,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0,
    .processInEditor = (CDemonActor_processInEditor *)core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800,
    .getPropertyList = (CDemonActor_getPropertyList *)core_succubus_cpp_CSuccubus_getPropertyList_FUN_005c77b0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_succubus_cpp_CSuccubus_addFilesToExtract_FUN_005c77f0,
    .dtor = (CDemonActor_dtor *)core_succubus_cpp_CSuccubus_dtor_FUN_005c7820,
    .archive = (CDemonActor_archive *)core_succubus_cpp_CSuccubus_archive_FUN_005c7710
};
CDemonActor_vtable g_CSvetlanaVTable = {
    .setup = (CDemonActor_setup *)core_svetlana_cpp_CSvetlana_setup_FUN_005d88e0,
    .process = (CDemonActor_process *)core_svetlana_cpp_CSvetlana_process_FUN_005d8ba0,
    .renderOpaque = (CDemonActor_renderOpaque *)core_svetlana_cpp_CSvetlana_renderOpaque_FUN_005d9bc0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0,
    .renderBackground = (CDemonActor_renderBackground *)core_charactr_cpp_CCharacter_renderBackground_FUN_0042a390,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_hero_cpp_CHero_canLookAt_FUN_004f37d0,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_charactr_cpp_CCharacter_drop_FUN_0042bf90,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_hero_cpp_CHero_testCylinderCollision_FUN_004f2580,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_hero_cpp_CHero_testLineIntersection_FUN_004f25c0,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_hero_cpp_CHero_getPathMap_FUN_004f2870,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0,
    .getActorType = (CDemonActor_getActorType *)core_svetlana_cpp_CSvetlana_getActorType_FUN_005d8840,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_svetlana_cpp_CSvetlana_onActorDeleted_FUN_005d9ef0,
    .processInEditor = (CDemonActor_processInEditor *)core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800,
    .getPropertyList = (CDemonActor_getPropertyList *)core_svetlana_cpp_CSvetlana_getPropertyList_FUN_005d9f10,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_svetlana_cpp_CSvetlana_addFilesToExtract_FUN_005d9f30,
    .dtor = (CDemonActor_dtor *)core_svetlana_cpp_CSvetlana_dtor_FUN_005d9f50,
    .archive = (CDemonActor_archive *)core_svetlana_cpp_CSVetlana_archive_FUN_005d9bb0
};
CDemonActor_vtable g_CBassPlayerVTable = {
    .setup = (CDemonActor_setup *)core_tbplayer_cpp_CBassPlayer_setup_FUN_005da090,
    .process = (CDemonActor_process *)core_npc_cpp_CNPC_process_FUN_005448b0,
    .renderOpaque = (CDemonActor_renderOpaque *)core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0,
    .renderBackground = (CDemonActor_renderBackground *)core_npc_cpp_CNPC_renderBackground_FUN_00544b70,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_charactr_cpp_CCharacter_canLookAt_FUN_0042de50,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_charactr_cpp_CCharacter_drop_FUN_0042bf90,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_npc_cpp_CNPC_getPathMap_FUN_00544e30,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0,
    .getActorType = (CDemonActor_getActorType *)core_tbplayer_cpp_CBassPlayer_getActorType_FUN_005da050,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0,
    .processInEditor = (CDemonActor_processInEditor *)core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800,
    .getPropertyList = (CDemonActor_getPropertyList *)core_npc_cpp_CNPC_getPropertyList_FUN_00544e40,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0,
    .dtor = (CDemonActor_dtor *)core_tbplayer_cpp_CBassPlayer_dtor_FUN_005da610,
    .archive = (CDemonActor_archive *)core_npc_cpp_CNPC_archive_FUN_00544ba0
};
CDemonActor_vtable g_CDrummerVTable = {
    .setup = (CDemonActor_setup *)core_tbplayer_cpp_CDrummer_setup_FUN_005da2f0,
    .process = (CDemonActor_process *)core_npc_cpp_CNPC_process_FUN_005448b0,
    .renderOpaque = (CDemonActor_renderOpaque *)core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0,
    .renderBackground = (CDemonActor_renderBackground *)core_npc_cpp_CNPC_renderBackground_FUN_00544b70,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_charactr_cpp_CCharacter_canLookAt_FUN_0042de50,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_charactr_cpp_CCharacter_drop_FUN_0042bf90,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_npc_cpp_CNPC_getPathMap_FUN_00544e30,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0,
    .getActorType = (CDemonActor_getActorType *)core_tbplayer_cpp_CDrummer_getActorType_FUN_005da2b0,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0,
    .processInEditor = (CDemonActor_processInEditor *)core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800,
    .getPropertyList = (CDemonActor_getPropertyList *)core_npc_cpp_CNPC_getPropertyList_FUN_00544e40,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0,
    .dtor = (CDemonActor_dtor *)core_tbplayer_cpp_CDrummer_dtor_FUN_005da540,
    .archive = (CDemonActor_archive *)core_npc_cpp_CNPC_archive_FUN_00544ba0
};
CDemonActor_vtable g_CTeleportDestVTable = {
    .setup = (CDemonActor_setup *)core_actor_cpp_CDemonActor_setup_FUN_00408bb0,
    .process = (CDemonActor_process *)core_actor_cpp_CDemonActor_process_FUN_00408a80,
    .renderOpaque = (CDemonActor_renderOpaque *)core_teleport_cpp_CTeleportDest_renderOpaque_FUN_005da7d0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_teleport_cpp_CTeleportDest_getBoundingBox_FUN_005da790,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_teleport_cpp_CTeleportDest_hasCollision_FUN_005da7c0,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_teleport_cpp_CTeleportDest_getActorType_FUN_005da760,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_teleport_cpp_CTeleportDest_processInEditor_FUN_005da870,
    .getPropertyList = (CDemonActor_getPropertyList *)core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_teleport_cpp_CTeleportDest_showEditorHelp_FUN_005da970,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0,
    .dtor = (CDemonActor_dtor *)core_teleport_cpp_CTeleportDest_dtor_FUN_005daea0,
    .archive = (CDemonActor_archive *)core_actor_cpp_CDemonActor_archive_FUN_0040c1c0
};
CDemonActor_vtable g_CTeleportVTable = {
    .setup = (CDemonActor_setup *)core_actor_cpp_CDemonActor_setup_FUN_00408bb0,
    .process = (CDemonActor_process *)core_teleport_cpp_CTeleport_process_FUN_005daa20,
    .renderOpaque = (CDemonActor_renderOpaque *)core_teleport_cpp_CTeleport_renderOpaque_FUN_005dae10,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_teleport_cpp_CTeleport_getBoundingBox_FUN_005daad0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_teleport_cpp_CTeleportDest_hasCollision_FUN_005da7c0,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_teleport_cpp_CTeleport_getActorType_FUN_005da9d0,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_teleport_cpp_CTeleport_onActorDeleted_FUN_005dab70,
    .processInEditor = (CDemonActor_processInEditor *)core_teleport_cpp_CTeleport_processInEditor_FUN_005dabe0,
    .getPropertyList = (CDemonActor_getPropertyList *)core_teleport_cpp_CTeleport_getPropertyList_FUN_005daba0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_teleport_cpp_CTeleport_showEditorHelp_FUN_005dadc0,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0,
    .dtor = (CDemonActor_dtor *)core_teleport_cpp_CTeleport_dtor_FUN_005dae50,
    .archive = (CDemonActor_archive *)core_teleport_cpp_CTeleport_archive_FUN_005dab30
};
CDemonActor_vtable g_CTentacleVTable = {
    .setup = (CDemonActor_setup *)core_tentacle_cpp_CTentacle_setup_FUN_005dafc0,
    .process = (CDemonActor_process *)core_tentacle_cpp_CTentacle_process_FUN_005db050,
    .renderOpaque = (CDemonActor_renderOpaque *)core_tentacle_cpp_CTentacle_renderOpaque_FUN_005db840,
    .renderTransparent = (CDemonActor_renderTransparent *)core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0,
    .renderBackground = (CDemonActor_renderBackground *)core_enemy_cpp_CEnemy_renderBackground_FUN_004a9fa0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_enemy_cpp_CEnemy_getTargetPoints_FUN_004a97c0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_charactr_cpp_CCharacter_canLookAt_FUN_0042de50,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_tentacle_cpp_CTentacle_shouldIgnoreForTargeting_FUN_005dbb30,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_charactr_cpp_CCharacter_drop_FUN_0042bf90,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0,
    .getActorType = (CDemonActor_getActorType *)core_tentacle_cpp_CTentacle_getActorType_FUN_005daf50,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0,
    .processInEditor = (CDemonActor_processInEditor *)core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800,
    .getPropertyList = (CDemonActor_getPropertyList *)core_tentacle_cpp_CTentacle_getPropertyList_FUN_005dbc60,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_tentacle_cpp_CTentacle_addFilesToExtract_FUN_005dbcc0,
    .dtor = (CDemonActor_dtor *)core_tentacle_cpp_CTentacle_dtor_FUN_005dbcf0,
    .archive = (CDemonActor_archive *)core_tentacle_cpp_CTentacle_archive_FUN_005db880
};
CDemonActor_vtable g_CTommyGunVTable = {
    .setup = (CDemonActor_setup *)core_weapon_cpp_CWeapon_setup_FUN_005edff0,
    .process = (CDemonActor_process *)core_tommygun_cpp_CTommyGun_process_FUN_005de360,
    .renderOpaque = (CDemonActor_renderOpaque *)core_weapon_cpp_CWeapon_renderOpaque_FUN_005ee030,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_weapon_cpp_CWeapon_getBoundingBox_FUN_005ee0c0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_weapon_cpp_CWeapon_hasCollision_FUN_005ee330,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_weapon_cpp_CWeapon_onPickup_FUN_005ee650,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_weapon_cpp_CWeapon_canPickup_FUN_005ee340,
    .pickup = (CDemonActor_pickup *)core_weapon_cpp_CWeapon_pickup_FUN_005ee3e0,
    .onDropped = (CDemonActor_onDropped *)core_weapon_cpp_CWeapon_onDropped_FUN_005ee3f0,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_weapon_cpp_CWeapon_getCarrier_FUN_005ee490,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_tommygun_cpp_CTommyGun_getActorType_FUN_005dda80,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040,
    .getPropertyList = (CDemonActor_getPropertyList *)core_weapon_cpp_CWeapon_getPropertyList_FUN_005ee9f0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_weapon_cpp_CWeapon_addFilesToExtract_FUN_005eea60,
    .dtor = (CDemonActor_dtor *)core_tommygun_cpp_CTommyGun_dtor_FUN_005de5d0,
    .archive = (CDemonActor_archive *)core_weapon_cpp_CWeapon_archive_FUN_005ee250
};
CDemonActor_vtable g_CTrapVTable = {
    .setup = (CDemonActor_setup *)core_trap_cpp_CTrap_setup_FUN_005de6e0,
    .process = (CDemonActor_process *)core_trap_cpp_CTrap_process_FUN_005de770,
    .renderOpaque = (CDemonActor_renderOpaque *)core_trap_cpp_CTrap_renderOpaque_FUN_005de920,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_trap_cpp_CTrap_getBoundingBox_FUN_005dea00,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_trap_cpp_CTrap_hasCollision_FUN_005de720,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_trap_cpp_CTrap_canPickup_FUN_005de710,
    .pickup = (CDemonActor_pickup *)core_trap_cpp_CTrap_pickup_FUN_005de740,
    .onDropped = (CDemonActor_onDropped *)core_trap_cpp_CTrap_onDropped_FUN_005de750,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_trap_cpp_CTrap_getCarrier_FUN_005de760,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_trap_cpp_CTrap_getActorType_FUN_005de680,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040,
    .getPropertyList = (CDemonActor_getPropertyList *)core_trap_cpp_CTrap_getPropertyList_FUN_005dea50,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_trap_cpp_CTrap_addFilesToExtract_FUN_005dea90,
    .dtor = (CDemonActor_dtor *)core_trap_cpp_CTrap_dtor_FUN_005deab0,
    .archive = (CDemonActor_archive *)core_trap_cpp_CTrap_archive_FUN_005de9c0
};
CDemonActor_vtable g_CTrashVTable = {
    .setup = (CDemonActor_setup *)core_trash_cpp_CTrash_setup_FUN_005debc0,
    .process = (CDemonActor_process *)core_trash_cpp_CTrash_process_FUN_005decf0,
    .renderOpaque = (CDemonActor_renderOpaque *)core_trash_cpp_CTrash_renderOpaque_FUN_005df550,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_trash_cpp_CTrash_getBoundingBox_FUN_005df610,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_trash_cpp_CTrash_hasCollision_FUN_005df6d0,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_trash_cpp_CTrash_getActorType_FUN_005deb60,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_trash_cpp_CTrash_processInEditor_FUN_005df750,
    .getPropertyList = (CDemonActor_getPropertyList *)core_trash_cpp_CTrash_getPropertyList_FUN_005df6e0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_trash_cpp_CTrash_addFilesToExtract_FUN_005df720,
    .dtor = (CDemonActor_dtor *)core_trash_cpp_CTrash_dtor_FUN_005df780,
    .archive = (CDemonActor_archive *)core_trash_cpp_CTrash_archive_FUN_005dec80
};
CDemonActor_vtable g_CTriggerVTable = {
    .setup = (CDemonActor_setup *)core_trigger_cpp_CTrigger_setup_FUN_005df990,
    .process = (CDemonActor_process *)core_trigger_cpp_CTrigger_process_FUN_005dfac0,
    .renderOpaque = (CDemonActor_renderOpaque *)core_actor_cpp_CDemonActor_renderOpaque_FUN_00408aa0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_trigger_cpp_CTrigger_renderTransparent_FUN_005e00d0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_trigger_cpp_CTrigger_getBoundingBox_FUN_005e0630,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_trigger_cpp_CTrigger_hasCollision_FUN_005e0930,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_trigger_cpp_CTrigger_getTargetPoints_FUN_005e0c30,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_trigger_cpp_CTrigger_evaluateTriggerCondition_FUN_005e0980,
    .processActionButton = (CDemonActor_processActionButton *)core_trigger_cpp_CTrigger_processActionButton_FUN_005e0a20,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_trigger_cpp_CTrigger_onLaserHit_FUN_005e0a50,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_trigger_cpp_CTrigger_getActorType_FUN_005df830,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_trigger_cpp_CTrigger_processInEditor_FUN_005e1180,
    .getPropertyList = (CDemonActor_getPropertyList *)core_trigger_cpp_CTrigger_getPropertyList_FUN_005e0f70,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_trigger_cpp_CTrigger_showEditorHelp_FUN_005e1350,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0,
    .dtor = (CDemonActor_dtor *)core_trigger_cpp_CTrigger_dtor_FUN_005e1660,
    .archive = (CDemonActor_archive *)core_trigger_cpp_CTrigger_archive_FUN_005e0690
};
CDemonActor_vtable g_CTurretVTable = {
    .setup = (CDemonActor_setup *)core_turret_cpp_CTurret_setup_FUN_005e2240,
    .process = (CDemonActor_process *)core_turret_cpp_CTurret_process_FUN_005e2430,
    .renderOpaque = (CDemonActor_renderOpaque *)core_turret_cpp_CTurret_renderOpaque_FUN_005e2320,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_turret_cpp_CTurret_getBoundingBox_FUN_005e2910,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_weapon_cpp_CWeapon_hasCollision_FUN_005ee330,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_weapon_cpp_CWeapon_onPickup_FUN_005ee650,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_turret_cpp_CTurret_canPickup_FUN_005e3c70,
    .pickup = (CDemonActor_pickup *)core_weapon_cpp_CWeapon_pickup_FUN_005ee3e0,
    .onDropped = (CDemonActor_onDropped *)core_weapon_cpp_CWeapon_onDropped_FUN_005ee3f0,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_weapon_cpp_CWeapon_getCarrier_FUN_005ee490,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_turret_cpp_CTurret_getInteractionInfo_FUN_005e3440,
    .startInteraction = (CDemonActor_startInteraction *)core_turret_cpp_CTurret_startInteraction_FUN_005e34b0,
    .updateInteraction = (CDemonActor_updateInteraction *)core_turret_cpp_CTurret_updateInteraction_FUN_005e34d0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_turret_cpp_CTurret_stopInteraction_FUN_005e3540,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_turret_cpp_CTurret_getActorType_FUN_005e20e0,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_turret_cpp_CTurret_FUN_005e3dd0,
    .getPropertyList = (CDemonActor_getPropertyList *)core_turret_cpp_CTurret_getPropertyList_FUN_005e3ca0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_weapon_cpp_CWeapon_addFilesToExtract_FUN_005eea60,
    .dtor = (CDemonActor_dtor *)core_turret_cpp_CTurret_dtor_FUN_005e3e00,
    .archive = (CDemonActor_archive *)core_turret_cpp_CTurret_archive_FUN_005e2c40
};
CDemonActor_vtable g_CTVBatVTable = {
    .setup = (CDemonActor_setup *)core_tvbat_cpp_CTVBat_setup_FUN_005e4050,
    .process = (CDemonActor_process *)core_tvbat_cpp_CTVBat_process_FUN_005e4210,
    .renderOpaque = (CDemonActor_renderOpaque *)core_tvbat_cpp_CTVBat_renderOpaque_FUN_005e4d80,
    .renderTransparent = (CDemonActor_renderTransparent *)core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0,
    .renderBackground = (CDemonActor_renderBackground *)core_enemy_cpp_CEnemy_renderBackground_FUN_004a9fa0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_tvbat_cpp_CTVBat_getBoundingBox_FUN_005e5050,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_tvbat_cpp_CTVBat_hasCollision_FUN_005e50d0,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_tvbat_cpp_CTVBat_getTargetPoints_FUN_005e50f0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_charactr_cpp_CCharacter_canLookAt_FUN_0042de50,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_charactr_cpp_CCharacter_drop_FUN_0042bf90,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0,
    .getActorType = (CDemonActor_getActorType *)core_tvbat_cpp_CTVBat_getActorType_FUN_005e3eb0,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0,
    .processInEditor = (CDemonActor_processInEditor *)core_tvbat_cpp_CTVBat_processInEditor_FUN_005e5260,
    .getPropertyList = (CDemonActor_getPropertyList *)core_tvbat_cpp_CTVBat_getPropertyList_FUN_005e51a0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_tvbat_cpp_CTVBat_showEditorHelp_FUN_005e5400,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_tvbat_cpp_CTVBat_addFilesToExtract_FUN_005e5440,
    .dtor = (CDemonActor_dtor *)core_tvbat_cpp_CTVBat_dtor_FUN_005e5460,
    .archive = (CDemonActor_archive *)core_tvbat_cpp_CTVBat_archive_FUN_005e40c0
};
CDemonActor_vtable g_CVampireBossVTable = {
    .setup = (CDemonActor_setup *)core_vampboss_cpp_CVampireBoss_setup_FUN_005e56c0,
    .process = (CDemonActor_process *)core_vampboss_cpp_CVampireBoss_process_FUN_005e5970,
    .renderOpaque = (CDemonActor_renderOpaque *)core_vampboss_cpp_CVampireBoss_renderOpaque_FUN_005e6da0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_charactr_cpp_CCharacter_renderTransparent_FUN_0042b0e0,
    .renderBackground = (CDemonActor_renderBackground *)core_enemy_cpp_CEnemy_renderBackground_FUN_004a9fa0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_vampboss_cpp_CVampireBoss_hasCollision_FUN_005e75f0,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_vampboss_cpp_CVampireBoss_getTargetPoints_FUN_005e7280,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_charactr_cpp_CCharacter_canLookAt_FUN_0042de50,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_charactr_cpp_CCharacter_drop_FUN_0042bf90,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0,
    .getActorType = (CDemonActor_getActorType *)core_vampboss_cpp_CVampireBoss_getActorType_FUN_005e5580,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0,
    .processInEditor = (CDemonActor_processInEditor *)core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800,
    .getPropertyList = (CDemonActor_getPropertyList *)core_vampboss_cpp_CVampireBoss_getPropertyList_FUN_005e7650,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0,
    .dtor = (CDemonActor_dtor *)core_vampboss_cpp_CVampireBoss_dtor_FUN_005e7700,
    .archive = (CDemonActor_archive *)core_vampboss_cpp_CVampireBoss_archive_FUN_005e6f50
};
CDemonActor_vtable g_CVehicleVTable = {
    .setup = (CDemonActor_setup *)core_vehicle_cpp_CVehicle_setup_FUN_005e7b90,
    .process = (CDemonActor_process *)core_vehicle_cpp_CVehicle_process_FUN_005e7e80,
    .renderOpaque = (CDemonActor_renderOpaque *)core_vehicle_cpp_CVehicle_renderOpaque_FUN_005e88c0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_vehicle_cpp_CVehicle_renderTransparent_FUN_005e8b30,
    .renderBackground = (CDemonActor_renderBackground *)core_vehicle_cpp_CVehicle_renderBackground_FUN_005e8b40,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_vehicle_cpp_CVehicle_getBoundingBox_FUN_005e86d0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_vehicle_cpp_CVehicle_hasCollision_FUN_005e88b0,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_vehicle_cpp_CVehicle_getActorType_FUN_005e7930,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_vehicle_cpp_CVehicle_processInEditor_FUN_005e8cf0,
    .getPropertyList = (CDemonActor_getPropertyList *)core_vehicle_cpp_CVehicle_getPropertyList_FUN_005e8ba0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_vehicle_cpp_CVehicle_addFilesToExtract_FUN_005e8d00,
    .dtor = (CDemonActor_dtor *)core_vehicle_cpp_CVehicle_dtor_FUN_005e8d20,
    .archive = (CDemonActor_archive *)core_vehicle_cpp_CVehicle_archive_FUN_005e8720
};
CDemonActor_vtable g_CCryptVesselVTable = {
    .setup = (CDemonActor_setup *)core_vessel_cpp_CCryptVessel_setup_FUN_005e8fc0,
    .process = (CDemonActor_process *)core_vessel_cpp_CCryptVessel_process_FUN_005e91a0,
    .renderOpaque = (CDemonActor_renderOpaque *)core_vessel_cpp_CCryptVessel_renderOpaque_FUN_005e9750,
    .renderTransparent = (CDemonActor_renderTransparent *)core_vessel_cpp_CCryptVessel_renderTransparent_FUN_005e98b0,
    .renderBackground = (CDemonActor_renderBackground *)core_vessel_cpp_CCryptVessel_renderBackground_FUN_005e9a00,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_vessel_cpp_CCryptVessel_getBoundingBox_FUN_005e9bb0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_vessel_cpp_CCryptVessel_hasCollision_FUN_005e9b90,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_vessel_cpp_CCryptVessel_canPickup_FUN_005e9100,
    .pickup = (CDemonActor_pickup *)core_vessel_cpp_CCryptVessel_pickup_FUN_005e9140,
    .onDropped = (CDemonActor_onDropped *)core_vessel_cpp_CCryptVessel_onDropped_FUN_005e9150,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_vessel_cpp_CCryptVessel_getCarrier_FUN_005e9170,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_vessel_cpp_CCryptVessel_getActorType_FUN_005e8e50,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040,
    .getPropertyList = (CDemonActor_getPropertyList *)core_vessel_cpp_CCryptVessel_getPropertyList_FUN_005e9c00,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_vessel_cpp_CCryptVessel_addFilesToExtract_FUN_005e9d10,
    .dtor = (CDemonActor_dtor *)core_vessel_cpp_CCryptVessel_dtor_FUN_005e9d30,
    .archive = (CDemonActor_archive *)core_vessel_cpp_CCryptVessel_archive_FUN_005e9a80
};
CDemonActor_vtable g_CWaterActorVTable = {
    .setup = (CDemonActor_setup *)core_wateract_cpp_CWaterActor_setup_FUN_005ea9f0,
    .process = (CDemonActor_process *)core_wateract_cpp_CWaterActor_process_FUN_005eb100,
    .renderOpaque = (CDemonActor_renderOpaque *)core_actor_cpp_CDemonActor_renderOpaque_FUN_00408aa0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_wateract_cpp_CWaterActor_renderTransparent_FUN_005eb280,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_wateract_cpp_CWaterActor_getBoundingBox_FUN_005eb4b0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_wateract_cpp_CWaterActor_hasCollision_FUN_005eb710,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_wateract_cpp_CWaterActor_getGroundType_FUN_005eb730,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_wateract_cpp_CWaterActor_onLaserHit_FUN_005eb910,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005eb740,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_wateract_cpp_CWaterActor_getActorType_FUN_005ea890,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_wateract_cpp_CWaterActor_processInEditor_FUN_005ebab0,
    .getPropertyList = (CDemonActor_getPropertyList *)core_wateract_cpp_CWaterActor_getPropertyList_FUN_005eb940,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_wateract_cpp_CWaterActor_showEditorHelp_FUN_005ebc10,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_wateract_cpp_CWaterActor_addFilesToExtract_FUN_005ebc50,
    .dtor = (CDemonActor_dtor *)core_wateract_cpp_CWaterActor_dtor_FUN_005ebc60,
    .archive = (CDemonActor_archive *)core_wateract_cpp_CWaterActor_archive_FUN_005eb510
};
CDemonActor_vtable g_CWayPointVTable = {
    .setup = (CDemonActor_setup *)core_waypoint_cpp_CWaypoint_setup_FUN_005ebeb0,
    .process = (CDemonActor_process *)core_trigger_cpp_CTrigger_process_FUN_005dfac0,
    .renderOpaque = (CDemonActor_renderOpaque *)core_waypoint_cpp_CWaypoint_renderOpaque_FUN_005ebf70,
    .renderTransparent = (CDemonActor_renderTransparent *)core_trigger_cpp_CTrigger_renderTransparent_FUN_005e00d0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_trigger_cpp_CTrigger_getBoundingBox_FUN_005e0630,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_trigger_cpp_CTrigger_hasCollision_FUN_005e0930,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_trigger_cpp_CTrigger_getTargetPoints_FUN_005e0c30,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_trigger_cpp_CTrigger_evaluateTriggerCondition_FUN_005e0980,
    .processActionButton = (CDemonActor_processActionButton *)core_trigger_cpp_CTrigger_processActionButton_FUN_005e0a20,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_trigger_cpp_CTrigger_onLaserHit_FUN_005e0a50,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_waypoint_cpp_CWayPoint_getActorType_FUN_005ebe60,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_waypoint_cpp_CWayPoint_onActorDeleted_FUN_005ec610,
    .processInEditor = (CDemonActor_processInEditor *)core_waypoint_cpp_CWayPoint_processInEditor_FUN_005ec5e0,
    .getPropertyList = (CDemonActor_getPropertyList *)core_waypoint_cpp_CWayPoint_getPropertyList_FUN_005ec4d0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_waypoint_cpp_CWayPoint_showEditorHelp_FUN_005ec690,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0,
    .dtor = (CDemonActor_dtor *)core_waypoint_cpp_CWayPoint_dtor_FUN_005ec8d0,
    .archive = (CDemonActor_archive *)core_waypoint_cpp_CWayPoint_archive_FUN_005ec280
};
CDemonActor_vtable g_CWeaponVTable = {
    .setup = (CDemonActor_setup *)core_weapon_cpp_CWeapon_setup_FUN_005edff0,
    .process = (CDemonActor_process *)core_weapon_cpp_CWeapon_process_FUN_005ee110,
    .renderOpaque = (CDemonActor_renderOpaque *)core_weapon_cpp_CWeapon_renderOpaque_FUN_005ee030,
    .renderTransparent = (CDemonActor_renderTransparent *)core_actor_cpp_CDemonActor_renderTransparent_FUN_00408ac0,
    .renderBackground = (CDemonActor_renderBackground *)core_actor_cpp_CDemonActor_renderBackground_FUN_00408ae0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_weapon_cpp_CWeapon_getBoundingBox_FUN_005ee0c0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_weapon_cpp_CWeapon_hasCollision_FUN_005ee330,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_actor_cpp_CDemonActor_getTargetPoints_FUN_004098e0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_actor_cpp_CDemonActor_canLookAt_FUN_00409f20,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0,
    .onPickup = (CDemonActor_onPickup *)core_weapon_cpp_CWeapon_onPickup_FUN_005ee650,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_weapon_cpp_CWeapon_canPickup_FUN_005ee340,
    .pickup = (CDemonActor_pickup *)core_weapon_cpp_CWeapon_pickup_FUN_005ee3e0,
    .onDropped = (CDemonActor_onDropped *)core_weapon_cpp_CWeapon_onDropped_FUN_005ee3f0,
    .drop = (CDemonActor_drop *)core_actor_cpp_CDemonActor_drop_FUN_00409080,
    .getCarrier = (CDemonActor_getCarrier *)core_weapon_cpp_CWeapon_getCarrier_FUN_005ee490,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_actor_cpp_CDemonActor_spawnFlies_FUN_00409e70,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0,
    .getActorType = (CDemonActor_getActorType *)core_actor_cpp_CDemonActor_getActorType_FUN_00408b50,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_actor_cpp_CDemonActor_onActorDeleted_FUN_0040d000,
    .processInEditor = (CDemonActor_processInEditor *)core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040,
    .getPropertyList = (CDemonActor_getPropertyList *)core_weapon_cpp_CWeapon_getPropertyList_FUN_005ee9f0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_weapon_cpp_CWeapon_addFilesToExtract_FUN_005eea60,
    .dtor = (CDemonActor_dtor *)core_weapon_cpp_CWeapon_dtor_FUN_005edf80,
    .archive = (CDemonActor_archive *)core_weapon_cpp_CWeapon_archive_FUN_005ee250
};
CDemonActor_vtable g_CWerewolfVTable = {
    .setup = (CDemonActor_setup *)core_werewolf_cpp_CWerewolf_setup_FUN_005efcc0,
    .process = (CDemonActor_process *)core_werewolf_cpp_CWerewolf_process_FUN_005efde0,
    .renderOpaque = (CDemonActor_renderOpaque *)core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0,
    .renderTransparent = (CDemonActor_renderTransparent *)core_werewolf_cpp_CWerewolf_renderTransparent_FUN_005f1820,
    .renderBackground = (CDemonActor_renderBackground *)core_enemy_cpp_CEnemy_renderBackground_FUN_004a9fa0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_werewolf_cpp_CWerewolf_getTargetPoints_FUN_005f1df0,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_charactr_cpp_CCharacter_canLookAt_FUN_0042de50,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_charactr_cpp_CCharacter_drop_FUN_0042bf90,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0,
    .getActorType = (CDemonActor_getActorType *)core_werewolf_cpp_CWerewolf_getActorType_FUN_005efc00,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0,
    .processInEditor = (CDemonActor_processInEditor *)core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800,
    .getPropertyList = (CDemonActor_getPropertyList *)core_werewolf_cpp_CWerewolf_getPropertyList_FUN_005f20d0,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_werewolf_cpp_CWerewolf_addFilesToExtract_FUN_005f21f0,
    .dtor = (CDemonActor_dtor *)core_werewolf_cpp_CWerewolf_dtor_FUN_005f2220,
    .archive = (CDemonActor_archive *)core_werewolf_cpp_CWerewolf_archive_FUN_005f1980
};
CDemonActor_vtable g_CZombieVTable = {
    .setup = (CDemonActor_setup *)core_zombie_cpp_CZombie_setup_FUN_005f9140,
    .process = (CDemonActor_process *)core_zombie_cpp_CZombie_process_FUN_005f9470,
    .renderOpaque = (CDemonActor_renderOpaque *)core_zombie_cpp_CZombie_renderOpaque_FUN_005fbe20,
    .renderTransparent = (CDemonActor_renderTransparent *)core_zombie_cpp_CZombie_renderTransparent_FUN_005fbe70,
    .renderBackground = (CDemonActor_renderBackground *)core_enemy_cpp_CEnemy_renderBackground_FUN_004a9fa0,
    .getBoundingBox = (CDemonActor_getBoundingBox *)core_charactr_cpp_CCharacter_getBoundingBox_FUN_0042b8a0,
    .processFootstep = (CDemonActor_processFootstep *)core_actor_cpp_CDemonActor_processFootstep_FUN_0040c830,
    .processFootstepAtOffset = (CDemonActor_processFootstepAt *)core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040c8f0,
    .handleFootstep = (CDemonActor_handleFootstep *)core_actor_cpp_CDemonActor_handleFootstep_FUN_0040ca10,
    .playSound = (CDemonActor_playSound *)core_actor_cpp_CDemonActor_playSound_FUN_00408f60,
    .playAmbientSound = (CDemonActor_playAmbientSound *)core_actor_cpp_CDemonActor_playAmbientSound_FUN_00408f80,
    .playSoundWithVolume = (CDemonActor_playSoundWithVolume *)core_actor_cpp_CDemonActor_playSoundWithVolume_FUN_00408fa0,
    .playAmbientSoundWithVolume = (CDemonActor_playAmbientSoundWithVolume *)core_actor_cpp_CDemonActor_playAmbientSoundWithVolume_FUN_00408fd0,
    .hasCollision = (CDemonActor_hasCollision *)core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20,
    .cylinderGroundCheck = (CDemonActor_cylinderGroundCheck *)core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0,
    .getGroundType = (CDemonActor_getGroundType *)core_actor_cpp_CDemonActor_getGroundType_FUN_00408d90,
    .getBlockVirtualDirectorFlag = (CDemonActor_getBlockVirtualDirectorFlag *)core_actor_cpp_CDemonActor_getBlockVirtualDirectorFlag_FUN_00409880,
    .allowBulletHoles = (CDemonActor_allowBulletHoles *)core_actor_cpp_CDemonActor_allowBulletHoles_FUN_004098a0,
    .updateCollisionData = (CDemonActor_updateCollisionData *)core_actor_cpp_CDemonActor_updateCollisionData_FUN_004098c0,
    .getTargetPoints = (CDemonActor_getTargetPoints *)core_zombie_cpp_CZombie_getTargetPoints_FUN_005fc720,
    .renderTargetPoints = (CDemonActor_renderTargetPoints *)core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90,
    .canLookAt = (CDemonActor_canLookAt *)core_charactr_cpp_CCharacter_canLookAt_FUN_0042de50,
    .evaluateTriggerCondition = (CDemonActor_evaluateTriggerCondition *)core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40,
    .processActionButton = (CDemonActor_processActionButton *)core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60,
    .setPositionAndOrientation = (CDemonActor_setPositionAndOrientation *)core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_004285d0,
    .onPickup = (CDemonActor_onPickup *)core_actor_cpp_CDemonActor_onPickup_FUN_0040a010,
    .shouldIgnoreForTargeting = (CDemonActor_shouldIgnoreForTargeting *)core_zombie_cpp_CZombie_shouldIgnoreForTargeting_FUN_005fc9e0,
    .getAllowedMeleeAttackTypes = (CDemonActor_getAllowedMeleeAttackTypes *)core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0,
    .processMeleeHit = (CDemonActor_processMeleeHit *)core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a210,
    .fillAttackDamageInfo = (CDemonActor_fillAttackDamageInfo *)core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0,
    .playAttackHitEffects = (CDemonActor_playAttackHitEffects *)core_actor_cpp_CDemonActor_playAttackHitEffects_FUN_0040ac20,
    .canPickup = (CDemonActor_canPickup *)core_actor_cpp_CDemonActor_canPickup_FUN_00409000,
    .pickup = (CDemonActor_pickup *)core_actor_cpp_CDemonActor_pickup_FUN_00409020,
    .onDropped = (CDemonActor_onDropped *)core_actor_cpp_CDemonActor_onDropped_FUN_00409040,
    .drop = (CDemonActor_drop *)core_charactr_cpp_CCharacter_drop_FUN_0042bf90,
    .getCarrier = (CDemonActor_getCarrier *)core_actor_cpp_CDemonActor_getCarrier_FUN_00409060,
    .getInteractionInfo = (CDemonActor_getInteractionInfo *)core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030,
    .startInteraction = (CDemonActor_startInteraction *)core_actor_cpp_CDemonActor_startInteraction_FUN_0040a090,
    .updateInteraction = (CDemonActor_updateInteraction *)core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0,
    .stopInteraction = (CDemonActor_stopInteraction *)core_actor_cpp_CDemonActor_stopUsing_FUN_0040a0d0,
    .spawnFlies = (CDemonActor_spawnFlies *)core_charactr_cpp_CCharacter_spawnFlies_FUN_0042df90,
    .testCylinderCollision = (CDemonActor_testCylinderCollision *)core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0,
    .testLineIntersection = (CDemonActor_testLineIntersection *)core_actor_cpp_CDemonActor_testLineIntersection_FUN_00409150,
    .getSurfaceProperties = (CDemonActor_onLaserHit *)core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840,
    .customRayIntersect = (CDemonActor_customRayIntersect *)core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0,
    .customIntersectCylinderXZ = (CDemonActor_customIntersectCylinderXZ *)core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10,
    .customGetFloorHeight = (CDemonActor_customGetFloorHeight *)core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50,
    .getPathMap = (CDemonActor_getPathMap *)core_actor_cpp_CDemonActor_getPathMap_FUN_004090a0,
    .calculateChecksum = (CDemonActor_calculateChecksum *)core_charactr_cpp_CCharacter_calculateChecksum_FUN_0042dde0,
    .getActorType = (CDemonActor_getActorType *)core_zombie_cpp_CZombie_getActorType_FUN_005f8fd0,
    .onAreaDeleted = (CDemonActor_onAreaDeleted *)core_actor_cpp_CDemonActor_onAreaDeleted_FUN_0040cfe0,
    .onActorDeleted = (CDemonActor_onActorDeleted *)core_charactr_cpp_CCharacter_onActorDeleted_FUN_0042f8a0,
    .processInEditor = (CDemonActor_processInEditor *)core_charactr_cpp_CCharacter_processInEditor_FUN_0042f800,
    .getPropertyList = (CDemonActor_getPropertyList *)core_zombie_cpp_CZombie_getPropertyList_FUN_005fca80,
    .initializeInEditor = (CDemonActor_initializeInEditor *)core_actor_cpp_CDemonActor_initializeInEditor_FUN_0040c730,
    .showEditorHelp = (CDemonActor_showEditorHelp *)core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150,
    .addFilesToExtract = (CDemonActor_addFilesToExtract *)core_zombie_cpp_CZombie_addFilesToExtract_FUN_005fcc20,
    .dtor = (CDemonActor_dtor *)core_zombie_cpp_CZombie_dtor_FUN_005fcc50,
    .archive = (CDemonActor_archive *)core_zombie_cpp_CZombie_archive_FUN_005fbfd0
};

// CDemonFilter*
CDemonFilter* g_GlobalFilters = (CDemonFilter*)&CDemonFilter_ARRAY_020a4878;
CDemonFilter* g_PlayerFilters = (CDemonFilter*)&CDemonFilter_ARRAY_020a4878;

// CDemonPod_vtable
CDemonPod_vtable g_CDemonPodVTable = {
    .dtor = (void *)core_podmain_cpp_CDemonPod_dtor_FUN_00551b20,
    .load = (CPod_load *)core_podmain_cpp_CDemonPod_load_FUN_005519c0,
    .findFile = (CPod_findFile *)engine_pod_cpp_CPod_findFile_FUN_00551380,
    .mount = (CPod_mount *)engine_pod_cpp_CPod_mount_FUN_00550a10,
    .dismount = (CPod_dismount *)engine_pod_cpp_CPod_dismount_FUN_00550b90,
    .remount = (CPod_remount *)engine_pod_cpp_CPod_remount_FUN_00550af0
};

// CEnemy_vtable
CEnemy_vtable DAT_00660348 = {
    .getTargetPoint = (CEnemy_getTargetPoint *)core_enemy_cpp_CEnemy_getTargetPoint_FUN_004a99d0,
    .updateVictim = (CEnemy_updateVictim *)core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00,
    .randomize = (CEnemy_randomize *)core_enemy_cpp_CEnemy_randomize_FUN_004aa250,
    .reset = nullptr
};
CEnemy_vtable DAT_00660888 = {
    .getTargetPoint = (CEnemy_getTargetPoint *)core_enemy_cpp_CEnemy_getTargetPoint_FUN_004a99d0,
    .updateVictim = (CEnemy_updateVictim *)core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00,
    .randomize = (CEnemy_randomize *)core_enemy_cpp_CEnemy_randomize_FUN_004aa250,
    .reset = nullptr
};
CEnemy_vtable DAT_00661578 = {
    .getTargetPoint = (CEnemy_getTargetPoint *)core_enemy_cpp_CEnemy_getTargetPoint_FUN_004a99d0,
    .updateVictim = (CEnemy_updateVictim *)core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00,
    .randomize = (CEnemy_randomize *)core_enemy_cpp_CEnemy_randomize_FUN_004aa250,
    .reset = nullptr
};
CEnemy_vtable DAT_006618E8 = {
    .getTargetPoint = (CEnemy_getTargetPoint *)core_enemy_cpp_CEnemy_getTargetPoint_FUN_004a99d0,
    .updateVictim = (CEnemy_updateVictim *)core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00,
    .randomize = (CEnemy_randomize *)core_mobster_cpp_CMobster_FUN_00527c30,
    .reset = (CEnemy_reset *)core_mobster_cpp_CMobster_reset_FUN_00527360
};
CEnemy_vtable DAT_006627E8 = {
    .getTargetPoint = (CEnemy_getTargetPoint *)core_enemy_cpp_CEnemy_getTargetPoint_FUN_004a99d0,
    .updateVictim = (CEnemy_updateVictim *)core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00,
    .randomize = (CEnemy_randomize *)core_enemy_cpp_CEnemy_randomize_FUN_004aa250,
    .reset = nullptr
};
CEnemy_vtable DAT_006630D8 = {
    .getTargetPoint = (CEnemy_getTargetPoint *)core_enemy_cpp_CEnemy_getTargetPoint_FUN_004a99d0,
    .updateVictim = (CEnemy_updateVictim *)core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00,
    .randomize = (CEnemy_randomize *)core_enemy_cpp_CEnemy_randomize_FUN_004aa250,
    .reset = (CEnemy_reset *)core_smiley_cpp_CSmiley_reset_FUN_005a3280
};
CEnemy_vtable DAT_00663A98 = {
    .getTargetPoint = (CEnemy_getTargetPoint *)core_enemy_cpp_CEnemy_getTargetPoint_FUN_004a99d0,
    .updateVictim = (CEnemy_updateVictim *)core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00,
    .randomize = (CEnemy_randomize *)core_enemy_cpp_CEnemy_randomize_FUN_004aa250,
    .reset = nullptr
};
CEnemy_vtable DAT_006645C8 = {
    .getTargetPoint = (CEnemy_getTargetPoint *)core_enemy_cpp_CEnemy_getTargetPoint_FUN_004a99d0,
    .updateVictim = (CEnemy_updateVictim *)core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00,
    .randomize = (CEnemy_randomize *)core_enemy_cpp_CEnemy_randomize_FUN_004aa250,
    .reset = nullptr
};
CEnemy_vtable DAT_00664E28 = {
    .getTargetPoint = (CEnemy_getTargetPoint *)core_enemy_cpp_CEnemy_getTargetPoint_FUN_004a99d0,
    .updateVictim = (CEnemy_updateVictim *)core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00,
    .randomize = (CEnemy_randomize *)core_enemy_cpp_CEnemy_randomize_FUN_004aa250,
    .reset = nullptr
};
CEnemy_vtable DAT_00664FE8 = {
    .getTargetPoint = (CEnemy_getTargetPoint *)core_enemy_cpp_CEnemy_getTargetPoint_FUN_004a99d0,
    .updateVictim = (CEnemy_updateVictim *)core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00,
    .randomize = (CEnemy_randomize *)core_enemy_cpp_CEnemy_randomize_FUN_004aa250,
    .reset = nullptr
};
CEnemy_vtable DAT_006658D8 = {
    .getTargetPoint = (CEnemy_getTargetPoint *)core_enemy_cpp_CEnemy_getTargetPoint_FUN_004a99d0,
    .updateVictim = (CEnemy_updateVictim *)core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00,
    .randomize = (CEnemy_randomize *)core_werewolf_cpp_CWerewolf_randomize_FUN_005f21e0,
    .reset = nullptr
};
CEnemy_vtable DAT_00665B38 = {
    .getTargetPoint = (CEnemy_getTargetPoint *)core_enemy_cpp_CEnemy_getTargetPoint_FUN_004a99d0,
    .updateVictim = (CEnemy_updateVictim *)core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00,
    .randomize = (CEnemy_randomize *)core_zombie_cpp_CZombie_randomize_FUN_005fcb70,
    .reset = nullptr
};

// CFileManager_vtable
CFileManager_vtable g_CDemonFileManagerVTable = {.extractPodFile = (CFileManager_extractPodFile *)engine_fileio_cpp_CFileManager_extractPodFile_FUN_004b6e10};

// CFilterCache*
CFilterCache* g_CFilterCachePtr = (CFilterCache*)&g_CFilterCacheInstance;

// CFilterFx*
CFilterFx* g_CFilterFXPtr = (CFilterFx*)&g_CFilterFXInstance;

// CFont_vtable
CFont_vtable g_CFontVTable = {
    .ctor = (CFont_ctor *)engine_palette_cpp_CFont_dtor_FUN_00544ec0,
    .drawText = (CFont_drawText *)crt_cpp_c_handlePureVirtualCall_FUN_006015f1,
    .getStringWidth = (CFont_getStringWidth *)crt_cpp_c_handlePureVirtualCall_FUN_006015f1,
    .getStringHeight = (CFont_getStringHeight *)crt_cpp_c_handlePureVirtualCall_FUN_006015f1,
    .getLineSpacing = (CFont_getLineSpacing *)engine_palette_cpp_CFont_getLineSpacing_FUN_00544f00
};
CFont_vtable g_CWinFontVTable = {
    .ctor = (CFont_ctor *)engine_winfont_cpp_CWinFont_dtor_FUN_005f2390,
    .drawText = (CFont_drawText *)engine_winfont_cpp_CWinFont_drawText_FUN_005f23f0,
    .getStringWidth = (CFont_getStringWidth *)engine_winfont_cpp_CWinFont_getStringWidth_FUN_005f2aa0,
    .getStringHeight = (CFont_getStringHeight *)engine_winfont_cpp_CWinFont_getStringHeight_FUN_005f2b00,
    .getLineSpacing = (CFont_getLineSpacing *)engine_winfont_cpp_CWinFont_getLineSpacing_FUN_005f2b70
};

// CHero_vtable
CHero_vtable DAT_00660188 = {
    .createDefaultGun = (CHero_createDefaultGun *)core_hero_cpp_CHero_createDefaultGun_FUN_004f2a30,
    .drawGun = (CHero_drawGun *)core_icepick_cpp_CIcePick_drawGuns_FUN_004f9770,
    .areGunsDrawn = (CHero_areGunsDrawn *)core_icepick_cpp_CIcePick_areGunsDrawn_FUN_004f9760,
    .reset = (CHero_reset *)core_hero_cpp_CHero_reset_FUN_004f3b20
};
CHero_vtable DAT_00661A98 = {
    .createDefaultGun = (CHero_createDefaultGun *)core_hero_cpp_CHero_createDefaultGun_FUN_004f2a30,
    .drawGun = (CHero_drawGun *)core_moloch_cpp_CMoloch_drawGun_FUN_005299d0,
    .areGunsDrawn = (CHero_areGunsDrawn *)core_moloch_cpp_CMoloch_areGunsDrawn_FUN_005299e0,
    .reset = (CHero_reset *)core_hero_cpp_CHero_reset_FUN_004f3b20
};
CHero_vtable DAT_006625B8 = {
    .createDefaultGun = (CHero_createDefaultGun *)core_scat_cpp_CScat_createDefaultGun_FUN_00557150,
    .drawGun = (CHero_drawGun *)core_scat_cpp_CScat_drawGun_FUN_00558000,
    .areGunsDrawn = (CHero_areGunsDrawn *)core_scat_cpp_CScat_areGunsDrawn_FUN_00557ff0,
    .reset = (CHero_reset *)core_hero_cpp_CHero_reset_FUN_004f3b20
};
CHero_vtable DAT_006638D8 = {
    .createDefaultGun = (CHero_createDefaultGun *)core_hero_cpp_CHero_createDefaultGun_FUN_004f2a30,
    .drawGun = (CHero_drawGun *)core_stranger_cpp_CStranger_drawGuns_FUN_005c6660,
    .areGunsDrawn = (CHero_areGunsDrawn *)core_stranger_cpp_CStranger_areGunsDrawn_FUN_005c6650,
    .reset = (CHero_reset *)core_stranger_cpp_CStranger_reset_FUN_005c6750
};
CHero_vtable DAT_00663EB8 = {
    .createDefaultGun = (CHero_createDefaultGun *)core_hero_cpp_CHero_createDefaultGun_FUN_004f2a30,
    .drawGun = (CHero_drawGun *)core_svetlana_cpp_CSvetlana_FUN_005d9ee0,
    .areGunsDrawn = (CHero_areGunsDrawn *)core_svetlana_cpp_CSvetlana_FUN_005d9ed0,
    .reset = (CHero_reset *)core_hero_cpp_CHero_reset_FUN_004f3b20
};

// CKeys_vtable
CKeys_vtable g_CKeysVTable = {
    .getKeyState = (CKeys_getKeyState *)engine_keys_cpp_CKeys_getKeyState_FUN_00502420,
    .getAndClearKeyState = (CKeys_getAndClearKeyState *)engine_keys_cpp_CKeys_getAndClearKeyState_FUN_00502430,
    .clearKeyPresses = (CKeys_clearKeypresses *)engine_keys_cpp_CKeys_clearKeypresses_FUN_00502450
};

// CMotionController_vtable
CMotionController_vtable g_CMotionControllerVTable = {
    .dtor = (CMotionController_dtor *)core_motion_cpp_CMotionController_dtor_FUN_0052d5a0,
    .findPatchToFrame = (CMotionController_findPatchToFrame *)core_motion_cpp_CMotionController_findPatchToFrame_FUN_0052dc80,
    .accumulateScaledRootMotion = (CMotionController_accumulateScaledRootMotion *)core_motion_cpp_CMotionController_accumulateScaledRootMotion_FUN_0052e570
};
CMotionController_vtable g_CDeformableModelInstanceVTable = {
    .dtor = (CMotionController_dtor *)core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40,
    .findPatchToFrame = (CMotionController_findPatchToFrame *)core_skeleton_cpp_CDeformableModelInstance_findPatchToFrame_FUN_005a08a0,
    .accumulateScaledRootMotion = (CMotionController_accumulateScaledRootMotion *)core_skeleton_cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_005a0c90
};

// CObj_vtable
CObj_vtable g_CObjVTable = {
    .reset = (CObj_reset *)shape_superopt_cpp_CObj_reset_FUN_005d2280,
    .isValid = (CObj_isValid *)shape_superopt_cpp_CObj_isValid_FUN_005d22b0,
    .init = (CObj_init *)shape_superopt_cpp_CObj_init_FUN_005d22d0,
    .allocatePolygons = (CObj_allocatePolygons *)shape_superopt_cpp_CObj_allocatePolygons_FUN_005d2320,
    .addPolygons = (CObj_addPolygons *)shape_superopt_cpp_CObj_addPolygons_FUN_005d2410,
    .allocateVertices = (CObj_allocateVertices *)shape_superopt_cpp_CObj_allocateVertices_FUN_005d2500,
    .addVertices = (CObj_addVertices *)shape_superopt_cpp_CObj_addVertices_FUN_005d2580,
    .free = (CObj_free *)shape_superopt_cpp_CObj_free_FUN_005d2600,
    .copyFrom = (CObj_copyFrom *)shape_superopt_cpp_CObj_copyFrom_FUN_005d2650,
    .appendTo = (CObj_appendTo *)shape_superopt_cpp_CObj_appendTo_FUN_005d2720,
    .translate = (CObj_translate *)shape_superopt_cpp_CObj_translate_FUN_005d2880,
    .translateMasked = (CObj_translateMasked *)shape_superopt_cpp_CObj_translateMasked_FUN_005d28d0,
    .transform = (CObj_transform *)shape_superopt_cpp_CObj_transform_FUN_005d2c40,
    .transformMasked = (CObj_transformMasked *)shape_superopt_cpp_CObj_transformMasked_FUN_005d2dd0,
    .scale = (CObj_scale *)shape_superopt_cpp_CObj_scale_FUN_005d2940,
    .scaleMasked = (CObj_scaleMasked *)shape_superopt_cpp_CObj_scaleMasked_FUN_005d2ac0,
    .removePolygon = (CObj_removePolygon *)shape_superopt_cpp_CObj_removePolygon_FUN_005d2f50,
    .findAndRemovePolygon = (CObj_findAndRemovePolygon *)shape_superopt_cpp_CObj_findAndRemovePolygon_FUN_005d3020,
    .removePolygonsAtVertex = (CObj_removePolygonsAtVertex *)shape_superopt_cpp_CObj_removePolygonsAtVertex_FUN_005d3050,
    .findAndRemovePolygonsUsingVertex = (CObj_findAndRemovePolygonsUsingVertex *)shape_superopt_cpp_CObj_findAndRemovePolygonsUsingVertex_FUN_005d30c0,
    .removePolygonsByFlag = (CObj_removePolygonsByFlag *)shape_superopt_cpp_CObj_removePolygonsByFlag_FUN_005d30f0,
    .removeVertex = (CObj_removeVertex *)shape_superopt_cpp_CObj_removeVertex_FUN_005d3140,
    .findAndRemoveVertex = (CObj_findAndRemoveVertex *)shape_superopt_cpp_CObj_findAndRemoveVertex_FUN_005d3250,
    .removeVerticesByFlag = (CObj_removeVerticesByFlag *)shape_superopt_cpp_CObj_removeVerticesByFlag_FUN_005d3280,
    .findVertexIndex = (CObj_findVertexIndex *)shape_superopt_cpp_CObj_findVertexIndex_FUN_005d32e0,
    .getVertex = (CObj_getVertex *)shape_superopt_cpp_CObj_getVertex_FUN_005d3320,
    .containsVertex = (CObj_containsVertex *)shape_superopt_cpp_CObj_containsVertex_FUN_005d3350,
    .findPolygonIndex = (CObj_findPolygonIndex *)shape_superopt_cpp_CObj_findPolygonIndex_FUN_005d3380,
    .getPolygon = (CObj_getPolygon *)shape_superopt_cpp_CObj_getPolygon_FUN_005d33d0,
    .containsPolygon = (CObj_containsPolygon *)shape_superopt_cpp_CObj_containsPolygon_FUN_005d3400,
    .setStateFlags = (CObj_setStateFlags *)shape_superopt_cpp_CObj_setStateFlags_FUN_005d3440,
    .setStateFlagIfCondition = (CObj_setStateFlagIfCondition *)shape_superopt_cpp_CObj_setStateFlagIfCondition_FUN_005d34d0,
    .setStateFlagFromAttrib = (CObj_setStateFlagFromAttrib *)shape_superopt_cpp_CObj_setStateFlagFromAttrib_FUN_005d3590,
    .clearStateFlags = (CObj_clearStateFlags *)shape_superopt_cpp_CObj_clearStateFlags_FUN_005d35e0,
    .setStateFlagToAttrib = (CObj_setStateFlagToAttrib *)shape_superopt_cpp_CObj_setStateFlagToAttrib_FUN_005d3650,
    .updatePolyFlagsFromVerts = (CObj_updatePolyFlagsFromVerts *)shape_superopt_cpp_CObj_updatePolyFlagsFromVerts_FUN_005d36b0,
    .saveVertexPositions = (CObj_saveVertexPositions *)shape_superopt_cpp_CObj_saveVertexPositions_FUN_005d3760,
    .saveVertexPositionsWithFlag = (CObj_saveVertexPositionsWithFlag *)shape_superopt_cpp_CObj_saveVertexPositionsWithFlag_FUN_005d37b0,
    .restoreVertexPositions = (CObj_restoreVertexPositions *)shape_superopt_cpp_CObj_restoreVertexPositions_FUN_005d3860,
    .restoreVertexPositionsWithFlag = (CObj_restoreVertexPositionsWithFlag *)shape_superopt_cpp_CObj_restoreVertexPositionsWithFlag_FUN_005d38b0,
    .computeCoplanarAdjacency = (CObj_computeCoplanarAdjacency *)shape_superopt_cpp_CObj_computeCoplanarAdjacency_FUN_005d3960,
    .flipAllPolyNormals = (CObj_flipAllPolyNormals *)shape_superopt_cpp_CObj_flipAllPolyNormals_FUN_005d3db0,
    .flipPolyNormalsWithFlag = (CObj_flipPolyNormalsWithFlag *)shape_superopt_cpp_CObj_flipPolyNormalsWithFlag_FUN_005d3df0,
    .projectAllPlanarUVs = (CObj_projectAllPlanarUVs *)shape_superopt_cpp_CObj_projectAllPlanarUVs_FUN_005d3e40,
    .projectPlanarUVsWithFlag = (CObj_projectPlanarUVsWithFlag *)shape_superopt_cpp_CObj_projectPlanarUVsWithFlag_FUN_005d3e80,
    .setAllPolyMaterialIds = (CObj_setAllPolyMaterialIds *)shape_superopt_cpp_CObj_setAllPolyMaterialIds_FUN_005d3ed0,
    .setPolyMaterialIdsWithFlag = (CObj_setPolyMaterialIdsWithFlag *)shape_superopt_cpp_CObj_setPolyMaterialIdsWithFlag_FUN_005d3f10,
    .computeBoundingBox = (CObj_computeBoundingBox *)shape_superopt_cpp_CObj_computeBoundingBox_FUN_005d3f60,
    .isClosedManifold = (CObj_isClosedManifold *)shape_superopt_cpp_CObj_isClosedManifold_FUN_005d4070,
    .hasPolyWithMaterial = (CObj_hasPolyWithMaterial *)shape_superopt_cpp_CObj_hasPolyWithMaterial_FUN_005d4110,
    .weldVertices = (CObj_weldVertices *)shape_superopt_cpp_CObj_weldVertices_FUN_005d4160,
    .removeUnusedVertices = (CObj_removeUnusedVertices *)shape_superopt_cpp_CObj_removeUnusedVertices_FUN_005d44d0,
    .removeInvalidPolygons = (CObj_removeInvalidPolygons *)shape_superopt_cpp_CObj_removeInvalidPolygons_FUN_005d46f0,
    .removeTJunctions = (CObj_removeTJunctions *)shape_superopt_cpp_CObj_removeTJunctions_FUN_005d47b0,
    .findCoplanarPolygon = (CObj_findCoplanarPolygon *)shape_superopt_cpp_CObj_findCoplanarPolygon_FUN_005d5800
};

// COptimize_vtable
COptimize_vtable g_COptimizeVTable = {
    .func1 = (void *)shape_superopt_cpp_COptimize_FUN_005d7000,
    .func2 = (void *)shape_superopt_cpp_COptimize_FUN_005d70d0,
    .func3 = (void *)shape_superopt_cpp_COptimize_FUN_005d70f0,
    .func4 = (void *)shape_superopt_cpp_COptimize_FUN_005d7120,
    .func5 = (void *)shape_superopt_cpp_COptimize_FUN_005d7140,
    .func6 = (void *)shape_superopt_cpp_COptimize_FUN_005d7170,
    .func7 = (void *)shape_superopt_cpp_COptimize_FUN_005d7190,
    .func8 = (void *)shape_superopt_cpp_COptimize_FUN_005d71c0,
    .func9 = (void *)shape_superopt_cpp_COptimize_FUN_005d71d0,
    .func10 = (void *)shape_superopt_cpp_COptimize_FUN_005d71e0,
    .func11 = (void *)shape_superopt_cpp_COptimize_FUN_005d7290,
    .func12 = (void *)shape_superopt_cpp_COptimize_FUN_005d7350,
    .func13 = (void *)shape_superopt_cpp_COptimize_FUN_005d7460,
    .func14 = (void *)shape_superopt_cpp_COptimize_FUN_005d7690,
    .func15 = (void *)shape_superopt_cpp_COptimize_FUN_005d76e0
};

// CParticle_vtable
CParticle_vtable g_CParticleVTable = {
    .setup = (CParticle_setup *)core_particle_cpp_CParticle_setup_FUN_00545680,
    .process = (CParticle_process *)core_particle_cpp_CParticle_process_FUN_00545760,
    .render = (CParticle_render *)core_particle_cpp_CParticle_render_FUN_00545a80,
    .onCollision = (CParticle_onCollision *)core_particle_cpp_CParticle_onCollision_FUN_00545ab0
};

// CPod_vtable
CPod_vtable g_CPodVTable = {
    .dtor = (void *)engine_pod_cpp_CPod_dtor_FUN_005509b0,
    .load = (CPod_load *)engine_pod_cpp_CPod_load_FUN_005509e0,
    .findFile = (CPod_findFile *)engine_pod_cpp_CPod_findFile_FUN_00551380,
    .mount = (CPod_mount *)engine_pod_cpp_CPod_mount_FUN_00550a10,
    .dismount = (CPod_dismount *)engine_pod_cpp_CPod_dismount_FUN_00550b90,
    .remount = (CPod_remount *)engine_pod_cpp_CPod_remount_FUN_00550af0
};

// CPoly_vtable
CPoly_vtable g_CPolyVTable = {
    .init = (CPoly_init *)shape_superopt_cpp_CPoly_init_FUN_005cc670,
    .copyFrom = (CPoly_copyFrom *)shape_superopt_cpp_CPoly_copyFrom_FUN_005cc6a0,
    .translate = (CPoly_translate *)shape_superopt_cpp_CPoly_translate_FUN_005cc720,
    .scale = (CPoly_scale *)shape_superopt_cpp_CPoly_scale_FUN_005cc7c0,
    .transform = (CPoly_transform *)shape_superopt_cpp_CPoly_transform_FUN_005ccc30,
    .allVerticesHaveFlags = (CPoly_allVerticesHaveAttribFlags *)shape_superopt_cpp_CPoly_allVerticesHaveAttribFlags_FUN_005cd0b0,
    .setVertexAttribFlags = (CPoly_setVertexAttribFlags *)shape_superopt_cpp_CPoly_setVertexAttribFlags_FUN_005cd120,
    .toggleVertexAttribFlags = (CPoly_toggleVertexAttribFlags *)shape_superopt_cpp_CPoly_toggleVertexAttribFlags_FUN_005cd1a0,
    .setVertexStateFlags = (CPoly_setVertexStateFlags *)shape_superopt_cpp_CPoly_setVertexStateFlags_FUN_005cd220,
    .setVertexStateFlagIfCondition = (CPoly_setVertexStateFlagIfCondition *)shape_superopt_cpp_CPoly_setVertexStateFlagIfCondition_FUN_005cd2b0,
    .setVertexStateFlagFromAttrib = (CPoly_setVertexStateFlagFromAttrib *)shape_superopt_cpp_CPoly_setVertexStateFlagFromAttrib_FUN_005cd350,
    .clearVertexStateFlags = (CPoly_clearVertexStateFlags *)shape_superopt_cpp_CPoly_clearVertexStateFlags_FUN_005cd3c0,
    .setVertexStateFlagToAttrib = (CPoly_setVertexStateFlagToAttrib *)shape_superopt_cpp_CPoly_setVertexStateFlagToAttrib_FUN_005cd410,
    .saveVertexPositions = (CPoly_saveVertexPositions *)shape_superopt_cpp_CPoly_saveVertexPositions_FUN_005cd4b0,
    .saveVertexPositionsWithFlag = (CPoly_saveVertexPositionsWithFlag *)shape_superopt_cpp_CPoly_saveVertexPositionsWithFlag_FUN_005cd560,
    .restoreVertexPositions = (CPoly_restoreVertexPositions *)shape_superopt_cpp_CPoly_restoreVertexPositions_FUN_005cd640,
    .restoreVertexPositionsWithFlag = (CPoly_restoreVertexPositionsWithFlag *)shape_superopt_cpp_CPoly_restoreVertexPositionsWithFlag_FUN_005cd6f0,
    .computeNormal = (CPoly_computeNormal *)shape_superopt_cpp_CPoly_computeNormal_FUN_005cd7d0,
    .flipNormal = (CPoly_flipNormal *)shape_superopt_cpp_CPoly_flipNormal_FUN_005cdfe0,
    .projectUVPlanar = (CPoly_projectUVPlanar *)shape_superopt_cpp_CPoly_projectUVPlanar_FUN_005ce0a0,
    .setMaterialId = (CPoly_setMaterialId *)shape_superopt_cpp_CPoly_setMaterialId_FUN_005ce3c0,
    .getMaterialId = (CPoly_getMaterialId *)shape_superopt_cpp_CPoly_getMaterialId_FUN_005ce3d0,
    .getBounds = (CPoly_getBounds *)shape_superopt_cpp_CPoly_getBounds_FUN_005ce3e0,
    .intersectPoly = (CPoly_intersectPoly *)shape_superopt_cpp_CPoly_intersectPoly_FUN_005ce580,
    .rayIntersect = (CPoly_rayIntersect *)shape_superopt_cpp_CPoly_rayIntersect_FUN_005d0010,
    .containsPoint2D = (CPoly_containsPoint2D *)shape_superopt_cpp_CPoly_containsPoint2D_FUN_005d0340,
    .rayPlaneIntersect = (CPoly_rayPlaneIntersect *)shape_superopt_cpp_CPoly_rayPlaneIntersect_FUN_005d0ce0,
    .getCentroid = (CPoly_getCentroid *)shape_superopt_cpp_CPoly_getCentroid_FUN_005d0d30,
    .hasSharedEdge = (CPoly_hasSharedEdge *)shape_superopt_cpp_CPoly_hasSharedEdge_FUN_005d0e20,
    .hasSeamlessEdge = (CPoly_hasSeamlessEdge *)shape_superopt_cpp_CPoly_hasSeamlessEdge_FUN_005d0ee0,
    .hasCentroidIntersection = (CPoly_hasCentroidIntersection *)shape_superopt_cpp_CPoly_hasCentroidIntersection_FUN_005d1230,
    .hasColinearEdge = (CPoly_hasColinearEdge *)shape_superopt_cpp_CPoly_hasColinearEdge_FUN_005d12d0,
    .hasEdgeIntersection = (CPoly_hasEdgeIntersection *)shape_superopt_cpp_CPoly_hasEdgeIntersection_FUN_005d1390,
    .computePlaneDistance = (CPoly_computePlaneDistance *)shape_superopt_cpp_CPoly_computePlaneDistance_FUN_005d1fa0,
    .isValid = (CPoly_isValid *)shape_superopt_cpp_CPoly_isValid_FUN_005d1ff0
};

// CSoundDeviceBasic_vtable
CSoundDeviceBasic_vtable g_CWavInDeviceVTable = {
    .close = (CSoundDevice_close *)sound_sndwav_cpp_CWavInDevice_close_FUN_005b0d70,
    .start = (CSoundDevice_start *)sound_sndwav_cpp_CWavInDevice_start_FUN_005b0e20,
    .reset = (CSoundDevice_reset *)sound_sndwav_cpp_CWavInDevice_reset_FUN_005b0f10,
    .setMode = (CSoundDevice_setMode *)sound_sndwav_cpp_CWavInDevice_setMode_FUN_005b0f70,
    .poll = (CSoundDevice_poll *)sound_sndwav_cpp_CWavInDevice_poll_FUN_005b12e0
};

// CSoundDeviceFull_vtable
CSoundDeviceFull_vtable g_CDirectSoundDeviceVTable = {
    .close = (CSoundDevice_close *)sound_snddx_cpp_CDirectSoundDevice_close_FUN_005ae270,
    .start = (CSoundDevice_start *)sound_snddx_cpp_CDirectSoundDevice_start_FUN_005ae340,
    .reset = (CSoundDevice_reset *)sound_snddx_cpp_CDirectSoundDevice_reset_FUN_005ae4b0,
    .setMode = (CSoundDevice_setMode *)sound_snddx_cpp_CDirectSoundDevice_setMode_FUN_005ae830,
    .poll = (CSoundDevice_poll *)sound_snddx_cpp_CDirectSoundDevice_poll_FUN_005aed50,
    .hasHardware3D = (CSoundDevice_hasHardware3D *)sound_snddx_cpp_CDirectSoundDevice_hasHardware3D_FUN_005aee20,
    .set3DListenerPos = (CSoundDevice_set3DListenerPos *)sound_snddx_cpp_CDirectSoundDevice_set3DListenerPos_FUN_005aee30,
    .set3DListenerOrient = (CSoundDevice_set3DListenerOrient *)sound_snddx_cpp_CDirectSoundDevice_set3DListenerOrient_FUN_005aee70,
    .set3DListenerVelocity = (CSoundDevice_set3DListenerVelocity *)sound_snddx_cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_005aeed0,
    .set3DListenerDistanceFactor = (CSoundDevice_set3DListenerDistanceFactor *)sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_005aef10,
    .commitDeferredSettings = (CSoundDevice_commitDeferredSettings *)sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_005b0340,
    .allocateSample = (CSoundDevice_allocateSample *)sound_snddx_cpp_CDirectSoundDevice_allocateSample_FUN_005aef40,
    .freeSample = (CSoundDevice_freeSample *)sound_snddx_cpp_CDirectSoundDevice_freeSample_FUN_005af190,
    .lockSample = (CSoundDevice_lockSample *)sound_snddx_cpp_CDirectSoundDevice_lockSample_FUN_005af220,
    .unlockSample = (CSoundDevice_unlockSample *)sound_snddx_cpp_CDirectSoundDevice_unlockSample_FUN_005af320,
    .allocateSfx = (CSoundDevice_allocateSfx *)sound_snddx_cpp_CDirectSoundDevice_allocateSfx_FUN_005af410,
    .setSfxPos = (CSoundDevice_setSfxPos *)sound_snddx_cpp_CDirectSoundDevice_setSfxPos_FUN_005af750,
    .getSfxPlaybackPos = (CSoundDevice_getSfxPlaybackPos *)sound_snddx_cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_005afd60,
    .startSfx = (CSoundDevice_startSfx *)sound_snddx_cpp_CDirectSoundDevice_startSfx_FUN_005afe80,
    .killSfx = (CSoundDevice_killSfx *)sound_snddx_cpp_CDirectSoundDevice_killSfx_FUN_005b0030,
    .isSfxPlaying = (CSoundDevice_isSfxPlaying *)sound_snddx_cpp_CDirectSoundDevice_isSfxPlaying_FUN_005afcc0
};
CSoundDeviceFull_vtable g_CWavOutDeviceVTable = {
    .close = (CSoundDevice_close *)sound_sndwav_cpp_CWavOutDevice_close_FUN_005b0840,
    .start = (CSoundDevice_start *)sound_sndwav_cpp_CWavOutDevice_start_FUN_005b08f0,
    .reset = (CSoundDevice_reset *)sound_sndwav_cpp_CWavOutDevice_reset_FUN_005b09c0,
    .setMode = (CSoundDevice_setMode *)sound_sndwav_cpp_CWavOutDevice_setMode_FUN_005b0a30,
    .poll = (CSoundDevice_poll *)sound_sndwav_cpp_CWavOutDevice_poll_FUN_005b0c10,
    .hasHardware3D = (CSoundDevice_hasHardware3D *)sound_sndwav_cpp_CWavOutDevice_hasHardware3D_FUN_005b1650,
    .set3DListenerPos = (CSoundDevice_set3DListenerPos *)sound_sndwav_cpp_CWavOutDevice_set3DListenerPos_FUN_005b1660,
    .set3DListenerOrient = (CSoundDevice_set3DListenerOrient *)sound_sndwav_cpp_CWavOutDevice_set3DListenerOrient_FUN_005b1670,
    .set3DListenerVelocity = (CSoundDevice_set3DListenerVelocity *)sound_sndwav_cpp_CWavOutDevice_set3DListenerVelocity_FUN_005b1680,
    .set3DListenerDistanceFactor = (CSoundDevice_set3DListenerDistanceFactor *)sound_sndwav_cpp_CWavOutDevice_set3DListenerDistanceFactor_FUN_005b1690,
    .commitDeferredSettings = (CSoundDevice_commitDeferredSettings *)sound_sndwav_cpp_CWavOutDevice_commitDeferredSettings_FUN_005b16a0,
    .allocateSample = (CSoundDevice_allocateSample *)sound_sndwav_cpp_CWavOutDevice_allocateSample_FUN_005b16b0,
    .freeSample = (CSoundDevice_freeSample *)sound_sndwav_cpp_CWavOutDevice_freeSample_FUN_005b16c0,
    .lockSample = (CSoundDevice_lockSample *)sound_sndwav_cpp_CWavOutDevice_lockSample_FUN_005b16d0,
    .unlockSample = (CSoundDevice_unlockSample *)sound_sndwav_cpp_CWavOutDevice_unlockSample_FUN_005b16e0,
    .allocateSfx = (CSoundDevice_allocateSfx *)sound_sndwav_cpp_CWavOutDevice_allocateSfx_FUN_005b16f0,
    .setSfxPos = (CSoundDevice_setSfxPos *)sound_sndwav_cpp_CWavOutDevice_setSfxPos_FUN_005b1700,
    .getSfxPlaybackPos = (CSoundDevice_getSfxPlaybackPos *)sound_sndwav_cpp_CWavOutDevice_getSfxPlaybackPos_FUN_005b1710,
    .startSfx = (CSoundDevice_startSfx *)sound_sndwav_cpp_CWavOutDevice_startSfx_FUN_005b1730,
    .killSfx = (CSoundDevice_killSfx *)sound_sndwav_cpp_CWavOutDevice_killSfx_FUN_005b1740,
    .isSfxPlaying = (CSoundDevice_isSfxPlaying *)sound_sndwav_cpp_CWavOutDevice_isSfxPlaying_FUN_005b1750
};

// CVector3i[62]
CVector3i g_CoronaVertexPositions[62] = {
    {
        .x = 0x00000000,
        .y = 0x00000100,
        .z = 0x00000000
    },
    {
        .x = -110,
        .y = 0x000000DD,
        .z = -64
    },
    {
        .x = -128,
        .y = 0x000000DD,
        .z = 0x00000000
    },
    {
        .x = -64,
        .y = 0x000000DD,
        .z = -110
    },
    {
        .x = 0x00000000,
        .y = 0x000000DD,
        .z = -128
    },
    {
        .x = 0x00000040,
        .y = 0x000000DD,
        .z = -110
    },
    {
        .x = 0x0000006E,
        .y = 0x000000DD,
        .z = -64
    },
    {
        .x = 0x00000080,
        .y = 0x000000DD,
        .z = 0x00000000
    },
    {
        .x = 0x0000006E,
        .y = 0x000000DD,
        .z = 0x00000040
    },
    {
        .x = 0x00000040,
        .y = 0x000000DD,
        .z = 0x0000006E
    },
    {
        .x = 0x00000000,
        .y = 0x000000DD,
        .z = 0x00000080
    },
    {
        .x = -64,
        .y = 0x000000DD,
        .z = 0x0000006E
    },
    {
        .x = -110,
        .y = 0x000000DD,
        .z = 0x00000040
    },
    {
        .x = 0x000000DD,
        .y = 0x00000080,
        .z = 0x00000000
    },
    {
        .x = 0x000000C0,
        .y = 0x00000080,
        .z = 0x0000006E
    },
    {
        .x = 0x0000006E,
        .y = 0x00000080,
        .z = 0x000000C0
    },
    {
        .x = 0x00000000,
        .y = 0x00000080,
        .z = 0x000000DD
    },
    {
        .x = -110,
        .y = 0x00000080,
        .z = 0x000000C0
    },
    {
        .x = -192,
        .y = 0x00000080,
        .z = 0x0000006E
    },
    {
        .x = -221,
        .y = 0x00000080,
        .z = 0x00000000
    },
    {
        .x = -192,
        .y = 0x00000080,
        .z = -110
    },
    {
        .x = -110,
        .y = 0x00000080,
        .z = -192
    },
    {
        .x = 0x00000000,
        .y = 0x00000080,
        .z = -221
    },
    {
        .x = 0x0000006E,
        .y = 0x00000080,
        .z = -192
    },
    {
        .x = 0x000000C0,
        .y = 0x00000080,
        .z = -110
    },
    {
        .x = 0x00000100,
        .y = 0x00000000,
        .z = 0x00000000
    },
    {
        .x = 0x000000DD,
        .y = 0x00000000,
        .z = 0x00000080
    },
    {
        .x = 0x00000080,
        .y = 0x00000000,
        .z = 0x000000DD
    },
    {
        .x = 0x00000000,
        .y = 0x00000000,
        .z = 0x00000100
    },
    {
        .x = -128,
        .y = 0x00000000,
        .z = 0x000000DD
    },
    {
        .x = -221,
        .y = 0x00000000,
        .z = 0x00000080
    },
    {
        .x = -256,
        .y = 0x00000000,
        .z = 0x00000000
    },
    {
        .x = -221,
        .y = 0x00000000,
        .z = -128
    },
    {
        .x = -128,
        .y = 0x00000000,
        .z = -221
    },
    {
        .x = 0x00000000,
        .y = 0x00000000,
        .z = -256
    },
    {
        .x = 0x00000080,
        .y = 0x00000000,
        .z = -221
    },
    {
        .x = 0x000000DD,
        .y = 0x00000000,
        .z = -128
    },
    {
        .x = 0x000000DD,
        .y = -128,
        .z = 0x00000000
    },
    {
        .x = 0x000000C0,
        .y = -128,
        .z = 0x0000006E
    },
    {
        .x = 0x0000006E,
        .y = -128,
        .z = 0x000000C0
    },
    {
        .x = 0x00000000,
        .y = -128,
        .z = 0x000000DD
    },
    {
        .x = -110,
        .y = -128,
        .z = 0x000000C0
    },
    {
        .x = -192,
        .y = -128,
        .z = 0x0000006E
    },
    {
        .x = -221,
        .y = -128,
        .z = 0x00000000
    },
    {
        .x = -192,
        .y = -128,
        .z = -110
    },
    {
        .x = -110,
        .y = -128,
        .z = -192
    },
    {
        .x = 0x00000000,
        .y = -128,
        .z = -221
    },
    {
        .x = 0x0000006E,
        .y = -128,
        .z = -192
    },
    {
        .x = 0x000000C0,
        .y = -128,
        .z = -110
    },
    {
        .x = 0x00000080,
        .y = -221,
        .z = 0x00000000
    },
    {
        .x = 0x0000006E,
        .y = -221,
        .z = 0x00000040
    },
    {
        .x = 0x00000040,
        .y = -221,
        .z = 0x0000006E
    },
    {
        .x = 0x00000000,
        .y = -221,
        .z = 0x00000080
    },
    {
        .x = -64,
        .y = -221,
        .z = 0x0000006E
    },
    {
        .x = -110,
        .y = -221,
        .z = 0x00000040
    },
    {
        .x = -128,
        .y = -221,
        .z = 0x00000000
    },
    {
        .x = -110,
        .y = -221,
        .z = -64
    },
    {
        .x = -64,
        .y = -221,
        .z = -110
    },
    {
        .x = 0x00000000,
        .y = -221,
        .z = -128
    },
    {
        .x = 0x00000040,
        .y = -221,
        .z = -110
    },
    {
        .x = 0x0000006E,
        .y = -221,
        .z = -64
    },
    {
        .x = 0x00000000,
        .y = -256,
        .z = 0x00000000
    }
};

// CWeapon_vtable
CWeapon_vtable DAT_00660B50 = {
    .onFired = (CWeapon_onFired *)core_weapon_cpp_CWeapon_onFired_FUN_005ee860,
    .setWeaponState = (CWeapon_setWeaponState *)core_weapon_cpp_CWeapon_setWeaponState_FUN_005ee640,
    .getMuzzlePoint = (CWeapon_getMuzzlePoint *)core_weapon_cpp_CWeapon_getMuzzlePoint_FUN_005ee670,
    .fire = (CWeapon_fire *)core_lightgun_cpp_CLightGun_fire_FUN_00505c70,
    .isReadyToFire = (CWeapon_isReadyToFire *)core_weapon_cpp_CWeapon_isReadyToFire_FUN_005ee710,
    .getDamage = (CWeapon_getDamage *)core_lightgun_cpp_CLightGun_getDamage_FUN_00506670,
    .fireProjectile = (CWeapon_fireProjectile *)core_lightgun_cpp_CLightGun_fireProjectile_FUN_005066b0,
    .updateLighting = (CWeapon_updateLighting *)core_weapon_cpp_CWeapon_updateLighting_FUN_005ee4a0
};
CWeapon_vtable DAT_00661260 = {
    .onFired = (CWeapon_onFired *)core_weapon_cpp_CWeapon_onFired_FUN_005ee860,
    .setWeaponState = (CWeapon_setWeaponState *)core_melee_cpp_CMelee_setWeaponState_FUN_0050ecd0,
    .getMuzzlePoint = (CWeapon_getMuzzlePoint *)core_weapon_cpp_CWeapon_getMuzzlePoint_FUN_005ee670,
    .fire = (CWeapon_fire *)core_melee_cpp_CMelee_fire_FUN_0050ea40,
    .isReadyToFire = (CWeapon_isReadyToFire *)core_weapon_cpp_CWeapon_isReadyToFire_FUN_005ee710,
    .getDamage = (CWeapon_getDamage *)core_melee_cpp_CMelee_getDamage_FUN_0050ea70,
    .fireProjectile = (CWeapon_fireProjectile *)core_melee_cpp_CMelee_fireProjectile_FUN_0050eaa0,
    .updateLighting = (CWeapon_updateLighting *)core_weapon_cpp_CWeapon_updateLighting_FUN_005ee4a0
};
CWeapon_vtable DAT_00662B70 = {
    .onFired = (CWeapon_onFired *)core_shotgun_cpp_CShotgun_FUN_005887a0,
    .setWeaponState = (CWeapon_setWeaponState *)core_weapon_cpp_CWeapon_setWeaponState_FUN_005ee640,
    .getMuzzlePoint = (CWeapon_getMuzzlePoint *)core_weapon_cpp_CWeapon_getMuzzlePoint_FUN_005ee670,
    .fire = (CWeapon_fire *)core_shotgun_cpp_CShotgun_fire_FUN_00588060,
    .isReadyToFire = (CWeapon_isReadyToFire *)core_weapon_cpp_CWeapon_isReadyToFire_FUN_005ee710,
    .getDamage = (CWeapon_getDamage *)core_shotgun_cpp_CShotgun_FUN_005888b0,
    .fireProjectile = (CWeapon_fireProjectile *)core_shotgun_cpp_CShotgun_FUN_005888f0,
    .updateLighting = (CWeapon_updateLighting *)core_weapon_cpp_CWeapon_updateLighting_FUN_005ee4a0
};
CWeapon_vtable DAT_00662CC0 = {
    .onFired = (CWeapon_onFired *)core_weapon_cpp_CWeapon_onFired_FUN_005ee860,
    .setWeaponState = (CWeapon_setWeaponState *)core_weapon_cpp_CWeapon_setWeaponState_FUN_005ee640,
    .getMuzzlePoint = (CWeapon_getMuzzlePoint *)core_weapon_cpp_CWeapon_getMuzzlePoint_FUN_005ee670,
    .fire = (CWeapon_fire *)core_shovel_cpp_CShovel_fire_FUN_00588c20,
    .isReadyToFire = (CWeapon_isReadyToFire *)core_weapon_cpp_CWeapon_isReadyToFire_FUN_005ee710,
    .getDamage = (CWeapon_getDamage *)core_shovel_cpp_CShovel_getDamage_FUN_00588c40,
    .fireProjectile = (CWeapon_fireProjectile *)core_shovel_cpp_CShovel_fireProjectile_FUN_00588c70,
    .updateLighting = (CWeapon_updateLighting *)core_weapon_cpp_CWeapon_updateLighting_FUN_005ee4a0
};
CWeapon_vtable DAT_00664760 = {
    .onFired = (CWeapon_onFired *)core_weapon_cpp_CWeapon_onFired_FUN_005ee860,
    .setWeaponState = (CWeapon_setWeaponState *)core_tommygun_cpp_CTommyGun_setWeaponState_FUN_005de5a0,
    .getMuzzlePoint = (CWeapon_getMuzzlePoint *)core_weapon_cpp_CWeapon_getMuzzlePoint_FUN_005ee670,
    .fire = (CWeapon_fire *)core_tommygun_cpp_CTommyGun_fire_FUN_005ddb30,
    .isReadyToFire = (CWeapon_isReadyToFire *)core_weapon_cpp_CWeapon_isReadyToFire_FUN_005ee710,
    .getDamage = (CWeapon_getDamage *)core_tommygun_cpp_CTommyGun_FUN_005de330,
    .fireProjectile = (CWeapon_fireProjectile *)core_weapon_cpp_CWeapon_fireProjectile_FUN_005ee830,
    .updateLighting = (CWeapon_updateLighting *)core_weapon_cpp_CWeapon_updateLighting_FUN_005ee4a0
};
CWeapon_vtable DAT_00664C70 = {
    .onFired = (CWeapon_onFired *)core_weapon_cpp_CWeapon_onFired_FUN_005ee860,
    .setWeaponState = (CWeapon_setWeaponState *)core_weapon_cpp_CWeapon_setWeaponState_FUN_005ee640,
    .getMuzzlePoint = (CWeapon_getMuzzlePoint *)core_turret_cpp_CTurret_FUN_005e3720,
    .fire = (CWeapon_fire *)core_turret_cpp_CTurret_fire_FUN_005e3750,
    .isReadyToFire = (CWeapon_isReadyToFire *)core_weapon_cpp_CWeapon_isReadyToFire_FUN_005ee710,
    .getDamage = (CWeapon_getDamage *)core_turret_cpp_CTurret_FUN_005e36f0,
    .fireProjectile = (CWeapon_fireProjectile *)core_weapon_cpp_CWeapon_fireProjectile_FUN_005ee830,
    .updateLighting = (CWeapon_updateLighting *)core_weapon_cpp_CWeapon_updateLighting_FUN_005ee4a0
};
CWeapon_vtable DAT_006656A0 = {
    .onFired = (CWeapon_onFired *)core_weapon_cpp_CWeapon_onFired_FUN_005ee860,
    .setWeaponState = (CWeapon_setWeaponState *)core_weapon_cpp_CWeapon_setWeaponState_FUN_005ee640,
    .getMuzzlePoint = (CWeapon_getMuzzlePoint *)core_weapon_cpp_CWeapon_getMuzzlePoint_FUN_005ee670,
    .fire = (CWeapon_fire *)core_weapon_cpp_CWeapon_fire_FUN_005ee6e0,
    .isReadyToFire = (CWeapon_isReadyToFire *)core_weapon_cpp_CWeapon_isReadyToFire_FUN_005ee710,
    .getDamage = (CWeapon_getDamage *)core_weapon_cpp_CWeapon_getDamage_FUN_005ee730,
    .fireProjectile = (CWeapon_fireProjectile *)core_weapon_cpp_CWeapon_fireProjectile_FUN_005ee830,
    .updateLighting = (CWeapon_updateLighting *)core_weapon_cpp_CWeapon_updateLighting_FUN_005ee4a0
};

// MRGLBlockHandlerFunc*[67]
MRGLBlockHandlerFunc* g_MRGLBlockHandlerTable[67] = {
    (MRGLBlockHandlerFunc*)engine_3d_c_badMRGLStruct_FUN_004037b0, (MRGLBlockHandlerFunc*)engine_3d_c_processCameraRelativePoint_FUN_004037e0, (MRGLBlockHandlerFunc*)engine_3d_c_transformAndBufferVertices_FUN_00403840, (MRGLBlockHandlerFunc*)engine_3d_c_processVertexLighting_FUN_00403a20,
    (MRGLBlockHandlerFunc*)engine_3d_c_processTextureCoordinates_FUN_00403a80, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonLastPixelMode_FUN_00403ad0, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygon_FUN_00403ba0, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonTextureEnable_FUN_00403cc0,
    (MRGLBlockHandlerFunc*)engine_3d_c_renderPrimitiveUVWrappedSpecial_FUN_00403d60, (MRGLBlockHandlerFunc*)engine_3d_c_oldFunction_FUN_00403e00, (MRGLBlockHandlerFunc*)engine_3d_c_processPolygonColor_FUN_00403e30, (MRGLBlockHandlerFunc*)engine_3d_c_oldFunction_FUN_00403ec0,
    (MRGLBlockHandlerFunc*)engine_3d_c_oldFunction_FUN_00403ef0, (MRGLBlockHandlerFunc*)engine_texture_cpp_ensureTextureLoaded_FUN_005dd800, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonTextureNormalized_FUN_00403f20, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonVertexLit_FUN_00404120,
    (MRGLBlockHandlerFunc*)engine_3d_c_oldFunction_FUN_004041d0, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonLitDetailed_FUN_00404220, (MRGLBlockHandlerFunc*)engine_3d_c_oldFunction_FUN_00404420, (MRGLBlockHandlerFunc*)engine_3d_c_badMRGLStruct_FUN_004037b0,
    (MRGLBlockHandlerFunc*)engine_3d_c_setRelativeCoord_FUN_00404450, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonTextureNormalized_FUN_004044a0, (MRGLBlockHandlerFunc*)engine_3d_c_drawLineStrip2D_FUN_00404570, (MRGLBlockHandlerFunc*)engine_3d_c_oldFunction_FUN_00404690,
    (MRGLBlockHandlerFunc*)engine_3d_c_renderPrimitivePlaneMaskedComplex_FUN_004046c0, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonAdaptiveDepthMode_FUN_00404ae0, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonPlaneMaskedComplex_FUN_00404c60, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonUVMappedComplex_FUN_00404d50,
    (MRGLBlockHandlerFunc*)engine_3d_c_oldFunction_FUN_00404df0, (MRGLBlockHandlerFunc*)engine_3d_c_updateAnimatedTexture_FUN_004050c0, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonUVTextureEnable_FUN_00405170, (MRGLBlockHandlerFunc*)engine_3d_c_setVertexTextureU_FUN_00405270,
    (MRGLBlockHandlerFunc*)engine_keyframe_c_interpolateCubicKeyframes_FUN_00501f30, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonLitComplexAlpha_FUN_004052b0, (MRGLBlockHandlerFunc*)engine_3d_c_renderPrimitiveAdaptivePlaneMasked_FUN_00404840, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40,
    (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0, (MRGLBlockHandlerFunc*)engine_boss_c_modelStructNotSupported_FUN_0041db50, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonUVWrappedAdvanced_FUN_004058d0,
    (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonUVTextureEnable_FUN_00405a00, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonTextureWrappedStandard_FUN_00405ce0, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonDepthWriteTexturedLit_FUN_00405d80,
    (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonDepthWriteTexturedAdvanced_FUN_00405e20, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonTexturedBasic_FUN_00405ec0, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonOverlayTextured_FUN_00405f60, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonDepthWriteTexturedLit_FUN_00406000,
    (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonTexturePerspectiveCorrect_FUN_004060a0, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonTextureWrappedLit_FUN_00406150, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonUVTextureNormalized_FUN_004061f0, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonTexturePerspectiveCorrect_FUN_00406290,
    (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonTextureAdaptiveWrapped_FUN_00406430, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonUVVertexLit_FUN_00405aa0, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonLastPixelMode_FUN_004066d0, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonPerspectiveAlphaSpecial_FUN_004067a0,
    (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonPlaneMaskedDetailedComplex_FUN_00406860, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonExtremeQualityMode_FUN_00406b40, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonSpecialEffectsAdvanced_FUN_00406f20,
    (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonEngineDepthLit_FUN_00406be0, (MRGLBlockHandlerFunc*)engine_3d_c_setRenderAlpha_FUN_00406d60, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonLitDetailed_FUN_00406a20, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonEngineEnhancedDepthLit_FUN_00406c80,
    (MRGLBlockHandlerFunc*)engine_texture_cpp_loadTextureAndGetData_FUN_005dd8c0, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290, (MRGLBlockHandlerFunc*)engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470
};

// SEnumPair[3]
SEnumPair g_CharacterHealthBarTypePairs[3] = {
    {.name = (char *)s_None_00617769, .value = 0x00000000},
    {.name = (char *)s_When_hurt_0061776e, .value = 0x00000001},
    {.name = (char *)s_Always_00617778, .value = 0x00000002}
};

// SEnumPair[5]
SEnumPair g_BoxActorPickupTypePairs[5] = {
    {.name = (char *)s_Cant_006167f1, .value = 0x00000000},
    {.name = (char *)s_Rummage_006167f6, .value = 0x00000001},
    {.name = (char *)s_Inventory_006167fe, .value = 0x00000002},
    {.name = (char *)s_Carry_00616808, .value = 0x00000003},
    {.name = (char *)s_Heavy_0061680e, .value = 0x00000004}
};

// SFontGlyph[224]
SFontGlyph g_FontTable[224] = {
    {
        .width = 0x04,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x01,
        .bitmap = {0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x03,
        .bitmap = {0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x07,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x07,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x01,
        .bitmap = {0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x03,
        .bitmap = {0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x03,
        .bitmap = {0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x03,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x01,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x04,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x01,
        .bitmap = {0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x03,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x03,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x07,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x01,
        .bitmap = {0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x07,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x07,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x04,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0xF8, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x01,
        .bitmap = {0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x04,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x04,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x01,
        .bitmap = {0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x04,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x01,
        .bitmap = {0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x07,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x04,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x03,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x07,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x03,
        .bitmap = {0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x01,
        .bitmap = {0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x03,
        .bitmap = {0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x03,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x0B,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x0A,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x03,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x07,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x04,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x08,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x08,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x01,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x01,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x03,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x08,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x04,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x08,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x03,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x04,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x04,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x04,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x02,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x01,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x04,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x09,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x09,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x0C,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x0A,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x03,
        .bitmap = {0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x03,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x03,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x03,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x07,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x08,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x08,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x04,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x04,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x04,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x04,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x04,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x03,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x03,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x03,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x03,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x06,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x07,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    {
        .width = 0x05,
        .bitmap = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    }
};

// SMRGLLightPrimitive[84]
SMRGLLightPrimitive g_CoronaFacePrimitives[84] = {
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = 0x00004219,
            .B = -63150,
            .C = 0x000011B5,
            .D = -16166466
        },
        .vertices = {0x00000002, 0x00000001, 0x00000000, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = 0x00003063,
            .B = -63150,
            .C = 0x00003063,
            .D = -16166466
        },
        .vertices = {0x00000001, 0x00000003, 0x00000000, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = 0x000011B5,
            .B = -63150,
            .C = 0x00004219,
            .D = -16166466
        },
        .vertices = {0x00000003, 0x00000004, 0x00000000, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = -4533,
            .B = -63150,
            .C = 0x00004219,
            .D = -16166466
        },
        .vertices = {0x00000004, 0x00000005, 0x00000000, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = -12387,
            .B = -63150,
            .C = 0x00003063,
            .D = -16166466
        },
        .vertices = {0x00000005, 0x00000006, 0x00000000, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = -16921,
            .B = -63150,
            .C = 0x000011B5,
            .D = -16166466
        },
        .vertices = {0x00000006, 0x00000007, 0x00000000, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = -16921,
            .B = -63150,
            .C = -4533,
            .D = -16166466
        },
        .vertices = {0x00000007, 0x00000008, 0x00000000, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = -12387,
            .B = -63150,
            .C = -12387,
            .D = -16166466
        },
        .vertices = {0x00000008, 0x00000009, 0x00000000, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = -4533,
            .B = -63150,
            .C = -16921,
            .D = -16166466
        },
        .vertices = {0x00000009, 0x0000000A, 0x00000000, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = 0x000011B5,
            .B = -63150,
            .C = -16921,
            .D = -16166466
        },
        .vertices = {0x0000000A, 0x0000000B, 0x00000000, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = 0x00003063,
            .B = -63150,
            .C = -12387,
            .D = -16166466
        },
        .vertices = {0x0000000B, 0x0000000C, 0x00000000, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = 0x00004219,
            .B = -63150,
            .C = -4533,
            .D = -16166466
        },
        .vertices = {0x0000000C, 0x00000002, 0x00000000, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = 0x00004219,
            .B = 0x0000F6AE,
            .C = 0x000011B5,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x00000008, 0x00000007, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = 0x00003063,
            .B = 0x0000F6AE,
            .C = 0x00003063,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x00000009, 0x00000008, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = 0x000011B5,
            .B = 0x0000F6AE,
            .C = 0x00004219,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x0000000A, 0x00000009, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = -4533,
            .B = 0x0000F6AE,
            .C = 0x00004219,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x0000000B, 0x0000000A, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = -12387,
            .B = 0x0000F6AE,
            .C = 0x00003063,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x0000000C, 0x0000000B, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = -16921,
            .B = 0x0000F6AE,
            .C = 0x000011B5,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x00000002, 0x0000000C, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = -16921,
            .B = 0x0000F6AE,
            .C = -4533,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x00000001, 0x00000002, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = -12387,
            .B = 0x0000F6AE,
            .C = -12387,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x00000003, 0x00000001, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = -4533,
            .B = 0x0000F6AE,
            .C = -16921,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x00000004, 0x00000003, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = 0x000011B5,
            .B = 0x0000F6AE,
            .C = -16921,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x00000005, 0x00000004, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = 0x00003063,
            .B = 0x0000F6AE,
            .C = -12387,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x00000006, 0x00000005, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = 0x00004219,
            .B = 0x0000F6AE,
            .C = -4533,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000000, 0x00000007, 0x00000006, 0x00000000}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x0000B1DA,
            .B = 0x0000B1DA,
            .C = 0x00002FA7,
            .D = 0x00F2F36D
        },
        .vertices = {0x00000007, 0x00000008, 0x0000000E, 0x0000000D}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x00008232,
            .B = 0x0000B1DA,
            .C = 0x00008232,
            .D = 0x00F2F36F
        },
        .vertices = {0x00000008, 0x00000009, 0x0000000F, 0x0000000E}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x00002FA7,
            .B = 0x0000B1DA,
            .C = 0x0000B1DA,
            .D = 0x00F2F36C
        },
        .vertices = {0x00000009, 0x0000000A, 0x00000010, 0x0000000F}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -12199,
            .B = 0x0000B1DA,
            .C = 0x0000B1DA,
            .D = 0x00F2F36D
        },
        .vertices = {0x0000000A, 0x0000000B, 0x00000011, 0x00000010}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -33330,
            .B = 0x0000B1DA,
            .C = 0x00008232,
            .D = 0x00F2F36F
        },
        .vertices = {0x0000000B, 0x0000000C, 0x00000012, 0x00000011}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -45530,
            .B = 0x0000B1DA,
            .C = 0x00002FA7,
            .D = 0x00F2F36C
        },
        .vertices = {0x0000000C, 0x00000002, 0x00000013, 0x00000012}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -45530,
            .B = 0x0000B1DA,
            .C = -12199,
            .D = 0x00F2F36D
        },
        .vertices = {0x00000002, 0x00000001, 0x00000014, 0x00000013}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -33330,
            .B = 0x0000B1DA,
            .C = -33330,
            .D = 0x00F2F36F
        },
        .vertices = {0x00000001, 0x00000003, 0x00000015, 0x00000014}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -12199,
            .B = 0x0000B1DA,
            .C = -45530,
            .D = 0x00F2F36C
        },
        .vertices = {0x00000003, 0x00000004, 0x00000016, 0x00000015}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x00002FA7,
            .B = 0x0000B1DA,
            .C = -45530,
            .D = 0x00F2F36D
        },
        .vertices = {0x00000004, 0x00000005, 0x00000017, 0x00000016}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x00008232,
            .B = 0x0000B1DA,
            .C = -33330,
            .D = 0x00F2F36F
        },
        .vertices = {0x00000005, 0x00000006, 0x00000018, 0x00000017}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x0000B1DA,
            .B = 0x0000B1DA,
            .C = -12199,
            .D = 0x00F2F36C
        },
        .vertices = {0x00000006, 0x00000007, 0x0000000D, 0x00000018}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x0000EF62,
            .B = 0x00004024,
            .C = 0x00004024,
            .D = 0x00EF629C
        },
        .vertices = {0x0000000D, 0x0000000E, 0x0000001A, 0x00000019}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x0000AF3E,
            .B = 0x00004024,
            .C = 0x0000AF3E,
            .D = 0x00EF62A2
        },
        .vertices = {0x0000000E, 0x0000000F, 0x0000001B, 0x0000001A}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x00004024,
            .B = 0x00004024,
            .C = 0x0000EF62,
            .D = 0x00EF62A4
        },
        .vertices = {0x0000000F, 0x00000010, 0x0000001C, 0x0000001B}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -16420,
            .B = 0x00004024,
            .C = 0x0000EF62,
            .D = 0x00EF629C
        },
        .vertices = {0x00000010, 0x00000011, 0x0000001D, 0x0000001C}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -44862,
            .B = 0x00004024,
            .C = 0x0000AF3E,
            .D = 0x00EF62A2
        },
        .vertices = {0x00000011, 0x00000012, 0x0000001E, 0x0000001D}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -61282,
            .B = 0x00004024,
            .C = 0x00004024,
            .D = 0x00EF62A4
        },
        .vertices = {0x00000012, 0x00000013, 0x0000001F, 0x0000001E}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -61282,
            .B = 0x00004024,
            .C = -16420,
            .D = 0x00EF629C
        },
        .vertices = {0x00000013, 0x00000014, 0x00000020, 0x0000001F}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -44862,
            .B = 0x00004024,
            .C = -44862,
            .D = 0x00EF62A2
        },
        .vertices = {0x00000014, 0x00000015, 0x00000021, 0x00000020}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -16420,
            .B = 0x00004024,
            .C = -61282,
            .D = 0x00EF62A4
        },
        .vertices = {0x00000015, 0x00000016, 0x00000022, 0x00000021}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x00004024,
            .B = 0x00004024,
            .C = -61282,
            .D = 0x00EF629C
        },
        .vertices = {0x00000016, 0x00000017, 0x00000023, 0x00000022}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x0000AF3E,
            .B = 0x00004024,
            .C = -44862,
            .D = 0x00EF62A2
        },
        .vertices = {0x00000017, 0x00000018, 0x00000024, 0x00000023}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x0000EF62,
            .B = 0x00004024,
            .C = -16420,
            .D = 0x00EF62A4
        },
        .vertices = {0x00000018, 0x0000000D, 0x00000019, 0x00000024}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x0000EF62,
            .B = -16420,
            .C = 0x00004024,
            .D = 0x00EF62A3
        },
        .vertices = {0x00000019, 0x0000001A, 0x00000026, 0x00000025}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x0000AF3E,
            .B = -16420,
            .C = 0x0000AF3E,
            .D = 0x00EF62A2
        },
        .vertices = {0x0000001A, 0x0000001B, 0x00000027, 0x00000026}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x00004024,
            .B = -16420,
            .C = 0x0000EF62,
            .D = 0x00EF629D
        },
        .vertices = {0x0000001B, 0x0000001C, 0x00000028, 0x00000027}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -16420,
            .B = -16420,
            .C = 0x0000EF62,
            .D = 0x00EF62A3
        },
        .vertices = {0x0000001C, 0x0000001D, 0x00000029, 0x00000028}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -44862,
            .B = -16420,
            .C = 0x0000AF3E,
            .D = 0x00EF62A2
        },
        .vertices = {0x0000001D, 0x0000001E, 0x0000002A, 0x00000029}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -61282,
            .B = -16420,
            .C = 0x00004024,
            .D = 0x00EF629D
        },
        .vertices = {0x0000001E, 0x0000001F, 0x0000002B, 0x0000002A}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -61282,
            .B = -16420,
            .C = -16420,
            .D = 0x00EF62A3
        },
        .vertices = {0x0000001F, 0x00000020, 0x0000002C, 0x0000002B}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -44862,
            .B = -16420,
            .C = -44862,
            .D = 0x00EF62A2
        },
        .vertices = {0x00000020, 0x00000021, 0x0000002D, 0x0000002C}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -16420,
            .B = -16420,
            .C = -61282,
            .D = 0x00EF629D
        },
        .vertices = {0x00000021, 0x00000022, 0x0000002E, 0x0000002D}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x00004024,
            .B = -16420,
            .C = -61282,
            .D = 0x00EF62A3
        },
        .vertices = {0x00000022, 0x00000023, 0x0000002F, 0x0000002E}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x0000AF3E,
            .B = -16420,
            .C = -44862,
            .D = 0x00EF62A2
        },
        .vertices = {0x00000023, 0x00000024, 0x00000030, 0x0000002F}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x0000EF62,
            .B = -16420,
            .C = -16420,
            .D = 0x00EF629D
        },
        .vertices = {0x00000024, 0x00000019, 0x00000025, 0x00000030}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x0000B1DA,
            .B = -45530,
            .C = 0x00002FA7,
            .D = 0x00F2F36C
        },
        .vertices = {0x00000025, 0x00000026, 0x00000032, 0x00000031}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x00008232,
            .B = -45530,
            .C = 0x00008232,
            .D = 0x00F2F36F
        },
        .vertices = {0x00000026, 0x00000027, 0x00000033, 0x00000032}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x00002FA7,
            .B = -45530,
            .C = 0x0000B1DA,
            .D = 0x00F2F36C
        },
        .vertices = {0x00000027, 0x00000028, 0x00000034, 0x00000033}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -12199,
            .B = -45530,
            .C = 0x0000B1DA,
            .D = 0x00F2F36C
        },
        .vertices = {0x00000028, 0x00000029, 0x00000035, 0x00000034}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -33330,
            .B = -45530,
            .C = 0x00008232,
            .D = 0x00F2F36F
        },
        .vertices = {0x00000029, 0x0000002A, 0x00000036, 0x00000035}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -45530,
            .B = -45530,
            .C = 0x00002FA7,
            .D = 0x00F2F36C
        },
        .vertices = {0x0000002A, 0x0000002B, 0x00000037, 0x00000036}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -45530,
            .B = -45530,
            .C = -12199,
            .D = 0x00F2F36C
        },
        .vertices = {0x0000002B, 0x0000002C, 0x00000038, 0x00000037}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -33330,
            .B = -45530,
            .C = -33330,
            .D = 0x00F2F36F
        },
        .vertices = {0x0000002C, 0x0000002D, 0x00000039, 0x00000038}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = -12199,
            .B = -45530,
            .C = -45530,
            .D = 0x00F2F36C
        },
        .vertices = {0x0000002D, 0x0000002E, 0x0000003A, 0x00000039}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x00002FA7,
            .B = -45530,
            .C = -45530,
            .D = 0x00F2F36C
        },
        .vertices = {0x0000002E, 0x0000002F, 0x0000003B, 0x0000003A}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x00008232,
            .B = -45530,
            .C = -33330,
            .D = 0x00F2F36F
        },
        .vertices = {0x0000002F, 0x00000030, 0x0000003C, 0x0000003B}
    },
    {
        .base = {.type = 0x00000004},
        .normal = {
            .A = 0x0000B1DA,
            .B = -45530,
            .C = -12199,
            .D = 0x00F2F36C
        },
        .vertices = {0x00000030, 0x00000025, 0x00000031, 0x0000003C}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = 0x00004219,
            .B = -63150,
            .C = 0x000011B5,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000031, 0x00000032, 0x0000003D, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = 0x00003063,
            .B = -63150,
            .C = 0x00003063,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000032, 0x00000033, 0x0000003D, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = 0x000011B5,
            .B = -63150,
            .C = 0x00004219,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000033, 0x00000034, 0x0000003D, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = -4533,
            .B = -63150,
            .C = 0x00004219,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000034, 0x00000035, 0x0000003D, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = -12387,
            .B = -63150,
            .C = 0x00003063,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000035, 0x00000036, 0x0000003D, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = -16921,
            .B = -63150,
            .C = 0x000011B5,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000036, 0x00000037, 0x0000003D, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = -16921,
            .B = -63150,
            .C = -4533,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000037, 0x00000038, 0x0000003D, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = -12387,
            .B = -63150,
            .C = -12387,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000038, 0x00000039, 0x0000003D, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = -4533,
            .B = -63150,
            .C = -16921,
            .D = 0x00F6AE42
        },
        .vertices = {0x00000039, 0x0000003A, 0x0000003D, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = 0x000011B5,
            .B = -63150,
            .C = -16921,
            .D = 0x00F6AE42
        },
        .vertices = {0x0000003A, 0x0000003B, 0x0000003D, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = 0x00003063,
            .B = -63150,
            .C = -12387,
            .D = 0x00F6AE42
        },
        .vertices = {0x0000003B, 0x0000003C, 0x0000003D, 0x00000000}
    },
    {
        .base = {.type = 0x00000003},
        .normal = {
            .A = 0x00004219,
            .B = -63150,
            .C = -4533,
            .D = 0x00F6AE42
        },
        .vertices = {0x0000003C, 0x00000031, 0x0000003D, 0x00000000}
    }
};

// SMRGLTextureBasic
SMRGLTextureBasic SMRGLTextureBasic_0066e158 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "headlite.raw"
};
SMRGLTextureBasic SMRGLTextureBasic_0066e460 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BLUEGLOW.RAW"
};
SMRGLTextureBasic SMRGLTextureBasic_0066e784 = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "CHAR2.RAW"
};
SMRGLTextureBasic g_CameraBackdropTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "BACKGND.RAW"
};
SMRGLTextureBasic g_CoronaHeadliteTexture = {
    .base = {.type = 0x0000000D, .count = 0x00000000},
    .texture_name = "headlite.raw"
};

// SMRGLTextureBasic[20]
SMRGLTextureBasic g_LightTextures[20] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "LITEFUZZ.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "HEADLITE.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SUN06.RAW"
    },
    {
        .base = {.type = 0x3E4CCCCD, .count = 0x3D40478C},
        .texture_name = {0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00}
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SUN07.RAW"
    },
    {
        .base = {.type = -1098203005, .count = 0x3C44C048},
        .texture_name = {0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00}
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SUN09.RAW"
    },
    {
        .base = {.type = -1093337612, .count = 0x3DB2DD58},
        .texture_name = {0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00}
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SUNCRAM.RAW"
    },
    {
        .base = {.type = -1092297425, .count = 0x3E1FDC3A},
        .texture_name = {-126, 0x00, 0x00, 0x00, -126, 0x00, 0x00, 0x00, -2, 0x00, 0x00, 0x00, -2, 0x00, 0x00, 0x00}
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SUN11.RAW"
    },
    {
        .base = {.type = -1091357901, .count = 0x3D375614},
        .texture_name = {0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00}
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SUN12.RAW"
    },
    {
        .base = {.type = -1088119898, .count = 0x3D886260},
        .texture_name = {0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00}
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SUN13.RAW"
    },
    {
        .base = {.type = -1087599804, .count = 0x3D862602},
        .texture_name = {0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00, -8, 0x00, 0x00, 0x00}
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SUNCRAM.RAW"
    },
    {
        .base = {.type = -1082130432, .count = 0x3E6E1D11},
        .texture_name = {-126, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, -2, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00}
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "SUNCRAM.RAW"
    },
    {
        .base = {.type = -1079337026, .count = 0x3EE52B99},
        .texture_name = {0x02, 0x00, 0x00, 0x00, -126, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, -2, 0x00, 0x00, 0x00}
    }
};

// SMRGLTextureBasic[6]
SMRGLTextureBasic SMRGLTextureBasic_ARRAY_0066e6b0[6] = {
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT1.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT2.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT3.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT4.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT5.RAW"
    },
    {
        .base = {.type = 0x0000000D, .count = 0x00000000},
        .texture_name = "BOLT6.RAW"
    }
};

// SResolutionEntry[9]
SResolutionEntry g_ResolutionTable[9] = {
    {.width = 0x00000140, .height = 0x000000C8},
    {.width = 0x00000140, .height = 0x000000F0},
    {.width = 0x00000140, .height = 0x00000190},
    {.width = 0x00000200, .height = 0x00000180},
    {.width = 0x00000280, .height = 0x000001E0},
    {.width = 0x00000320, .height = 0x00000258},
    {.width = 0x00000400, .height = 0x00000300},
    {.width = 0x00000500, .height = 0x00000400},
    {.width = 0x00000640, .height = 0x000004B0}
};

// WatcomDestructorCall
WatcomDestructorCall WatcomDestructorCall_006603c0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_InvBackgroundBitmap
};
WatcomDestructorCall WatcomDestructorCall_006603cc = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_InvBackground2Bitmap
};
WatcomDestructorCall WatcomDestructorCall_006603d8 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_WeapBackgroundBitmap
};
WatcomDestructorCall WatcomDestructorCall_006603e4 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_WeapBackground2Bitmap
};
WatcomDestructorCall WatcomDestructorCall_006603f0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_BatteryIconBitmap
};
WatcomDestructorCall WatcomDestructorCall_006603fc = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_HealthBar1Bitmap
};
WatcomDestructorCall WatcomDestructorCall_00660408 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_HealthBar2Bitmap
};
WatcomDestructorCall WatcomDestructorCall_00660414 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_TommyClipIconBitmap
};
WatcomDestructorCall WatcomDestructorCall_00660420 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_BulletIconBitmap
};
WatcomDestructorCall WatcomDestructorCall_0066042c = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_LithiumIconBitmap
};
WatcomDestructorCall WatcomDestructorCall_00660438 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_MercuryBulletIconBitmap
};
WatcomDestructorCall WatcomDestructorCall_00660444 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_ShotShellIconBitmap
};
WatcomDestructorCall WatcomDestructorCall_00660450 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_SilverBulletIconBitmap
};
WatcomDestructorCall WatcomDestructorCall_0066045c = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_HolyBulletIconBitmap
};
WatcomDestructorCall WatcomDestructorCall_006608c0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90,
    .object_instance = (void *)&g_LoadingMoonModel
};
WatcomDestructorCall WatcomDestructorCall_00660cc0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_fileman_cpp_CDemonFileManager_dtor_FUN_00508880,
    .object_instance = (void *)&g_CDemonFileManagerInstance
};
WatcomDestructorCall WatcomDestructorCall_00660ccc = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_LoadingScreenBitmap1
};
WatcomDestructorCall WatcomDestructorCall_00660cd8 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_LoadingScreenBitmap2
};
WatcomDestructorCall WatcomDestructorCall_00660ce4 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_LoadingScreenBitmap3
};
WatcomDestructorCall WatcomDestructorCall_00660cf0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_LoadingScreenBitmap4
};
WatcomDestructorCall WatcomDestructorCall_006612a0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)shape_memdbg_cpp_CLeakChecker_dtor_FUN_0050fbc0,
    .object_instance = (void *)&g_CLeakCheckerInstance
};
WatcomDestructorCall WatcomDestructorCall_006612d0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_menu_cpp_CAlphaBitmap_arrdtor_FUN_00514f50,
    .object_instance = (void *)&g_MenuBitmaps
};
WatcomDestructorCall WatcomDestructorInfo_006612dc = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_moon_cpp_CMoon_dtor_FUN_00529ab0,
    .object_instance = (void *)&g_CMoonInstance
};
WatcomDestructorCall WatcomDestructorCall_006612e8 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_MenuBlurLeft
};
WatcomDestructorCall WatcomDestructorCall_006612f4 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_MenuBlurMiddle
};
WatcomDestructorCall WatcomDestructorCall_00661300 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_MenuBlurRight
};
WatcomDestructorCall WatcomDestructorCall_0066130c = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_CalibrationBitmap
};
WatcomDestructorCall WatcomDestructorCall_00661360 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)shape_meshlod_cpp_CLodFace_arrdtor_FUN_0051f0c0,
    .object_instance = (void *)&g_TempNeighborFaces
};
WatcomDestructorCall WatcomDestructorCall_00661ad0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540,
    .object_instance = (void *)&g_MoonCloudTexture
};
WatcomDestructorCall WatcomDestructorCall_00661adc = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_moon_cpp_CAlphaBitmap_arrdtor_FUN_0052a470,
    .object_instance = (void *)&g_MoonAnimTextures
};
WatcomDestructorCall WatcomDestructorCall_00661ae8 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_moon_cpp_CCourse_arrdtor_FUN_0052a450,
    .object_instance = (void *)&g_MoonBatCourses
};
WatcomDestructorCall WatcomDestructorCall_00661af4 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90,
    .object_instance = (void *)&g_MoonBatModel
};
WatcomDestructorCall WatcomDestructorCall_00661c10 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)shape_edittool_cpp_CEdCheck_dtor_FUN_004a6a40,
    .object_instance = (void *)&g_CEdCheckInstance
};
WatcomDestructorCall WatcomDestructorCall_00661c1c = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20,
    .object_instance = (void *)0x02F797E4
};
WatcomDestructorCall WatcomDestructorCall_00661c70 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_netgame_cpp_CNetGame_dtor_FUN_0053f760,
    .object_instance = (void *)&g_CNetGameInstance
};
WatcomDestructorCall WatcomDestructorCall_00661d20 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)engine_ncursfx_cpp_CMouse_dtor_FUN_005443e0,
    .object_instance = (void *)&g_CMouseInstance
};
WatcomDestructorCall WatcomDestructorCall_006620e0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_path_cpp_CPathMap_arrdtor_FUN_00548c30,
    .object_instance = (void *)&CPathMap_ARRAY_02fd9060
};
WatcomDestructorCall g_CDemonPodDestructorNode = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_podmain_cpp_CDemonPod_dtor_FUN_00551b20,
    .object_instance = (void *)&g_CDemonPodInstance
};
WatcomDestructorCall WatcomDestructorCall_006625f0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)shape_edittool_cpp_CPickList_dtor_FUN_004a3c80,
    .object_instance = (void *)&g_ScriptPickList
};
WatcomDestructorCall WatcomDestructorCall_006625fc = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_script_cpp_CScript_dtor_FUN_00559840,
    .object_instance = (void *)&g_CScriptInstance
};
WatcomDestructorCall WatcomDestructorCall_00662608 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20,
    .object_instance = (void *)&g_ScriptEditorVScrollBar
};
WatcomDestructorCall WatcomDestructorCall_00662614 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20,
    .object_instance = (void *)&g_ScriptEditorHScrollBar
};
WatcomDestructorCall WatcomDestructorCall_00662820 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_set_cpp_CDemonSet_dtor_FUN_00569350,
    .object_instance = (void *)&g_CDemonSetInstance
};
WatcomDestructorCall WatcomDestructorCall_0066282c = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dcamera_cpp_CDemonCamera_dtor_FUN_0044c090,
    .object_instance = (void *)&g_CDemonCameraInstance
};
WatcomDestructorCall WatcomDestructorCall_00662838 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dtrace_cpp_CDemonRaytrace_dtor_FUN_00494240,
    .object_instance = (void *)&g_CDemonRaytraceInstance
};
WatcomDestructorCall WatcomDestructorCall_00662844 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90,
    .object_instance = (void *)&g_CKeyFramedModelInstance
};
WatcomDestructorCall WatcomDestructorCall_006629b0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_setdir_cpp_CZThumb_arrdtor_FUN_00576910,
    .object_instance = (void *)&g_CZThumbPool
};
WatcomDestructorCall WatcomDestructorCall_00662a10 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)shape_edittool_cpp_CPickList_dtor_FUN_004a3c80,
    .object_instance = (void *)&CPickList_03653fc0
};
WatcomDestructorCall WatcomDestructorCall_00662a1c = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20,
    .object_instance = (void *)&CEdScrollBar_03364ce0
};
WatcomDestructorCall WatcomDestructorCall_00662e30 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90,
    .object_instance = (void *)&CKeyFramedModel_03665f74
};
WatcomDestructorCall WatcomDestructorCall_00662e80 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_skeleton_cpp_CDeformableModel_arrdtor_FUN_005a1fd0,
    .object_instance = (void *)&g_DeformableModelPool
};
WatcomDestructorCall WatcomDestructorCall_00662e8c = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_skeleton_cpp_CSkeleton_arrdtor_FUN_005a1fb0,
    .object_instance = (void *)&g_SkeletonPool
};
WatcomDestructorCall WatcomDestructorCall_00663110 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)sound_sndmain_cpp_CSfxSample_arrdtor_FUN_005ade40,
    .object_instance = (void *)&g_SfxSamples
};
WatcomDestructorCall WatcomDestructorCall_0066311c = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530,
    .object_instance = (void *)&g_CMP3DecoderInstance
};
WatcomDestructorCall WatcomDestructorCall_00663128 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530,
    .object_instance = (void *)&g_CMP3DecoderInstance
};
WatcomDestructorCall WatcomDestructorCall_006632e0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)shape_edittool_cpp_CStrList_dtor_FUN_004a2a40,
    .object_instance = (void *)&g_SoundFileList
};
WatcomDestructorCall WatcomDestructorCall_006632ec = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)shape_edittool_cpp_CStrList_dtor_FUN_004a2a40,
    .object_instance = (void *)&g_MissingSoundsList
};
WatcomDestructorCall WatcomDestructorCall_00664600 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_texlist_cpp_CTextureList_dtor_FUN_005dbdf0,
    .object_instance = (void *)&g_CTextureListInstance
};
WatcomDestructorCall WatcomDestructorCall_006652c0 = {
    .delete_flags = 0x00000004,
    .destructor_func = (void *)core_water_cpp_CWater_dtor_FUN_005e9e30,
    .object_instance = (void *)&g_CWaterInstance
};

// WatcomStaticDestructorNode
WatcomStaticDestructorNode WatcomStaticDestructorNode_0066e5cc = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065b180,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CDemonFilter_ARRAY_008229ec
};
WatcomStaticDestructorNode g_CDeformableModelInstanceDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065bb30,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CDeformableModelInstanceInstance
};
WatcomStaticDestructorNode g_ConsoleDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&g_CConsoleDestructorCall,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CConsoleInstance
};
WatcomStaticDestructorNode g_CLZWDecompressDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065c630,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CLZWDecompressInstance
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0066ef5c = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065c830,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CDemonFilter_ARRAY_020a4878
};
WatcomStaticDestructorNode WatcomStaticDestructorNode_0066ef6c = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065c83c,
    .registration_type = 0x00000001,
    .object_instance = (void *)&CDemonFilter_ARRAY_020a4ad8
};
WatcomStaticDestructorNode g_CFilterCacheDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065c848,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CFilterCacheInstance
};
WatcomStaticDestructorNode g_CFilterFXDestructorNode = {
    .next = nullptr,
    .destructor_info = (WatcomDestructorCall *)&WatcomDestructorCall_0065c854,
    .registration_type = 0x00000001,
    .object_instance = (void *)&g_CFilterFXInstance
};

// WatcomTypeInfo
WatcomTypeInfo g_CIcePickTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_icepick_cpp_CIcePick_ctor_FUN_004f7df0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_icepick_cpp_CIcePick_dtor_FUN_004f97e0,
    .instance_size = 0x0001FC04,
    .class_name = (char *)s_CIcePick_0067ccb0
};
WatcomTypeInfo g_CImpTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_imp_cpp_CImp_ctor_FUN_004f98a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_imp_cpp_CImp_dtor_FUN_004fb180,
    .instance_size = 0x0000BEF4,
    .class_name = (char *)s_CImp_0067ccc4
};
WatcomTypeInfo g_CIniTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_ini_cpp_CIni_ctor_FUN_004fbd70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_ini_cpp_CIni_dtor_FUN_004fbd80,
    .instance_size = 0x00000004,
    .class_name = (char *)s_cIni_0067ccd0
};
WatcomTypeInfo g_CKeyActorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_keyactor_cpp_CKeyActor_ctor_FUN_00501690,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_keyactor_cpp_CKeyActor_dtor_FUN_005019b0,
    .instance_size = 0x0000031C,
    .class_name = (char *)s_CKeyActor_0067cf34
};
WatcomTypeInfo g_CLadderTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_ladder_cpp_CLadder_ctor_FUN_00502540,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_ladder_cpp_CLadder_dtor_FUN_00502ed0,
    .instance_size = 0x00000300,
    .class_name = (char *)s_CLadder_0067cf50
};
WatcomTypeInfo g_CLarvaTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_larva_cpp_CLarva_ctor_FUN_00502f90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_larva_cpp_CLarva_dtor_FUN_00503cc0,
    .instance_size = 0x0000BEC8,
    .class_name = (char *)s_CLarva_0067cf64
};
WatcomTypeInfo g_CLeverTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_lever_cpp_CLever_ctor_FUN_005047d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_lever_cpp_CLever_dtor_FUN_00505430,
    .instance_size = 0x00000814,
    .class_name = (char *)s_CLever_0067cfbc
};
WatcomTypeInfo g_CLightGunTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_lightgun_cpp_CLightGun_ctor_FUN_00505900,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_lightgun_cpp_CLightGun_dtor_FUN_00506a50,
    .instance_size = 0x00000590,
    .class_name = (char *)s_CLightGun_0067cfe0
};
WatcomTypeInfo g_CLightConeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_litecone_cpp_CLightCone_ctor_FUN_00506b10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_litecone_cpp_CLightCone_dtor_FUN_00506e30,
    .instance_size = 0x0000022C,
    .class_name = (char *)s_CLightCone_0067cff8
};
WatcomTypeInfo g_CDemonFileManagerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_fileman_cpp_CDemonFileManager_ctor_FUN_00508860,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_fileman_cpp_CDemonFileManager_dtor_FUN_00508880,
    .instance_size = 0x00138814,
    .class_name = (char *)s_CDemonFileManager_0067d094
};
WatcomTypeInfo g_CEdScrollBarTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20,
    .instance_size = 0x00000034,
    .class_name = (char *)s_CEdScrollBar_0067d074
};
WatcomTypeInfo g_SPanelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_manpuz_cpp_SPanel_ctor_FUN_0050b980,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_manpuz_cpp_SPanel_dtor_FUN_0050b990,
    .instance_size = 0x00000064,
    .class_name = (char *)s_SPanel_0067d130
};
WatcomTypeInfo g_SGemTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_manpuz_cpp_SGem_ctor_FUN_0050b940,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_manpuz_cpp_SGem_dtor_FUN_0050b960,
    .instance_size = 0x000000B8,
    .class_name = (char *)s_SGem_0067d124
};
WatcomTypeInfo g_SReflectorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_manpuz_cpp_SReflector_ctor_FUN_0050b920,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_manpuz_cpp_SReflector_dtor_FUN_0050b930,
    .instance_size = 0x00000060,
    .class_name = (char *)s_SReflector_0067d110
};
WatcomTypeInfo g_CMirrorHackTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_manpuz_cpp_CMirrorHack_ctor_FUN_0050b110,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_manpuz_cpp_CMirrorHack_dtor_FUN_0050b840,
    .instance_size = 0x000002D8,
    .class_name = (char *)s_CMirrorHack_0067d0fc
};
WatcomTypeInfo g_CMansionPuzzleCircleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_manpuz_cpp_CMansionPuzzleCircle_ctor_FUN_00508920,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_0050b890,
    .instance_size = 0x00001514,
    .class_name = (char *)s_CMansionPuzzleCircle_0067d0e0
};
WatcomTypeInfo g_CMarqueeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_marquee_cpp_CMarquee_ctor_FUN_0050bb60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_marquee_cpp_CMarquee_dtor_FUN_0050c4c0,
    .instance_size = 0x000001BC,
    .class_name = (char *)s_CMarquee_0067d16c
};
WatcomTypeInfo g_CMeleeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_melee_cpp_CMelee_ctor_FUN_0050e7d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_melee_cpp_CMelee_dtor_FUN_0050edf0,
    .instance_size = 0x000006CC,
    .class_name = (char *)s_CMelee_0067d1c8
};
WatcomTypeInfo g_CLeakCheckerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_memdbg_cpp_CLeakChecker_ctor_FUN_0050fba0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_memdbg_cpp_CLeakChecker_dtor_FUN_0050fbc0,
    .instance_size = 0x00000001,
    .class_name = (char *)s_CLeakChecker_0067d214
};
WatcomTypeInfo g_CMoonTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_moon_cpp_CMoon_ctor_FUN_00529a80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_moon_cpp_CMoon_dtor_FUN_00529ab0,
    .instance_size = 0x000056E0,
    .class_name = (char *)s_CMoon_0067d368
};
WatcomTypeInfo g_LodFaceTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_meshlod_cpp_CLodFace_ctor_FUN_0051ef00,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)shape_meshlod_cpp_CLodFace_copy_FUN_0051ef20,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_meshlod_cpp_CLodFace_dtor_FUN_0051efc0,
    .instance_size = 0x0000008C,
    .class_name = (char *)s_LodFace_0067d504
};
WatcomTypeInfo g_CSpotViewTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_meshlod_cpp_CSpotView_dtor_FUN_0051f080,
    .instance_size = 0x0000003C,
    .class_name = (char *)s_CSpotView_0067d4e4
};
WatcomTypeInfo g_LodMeshTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)shape_meshlod_cpp_CLodMesh_copy_FUN_00515860,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950,
    .instance_size = 0x00000074,
    .class_name = (char *)s_LodMesh_0067d4d4
};
WatcomTypeInfo g_CMimicTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_mimic_cpp_CMimic_ctor_FUN_0051f1d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_mimic_cpp_CMimic_dtor_FUN_0051f2c0,
    .instance_size = 0x0004CA58,
    .class_name = (char *)s_CMimic_0067d518
};
WatcomTypeInfo g_CMineCarTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_minecar_cpp_CMineCar_ctor_FUN_00520f20,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_minecar_cpp_CMineCar_dtor_FUN_00520f40,
    .instance_size = 0x00000730,
    .class_name = (char *)s_CMineCar_0067d52c
};
WatcomTypeInfo g_SClipPlaneTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_mirror_cpp_SClipPlane_ctor_FUN_00522bf0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_mirror_cpp_SClipPlane_dtor_FUN_00522c00,
    .instance_size = 0x00000010,
    .class_name = (char *)s_SClipPlane_0067d53c
};
WatcomTypeInfo g_CDemonMissionTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_mission_cpp_CDemonMission_ctor_FUN_00524ef0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_mission_cpp_CDemonMission_dtor_FUN_00524f00,
    .instance_size = 0x000027D0,
    .class_name = (char *)s_CDemonMission_0067d6a4
};
WatcomTypeInfo g_CMobsterTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_mobster_cpp_CMobster_ctor_FUN_00525200,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_mobster_cpp_CMobster_dtor_FUN_00527c70,
    .instance_size = 0x0000BF94,
    .class_name = (char *)s_CMobster_0067d6ec
};
WatcomTypeInfo g_CMolochTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_moloch_cpp_CMoloch_ctor_FUN_00528b30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_moloch_cpp_CMoloch_dtor_FUN_00528bf0,
    .instance_size = 0x00022B98,
    .class_name = (char *)s_CMoloch_0067d70c
};
WatcomTypeInfo g_SBatTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_moon_cpp_SBat_ctor_FUN_0052a410,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_moon_cpp_SBat_dtor_FUN_0052a420,
    .instance_size = 0x00000018,
    .class_name = (char *)s_SBat_0067d7d8
};
WatcomTypeInfo g_CMorphModelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_morph_cpp_CMorphModel_ctor_FUN_0052a4c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_morph_cpp_CMorphModel_dtor_FUN_0052a4f0,
    .instance_size = 0x00000608,
    .class_name = (char *)s_CMorphModel_0067d7fe
};
WatcomTypeInfo g_SMorphControlPointTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_morph_cpp_SMorphControlPoint_ctor_FUN_0052cc50,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_morph_cpp_SMorphControlPoint_dtor_FUN_0052cc70,
    .instance_size = 0x00000020,
    .class_name = (char *)s_SMorphControlPoint_0067d7e4
};
WatcomTypeInfo g_CMotionControllerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_motion_cpp_CMotionController_ctor_FUN_0052d570,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_motion_cpp_CMotionController_dtor_FUN_0052d5a0,
    .instance_size = 0x00000054,
    .class_name = (char *)s_CMotionController_0067d811
};
WatcomTypeInfo g_CEdCheckTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_edittool_cpp_CEdCheck_ctor_FUN_004a6a00,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_edittool_cpp_CEdCheck_dtor_FUN_004a6a40,
    .instance_size = 0x000000EC,
    .class_name = (char *)s_CEdCheck_006809e4
};
WatcomTypeInfo g_CNetGameTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_netgame_cpp_CNetGame_ctor_FUN_0053f6d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_netgame_cpp_CNetGame_dtor_FUN_0053f760,
    .instance_size = 0x00000174,
    .class_name = (char *)s_CNetGame_00680a5c
};
WatcomTypeInfo g_SChatHistoryTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_netgame_cpp_SChatHistory_ctor_FUN_00543cc0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_netgame_cpp_SChatHistory_dtor_FUN_00543cd0,
    .instance_size = 0x00000120,
    .class_name = (char *)s_SChatHistory_00680a48
};
WatcomTypeInfo g_SPlayerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_netgame_cpp_SPlayer_ctor_FUN_00543cb0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .instance_size = 0x00000028,
    .class_name = (char *)s_GSPlayer_PGameSettingsCh_00680a20
};
WatcomTypeInfo g_SNetPlayerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_netgame_cpp_SNetPlayer_ctor_FUN_00543ce0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)core_netgame_cpp_SNetPlayer_copy_FUN_00543cf0,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .instance_size = 0x00000078,
    .class_name = (char *)s_SNetPlayer_00680a0c
};
WatcomTypeInfo g_CMouseTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_ncursfx_cpp_CMouse_ctor_FUN_00544380,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_ncursfx_cpp_CMouse_dtor_FUN_005443e0,
    .instance_size = 0x00000260,
    .class_name = (char *)s_CMouse_00680b88
};
WatcomTypeInfo g_CPassengerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_passngr_cpp_CPassenger_ctor_FUN_00545b30,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_passngr_cpp_CPassenger_dtor_FUN_00545c10,
    .instance_size = 0x00020448,
    .class_name = (char *)s_CPassenger_00680ba0
};
WatcomTypeInfo g_CPathMapTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_path_cpp_CPathMap_ctor_FUN_00546450,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_path_cpp_CPathMap_dtor_FUN_005464d0,
    .instance_size = 0x000138DC,
    .class_name = (char *)s_CPathMap_00680c78
};
WatcomTypeInfo g_CPendulumTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_pendulum_cpp_CPendulum_ctor_FUN_00549390,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_pendulum_cpp_CPendulum_dtor_FUN_0054a7d0,
    .instance_size = 0x00000444,
    .class_name = (char *)s_CPendulum_00680c8c
};
WatcomTypeInfo g_CPackedBitmapTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)cockpit_pkbitmap_cpp_CPackedBitmap_ctor_FUN_0054a820,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)cockpit_pkbitmap_cpp_CPackedBitmap_dtor_FUN_0054a890,
    .instance_size = 0x00000024,
    .class_name = (char *)s_CPackedBitmap_00680ca8
};
WatcomTypeInfo g_CPodTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)engine_pod_cpp_CPod_ctor_FUN_00550980,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_pod_cpp_CPod_dtor_FUN_005509b0,
    .instance_size = 0x00000198,
    .class_name = (char *)s_CPod_00680cc4
};
WatcomTypeInfo g_CDemonPodTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_podmain_cpp_CDemonPod_ctor_FUN_00551b00,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_podmain_cpp_CDemonPod_dtor_FUN_00551b20,
    .instance_size = 0x00000198,
    .class_name = (char *)s_CDemonPod_00680ce4
};
WatcomTypeInfo g_CScatTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_scat_cpp_CScat_ctor_FUN_00556ed0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_scat_cpp_CScat_dtor_FUN_00559160,
    .instance_size = 0x0001FC00,
    .class_name = (char *)s_CScat_00680d04
};
WatcomTypeInfo g_CScriptTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_script_cpp_CScript_ctor_FUN_005597f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_script_cpp_CScript_dtor_FUN_00559840,
    .instance_size = 0x00000480,
    .class_name = (char *)s_CScript_00681064
};
WatcomTypeInfo g_CSentinelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_sentinel_cpp_CSentinel_ctor_FUN_00567db0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_sentinel_cpp_CSentinel_dtor_FUN_00568f80,
    .instance_size = 0x0000BEC4,
    .class_name = (char *)s_CSentinel_00681078
};
WatcomTypeInfo g_CDemonSetTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_set_cpp_CDemonSet_ctor_FUN_005690c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_set_cpp_CDemonSet_dtor_FUN_00569350,
    .instance_size = 0x0016166C,
    .class_name = (char *)s_CDemonSet_00681468
};
WatcomTypeInfo g_CDemonRaytraceTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_dtrace_cpp_CDemonRaytrace_ctor_FUN_00494200,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_dtrace_cpp_CDemonRaytrace_dtor_FUN_00494240,
    .instance_size = 0x0000006C,
    .class_name = (char *)s_CDemonRaytrace_00681450
};
WatcomTypeInfo g_C3DSCameraTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setutil_cpp_C3DSCamera_ctor_FUN_00585310,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_setutil_cpp_C3DSCamera_dtor_FUN_00585340,
    .instance_size = 0x000001A4,
    .class_name = (char *)s_C3DSCamera_0068143c
};
WatcomTypeInfo g_C3DSLightTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setutil_cpp_C3DSLight_ctor_FUN_005862f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_set_cpp_C3DSLight_dtor_FUN_005714b0,
    .instance_size = 0x00001898,
    .class_name = (char *)s_C3DSLight_00681428
};
WatcomTypeInfo g_SRoomTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_set_cpp_SRoom_ctor_FUN_00571470,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_set_cpp_SRoom_dtor_FUN_00571480,
    .instance_size = 0x00000044,
    .class_name = (char *)s_SRoom_CDemonSet_00681410
};
WatcomTypeInfo g_SVDBoxTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_set_cpp_SVDBox_ctor_FUN_00571490,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_set_cpp_SVDBox_dtor_FUN_005714a0,
    .instance_size = 0x00000044,
    .class_name = (char *)s_SVDBox_00681400
};
WatcomTypeInfo g_SRaytraceStateTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setcolid_cpp_SRaytraceState_ctor_FUN_00574690,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_setcolid_cpp_SRaytraceState_dtor_FUN_005746a0,
    .instance_size = 0x000000A0,
    .class_name = (char *)s_SRaytraceState_006814b1
};
WatcomTypeInfo g_SCollisionReturnInfoTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setcolid_cpp_SCollisionReturnInfo_ctor_FUN_00574750,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_setcolid_cpp_SCollisionReturnInfo_dtor_FUN_00574760,
    .instance_size = 0x0000001C,
    .class_name = (char *)s_SCollisionReturnInfo_00681495
};
WatcomTypeInfo g_SIntersectXZCylinderTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setcolid_cpp_SIntersectXZCylinder_ctor_FUN_005746b0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_setcolid_cpp_SIntersectXZCylinder_dtor_FUN_005746c0,
    .instance_size = 0x0000005C,
    .class_name = (char *)s_SIntersectXZCylinder_00681479
};
WatcomTypeInfo g_CZThumbTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_setdir_cpp_CZThumb_ctor_FUN_005748d0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_setdir_cpp_CZThumb_dtor_FUN_005748f0,
    .instance_size = 0x00000028,
    .class_name = (char *)s_CZThumb_00681688
};
WatcomTypeInfo g_CShotgunTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_shotgun_cpp_CShotgun_ctor_FUN_00587ee0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_shotgun_cpp_CShotgun_dtor_FUN_00588ae0,
    .instance_size = 0x00000584,
    .class_name = (char *)s_CShotgun_0068181c
};
WatcomTypeInfo g_CShovelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_shovel_cpp_CShovel_ctor_FUN_00588ba0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_shovel_cpp_CShovel_dtor_FUN_00588c80,
    .instance_size = 0x00000578,
    .class_name = (char *)s_CShovel_00681830
};
WatcomTypeInfo g_CSimBoxTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_simbox_cpp_CSimBox_ctor_FUN_00588d40,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_simbox_cpp_CSimBox_dtor_FUN_005893e0,
    .instance_size = 0x000005CC,
    .class_name = (char *)s_CSimBox_00681844
};
WatcomTypeInfo g_LodVertTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)core_skeledit_cpp_CLodVert_copy_FUN_00599550,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_skeledit_cpp_CLodVert_dtor_FUN_005995c0,
    .instance_size = 0x000004C4,
    .class_name = (char *)s_LodVert_00681a44
};
WatcomTypeInfo g_SVertTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_skeleton_cpp_SVert_ctor_FUN_005a1f70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_skeleton_cpp_SVert_dtor_FUN_005a1f90,
    .instance_size = 0x00000034,
    .class_name = (char *)s_SVert_CDeformableModel_00681a9c
};
WatcomTypeInfo g_CDeformableModelTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_skeleton_cpp_CDeformableModel_ctor_FUN_0059a160,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_skeleton_cpp_CDeformableModel_dtor_FUN_0059a270,
    .instance_size = 0x00009000,
    .class_name = (char *)s_CDeformableModel_00681a84
};
WatcomTypeInfo g_CSkeletonTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_skeleton_cpp_CSkeleton_ctor_FUN_00599880,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_skeleton_cpp_CSkeleton_dtor_FUN_005998e0,
    .instance_size = 0x0002982C,
    .class_name = (char *)s_CSkeleton_00681a73
};
WatcomTypeInfo g_CSmileyTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_smiley_cpp_CSmiley_ctor_FUN_005a2430,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_smiley_cpp_CSmiley_dtor_FUN_005a3880,
    .instance_size = 0x0000BF00,
    .class_name = (char *)s_CSmiley_00681ac4
};
WatcomTypeInfo g_SfxSlotTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)sound_sndmain_cpp_CSfxSlot_ctor_FUN_005ade00,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)sound_sndmain_cpp_CSfxSlot_dtor_FUN_005ade20,
    .instance_size = 0x00000128,
    .class_name = (char *)s_SfxSlot_00681dc4
};
WatcomTypeInfo g_SfxOptionsTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)sound_sndmain_cpp_CSfxOptions_ctor_FUN_005add70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)sound_sndmain_cpp_CSfxOptions_dtor_FUN_005ade30,
    .instance_size = 0x00000070,
    .class_name = (char *)s_SfxOptions_00681da4
};
WatcomTypeInfo g_SfxSampleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)sound_sndmain_cpp_CSfxSample_ctor_FUN_005a60f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)sound_sndmain_cpp_CSfxSample_dtor_FUN_005a6150,
    .instance_size = 0x00000180,
    .class_name = (char *)s_SfxSample_00681d84
};
WatcomTypeInfo g_CMP3DecoderTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530,
    .instance_size = 0x00008630,
    .class_name = (char *)s_CMP3Decoder_00681d64
};
WatcomTypeInfo g_STrainNoiseTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_sound_cpp_STrainNoise_ctor_FUN_005b3e00,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_sound_cpp_STrainNoise_dtor_FUN_005b3e10,
    .instance_size = 0x00000010,
    .class_name = (char *)s_STrainNoise_00682184
};
WatcomTypeInfo g_CSpikeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_spike_cpp_CSpike_ctor_FUN_005b8220,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_spike_cpp_CSpike_dtor_FUN_005b9050,
    .instance_size = 0x00000560,
    .class_name = (char *)s_CSpike_00684160
};
WatcomTypeInfo g_CStairsTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_stairs_cpp_CStairs_ctor_FUN_005b9b70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_stairs_cpp_CStairs_dtor_FUN_005bac10,
    .instance_size = 0x00000A34,
    .class_name = (char *)s_CStairs_00684198
};
WatcomTypeInfo g_CTempleStoneTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_stone_cpp_CTempleStone_ctor_FUN_005bad10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_stone_cpp_CTempleStone_dtor_FUN_005bae10,
    .instance_size = 0x00000670,
    .class_name = (char *)s_CTempleStone_006841ac
};
WatcomTypeInfo g_CStrangerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_stranger_cpp_CStranger_ctor_FUN_005bb120,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_stranger_cpp_CStranger_dtor_FUN_005c69c0,
    .instance_size = 0x0001FE70,
    .class_name = (char *)s_CStranger_006841c4
};
WatcomTypeInfo g_CSuccubusTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_succubus_cpp_CSuccubus_ctor_FUN_005c6a80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_succubus_cpp_CSuccubus_dtor_FUN_005c7820,
    .instance_size = 0x0000EF68,
    .class_name = (char *)s_CSuccubus_006841dc
};
WatcomTypeInfo g_CVecTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_superopt_cpp_CVec_ctor_FUN_005d8140,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)shape_superopt_cpp_CVec_copy_FUN_005d8160,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_superopt_cpp_CVec_dtor_FUN_005d8150,
    .instance_size = 0x00000018,
    .class_name = (char *)s_CVec_0068422f
};
WatcomTypeInfo g_CP2DTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_superopt_cpp_CP2D_ctor_FUN_005d8130,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_superopt_cpp_CP2D_dtor_FUN_005d87c0,
    .instance_size = 0x00000010,
    .class_name = (char *)s_CP2D_00684223
};
WatcomTypeInfo g_CP3DTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_superopt_cpp_CP3D_ctor_FUN_005d8120,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_superopt_cpp_CP3D_dtor_FUN_005d87d0,
    .instance_size = 0x00000018,
    .class_name = (char *)s_CP3D_00684217
};
WatcomTypeInfo g_CPolyTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_superopt_cpp_CPoly_dtor_FUN_005cc660,
    .instance_size = 0x00000068,
    .class_name = (char *)s_CPoly_0068420a
};
WatcomTypeInfo g_CObjTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_superopt_cpp_CObj_dtor_FUN_005d2260,
    .instance_size = 0x0000001C,
    .class_name = (char *)s_CObj_006841fe
};
WatcomTypeInfo g_COptimizeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)shape_superopt_cpp_COptimize_ctor_FUN_005d6f90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)shape_superopt_cpp_COptimize_dtor_FUN_005d6fd0,
    .instance_size = 0x00000044,
    .class_name = (char *)s_COptimize_006841ed
};
WatcomTypeInfo g_CSvetlanaTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_svetlana_cpp_CSvetlana_ctor_FUN_005d8850,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_svetlana_cpp_CSvetlana_dtor_FUN_005d9f50,
    .instance_size = 0x0009F8D8,
    .class_name = (char *)s_CSvetlana_00684258
};
WatcomTypeInfo g_CDrummerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_tbplayer_cpp_CDrummer_ctor_FUN_005da2c0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_tbplayer_cpp_CDrummer_dtor_FUN_005da540,
    .instance_size = 0x0001F710,
    .class_name = (char *)s_CDrummer_00684288
};
WatcomTypeInfo g_CBassPlayerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_tbplayer_cpp_CBassPlayer_ctor_FUN_005da060,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_tbplayer_cpp_CBassPlayer_dtor_FUN_005da610,
    .instance_size = 0x0001F710,
    .class_name = (char *)s_CBassPlayer_00684274
};
WatcomTypeInfo g_CTeleportTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_teleport_cpp_CTeleport_ctor_FUN_005da9e0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_teleport_cpp_CTeleport_dtor_FUN_005dae50,
    .instance_size = 0x00000168,
    .class_name = (char *)s_CTeleport_006842b8
};
WatcomTypeInfo g_CTeleportDestTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_teleport_cpp_CTeleportDest_ctor_FUN_005da770,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_teleport_cpp_CTeleportDest_dtor_FUN_005daea0,
    .instance_size = 0x00000158,
    .class_name = (char *)s_CTeleportDest_006842a0
};
WatcomTypeInfo g_CTentacleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_tentacle_cpp_CTentacle_ctor_FUN_005daf60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_tentacle_cpp_CTentacle_dtor_FUN_005dbcf0,
    .instance_size = 0x0000BF2C,
    .class_name = (char *)s_CTentacle_006842d0
};
WatcomTypeInfo g_CTextureListTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_texlist_cpp_CTextureList_ctor_FUN_005dbdd0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_texlist_cpp_CTextureList_dtor_FUN_005dbdf0,
    .instance_size = 0x0001A5EC,
    .class_name = (char *)s_CTextureList_006842fc
};
WatcomTypeInfo g_CTommyGunTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_tommygun_cpp_CTommyGun_ctor_FUN_005dda90,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_tommygun_cpp_CTommyGun_dtor_FUN_005de5d0,
    .instance_size = 0x00000584,
    .class_name = (char *)s_CTommyGun_00684314
};
WatcomTypeInfo g_CTrapTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_trap_cpp_CTrap_ctor_FUN_005de690,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_trap_cpp_CTrap_dtor_FUN_005deab0,
    .instance_size = 0x000002DC,
    .class_name = (char *)s_CTrap_0068432c
};
WatcomTypeInfo g_CTrashTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_trash_cpp_CTrash_ctor_FUN_005deb70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_trash_cpp_CTrash_dtor_FUN_005df780,
    .instance_size = 0x00000328,
    .class_name = (char *)s_CTrash_00684340
};
WatcomTypeInfo g_CTriggerTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_trigger_cpp_CTrigger_ctor_FUN_005df840,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_trigger_cpp_CTrigger_dtor_FUN_005e1660,
    .instance_size = 0x00000370,
    .class_name = (char *)s_CTrigger_006843ec
};
WatcomTypeInfo g_CTurretTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_turret_cpp_CTurret_ctor_FUN_005e20f0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_turret_cpp_CTurret_dtor_FUN_005e3e00,
    .instance_size = 0x000008BC,
    .class_name = (char *)s_CTurret_00684444
};
WatcomTypeInfo g_CTVBatTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_tvbat_cpp_CTVBat_ctor_FUN_005e3ef0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_tvbat_cpp_CTVBat_dtor_FUN_005e5460,
    .instance_size = 0x0000C0F4,
    .class_name = (char *)s_CTVBat_00684458
};
WatcomTypeInfo g_CVampireBossTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_vampboss_cpp_CVampireBoss_ctor_FUN_005e5590,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_vampboss_cpp_CVampireBoss_dtor_FUN_005e7700,
    .instance_size = 0x000CE920,
    .class_name = (char *)s_CVampireBoss_0068446c
};
WatcomTypeInfo g_CTireTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_vehicle_cpp_CTire_ctor_FUN_005e8da0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_vehicle_cpp_CTire_dtor_FUN_005e8dc0,
    .instance_size = 0x000001B4,
    .class_name = (char *)s_CTire_006844a4
};
WatcomTypeInfo g_CVehicleTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_vehicle_cpp_CVehicle_ctor_FUN_005e7940,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_vehicle_cpp_CVehicle_dtor_FUN_005e8d20,
    .instance_size = 0x00001078,
    .class_name = (char *)s_CVehicle_00684494
};
WatcomTypeInfo g_CCryptVesselTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_vessel_cpp_CCryptVessel_ctor_FUN_005e8e60,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_vessel_cpp_CCryptVessel_dtor_FUN_005e9d30,
    .instance_size = 0x000007F4,
    .class_name = (char *)s_CCryptVessel_006844d0
};
WatcomTypeInfo g_CWaterTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_water_cpp_CWater_ctor_FUN_005e9e10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_water_cpp_CWater_dtor_FUN_005e9e30,
    .instance_size = 0x00000010,
    .class_name = (char *)s_CWater_006846c4
};
WatcomTypeInfo g_SWaterVertexTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_wateract_cpp_SWaterVertex_ctor_FUN_005ebcd0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_wateract_cpp_SWaterVertex_dtor_FUN_005ebce0,
    .instance_size = 0x00000020,
    .class_name = (char *)s_SWaterVertex_0068488c
};
WatcomTypeInfo g_CWaterActorTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_wateract_cpp_CWaterActor_ctor_FUN_005ea8a0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_wateract_cpp_CWaterActor_dtor_FUN_005ebc60,
    .instance_size = 0x0002B238,
    .class_name = (char *)s_CWaterActor_00684878
};
WatcomTypeInfo g_CWayPointTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_waypoint_cpp_CWayPoint_ctor_FUN_005ebe70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_waypoint_cpp_CWayPoint_dtor_FUN_005ec8d0,
    .instance_size = 0x00000558,
    .class_name = (char *)s_CWayPoint_006848a4
};
WatcomTypeInfo g_CWeaponTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_weapon_cpp_CWeapon_dtor_FUN_005edf80,
    .instance_size = 0x00000578,
    .class_name = (char *)s_CWeapon_006848f0
};
WatcomTypeInfo g_CDemonGlobeTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_weapon_cpp_CDemonGlobe_ctor_FUN_005eea80,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_weapon_cpp_CDemonGlobe_dtor_FUN_005eea90,
    .instance_size = 0x00000040,
    .class_name = (char *)s_CDemonGlobe_006848dc
};
WatcomTypeInfo g_CWeatherTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_weather_cpp_CWeather_ctor_FUN_005eead0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_weather_cpp_CWeather_dtor_FUN_005efb40,
    .instance_size = 0x00000038,
    .class_name = (char *)s_CWeather_0068494c
};
WatcomTypeInfo g_CWerewolfTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_werewolf_cpp_CWerewolf_ctor_FUN_005efc10,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_werewolf_cpp_CWerewolf_dtor_FUN_005f2220,
    .instance_size = 0x0000BF04,
    .class_name = (char *)s_CWerewolf_00684978
};
WatcomTypeInfo g_CWinFontTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = nullptr,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)engine_winfont_cpp_CWinFont_dtor_FUN_005f2390,
    .instance_size = 0x0000013C,
    .class_name = (char *)s_CWinFont_00684989
};
WatcomTypeInfo g_CZombieTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)core_zombie_cpp_CZombie_ctor_FUN_005f8fe0,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)core_zombie_cpp_CZombie_dtor_FUN_005fcc50,
    .instance_size = 0x0000BFAC,
    .class_name = (char *)s_CZombie_006849b8
};
WatcomTypeInfo g_OStreamTypeInfo = {
    .type_flags = 0x00020104,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_iostream_cpp_ostream_ctor_FUN_006061a2,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_iostream_cpp_ostream_dtor_FUN_00606231,
    .instance_size = 0x00000038,
    .class_name = (char *)s_ostream_00684ad4
};
WatcomTypeInfo g_StrStreamBaseTypeInfo = {
    .type_flags = 0x00020104,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_strstream_cpp_strstreambase_dtor_FUN_006062a6,
    .instance_size = 0x00000078,
    .class_name = (char *)s_strstreambase_00684ae3
};
WatcomTypeInfo g_IOSTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_iostream_cpp_ios_ctor_FUN_006061fc,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_iostream_cpp_ios_dtor_FUN_0060632c,
    .instance_size = 0x0000002C,
    .class_name = (char *)s_ios_00684af8
};
WatcomTypeInfo g_IStreamTypeInfo = {
    .type_flags = 0x00020104,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_iostream_cpp_istream_ctor_FUN_00606376,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_iostream_cpp_istream_dtor_FUN_006063e1,
    .instance_size = 0x0000003C,
    .class_name = (char *)s_istream_00684b03
};
WatcomTypeInfo g_FStreamBaseTypeInfo = {
    .type_flags = 0x00020104,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_fstream_cpp_fstreambase_ctor_FUN_0060658f,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_fstream_cpp_fstreambase_dtor_FUN_00606509,
    .instance_size = 0x00000074,
    .class_name = (char *)s_fstreambase_00684b12
};
WatcomTypeInfo g_StrStreamBufTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_strstream_cpp_strstreambuf_ctor_FUN_0060bbf8,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_strstream_cpp_strstreambuf_dtor_FUN_0060bb7f,
    .instance_size = 0x00000040,
    .class_name = (char *)s_strstreambuf_0068504d
};
WatcomTypeInfo g_FilebufTypeInfo = {
    .type_flags = 0x00020100,
    .ctor = (WATCOM_DEFAULT_CONSTRUCTOR_FUNC *)crt_fstream_cpp_filebuf_ctor_FUN_0060bddd,
    .copy = (WATCOM_COPY_CONSTRUCTOR_FUNC *)crt_cpp_c_pureVirtualStub_FUN_005fee9f,
    .dtor = (WATCOM_VIRTUAL_DESTRUCTOR_FUNC *)crt_fstream_cpp_filebuf_dtor_FUN_0060bdf9,
    .instance_size = 0x0000003C,
    .class_name = (char *)s_filebuf_00685484
};

// WatcomVirtualBaseDescriptor
WatcomVirtualBaseDescriptor g_IstrstreamLayoutInfo = {.flags = 0x00000000, .offset_to_vbase = 0x00000058};
WatcomVirtualBaseDescriptor g_IFStream_LayoutInfo = {.flags = 0x00000000, .offset_to_vbase = 0x00000054};
WatcomVirtualBaseDescriptor g_IFStream_IStreamSubobjectLayout = {.flags = 0x00000044, .offset_to_vbase = 0x00000010};
WatcomVirtualBaseDescriptor g_OFStream_VirtualBaseLayout = {.flags = 0x00000000, .offset_to_vbase = 0x00000050};
WatcomVirtualBaseDescriptor g_OFStream_OStreamSubobjectLayout = {.flags = 0x00000044, .offset_to_vbase = 0x0000000C};
WatcomVirtualBaseDescriptor g_FStreamBase_VirtualBaseLayout = {.flags = 0x00000000, .offset_to_vbase = 0x00000048};

// char[104]
char g_PropertyNamePrefix[] = "";

// char[300]
char g_LocalizationTemplate[] = "";

// char[80]
char g_LoadedModelName[] = "";

// filebuf_vtable
filebuf_vtable g_FilebufVTable = {
    .do_sgetn = (cpp_streambuf_do_sgetn *)crt_iostream_cpp_streambuf_do_sgetn_FUN_0060b932,
    .do_sputn = (cpp_streambuf_do_sputn *)crt_iostream_cpp_streambuf_do_sputn_FUN_00606780,
    .pbackfail = (cpp_streambuf_pbackfail *)crt_fstream_cpp_filebuf_pbackfail_FUN_0060d7ae,
    .overflow = (cpp_streambuf_overflow *)crt_fstream_cpp_filebuf_overflow_FUN_0060d881,
    .underflow = (cpp_streambuf_underflow *)crt_fstream_cpp_filebuf_underflow_FUN_0060da87,
    .setbuf = (cpp_streambuf_setbuf *)crt_fstream_cpp_filebuf_setbuf_FUN_0060db8c,
    .seekoff = (cpp_streambuf_seekoff *)crt_fstream_cpp_filebuf_seekoff_FUN_0060dbe8,
    .seekpos = (cpp_streambuf_seekpos *)crt_iostream_cpp_streambuf_seekoff_FUN_0060bb5f,
    .sync = (cpp_streambuf_sync *)crt_fstream_cpp_filebuf_sync_FUN_0060dc5e,
    .destructor = (cpp_streambuf_destructor *)crt_fstream_cpp_filebuf_dtor_FUN_0060bdf9,
    .doallocate = (cpp_streambuf_doallocate *)crt_iostream_cpp_doallocate_FUN_0060d677
};

// float
float FLOAT_0066596c = 0.0f;

// int
int g_Istrstream_IstreamLastReadLength = 0x48;
int g_DefaultStreamBufferSize = 0x1a4;
int g_TextWrapEnabled = 0x1;
int g_CurrentTextColor = 0xf8;
int INT_0066df80 = 0x1;
int g_CurrentRenderColor = 0xffffff;
int g_CDemonActorClassVersion = 0x7;
int g_CAmmoClassVersion = 0x1;
int g_CAmmoBoxClassVersion = 0x4;
int g_CAnvilClassVersion = 0x1;
int g_CArmourClassVersion = 0x1;
int g_CBackgroundActorClassVersion = 0x2;
int g_CBaronClassVersion = 0x2;
int g_CBaronWeaponClassVersion = 0x1;
int g_CBarrierClassVersion = 0x2;
int g_CBatClassVersion = 0x4;
int g_CBatCreatureClassVersion = 0x1;
int g_CBatmanClassVersion = 0x3;
int g_CBatteryClassVersion = 0x1;
int g_CBeastClassVersion = 0x1;
int g_CBiggsClassVersion = 0x1;
int g_CBodyPartClassVersion = 0x5;
int g_CBoneGuyClassVersion = 0x5;
int g_CBoxActorClassVersion = 0xf;
int g_CLightActorClassVersion = 0x2;
int g_CBrideClassVersion = 0x4;
int g_CBugsClassVersion = 0x1;
int g_CCharacterClassVersion = 0x6;
int g_CChainClassVersion = 0x4;
int g_LineClippingDisabled = 0x1;
int g_NearPlaneDistance = 0x7fffffff;
int g_CColonelClassVersion = 0x1;
int g_CConveyorClassVersion = 0x2;
int g_CZombieCowClassVersion = 0x2;
int g_CCrateClassVersion = 0x2;
int g_CCrossbowClassVersion = 0x1;
int g_CCurtainClassVersion = 0x6;
int g_CameraShakePeakValue = 0x10000;
int g_CameraShakeSustainValue = 0xc80000;
int g_CameraShakeState = 0x3;
int g_FogColorIndexR = 0x40;
int g_FogColorIndexG = 0x40;
int g_FogColorIndexB = 0x40;
int INT_0066ed68 = 0x2D;
int g_EditorDetailLevel = 0xffff;
int g_MouseReferenceY = 0x64;
int g_EditorColorMode = 0x5;
int g_EditorCurrentTexture = 0x2;
int g_ZBufferEnabled = 0x1;
int g_CActorDestinationClassVersion = 0x4;

// int[14]
int g_OctantRotationAngles[14] = {
    0x00000000, 0x00000000, 0x00000000, 0x00008000, 0x00000000, 0x00000000, 0x00000000, 0x00004000,
    0x00004000, 0x00004000, 0x00004000, 0x00004000, 0x00004000, 0x00004000
};

// int[16]
int g_ColorLookupTable[16] = {
    0x000000FF, 0x000000F8, 0x00000002, 0x00000004, 0x00000001, 0x00000003, 0x00000005, 0x00000006,
    0x00000007, 0x000000F9, 0x000000FA, 0x000000FB, 0x000000E6, 0x000000F5, 0x00000000, 0x000000FD
};

// int[8]
int g_CameraEdgeOffsetX[8] = {0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000000, -1, -1, -1};
int g_CameraEdgeOffsetY[8] = {-1, -1, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000000, -1};

// short
short g_DaysInMonth_Normal = 0x0;
short g_DaysInMonth_Leap = 0x0;

// streambuf_vtable
streambuf_vtable g_StreambufVTable = {
    .do_sgetn = (cpp_streambuf_do_sgetn *)crt_iostream_cpp_streambuf_do_sgetn_FUN_0060b932,
    .do_sputn = (cpp_streambuf_do_sputn *)crt_iostream_cpp_streambuf_do_sputn_FUN_00606780,
    .pbackfail = (cpp_streambuf_pbackfail *)crt_stdio_c_closeUnsupported_FUN_0060b9b7,
    .overflow = (cpp_streambuf_overflow *)crt_cpp_c_handlePureVirtualCall_FUN_006015f1,
    .underflow = (cpp_streambuf_underflow *)crt_cpp_c_handlePureVirtualCall_FUN_006015f1,
    .setbuf = (cpp_streambuf_setbuf *)crt_iostream_cpp_streambuf_setbuf_FUN_0060d5ff,
    .seekoff = (cpp_streambuf_seekoff *)crt_iostream_cpp_streambuf_seekoff_FUN_00610ab0,
    .seekpos = (cpp_streambuf_seekpos *)crt_iostream_cpp_streambuf_seekoff_FUN_0060bb5f,
    .sync = (cpp_streambuf_sync *)crt_iostream_cpp_streambuf_sync_FUN_00610ab6,
    .destructor = (cpp_streambuf_destructor *)crt_iostream_cpp_streambuf_destructor_FUN_0060d64f,
    .doallocate = (cpp_streambuf_doallocate *)crt_iostream_cpp_doallocate_FUN_0060d677,
    .reserved = (void *)0x00000008,
    .base_object_size = 0x00000028
};

// strstreambuf_vtable
strstreambuf_vtable g_StrstreambufVTable = {
    .do_sgetn = (cpp_streambuf_do_sgetn *)crt_iostream_cpp_streambuf_do_sgetn_FUN_0060b932,
    .do_sputn = (cpp_streambuf_do_sputn *)crt_iostream_cpp_streambuf_do_sputn_FUN_00606780,
    .pbackfail = (cpp_streambuf_pbackfail *)crt_stdio_c_closeUnsupported_FUN_0060b9b7,
    .overflow = (cpp_streambuf_overflow *)crt_strstream_cpp_strstreambuf_overflow_FUN_0060b9bd,
    .underflow = (cpp_streambuf_underflow *)crt_strstream_cpp_strstreambuf_underflow_FUN_0060ba25,
    .setbuf = (cpp_streambuf_setbuf *)crt_strstream_cpp_strstreambuf_setbuf_FUN_0060ba70,
    .seekoff = (cpp_streambuf_seekoff *)crt_strstream_cpp_strstreambuf_seekoff_FUN_0060ba80,
    .seekpos = (cpp_streambuf_seekpos *)crt_iostream_cpp_streambuf_seekoff_FUN_0060bb5f,
    .sync = (cpp_streambuf_sync *)crt_strstream_cpp_strstreambuf_sync_FUN_0060bb7c,
    .destructor = (cpp_streambuf_destructor *)crt_strstream_cpp_strstreambuf_dtor_FUN_0060bb7f,
    .doallocate = (cpp_streambuf_doallocate *)crt_strstream_cpp_strstreambuf_doallocate_FUN_0060bc22
};

// undefined4
undefined4 DAT_0066e940 = 0;
undefined4 DAT_0066e944 = 0;
undefined4 DAT_0066ea48 = 0;
undefined4 DAT_0066ea4c = 0;
undefined4 DAT_0066eb50 = 0;
undefined4 DAT_0066eb54 = 0;

// void*
void* g_IFStream_FStreamBaseDestructor = (void*)crt_fstream_cpp_ifstream_dtor_FUN_005ff856;
void* g_IFStream_IStreamDestructor = (void*)crt_fstream_cpp_ifstream_destructor_thunk_from_istream_FUN_005ff6e2;
void* g_IFStream_IOSDestructor = (void*)crt_fstream_cpp_ifstream_destructor_thunk_from_ios_FUN_005ff6f8;
void* g_OFStream_FStreamBaseDestructor = (void*)crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc;
void* g_OFStream_OStream = (void*)crt_fstream_cpp_ofstream_destructor_thunk_from_ostream_FUN_005ff78e;
void* g_OFStream_IOS = (void*)crt_fstream_cpp_ofstream_destructor_thunk_from_ios_FUN_005ff7a4;
void* g_StrStreamBase_Destructor = (void*)crt_strstream_cpp_strstreambase_dtor_FUN_006062a6;
void* g_StrStreamBase_IOSDestructor = (void*)crt_strstream_cpp_strstreambase_destructor_thunk_FUN_0060618a;
void* g_OStream_Destructor = (void*)crt_iostream_cpp_ostream_dtor_FUN_00606231;
void* g_OStream_IOSDestructor = (void*)crt_iostream_cpp_ostream_destructor_thunk_FUN_006061e4;
void* g_IOS_Destructor = (void*)crt_iostream_cpp_ios_dtor_FUN_0060632c;
void* g_FStreamBase_Destructor = (void*)crt_fstream_cpp_fstreambase_dtor_FUN_00606509;
void* g_FStreamBase_IOSDestructor = (void*)crt_fstream_cpp_fstream_destructor_thunk_from_ios_FUN_006064f1;

