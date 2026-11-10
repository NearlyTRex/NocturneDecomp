// Name: core_set.cpp_CDemonSet_setCameraEnabled_FUN_005559b0
// Address: 005559b0
// Address Range: [[005559b0, 005559c6]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraEnabled_FUN_005559b0(CDemonSet *this_ptr,int camera_index,int enabled)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraEnabled_FUN_005559b0(CDemonSet *this_ptr,int camera_index,int enabled)

{
  *(int *)&this_ptr->cameras[camera_index].field_0x1a0 = enabled;
  return;
}
