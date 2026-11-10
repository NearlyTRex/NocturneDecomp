// Name: core_werewolf.cpp_CWerewolf_setWalkTarget_FUN_005b0b70
// Address: 005b0b70
// Address Range: [[005b0b70, 005b0ba5]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_setWalkTarget_FUN_005b0b70(CWerewolf *this_ptr,CDemonActor *target,float speed,float distance)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_setWalkTarget_FUN_005b0b70(CWerewolf *this_ptr,CDemonActor *target,float speed,float distance)

{
  SMotion *pSVar1;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     (&(this_ptr->base).base.model.base);
  if (*(int *)(pSVar1 + 0x24) == 0x13) {
    return;
  }
  core_charactr_cpp_CCharacter_setWalkTarget_FUN_00432050
            ((CCharacter *)this_ptr,target,speed,distance);
  return;
}
