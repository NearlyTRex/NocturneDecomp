// Name: core_werewolf.cpp_CWerewolf_setWalkTarget_FUN_0058d020
// Address: 0058d020
// Address Range: [[0058d020, 0058d055]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_setWalkTarget_FUN_0058d020(CWerewolf *this_ptr,CDemonActor *target,float speed,float distance)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_setWalkTarget_FUN_0058d020(CWerewolf *this_ptr,CDemonActor *target,float speed,float distance)

{
  int iVar1;
  
  iVar1 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
  if (*(int *)(iVar1 + 0x24) == 0x13) {
    return;
  }
  core_charactr_cpp_CCharacter_setWalkTarget_FUN_004285f0
            ((CCharacter *)this_ptr,target,speed,distance);
  return;
}
