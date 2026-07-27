// Name: core_cloth.cpp_FUN_00437a60
// Address: 00437a60
// Address Range: [[00437a60, 00437aa1]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_00437a60(int param_1)

#include "nocturne.h"

void core_cloth_cpp_FUN_00437a60(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10(DAT_005ae704,0xff);
  if (0 < *(int *)(param_1 + 0x37b4c)) {
    do {
      core_cloth_cpp_FUN_00437ab0(param_1,iVar1,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x37b4c));
  }
  return;
}
