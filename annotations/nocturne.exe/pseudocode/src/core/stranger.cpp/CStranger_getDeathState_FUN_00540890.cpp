// Name: core_stranger.cpp_CStranger_getDeathState_FUN_00540890
// Address: 00540890
// Address Range: [[00540890, 005408b8]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_stranger_cpp_CStranger_getDeathState_FUN_00540890(CStranger *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_stranger_cpp_CStranger_getDeathState_FUN_00540890(CStranger *this_ptr)

{
  int iVar1;
  EDeathState EVar2;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                    (g_CEventList_PTR_005b7650,"strangerCannotDie");
  if (iVar1 != 0) {
    return DEATH_STATE_ALIVE;
  }
  EVar2 = core_charactr_cpp_CCharacter_getDeathState_FUN_00428710((CCharacter *)this_ptr);
  return EVar2;
}
