// Name: core_set.cpp_CDemonSet_setCameraEnabled_FUN_00534700
// Address: 00534700
// Address Range: [[00534700, 00534716]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraEnabled_FUN_00534700(CDemonSet *this_ptr,int camera_index,int enabled)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraEnabled_FUN_00534700(CDemonSet *this_ptr,int camera_index,int enabled)

{
  *(int *)(&this_ptr->field_0x1a4 + camera_index * 0x1a4) = enabled;
  return;
}
