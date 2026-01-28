// Name: core_charactr.cpp_CCharacter_FUN_0042c9d0
// Address: 0042c9d0
// Address Range: [[0042c9d0, 0042ca11]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_0042c9d0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042c9d0(CCharacter *this_ptr)

{
  CCharacter_full_vtable *pCVar1;
  uint in_stack_00000008;
  
  this_ptr->unk2[0x10] = '\x01';
  this_ptr->unk2[0x11] = '\0';
  this_ptr->unk2[0x12] = '\0';
  this_ptr->unk2[0x13] = '\0';
  this_ptr->unk2[4] = '\0';
  this_ptr->unk2[5] = '\0';
  this_ptr->unk2[6] = -0x80;
  this_ptr->unk2[7] = -0x41;
  *(uint *)this_ptr->unk2 = in_stack_00000008;
  pCVar1 = (this_ptr->base).vtable._uc;
  this_ptr->unk2[8] = -0x36;
  this_ptr->unk2[9] = -0xe;
  this_ptr->unk2[10] = 'I';
  this_ptr->unk2[0xb] = 'q';
  (*(pCVar1->_uc).cfunc25)();
  return;
}
