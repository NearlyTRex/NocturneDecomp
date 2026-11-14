// Name: core_set.cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_00555970
// Address: 00555970
// Address Range: [[00555970, 005559af]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_00555970(CDemonSet *this_ptr,int group_id,float value)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_00555970(CDemonSet *this_ptr,int group_id,float value)

{
  int index;
  CDemonSet *pCVar1;
  
  index = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->camera_count) {
    do {
      if (group_id == pCVar1->cameras[0].camera_group) {
        core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_005558f0(this_ptr,index,value);
      }
      index = index + 1;
      pCVar1 = (CDemonSet *)&pCVar1->cameras[0].enabled;
    } while (index < this_ptr->camera_count);
  }
  return;
}
