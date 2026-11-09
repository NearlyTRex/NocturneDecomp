// Name: core_set.cpp_FUN_00555740
// Address: 00555740
// Address Range: [[00555740, 0055576e]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_00555740(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_FUN_00555740(CDemonSet *this_ptr)

{
  uint uVar1;
  
  uVar1 = *(uint *)&this_ptr->field_0x15aebc;
  core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0(this_ptr,*(int *)&this_ptr->field_0x15aeb8);
  *(uint *)&this_ptr->field_0x15aec0 = 0;
  *(uint *)&this_ptr->field_0x15aebc = uVar1;
  return;
}
