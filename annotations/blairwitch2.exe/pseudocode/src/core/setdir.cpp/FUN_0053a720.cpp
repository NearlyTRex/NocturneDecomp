// Name: core_setdir.cpp_FUN_0053a720
// Address: 0053a720
// Address Range: [[0053a720, 0053a75a]]
// Convention: __cdecl
// Signature: int __cdecl core_setdir_cpp_FUN_0053a720(CDemonSet *this_ptr,int box_index)

#include "nocturne.h"

int __cdecl core_setdir_cpp_FUN_0053a720(CDemonSet *this_ptr,int box_index)

{
  int iVar1;
  int iVar2;
  
  iVar2 = box_index;
  do {
    iVar1 = iVar2;
    iVar2 = *(int *)(&this_ptr->field_0x15b468 + iVar1 * 0x44);
  } while (-1 < *(int *)(&this_ptr->field_0x15b468 + iVar1 * 0x44));
  while (box_index != iVar1) {
    iVar2 = box_index * 0x44;
    box_index = *(int *)(&this_ptr->field_0x15b468 + iVar2);
    *(int *)(&this_ptr->field_0x15b468 + iVar2) = iVar1;
  }
  return iVar1;
}
