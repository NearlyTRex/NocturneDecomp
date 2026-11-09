// Name: core_stairs.cpp_FUN_00584b00
// Address: 00584b00
// Address Range: [[00584b00, 00584c16]]
// Convention: unknown
// Signature: float core_stairs_cpp_FUN_00584b00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

float core_stairs_cpp_FUN_00584b00(int param_1,uint param_2,uint param_3,uint *param_4)

{
  int iVar1;
  byte bVar2;
  float afStackY_1034 [1012];
  float *pfVar3;
  uint uStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  float fStack_28;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar2 = 0;
  fStack_1c = 1.01;
  iVar1 = param_1 + 0x170;
  for (iStack_18 = 0; iStack_18 < *(int *)(param_1 + 0x16c) * 2; iStack_18 = iStack_18 + 1) {
    fStack_14 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_0048ff40(iVar1,param_2,param_3);
    if (((0.0 <= fStack_14) && (fStack_14 < fStack_1c)) && (fStack_14 <= 1.0)) {
      fStack_1c = fStack_14;
      pfVar3 = &stack0xffffffd8;
      fStack_40 = -*(float *)(iVar1 + 0x24);
      fStack_3c = -*(float *)(iVar1 + 0x28);
      fStack_38 = -*(float *)(iVar1 + 0x2c);
      fStack_28 = -*(float *)(iVar1 + 0x24);
      *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8);
      *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      core_actor_cpp_FUN_00408ac0(param_1,pfVar3);
      uStack_34 = uStack_4c;
      *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffb8 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffbc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      if (&stack0xffffffcc != param_4) {
        *param_4 = uStack_34;
        param_4[1] = uStack_30;
        param_4[2] = uStack_2c;
      }
    }
    iVar1 = iVar1 + 0x38;
  }
  return fStack_1c;
}
