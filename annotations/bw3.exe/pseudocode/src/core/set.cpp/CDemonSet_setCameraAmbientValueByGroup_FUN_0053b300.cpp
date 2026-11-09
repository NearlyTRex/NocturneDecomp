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
  if (0 < *(int *)this_ptr) {
    do {
      if (group_id == *(int *)&pCVar1->field_0x150) {
        core_set_cpp_FUN_0053b280(this_ptr,index,value);
      }
      index = index + 1;
      pCVar1 = (CDemonSet *)&pCVar1->field_0x1a4;
    } while (index < *(int *)this_ptr);
  }
  return;
}
