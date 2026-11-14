// Name: core_dog.cpp_CZombieDog_processDamage_FUN_0045eb20
// Address: 0045eb20
// Address Range: [[0045eb20, 0045ebce]]
// Convention: __cdecl
// Signature: void __cdecl core_dog_cpp_CZombieDog_processDamage_FUN_0045eb20(CZombieDog *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_dog_cpp_CZombieDog_processDamage_FUN_0045eb20(CZombieDog *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  uint uVar2;
  int iVar3;
  
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    iVar3 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if ((*(int *)(iVar3 + 0x24) == 7) || (*(int *)(iVar3 + 0x24) == 6)) goto LAB_0045eb55;
    iVar3 = 6;
  }
  else {
    iVar3 = 5;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,iVar3,1);
LAB_0045eb55:
  iVar3 = core_sound_cpp_CSound_isSoundPlaying_FUN_0055af70(0x0264B290,this_ptr->sfx_handle);
  if (iVar3 != 0) {
    core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
    return;
  }
  uVar2 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"dog2.wav");
  this_ptr->sfx_handle = uVar2;
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
