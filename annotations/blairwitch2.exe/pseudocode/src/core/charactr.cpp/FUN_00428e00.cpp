// Name: core_charactr.cpp_FUN_00428e00
// Address: 00428e00
// Address Range: [[00428e00, 00428e23]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00428e00(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00428e00(CCharacter *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x130))(this_ptr,iVar1,0);
    iVar1 = iVar2;
  } while (iVar2 < 2);
  return;
}
