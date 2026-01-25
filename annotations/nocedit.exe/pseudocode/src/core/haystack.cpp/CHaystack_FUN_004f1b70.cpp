// Name: core_haystack.cpp_CHaystack_FUN_004f1b70
// Address: 004f1b70
// Address Range: [[004f1b70, 004f1c8e]]
// Convention: __cdecl
// Signature: void core_haystack.cpp_CHaystack_FUN_004f1b70(CHaystack * this_ptr)

#include "nocturne.h"

void __cdecl core_haystack_cpp_CHaystack_FUN_004f1b70(CHaystack *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  int in_stack_00000008;
  int desired_state_index;
  
  if (((this_ptr->base_hero).field1_0xbe24 & 0x7fffffffU) != 0) {
    *(uint *)(in_stack_00000008 + 4) = 0;
  }
  if (g_CGamePtr->field53_0x1d0 != 0) {
    *(uint *)(in_stack_00000008 + 4) = 0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    *(uint *)(in_stack_00000008 + 4) = 0;
  }
  (this_ptr->base_hero).field1_0xbe24 = (int)0.5f;
  fVar1 = (this_ptr->base_hero).base_character.hit_points - *(float *)(in_stack_00000008 + 4);
  this_ptr_00 = &(this_ptr->base_hero).base_character.model;
  (this_ptr->base_hero).base_character.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base_hero).base_character.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if (pSVar2->state_index != 9) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&this_ptr_00->motion_controller);
      if (pSVar2->state_index != 8) {
        (this_ptr->base_hero).base_character.grabbed_by = (CDemonActor *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,8,1);
        core_gore_cpp_CGore_FUN_004ee030(g_CGorePtr,(CDemonActor *)this_ptr);
        core_charactr_cpp_CCharacter_FUN_0042c3c0((CCharacter *)this_ptr);
        return;
      }
    }
  }
  else if (0.0 < *(float *)(in_stack_00000008 + 4)) {
    if (*(int *)this_ptr->field1_0x1fbd4 == 0) {
      desired_state_index = 4;
    }
    else {
      desired_state_index = 0xb;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,desired_state_index,1);
  }
  core_charactr_cpp_CCharacter_FUN_0042c3c0((CCharacter *)this_ptr);
  return;
}
