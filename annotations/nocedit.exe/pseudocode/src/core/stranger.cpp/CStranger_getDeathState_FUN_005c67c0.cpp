// Name: core_stranger.cpp_CStranger_getDeathState_FUN_005c67c0
// Address: 005c67c0
// Address Range: [[005c67c0, 005c67e8]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_stranger_cpp_CStranger_getDeathState_FUN_005c67c0(CStranger *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_stranger_cpp_CStranger_getDeathState_FUN_005c67c0(CStranger *this_ptr)

{
  int iVar1;
  EDeathState EVar2;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,"strangerCannotDie");
  if (iVar1 != 0) {
    return DEATH_STATE_ALIVE;
  }
  EVar2 = core_charactr_cpp_CCharacter_getDeathState_FUN_0042c580((CCharacter *)this_ptr);
  return EVar2;
}
