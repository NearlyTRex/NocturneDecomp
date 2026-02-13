// Name: core_set.cpp_CDemonSet_setCameraAmbientValueById_FUN_00570e60
// Address: 00570e60
// Address Range: [[00570e60, 00570e9f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setCameraAmbientValueById_FUN_00570e60 (CDemonSet *this_ptr,int id,float value)

#include "nocturne.h"

void __cdecl
core_set_cpp_CDemonSet_setCameraAmbientValueById_FUN_00570e60
          (CDemonSet *this_ptr,int id,float value)

{
  int index;
  CDemonSet *pCVar1;
  
  index = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->camera_count) {
    do {
      if (id == pCVar1->cameras[0].unk2) {
        core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_00570e20(this_ptr,index,value);
      }
      index = index + 1;
      pCVar1 = (CDemonSet *)&pCVar1->cameras[0].unk4;
    } while (index < this_ptr->camera_count);
  }
  return;
}
