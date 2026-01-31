// Name: core_stranger.cpp_CStranger_FUN_005c67c0
// Address: 005c67c0
// Address Range: [[005c67c0, 005c67e8]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_FUN_005c67c0(CStranger *this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_FUN_005c67c0(CStranger *this_ptr)

{
  int iVar1;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,"strangerCannotDie");
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = core_charactr_cpp_CCharacter_FUN_0042c580((CCharacter *)this_ptr);
  return iVar1;
}
