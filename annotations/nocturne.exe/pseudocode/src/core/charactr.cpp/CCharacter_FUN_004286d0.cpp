// Name: core_charactr.cpp_CCharacter_FUN_004286d0
// Address: 004286d0
// Address Range: [[004286d0, 00428702]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_004286d0(CCharacter *this_ptr,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_FUN_004286d0(CCharacter *this_ptr,float param_2)

{
  this_ptr->stagger_amount = param_2;
  if (this_ptr != *(CCharacter **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    return;
  }
  xxx_unk_c_FUN_004940d0(PTR_DAT_005b9284,param_2);
  return;
}
