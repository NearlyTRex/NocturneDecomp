// Name: core_melee.cpp_CMelee_FUN_0050ebe0
// Address: 0050ebe0
// Address Range: [[0050ebe0, 0050ec0e]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_FUN_0050ebe0(CMelee *this_ptr)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_FUN_0050ebe0(CMelee *this_ptr)

{
  uint uVar1;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  this_ptr->unk1[0xc] = '\0';
  this_ptr->unk1[0xd] = '\0';
  this_ptr->unk1[0xe] = -0x80;
  this_ptr->unk1[0xf] = '?';
  uVar1 = *(uint *)(this_ptr->unk1 + 0xc);
  *(uint *)this_ptr->unk1 = in_stack_0000000c;
  *(uint *)(this_ptr->unk1 + 8) = uVar1;
  *(uint *)(this_ptr->unk1 + 4) = in_stack_00000008;
  return;
}
