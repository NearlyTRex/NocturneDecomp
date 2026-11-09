// Name: core_setdir.cpp_FUN_0055b1e0
// Address: 0055b1e0
// Address Range: [[0055b1e0, 0055b1f8]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_FUN_0055b1e0(CDemonSet *this_ptr,int camera_index,float hold_time)

#include "nocturne.h"

void __cdecl core_setdir_cpp_FUN_0055b1e0(CDemonSet *this_ptr,int camera_index,float hold_time)

{
  *(int *)&this_ptr->field_0x15aec8 = camera_index;
  *(float *)&this_ptr->field_0x15aecc = hold_time;
  return;
}
