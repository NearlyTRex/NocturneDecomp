// Name: core_shadowsc.cpp_CShadowsc_processDamage_FUN_00561330
// Address: 00561330
// Address Range: [[00561330, 00561454]]
// Convention: __cdecl
// Signature: void __cdecl core_shadowsc_cpp_CShadowsc_processDamage_FUN_00561330(CShadowsc *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_shadowsc_cpp_CShadowsc_processDamage_FUN_00561330(CShadowsc *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  EDamageType EVar1;
  float fVar2;
  SMotion *pSVar3;
  
  if (this_ptr->render_mode == 0) {
    EVar1 = damage_info->damage_type;
    if (((((EVar1 == DAMAGE_TYPE_ATTACK_GENERIC) || (EVar1 == DAMAGE_TYPE_ATTACK_BULLET)) ||
         (EVar1 == DAMAGE_TYPE_ATTACK_FIRE)) ||
        ((EVar1 == DAMAGE_TYPE_ATTACK_BLADE || (EVar1 == DAMAGE_TYPE_ATTACK_STAKE)))) ||
       ((EVar1 == DAMAGE_TYPE_ATTACK_GAS ||
        ((EVar1 == DAMAGE_TYPE_ATTACK_ELECTROCUTE || (EVar1 == DAMAGE_TYPE_PIERCING)))))) {
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                (0x01C51D80,"ShotShadowWithLead");
      damage_info->damage_amount = 0.0;
      return;
    }
    if (EVar1 == DAMAGE_TYPE_BURN) {
      core_actor_cpp_FUN_00408b40(this_ptr,&damage_info->impact_direction);
    }
    fVar2 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
    (this_ptr->base).base.hit_points = fVar2;
    if (0.0 < fVar2) {
      core_shadowsc_cpp_FUN_00561060(this_ptr);
      core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
      return;
    }
    this_ptr_00 = &(this_ptr->base).base.model;
    (this_ptr->base).base.hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    if ((pSVar3->state_index != 7) && (pSVar3->state_index != 6)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,6,1);
      core_shadowsc_cpp_FUN_005610a0(this_ptr);
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  }
  return;
}
