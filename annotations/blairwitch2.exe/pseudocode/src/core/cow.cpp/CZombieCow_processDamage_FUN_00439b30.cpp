// Name: core_cow.cpp_CZombieCow_processDamage_FUN_00439b30
// Address: 00439b30
// Address Range: [[00439b30, 00439be3]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_processDamage_FUN_00439b30(CZombieCow *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_cow_cpp_CZombieCow_processDamage_FUN_00439b30(CZombieCow *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  uint uVar2;
  int iVar3;
  
  core_cow_cpp_CZombieCow_processDismemberment_FUN_004398b0(this_ptr,damage_info);
  fVar1 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    iVar3 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if ((*(int *)(iVar3 + 0x24) == 5) || (*(int *)(iVar3 + 0x24) == 4)) goto LAB_00439b70;
    iVar3 = 4;
  }
  else {
    iVar3 = 3;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)this_ptr_00,iVar3,1);
LAB_00439b70:
  iVar3 = core_sound_cpp_CSound_isSoundPlaying_FUN_0055af70(0x0264B290,this_ptr->sfx_handle);
  if (iVar3 != 0) {
    core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
    return;
  }
  uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"cow?.wav");
  this_ptr->sfx_handle = uVar2;
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
