// Name: core_shotgun.cpp_CShadowsc_processDamage_FUN_00546db0
// Address: 00546db0
// Address Range: [[00546db0, 00546ec7]]
// Convention: __cdecl
// Signature: void __cdecl core_shotgun_cpp_CShadowsc_processDamage_FUN_00546db0(CShadowsc *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_shotgun_cpp_CShadowsc_processDamage_FUN_00546db0(CShadowsc *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  EDamageType EVar1;
  SMotion *pSVar2;
  float fVar3;
  
  EVar1 = damage_info->damage_type;
  if (((((EVar1 != DAMAGE_TYPE_ATTACK_GENERIC) && (EVar1 != DAMAGE_TYPE_ATTACK_BULLET)) &&
       (EVar1 != DAMAGE_TYPE_ATTACK_FIRE)) &&
      ((EVar1 != DAMAGE_TYPE_ATTACK_BLADE && (EVar1 != DAMAGE_TYPE_ATTACK_STAKE)))) &&
     ((EVar1 != DAMAGE_TYPE_ATTACK_GAS &&
      ((EVar1 != DAMAGE_TYPE_ATTACK_ELECTROCUTE && (EVar1 != DAMAGE_TYPE_PIERCING)))))) {
    if (EVar1 == DAMAGE_TYPE_BURN) {
      fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(15.0,30.0);
      damage_info->damage_amount = fVar3 * (float)_DAT_005d152e * damage_info->damage_amount;
      core_actor_cpp_FUN_00408b80(this_ptr,&damage_info->impact_direction);
    }
    fVar3 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
    (this_ptr->base).base.hit_points = fVar3;
    if (fVar3 <= 0.0) {
      this_ptr_00 = &(this_ptr->base).base.model;
      (this_ptr->base).base.hit_points = 0.0;
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
      if ((pSVar2->state_index != 7) && (pSVar2->state_index != 6)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,6,1);
      }
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
    return;
  }
  core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"ShotShadowWithLead")
  ;
  damage_info->damage_amount = 0.0;
  return;
}
