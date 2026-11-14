// Name: core_construc.cpp_CConstruct_getDeathState_FUN_004444f0
// Address: 004444f0
// Address Range: [[004444f0, 00444518]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_construc_cpp_CConstruct_getDeathState_FUN_004444f0(CConstruct *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_construc_cpp_CConstruct_getDeathState_FUN_004444f0(CConstruct *this_ptr)

{
  EDeathState EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getDeathState_FUN_00431000((CCharacter *)this_ptr);
  if ((EVar1 == DEATH_STATE_ALIVE) && (this_ptr->blown_up != 0)) {
    return ~DEATH_STATE_DYING;
  }
  return EVar1;
}
