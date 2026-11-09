// Name: core_charactr.cpp_FUN_00431ce0
// Address: 00431ce0
// Address Range: [[00431ce0, 00431d03]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00431ce0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00431ce0(CCharacter *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,iVar1,0);
    iVar1 = iVar2;
  } while (iVar2 < 2);
  return;
}
