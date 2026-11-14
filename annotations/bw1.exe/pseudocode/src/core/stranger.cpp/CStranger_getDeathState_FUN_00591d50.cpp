// Name: core_stranger.cpp_CStranger_getDeathState_FUN_00591d50
// Address: 00591d50
// Address Range: [[00591d50, 00591d78]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_stranger_cpp_CStranger_getDeathState_FUN_00591d50(CStranger *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_stranger_cpp_CStranger_getDeathState_FUN_00591d50(CStranger *this_ptr)

{
  int iVar1;
  EDeathState EVar2;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"strangerCannotDie");
  if (iVar1 != 0) {
    return DEATH_STATE_ALIVE;
  }
  EVar2 = core_charactr_cpp_CCharacter_getDeathState_FUN_00431c30((CCharacter *)this_ptr);
  return EVar2;
}
