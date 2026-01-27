// Name: core_setdir.cpp_CDemonSet_FUN_00576820
// Address: 00576820
// Address Range: [[00576820, 00576861]]
// Convention: __cdecl
// Signature: int core_setdir.cpp_CDemonSet_FUN_00576820(CDemonSet * this_ptr)

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_FUN_00576820(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  int in_stack_00000008;
  
  iVar1 = in_stack_00000008;
  do {
    iVar2 = iVar1;
    iVar1 = *(int *)(this_ptr->vdir_boxes[iVar2].unk + 4);
  } while (-1 < iVar1);
  while (in_stack_00000008 != iVar2) {
    iVar1 = *(int *)(this_ptr->vdir_boxes[in_stack_00000008].unk + 4);
    *(int *)(this_ptr->vdir_boxes[in_stack_00000008].unk + 4) = iVar2;
    in_stack_00000008 = iVar1;
  }
  return iVar2;
}
