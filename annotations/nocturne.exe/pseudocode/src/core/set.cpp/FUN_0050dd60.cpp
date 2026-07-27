// Name: core_set.cpp_FUN_0050dd60
// Address: 0050dd60
// Address Range: [[0050dd60, 0050ddcf]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_0050dd60(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_set_cpp_FUN_0050dd60(void)

{
  int iVar1;
  uint in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  
  if (*(int *)(0x01C775EC + 0x1f0) == 0) {
    if (*(int *)(0x01C775EC + 500) != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
      if (iVar1 == 0) {
        core_set_cpp_FUN_0050d640(in_stack_00000004,in_stack_00000008,in_stack_0000000c,0xffff);
        return;
      }
    }
    engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_004613d0
              (DAT_005ae704,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
  }
  return;
}
