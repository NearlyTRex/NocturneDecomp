// Name: core_stairs.cpp_FUN_005620b0
// Address: 005620b0
// Address Range: [[005620b0, 0056219e]]
// Convention: unknown
// Signature: float core_stairs_cpp_FUN_005620b0(int param_1,undefined4 param_2,undefined4 param_3,float *param_4)

#include "nocturne.h"

float core_stairs_cpp_FUN_005620b0(int param_1,uint param_2,uint param_3,float *param_4)

{
  int iVar1;
  byte bVar2;
  float afStackY_101c [1012];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar2 = 0;
  fStack_1c = 1.01;
  iVar1 = param_1 + 0x2cc;
  for (iStack_18 = 0; iStack_18 < *(int *)(param_1 + 0x2c8) * 2; iStack_18 = iStack_18 + 1) {
    fStack_14 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_00477a50(iVar1,param_2,param_3);
    if (((0.0 <= fStack_14) && (fStack_14 < fStack_1c)) && (fStack_14 <= 1.0)) {
      fStack_1c = fStack_14;
      fStack_30 = -*(float *)(iVar1 + 0x28);
      fStack_2c = -*(float *)(iVar1 + 0x2c);
      fStack_28 = -*(float *)(iVar1 + 0x24);
      *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      if (&stack0xffffffd8 != param_4) {
        *param_4 = fStack_28;
        param_4[1] = fStack_24;
        param_4[2] = fStack_20;
      }
    }
    iVar1 = iVar1 + 0x38;
  }
  return fStack_1c;
}
