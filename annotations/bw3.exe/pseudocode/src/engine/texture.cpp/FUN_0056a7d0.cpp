// Name: engine_texture.cpp_FUN_0056a7d0
// Address: 0056a7d0
// Address Range: [[0056a7d0, 0056a8e0]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_0056a7d0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_texture_cpp_FUN_0056a7d0(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  uint in_stack_00000008;
  int in_stack_0000000c;
  
  if (in_stack_0000000c == 0) {
    iVar1 = 0;
    if (0 < *(int *)(in_stack_00000004 + 0x18004)) {
      do {
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(in_stack_00000004 + 0x18004));
    }
    FUN_005a3140();
    return;
  }
  iVar1 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x18004)) {
    do {
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_stack_00000004 + 0x18004));
  }
  FUN_005a3140();
  iVar2 = 0;
  iVar1 = in_stack_00000004;
  if (0 < *(int *)(in_stack_00000004 + 0x18004)) {
    do {
      if (in_stack_0000000c == *(int *)(iVar1 + 4)) {
        FUN_005a3140(in_stack_00000008,0x5d619d,iVar2 * 0x60 + in_stack_00000004 + 8);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x60;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x18004));
  }
  return;
}
