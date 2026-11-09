// Name: core_set.cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_005346c0
// Address: 005346c0
// Address Range: [[005346c0, 005346ff]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_005346c0(CDemonSet *this_ptr,int group_id,float value)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValueByGroup_FUN_005346c0(CDemonSet *this_ptr,int group_id,float value)

{
  int index;
  CDemonSet *pCVar1;
  
  index = 0;
  pCVar1 = this_ptr;
  if (0 < *(int *)this_ptr) {
    do {
      if (group_id == *(int *)&pCVar1->field_0x150) {
        core_set_cpp_FUN_00534640(this_ptr,index,value);
      }
      index = index + 1;
      pCVar1 = (CDemonSet *)&pCVar1->field_0x1a4;
    } while (index < *(int *)this_ptr);
  }
  return;
}
