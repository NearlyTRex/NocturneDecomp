// Name: core_charactr.cpp_CCharacter_FUN_0042d060
// Address: 0042d060
// Address Range: [[0042d060, 0042d083]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_0042d060(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042d060(CCharacter *this_ptr)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    (*(((this_ptr->base).vtable._uc)->_uc).cfunc21)();
  } while (iVar1 < 2);
  return;
}
