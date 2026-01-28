// Name: core_set.cpp_CDemonSet_FUN_00570e60
// Address: 00570e60
// Address Range: [[00570e60, 00570e9f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_FUN_00570e60(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00570e60(CDemonSet *this_ptr)

{
  int iVar1;
  CDemonSet *pCVar2;
  int in_stack_00000008;
  
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->camera_count) {
    do {
      if (in_stack_00000008 == pCVar2->cameras[0].unk2) {
        core_set_cpp_CDemonSet_FUN_00570e20(this_ptr);
      }
      iVar1 = iVar1 + 1;
      pCVar2 = (CDemonSet *)&pCVar2->cameras[0].unk4;
    } while (iVar1 < this_ptr->camera_count);
  }
  return;
}
