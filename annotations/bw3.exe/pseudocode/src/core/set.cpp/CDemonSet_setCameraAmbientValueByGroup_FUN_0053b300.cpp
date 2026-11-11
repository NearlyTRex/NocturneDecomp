// Name: core_set.cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_0053b300
// Address: 0053b300
// Address Range: [[0053b300, 0053b33f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_0053b300(CDemonSet *this_ptr,int group_id,float value)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_0053b300(CDemonSet *this_ptr,int group_id,float value)

{
  int index;
  CDemonSet *pCVar1;
  
  index = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->camera_count) {
    do {
      if (group_id == pCVar1->cameras[0].camera_group) {
        core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_0053b280(this_ptr,index,value);
      }
      index = index + 1;
      pCVar1 = (CDemonSet *)&pCVar1->cameras[0].enabled;
    } while (index < this_ptr->camera_count);
  }
  return;
}
