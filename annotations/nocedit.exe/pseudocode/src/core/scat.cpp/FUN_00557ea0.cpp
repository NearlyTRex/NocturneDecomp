// Name: core_scat.cpp_FUN_00557ea0
// Address: 00557ea0
// Address Range: [[00557ea0, 00557fef]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00557ea0()

#include "nocturne.h"

/* Signature: byte actors_hero_scat.cpp_FUN_00557ea0(uint param_1, uint param_2)
    */

void core_scat_cpp_FUN_00557ea0(void)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  
  if ((*(uint *)in_stack_00000004[1].base_actor.actor_name & 0x7fffffff) != 0) {
    *(uint *)(in_stack_00000008 + 4) = 0;
  }
  if (g_CGamePtr->field53_0x1d0 != 0) {
    *(uint *)(in_stack_00000008 + 4) = 0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    *(uint *)(in_stack_00000008 + 4) = 0;
  }
  *(float *)in_stack_00000004[1].base_actor.actor_name = 0.5f;
  fVar1 = in_stack_00000004->hit_points - *(float *)(in_stack_00000008 + 4);
  this_ptr = &in_stack_00000004->model;
  in_stack_00000004->hit_points = fVar1;
  if (0.0 < fVar1) {
    if (*(float *)(in_stack_00000008 + 4) <= 0.0) {
      core_charactr_cpp_CCharacter_FUN_0042c3c0(in_stack_00000004);
      return;
    }
    iVar3 = core_scat_cpp_FUN_00558010();
    if (iVar3 == 0) {
      iVar3 = 0xc;
    }
    else {
      iVar3 = 0xd;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr->motion_controller,iVar3,1);
    (*((in_stack_00000004->base_actor).vtable._ub)->playSound)
              (&in_stack_00000004->base_actor,"scat-hurt-?.wav");
    core_charactr_cpp_CCharacter_FUN_0042c3c0(in_stack_00000004);
    return;
  }
  in_stack_00000004->hit_points = 0.0;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr->motion_controller);
  if (pSVar2->state_index != 5) {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr->motion_controller);
    if (pSVar2->state_index != 4) {
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr->motion_controller,4,1);
      core_gore_cpp_CGore_FUN_004ee030(g_CGorePtr,&in_stack_00000004->base_actor);
    }
  }
  (*((in_stack_00000004->base_actor).vtable._ub)->playSound)
            (&in_stack_00000004->base_actor,"scat-die-?.wav");
  core_charactr_cpp_CCharacter_FUN_0042c3c0(in_stack_00000004);
  return;
}
