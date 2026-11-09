// Name: core_set.cpp_FUN_00534490
// Address: 00534490
// Address Range: [[00534490, 005344be]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_00534490(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_FUN_00534490(CDemonSet *this_ptr)

{
  uint uVar1;
  
  uVar1 = *(uint *)&this_ptr->field_0x15aebc;
  core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0(this_ptr,*(int *)&this_ptr->field_0x15aeb8);
  *(uint *)&this_ptr->field_0x15aec0 = 0;
  *(uint *)&this_ptr->field_0x15aebc = uVar1;
  return;
}
