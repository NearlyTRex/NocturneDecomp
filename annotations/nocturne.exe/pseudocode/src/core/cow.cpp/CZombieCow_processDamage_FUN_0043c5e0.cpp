// Name: core_cow.cpp_CZombieCow_processDamage_FUN_0043c5e0
// Address: 0043c5e0
// Address Range: [[0043c5e0, 0043c693]]
// Convention: unknown
// Signature: void core_cow_cpp_CZombieCow_processDamage_FUN_0043c5e0(CZombieCow *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_cow_cpp_CZombieCow_processDamage_FUN_0043c5e0(CZombieCow *param_1,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  
  core_cow_cpp_CZombieCow_processDismemberment_FUN_0043c360(param_1,param_2);
  fVar1 = (param_1->base).base.hit_points - param_2->damage_amount;
  this_ptr = &(param_1->base).base.model;
  (param_1->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (param_1->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr->motion_controller);
    if ((pSVar2->state_index == 5) || (pSVar2->state_index == 4)) goto LAB_0043c620;
    iVar4 = 4;
  }
  else {
    iVar4 = 3;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&this_ptr->motion_controller,iVar4,1);
LAB_0043c620:
  iVar4 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                    (g_CSound_PTR_005bed68,param_1->sfx_handle);
  if (iVar4 != 0) {
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
    return;
  }
  uVar3 = (*((param_1->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)param_1,"cow?.wav");
  param_1->sfx_handle = uVar3;
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
  return;
}
