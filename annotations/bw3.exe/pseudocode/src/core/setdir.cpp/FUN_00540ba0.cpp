// Name: core_setdir.cpp_FUN_00540ba0
// Address: 00540ba0
// Address Range: [[00540ba0, 00540bb8]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_FUN_00540ba0(CDemonSet *this_ptr,int camera_index,float hold_time)

#include "nocturne.h"

void __cdecl core_setdir_cpp_FUN_00540ba0(CDemonSet *this_ptr,int camera_index,float hold_time)

{
  *(int *)&this_ptr->field_0x15aec8 = camera_index;
  *(float *)&this_ptr->field_0x15aecc = hold_time;
  return;
}
