// Name: core_set.cpp_CDemonSet_setCameraEnabled_FUN_0050e550
// Address: 0050e550
// Address Range: [[0050e550, 0050e575]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraEnabled_FUN_0050e550(CDemonSet *this_ptr,int camera_index,int enabled)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraEnabled_FUN_0050e550(CDemonSet *this_ptr,int camera_index,int enabled)

{
  this_ptr->cameras[camera_index].enabled = enabled;
  return;
}
