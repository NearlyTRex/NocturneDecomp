// Name: core_set.cpp_CDemonSet_setCameraEnabled_FUN_00570ea0
// Address: 00570ea0
// Address Range: [[00570ea0, 00570eb6]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraEnabled_FUN_00570ea0(CDemonSet *this_ptr,int camera_index,int enabled)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraEnabled_FUN_00570ea0(CDemonSet *this_ptr,int camera_index,int enabled)

{
  this_ptr->cameras[camera_index].enabled = enabled;
  return;
}
