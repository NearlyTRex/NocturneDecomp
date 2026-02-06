// Name: core_charactr.cpp_CCharacter_FUN_0042c9d0
// Address: 0042c9d0
// Address Range: [[0042c9d0, 0042ca11]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_0042c9d0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042c9d0(CCharacter *this_ptr)

{
  CCharacter_full_vtable *pCVar1;
  float in_stack_00000008;
  
  this_ptr->field22_0x25b0 = 1;
  this_ptr->field19_0x25a4 = -1.0;
  this_ptr->field18_0x25a0 = in_stack_00000008;
  pCVar1 = (this_ptr->base).vtable._uc;
  this_ptr->field20_0x25a8 = 1e+30;
  (*(pCVar1->_uc).cfunc25)();
  return;
}
