// Name: core_cloth.cpp_FUN_005b0c8c
// Address: 005b0c8c
// Address Range: [[005b0c8c, 005b0cd1]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_005b0c8c(int param_1)

#include "nocturne.h"

void core_cloth_cpp_FUN_005b0c8c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0(DAT_0060b280,0xff);
  if (0 < *(int *)(param_1 + 0x37b4c)) {
    do {
      core_cloth_cpp_FUN_005b0ce0(param_1,iVar1,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x37b4c));
  }
  return;
}
