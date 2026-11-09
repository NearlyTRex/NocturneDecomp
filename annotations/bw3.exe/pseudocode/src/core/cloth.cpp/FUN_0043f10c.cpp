// Name: core_cloth.cpp_FUN_0043f10c
// Address: 0043f10c
// Address Range: [[0043f10c, 0043f151]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_0043f10c(int param_1)

#include "nocturne.h"

void core_cloth_cpp_FUN_0043f10c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0(DAT_005f2afc,0xff);
  if (0 < *(int *)(param_1 + 0x37b4c)) {
    do {
      core_cloth_cpp_FUN_0043f160(param_1,iVar1,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x37b4c));
  }
  return;
}
