// Name: core_scat.cpp_FUN_00557ea0
// Address: 00557ea0
// Address Range: [[00557ea0, 00557fef]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_FUN_00557ea0(void)

#include "nocturne.h"

/* Signature: byte actors_hero_scat.cpp_FUN_00557ea0(uint param_1, uint param_2)
    */

void __cdecl core_scat_cpp_FUN_00557ea0(void)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  CCharacter *in_stack_00000004;
  SDamageInfo *in_stack_00000008;
  
  if ((*(uint *)in_stack_00000004[1].base.actor_name & 0x7fffffff) != 0) {
    in_stack_00000008->damage_amount = 0.0;
  }
  if (g_CGamePtr->unk2 != 0) {
    in_stack_00000008->damage_amount = 0.0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    in_stack_00000008->damage_amount = 0.0;
  }
  *(float *)in_stack_00000004[1].base.actor_name = 0.5f;
  fVar1 = (float)in_stack_00000004->hit_points - in_stack_00000008->damage_amount;
  this_ptr = &in_stack_00000004->model;
  in_stack_00000004->hit_points = (int)fVar1;
  if (0.0 < fVar1) {
    if (in_stack_00000008->damage_amount <= 0.0) {
      core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0(in_stack_00000004,in_stack_00000008);
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
    (*((in_stack_00000004->base).vtable._ub)->playSound)
              (&in_stack_00000004->base,"scat-hurt-?.wav");
    core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0(in_stack_00000004,in_stack_00000008);
    return;
  }
  in_stack_00000004->hit_points = 0;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr->motion_controller);
  if (pSVar2->state_index != 5) {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr->motion_controller);
    if (pSVar2->state_index != 4) {
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr->motion_controller,4,1);
      core_gore_cpp_CGore_FUN_004ee030(g_CGorePtr,&in_stack_00000004->base);
    }
  }
  (*((in_stack_00000004->base).vtable._ub)->playSound)
            (&in_stack_00000004->base,"scat-die-?.wav");
  core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0(in_stack_00000004,in_stack_00000008);
  return;
}
