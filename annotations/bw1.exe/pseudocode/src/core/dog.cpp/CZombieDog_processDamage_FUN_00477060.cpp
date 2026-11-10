// Name: core_dog.cpp_CZombieDog_processDamage_FUN_00477060
// Address: 00477060
// Address Range: [[00477060, 0047710e]]
// Convention: __cdecl
// Signature: void __cdecl core_dog_cpp_CZombieDog_processDamage_FUN_00477060(CZombieDog *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_dog_cpp_CZombieDog_processDamage_FUN_00477060(CZombieDog *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  
  fVar1 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
    if ((*(int *)(pSVar2 + 0x24) == 7) || (*(int *)(pSVar2 + 0x24) == 6)) goto LAB_00477095;
    iVar4 = 6;
  }
  else {
    iVar4 = 5;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,iVar4,1);
LAB_00477095:
  iVar4 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0(0x02C82A60,this_ptr->sfx_handle);
  if (iVar4 != 0) {
    core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
    return;
  }
  uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"dog2.wav");
  this_ptr->sfx_handle = uVar3;
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  return;
}
