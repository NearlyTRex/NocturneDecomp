// Name: core_boneguy.cpp_CBoneGuy_getDeathState_FUN_00419880
// Address: 00419880
// Address Range: [[00419880, 004198a8]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_boneguy_cpp_CBoneGuy_getDeathState_FUN_00419880(CBoneGuy *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_boneguy_cpp_CBoneGuy_getDeathState_FUN_00419880(CBoneGuy *this_ptr)

{
  EDeathState EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getDeathState_FUN_00431000((CCharacter *)this_ptr);
  if ((EVar1 == DEATH_STATE_ALIVE) && (*(int *)&this_ptr->field_0xd0e4 != 0)) {
    return ~DEATH_STATE_DYING;
  }
  return EVar1;
}
