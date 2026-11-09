// Name: core_setdir.cpp_FUN_00539820
// Address: 00539820
// Address Range: [[00539820, 00539838]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_FUN_00539820(CDemonSet *this_ptr,int camera_index,float hold_time)

#include "nocturne.h"

void __cdecl core_setdir_cpp_FUN_00539820(CDemonSet *this_ptr,int camera_index,float hold_time)

{
  *(int *)&this_ptr->field_0x15aec4 = camera_index;
  *(float *)&this_ptr->field_0x15aec8 = hold_time;
  return;
}
