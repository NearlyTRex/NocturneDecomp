// Name: core_cloth.cpp_FUN_0043f110
// Address: 0043f110
// Address Range: [[0043f110, 0043f151]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_0043f110(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_cloth_cpp_FUN_0043f110(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = 0;
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0(DAT_005f2afc,0xff);
  if (0 < *(int *)(in_stack_00000004 + 0x37b4c)) {
    do {
      core_cloth_cpp_FUN_0043f160();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_stack_00000004 + 0x37b4c));
  }
  return;
}
