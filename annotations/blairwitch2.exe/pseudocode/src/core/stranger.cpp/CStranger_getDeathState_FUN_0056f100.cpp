// Name: core_stranger.cpp_CStranger_getDeathState_FUN_0056f100
// Address: 0056f100
// Address Range: [[0056f100, 0056f128]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_stranger_cpp_CStranger_getDeathState_FUN_0056f100(CStranger *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_stranger_cpp_CStranger_getDeathState_FUN_0056f100(CStranger *this_ptr)

{
  int iVar1;
  EDeathState EVar2;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,"strangerCannotDie");
  if (iVar1 != 0) {
    return DEATH_STATE_ALIVE;
  }
  EVar2 = core_charactr_cpp_CCharacter_getDeathState_FUN_004281d0((CCharacter *)this_ptr);
  return EVar2;
}
