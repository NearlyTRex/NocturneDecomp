// Name: core_kedward.cpp_CKedward_processDamage_FUN_005918e0
// Address: 005918e0
// Address Range: [[005918e0, 00591999]]
// Convention: __cdecl
// Signature: void __cdecl core_kedward_cpp_CKedward_processDamage_FUN_005918e0(CKedward *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_kedward_cpp_CKedward_processDamage_FUN_005918e0(CKedward *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  
  fVar1 = damage_info->damage_amount;
  (this_ptr->base).attack_cooldown = 1.2;
  fVar1 = (this_ptr->base).base.hit_points - fVar1;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    iVar3 = core_enemy_cpp_FUN_0048a1b0(this_ptr,damage_info->damage_amount);
    if (iVar3 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,6,1);
      core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
      return;
    }
  }
  else {
    (this_ptr->base).base.health_bar_mode = HEALTH_BAR_NONE;
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
    if ((pSVar2->state_index != 8) && (pSVar2->state_index != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,7,1);
      (*((this_ptr->base).base.base.vtable._ub)->spawnFlies)((CDemonActor *)this_ptr,0x32,25.0);
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
  return;
}
