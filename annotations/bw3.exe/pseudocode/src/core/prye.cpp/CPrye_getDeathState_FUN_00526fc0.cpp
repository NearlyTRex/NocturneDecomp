// Name: core_prye.cpp_CPrye_getDeathState_FUN_00526fc0
// Address: 00526fc0
// Address Range: [[00526fc0, 00526fe8]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_prye_cpp_CPrye_getDeathState_FUN_00526fc0(CPrye *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_prye_cpp_CPrye_getDeathState_FUN_00526fc0(CPrye *this_ptr)

{
  int iVar1;
  EDeathState EVar2;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (0x01C6E360,"docCannotDie");
  if (iVar1 != 0) {
    return DEATH_STATE_ALIVE;
  }
  EVar2 = core_charactr_cpp_CCharacter_getDeathState_FUN_00431000((CCharacter *)this_ptr);
  return EVar2;
}
