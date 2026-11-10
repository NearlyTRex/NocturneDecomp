// Name: core_set.cpp_CDemonSet_setCameraEnabledByGroup_FUN_00534720
// Address: 00534720
// Address Range: [[00534720, 00534760]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_00534720(CDemonSet *this_ptr,int group_id,int enabled)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_00534720(CDemonSet *this_ptr,int group_id,int enabled)

{
  int camera_index;
  CDemonSet *pCVar1;
  
  camera_index = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->camera_count) {
    do {
      if (group_id == *(int *)&pCVar1->cameras[0].field_0x14c) {
        core_set_cpp_CDemonSet_setCameraEnabled_FUN_00534700(this_ptr,camera_index,enabled);
      }
      camera_index = camera_index + 1;
      pCVar1 = (CDemonSet *)&pCVar1->cameras[0].field_0x1a0;
    } while (camera_index < this_ptr->camera_count);
  }
  return;
}
