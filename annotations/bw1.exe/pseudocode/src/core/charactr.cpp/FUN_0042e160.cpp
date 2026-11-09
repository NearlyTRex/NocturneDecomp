// Name: core_charactr.cpp_FUN_0042e160
// Address: 0042e160
// Address Range: [[0042e160, 0042e19a]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_0042e160(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_0042e160(CCharacter *this_ptr)

{
  uint uStack_14;
  float local_10;
  uint uStack_c;
  
  uStack_14 = *(uint *)&this_ptr->field_0x30;
  uStack_c = *(uint *)&this_ptr->field_0x38;
  local_10 = *(float *)&this_ptr->field_0x34 + *(float *)&this_ptr->field_0x2508;
  *(uint *)&this_ptr->field_0x2508 = 0;
  core_charactr_cpp_FUN_00433d50(this_ptr,&uStack_14);
  return;
}
