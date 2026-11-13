// Name: core_cloth.cpp_FUN_004414b0
// Address: 004414b0
// Address Range: [[004414b0, 004414f1]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_004414b0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_cloth_cpp_FUN_004414b0(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = 0;
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0(DAT_00612560,0xff);
  if (0 < *(int *)(in_stack_00000004 + 0x37b4c)) {
    do {
      core_cloth_cpp_FUN_00441500();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_stack_00000004 + 0x37b4c));
  }
  return;
}
