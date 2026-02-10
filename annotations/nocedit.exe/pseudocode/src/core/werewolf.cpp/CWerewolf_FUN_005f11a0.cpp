// Name: core_werewolf.cpp_CWerewolf_FUN_005f11a0
// Address: 005f11a0
// Address Range: [[005f11a0, 005f11d5]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_FUN_005f11a0(CWerewolf *this_ptr)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_FUN_005f11a0(CWerewolf *this_ptr)

{
  SMotion *pSVar1;
  CDemonActor *in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000010;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(this_ptr->base).base.model.motion_controller);
  if (pSVar1->state_index == 0x13) {
    return;
  }
  core_charactr_cpp_CCharacter_setWalkTarget_FUN_0042c920
            ((CCharacter *)this_ptr,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
  return;
}
