// Name: core_set.cpp_CDemonSet_setCameraEnabledByGroup_FUN_00570ec0
// Address: 00570ec0
// MANUAL RECONSTRUCTION
// Address Range: [[00570ec0, 00570f00]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_00570ec0(CDemonSet *this_ptr,int group_id,int enabled)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_00570ec0(CDemonSet *this_ptr,int group_id,int enabled)

{
  int camera_index;

  camera_index = 0;
  if (0 < this_ptr->camera_count) {
    do {
      if (group_id == this_ptr->cameras[camera_index].camera_group) {
        core_set_cpp_CDemonSet_setCameraEnabled_FUN_00570ea0(this_ptr,camera_index,enabled);
      }
      camera_index = camera_index + 1;
    } while (camera_index < this_ptr->camera_count);
  }
  return;
}
