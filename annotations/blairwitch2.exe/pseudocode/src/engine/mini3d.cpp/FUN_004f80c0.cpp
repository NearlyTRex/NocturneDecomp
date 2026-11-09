// Name: engine_mini3d.cpp_FUN_004f80c0
// Address: 004f80c0
// Address Range: [[004f80c0, 004f8101]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f80c0(int param_1,int param_2,int param_3)

#include "nocturne.h"

void engine_mini3d_cpp_FUN_004f80c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = param_2;
  if (param_3 < param_2) {
    iVar1 = param_3;
    param_3 = param_2;
  }
  iVar1 = iVar1 >> 0x10;
  puVar2 = (uint *)(*(int *)(&DAT_01c2a38c + param_1 * 4) + iVar1 * 4);
  for (; iVar1 < param_3 >> 0x10; iVar1 = iVar1 + 1) {
    *puVar2 = 0x80000000;
    puVar2 = puVar2 + 1;
  }
  return;
}
