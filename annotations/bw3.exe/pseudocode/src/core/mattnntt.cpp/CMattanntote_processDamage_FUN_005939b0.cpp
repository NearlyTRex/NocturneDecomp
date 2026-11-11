// Name: core_mattnntt.cpp_CMattanntote_processDamage_FUN_005939b0
// Address: 005939b0
// Address Range: [[005939b0, 00593a8e]]
// Convention: __cdecl
// Signature: void __cdecl core_mattnntt_cpp_CMattanntote_processDamage_FUN_005939b0(CMattanntote *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_mattnntt_cpp_CMattanntote_processDamage_FUN_005939b0(CMattanntote *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  
  if (0 < (this_ptr->base).base.fire_count) {
    return;
  }
  fVar1 = damage_info->damage_amount;
  (this_ptr->base).attack_cooldown = 1.2;
  fVar1 = (this_ptr->base).base.hit_points - fVar1;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.health_bar_mode = HEALTH_BAR_NONE;
    (this_ptr->base).base.hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
    if ((pSVar3->state_index != 9) && (pSVar3->state_index != 8)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,8,1);
      (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
      core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
      return;
    }
  }
  else {
    iVar2 = unkafter_enemy_cpp_FUN_0048a1b0(this_ptr,damage_info->damage_amount);
    if (iVar2 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,7,1);
    }
    if (this_ptr->pain_cooldown <= 0.0) {
      this_ptr->pain_cooldown = 2.0;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
  return;
}
