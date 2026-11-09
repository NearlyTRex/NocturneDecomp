// Name: core_charactr.cpp_FUN_00427a10
// Address: 00427a10
// Address Range: [[00427a10, 00427a3f]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00427a10(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00427a10(CCharacter *this_ptr)

{
  int iVar1;
  
  iVar1 = *(int *)&this_ptr->field_0x276c;
  if (iVar1 == 0) {
    return;
  }
  *(uint *)&this_ptr->field_0x276c = 0;
  (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x104))(iVar1,this_ptr);
  return;
}
