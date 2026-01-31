// Name: core_dog.cpp_CZombieDog_FUN_0047f820
// Address: 0047f820
// Address Range: [[0047f820, 0047f8ce]]
// Convention: __cdecl
// Signature: void __cdecl core_dog_cpp_CZombieDog_FUN_0047f820(CZombieDog *this_ptr)

#include "nocturne.h"

void __cdecl core_dog_cpp_CZombieDog_FUN_0047f820(CZombieDog *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int extraout_EAX;
  SMotion *pSVar2;
  uint uVar3;
  SDamageInfo *in_stack_00000008;
  SDamageInfo *in_stack_00000010;
  int desired_state_index;
  
  fVar1 = (float)(this_ptr->base).base.hit_points - in_stack_00000008->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = (int)fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if ((pSVar2->state_index == 7) || (pSVar2->state_index == 6)) goto LAB_0047f855;
    desired_state_index = 6;
  }
  else {
    desired_state_index = 5;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&this_ptr_00->motion_controller,desired_state_index,1);
LAB_0047f855:
  core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80(g_CSoundPtr,*(uint *)(this_ptr->unk + 0x10));
  if (extraout_EAX != 0) {
    core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,in_stack_00000008);
    return;
  }
  uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"dog2.wav");
  *(uint *)(this_ptr->unk + 0x10) = uVar3;
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,in_stack_00000010);
  return;
}
