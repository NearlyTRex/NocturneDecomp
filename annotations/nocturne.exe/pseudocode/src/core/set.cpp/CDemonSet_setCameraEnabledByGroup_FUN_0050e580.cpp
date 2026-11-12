// Name: core_set.cpp_CDemonSet_setCameraEnabledByGroup_FUN_0050e580
// Address: 0050e580
// Address Range: [[0050e580, 0050e5c0]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_0050e580(CDemonSet *this_ptr,int group_id,int enabled)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_0050e580(CDemonSet *this_ptr,int group_id,int enabled)

{
  int camera_index;
  CDemonSet *pCVar1;
  
  camera_index = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->camera_count) {
    do {
      if (group_id == pCVar1->cameras[0].camera_group) {
        core_set_cpp_CDemonSet_setCameraEnabled_FUN_0050e550(this_ptr,camera_index,enabled);
      }
      camera_index = camera_index + 1;
      pCVar1 = (CDemonSet *)&pCVar1->cameras[0].enabled;
    } while (camera_index < this_ptr->camera_count);
  }
  return;
}
