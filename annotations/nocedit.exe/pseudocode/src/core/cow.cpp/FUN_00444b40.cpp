// Name: core_cow.cpp_FUN_00444b40
// Address: 00444b40
// Address Range: [[00444b40, 00444bf3]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_FUN_00444b40(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_cow.cpp_FUN_00444b40(uint param_1, uint param_2)
    */

void __cdecl core_cow_cpp_FUN_00444b40(void)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  int extraout_EAX;
  SMotion *pSVar2;
  uint uVar3;
  CEnemy *in_stack_00000004;
  SDamageInfo *in_stack_00000008;
  int desired_state_index;
  
  core_cow_cpp_FUN_004448c0();
  fVar1 = (in_stack_00000004->base).hit_points - in_stack_00000008->damage_amount;
  this_ptr = &(in_stack_00000004->base).model;
  (in_stack_00000004->base).hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (in_stack_00000004->base).hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr->motion_controller);
    if ((pSVar2->state_index == 5) || (pSVar2->state_index == 4)) goto LAB_00444b80;
    desired_state_index = 4;
  }
  else {
    desired_state_index = 3;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&this_ptr->motion_controller,desired_state_index,1);
LAB_00444b80:
  core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80
            (g_CSoundPtr,*(uint *)(in_stack_00000004[1].base.base.actor_name + 0x10));
  if (extraout_EAX != 0) {
    core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
    return;
  }
  uVar3 = (*((in_stack_00000004->base).base.vtable._ub)->playSound)
                    ((CDemonActor *)in_stack_00000004,"cow?.wav");
  *(uint *)(in_stack_00000004[1].base.base.actor_name + 0x10) = uVar3;
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
  return;
}
