// Name: core_charactr.cpp_FUN_004307c0
// Address: 004307c0
// Address Range: [[004307c0, 004307ef]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_004307c0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_004307c0(CCharacter *this_ptr)

{
  int iVar1;
  
  iVar1 = *(int *)&this_ptr->field_0x26fc;
  if (iVar1 == 0) {
    return;
  }
  *(uint *)&this_ptr->field_0x26fc = 0;
  (**(code **)(*(int *)(iVar1 + 0x154) + 0xfc))(iVar1,this_ptr);
  return;
}
