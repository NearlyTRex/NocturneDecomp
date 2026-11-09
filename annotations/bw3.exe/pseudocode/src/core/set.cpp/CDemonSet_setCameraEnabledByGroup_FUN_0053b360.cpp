// Name: core_set.cpp_CDemonSet_setCameraEnabledByGroup_FUN_0053b360
// Address: 0053b360
// Address Range: [[0053b360, 0053b3a0]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_0053b360(CDemonSet *this_ptr,int group_id,int enabled)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_0053b360(CDemonSet *this_ptr,int group_id,int enabled)

{
  int camera_index;
  CDemonSet *pCVar1;
  
  camera_index = 0;
  pCVar1 = this_ptr;
  if (0 < *(int *)this_ptr) {
    do {
      if (group_id == *(int *)&pCVar1->field_0x150) {
        core_set_cpp_CDemonSet_setCameraEnabled_FUN_0053b340(this_ptr,camera_index,enabled);
      }
      camera_index = camera_index + 1;
      pCVar1 = (CDemonSet *)&pCVar1->field_0x1a4;
    } while (camera_index < *(int *)this_ptr);
  }
  return;
}
