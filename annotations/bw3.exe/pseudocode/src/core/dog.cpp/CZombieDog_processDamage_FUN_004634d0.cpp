// Name: core_dog.cpp_CZombieDog_processDamage_FUN_004634d0
// Address: 004634d0
// Address Range: [[004634d0, 004635d6]]
// Convention: __cdecl
// Signature: void __cdecl core_dog_cpp_CZombieDog_processDamage_FUN_004634d0(CZombieDog *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_dog_cpp_CZombieDog_processDamage_FUN_004634d0(CZombieDog *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
    if (0xf < pSVar3->state_index) goto LAB_0046352b;
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
    if (iVar2 < 0x21) {
      iVar2 = 0x10;
    }
    else if (iVar2 < 0x42) {
      iVar2 = 0x11;
    }
    else {
      iVar2 = 0x12;
    }
  }
  else {
    iVar2 = unkafter_enemy_cpp_FUN_0048a1b0(this_ptr,damage_info->damage_amount);
    if (iVar2 == 0) goto LAB_0046352b;
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
    if (iVar2 < 0x21) {
      iVar2 = 0xd;
    }
    else if (iVar2 < 0x42) {
      iVar2 = 0xe;
    }
    else {
      iVar2 = 0xf;
    }
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,iVar2,1);
LAB_0046352b:
  iVar2 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0(0x02CF5680,this_ptr->sfx_handle);
  if (iVar2 != 0) {
    core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
    return;
  }
  uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"dog2.wav");
  this_ptr->sfx_handle = uVar4;
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
  return;
}
