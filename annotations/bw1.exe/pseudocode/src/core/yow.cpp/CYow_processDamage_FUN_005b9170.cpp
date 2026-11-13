// Name: core_yow.cpp_CYow_processDamage_FUN_005b9170
// Address: 005b9170
// Address Range: [[005b9170, 005b927e]]
// Convention: __cdecl
// Signature: void __cdecl core_yow_cpp_CYow_processDamage_FUN_005b9170(CYow *this_ptr,SDamageInfo *param_2)

#include "nocturne.h"

void __cdecl core_yow_cpp_CYow_processDamage_FUN_005b9170(CYow *this_ptr,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  core_yow_cpp_FUN_005b8eb0(this_ptr,param_2);
  fVar1 = (this_ptr->base).base.hit_points - param_2->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    iVar5 = 1;
    iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&this_ptr_00->base,iVar3 + 0xd,iVar5);
  }
  else {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    iVar3 = pSVar2->state_index;
    if ((((iVar3 != 0x13) && (iVar3 != 0x10)) && (iVar3 != 0x14)) &&
       (((iVar3 != 0x11 && (iVar3 != 0x15)) && (iVar3 != 0x12)))) {
      iVar5 = 1;
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&this_ptr_00->base,iVar3 + 0x10,iVar5);
      core_sound_cpp_CSound_killSound_FUN_0057d9d0(0x02C82A60,this_ptr->sfx_handle);
      uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"dog-damage?.wav");
      this_ptr->sfx_handle = uVar4;
    }
  }
  core_sound_cpp_CSound_killSound_FUN_0057d9d0(0x02C82A60,this_ptr->sfx_handle);
  uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"dog-damage?.wav");
  this_ptr->sfx_handle = uVar4;
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,param_2);
  return;
}
