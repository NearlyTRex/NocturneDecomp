// Name: core_skeledit.cpp_FUN_0058b260
// Address: 0058b260
// Address Range: [[0058b260, 0058b2b8]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_FUN_0058b260(void)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_FUN_0058b260(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  float in_stack_00000008;
  
  __STK(8);
  iVar3 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x2936c)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(in_stack_00000004 + 0x29374);
      iVar3 = iVar3 + 1;
      *(float *)(iVar2 + iVar1) = *(float *)(iVar2 + iVar1) * in_stack_00000008;
      *(float *)(iVar2 + 4 + iVar1) = *(float *)(iVar2 + 4 + iVar1) * in_stack_00000008;
      *(float *)(iVar2 + 8 + iVar1) = *(float *)(iVar2 + 8 + iVar1) * in_stack_00000008;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < *(int *)(in_stack_00000004 + 0x2936c));
  }
  return;
}
