// Name: core_yow.cpp_CYow_processDamage_FUN_00586eb0
// Address: 00586eb0
// Address Range: [[00586eb0, 00586f8d]]
// Convention: __cdecl
// Signature: void __cdecl core_yow_cpp_CYow_processDamage_FUN_00586eb0(CYow *this_ptr,SDamageInfo *param_2)

#include "nocturne.h"

void __cdecl core_yow_cpp_CYow_processDamage_FUN_00586eb0(CYow *this_ptr,SDamageInfo *param_2)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  int force_immediate;
  
  fVar1 = (this_ptr->base).base.hit_points - param_2->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
    iVar2 = pSVar3->state_index;
    if ((((iVar2 == 0x13) || (iVar2 == 0x10)) || (iVar2 == 0x14)) ||
       (((iVar2 == 0x11 || (iVar2 == 0x15)) || (iVar2 == 0x12)))) goto LAB_00586ef3;
    force_immediate = 1;
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
    iVar2 = iVar2 + 0x10;
  }
  else {
    force_immediate = 1;
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
    iVar2 = iVar2 + 0xd;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            (&this_ptr_00->base,iVar2,force_immediate);
LAB_00586ef3:
  iVar2 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0(0x02CF5680,this_ptr->sfx_handle);
  if (iVar2 != 0) {
    core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,param_2);
    return;
  }
  uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"dog2.wav");
  this_ptr->sfx_handle = uVar4;
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,param_2);
  return;
}
