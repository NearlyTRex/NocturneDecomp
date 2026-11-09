// Name: core_charactr.cpp_FUN_0042cd30
// Address: 0042cd30
// Address Range: [[0042cd30, 0042cd6a]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_0042cd30(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_0042cd30(CCharacter *this_ptr)

{
  uint uStack_14;
  float local_10;
  uint uStack_c;
  
  uStack_14 = *(uint *)&this_ptr->field_0x30;
  uStack_c = *(uint *)&this_ptr->field_0x38;
  local_10 = *(float *)&this_ptr->field_0x34 + *(float *)&this_ptr->field_0x2508;
  *(uint *)&this_ptr->field_0x2508 = 0;
  core_charactr_cpp_FUN_00433220(this_ptr,&uStack_14);
  return;
}
