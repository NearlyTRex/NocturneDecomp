// Name: core_cow.cpp_CZombieCow_processDamage_FUN_0043c5e0
// Address: 0043c5e0
// Address Range: [[0043c5e0, 0043c693]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_processDamage_FUN_0043c5e0(CZombieCow *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_cow_cpp_CZombieCow_processDamage_FUN_0043c5e0(CZombieCow *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  
  core_cow_cpp_CZombieCow_processDismemberment_FUN_0043c360(this_ptr,damage_info);
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr_00->motion_controller);
    if ((pSVar2->state_index == 5) || (pSVar2->state_index == 4)) goto LAB_0043c620;
    iVar4 = 4;
  }
  else {
    iVar4 = 3;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&this_ptr_00->motion_controller,iVar4,1);
LAB_0043c620:
  iVar4 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                    (g_CSound_PTR_005bed68,this_ptr->sfx_handle);
  if (iVar4 != 0) {
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
    return;
  }
  uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"cow?.wav");
  this_ptr->sfx_handle = uVar3;
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&this_ptr->base,damage_info);
  return;
}
