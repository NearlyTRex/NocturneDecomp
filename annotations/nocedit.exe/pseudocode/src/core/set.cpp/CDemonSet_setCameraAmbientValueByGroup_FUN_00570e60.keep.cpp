// Name: core_set.cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_00570e60
// Address: 00570e60
// MANUAL RECONSTRUCTION
// Address Range: [[00570e60, 00570e9f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_00570e60(CDemonSet *this_ptr,int group_id,float value)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_00570e60(CDemonSet *this_ptr,int group_id,float value)

{
  int index;

  index = 0;
  if (0 < this_ptr->camera_count) {
    do {
      if (group_id == this_ptr->cameras[index].camera_group) {
        core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_00570e20(this_ptr,index,value);
      }
      index = index + 1;
    } while (index < this_ptr->camera_count);
  }
  return;
}
