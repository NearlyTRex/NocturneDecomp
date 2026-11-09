// Name: core_cloth.cpp_FUN_004414ac
// Address: 004414ac
// Address Range: [[004414ac, 004414f1]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_004414ac(int param_1)

#include "nocturne.h"

void core_cloth_cpp_FUN_004414ac(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0(DAT_00612560,0xff);
  if (0 < *(int *)(param_1 + 0x37b4c)) {
    do {
      core_cloth_cpp_FUN_00441500(param_1,iVar1,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x37b4c));
  }
  return;
}
