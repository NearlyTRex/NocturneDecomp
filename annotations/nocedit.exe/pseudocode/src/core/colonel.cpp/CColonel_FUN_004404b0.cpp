// Name: core_colonel.cpp_CColonel_FUN_004404b0
// Address: 004404b0
// Address Range: [[004404b0, 004405c8]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_CColonel_FUN_004404b0(CColonel *this_ptr)

#include "nocturne.h"

void __cdecl core_colonel_cpp_CColonel_FUN_004404b0(CColonel *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  SDamageInfo *in_stack_00000008;
  
  if (((this_ptr->base).unk1 & 0x7fffffffU) != 0) {
    in_stack_00000008->damage_amount = 0.0;
  }
  if (g_CGamePtr->unk2 != 0) {
    in_stack_00000008->damage_amount = 0.0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    in_stack_00000008->damage_amount = 0.0;
  }
  (this_ptr->base).unk1 = (int)0.5f;
  fVar1 = (float)(this_ptr->base).base.hit_points - in_stack_00000008->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = (int)fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if (pSVar2->state_index != 6) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&this_ptr_00->motion_controller);
      if (pSVar2->state_index != 5) {
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,5,1);
        core_gore_cpp_CGore_FUN_004ee030(g_CGorePtr,(CDemonActor *)this_ptr);
        core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0
                  ((CCharacter *)this_ptr,in_stack_00000008);
        return;
      }
    }
  }
  else if (0.0 < in_stack_00000008->damage_amount) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,4,1);
    core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0
              ((CCharacter *)this_ptr,in_stack_00000008);
    return;
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0((CCharacter *)this_ptr,in_stack_00000008);
  return;
}
