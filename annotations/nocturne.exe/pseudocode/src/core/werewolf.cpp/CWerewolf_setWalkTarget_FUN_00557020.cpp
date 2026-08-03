// Name: core_werewolf.cpp_CWerewolf_setWalkTarget_FUN_00557020
// Address: 00557020
// Address Range: [[00557020, 00557055]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_setWalkTarget_FUN_00557020(CWerewolf *this_ptr,CDemonActor *target,float speed,float distance)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_setWalkTarget_FUN_00557020(CWerewolf *this_ptr,CDemonActor *target,float speed,float distance)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&(this_ptr->base).base.model.motion_controller);
  if (pSVar1->state_index == 0x13) {
    return;
  }
  core_charactr_cpp_CCharacter_setWalkTarget_FUN_00428ab0
            ((CCharacter *)this_ptr,target,speed,distance);
  return;
}
