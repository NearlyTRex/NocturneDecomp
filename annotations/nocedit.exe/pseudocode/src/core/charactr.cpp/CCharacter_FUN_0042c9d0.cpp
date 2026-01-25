// Name: core_charactr.cpp_CCharacter_FUN_0042c9d0
// Address: 0042c9d0
// Address Range: [[0042c9d0, 0042ca11]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042c9d0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042c9d0(CCharacter *this_ptr)

{
  CCharacter_full_vtable *pCVar1;
  uint in_stack_00000008;
  
  this_ptr->field11_0x25a0[0x10] = '\x01';
  this_ptr->field11_0x25a0[0x11] = '\0';
  this_ptr->field11_0x25a0[0x12] = '\0';
  this_ptr->field11_0x25a0[0x13] = '\0';
  this_ptr->field11_0x25a0[4] = '\0';
  this_ptr->field11_0x25a0[5] = '\0';
  this_ptr->field11_0x25a0[6] = -0x80;
  this_ptr->field11_0x25a0[7] = -0x41;
  *(uint *)this_ptr->field11_0x25a0 = in_stack_00000008;
  pCVar1 = (this_ptr->base_actor).vtable._uc;
  this_ptr->field11_0x25a0[8] = -0x36;
  this_ptr->field11_0x25a0[9] = -0xe;
  this_ptr->field11_0x25a0[10] = 'I';
  this_ptr->field11_0x25a0[0xb] = 'q';
  (*(pCVar1->_uc).cfunc25)();
  return;
}
