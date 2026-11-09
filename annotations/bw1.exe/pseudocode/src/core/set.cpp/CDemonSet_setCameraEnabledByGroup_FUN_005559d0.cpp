// Name: core_set.cpp_CDemonSet_setCameraEnabledByGroup_FUN_005559d0
// Address: 005559d0
// Address Range: [[005559d0, 00555a10]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_005559d0(CDemonSet *this_ptr,int group_id,int enabled)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_005559d0(CDemonSet *this_ptr,int group_id,int enabled)

{
  int camera_index;
  CDemonSet *pCVar1;
  
  camera_index = 0;
  pCVar1 = this_ptr;
  if (0 < *(int *)this_ptr) {
    do {
      if (group_id == *(int *)&pCVar1->field_0x150) {
        core_set_cpp_CDemonSet_setCameraEnabled_FUN_005559b0(this_ptr,camera_index,enabled);
      }
      camera_index = camera_index + 1;
      pCVar1 = (CDemonSet *)&pCVar1->field_0x1a4;
    } while (camera_index < *(int *)this_ptr);
  }
  return;
}
