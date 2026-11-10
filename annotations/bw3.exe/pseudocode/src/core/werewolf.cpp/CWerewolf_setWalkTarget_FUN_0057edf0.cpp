// Name: core_werewolf.cpp_CWerewolf_setWalkTarget_FUN_0057edf0
// Address: 0057edf0
// Address Range: [[0057edf0, 0057ee25]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_setWalkTarget_FUN_0057edf0(CWerewolf *this_ptr,CDemonActor *target,float speed,float distance)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_setWalkTarget_FUN_0057edf0(CWerewolf *this_ptr,CDemonActor *target,float speed,float distance)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     (&(this_ptr->base).base.model.base);
  if (*(int *)(pSVar1 + 0x24) == 0x13) {
    return;
  }
  core_charactr_cpp_CCharacter_setWalkTarget_FUN_00431470
            ((CCharacter *)this_ptr,target,speed,distance);
  return;
}
