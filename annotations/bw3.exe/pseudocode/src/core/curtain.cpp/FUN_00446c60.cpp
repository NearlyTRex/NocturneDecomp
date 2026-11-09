// Name: core_curtain.cpp_FUN_00446c60
// Address: 00446c60
// Address Range: [[00446c60, 00446d4f]]
// Convention: unknown
// Signature: void core_curtain_cpp_FUN_00446c60(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_curtain_cpp_FUN_00446c60(int param_1)

{
  int iVar1;
  float *pfVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1038 [1016];
  float *pfVar5;
  uint uStack_50;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  float fStack_38;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  float *pfStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar4 = 0;
  iStack_14 = 0;
  if (0 < *(int *)(param_1 + 0x204)) {
    iStack_20 = param_1 + 0x208;
    pfStack_1c = (float *)(param_1 + 0x20);
    pfVar2 = (float *)(param_1 + 0x228);
    iStack_18 = param_1 + 0x3c;
    do {
      iVar1 = iStack_18;
      puVar3 = (uint *)(iStack_14 * 0x74 + iStack_20);
      fStack_2c = *pfVar2 - *pfStack_1c;
      fStack_28 = pfVar2[1] - pfStack_1c[1];
      pfVar5 = &stack0xffffffc8;
      fStack_24 = pfVar2[2] - pfStack_1c[2];
      fStack_38 = *pfVar2 - *pfStack_1c;
      *(uint *)((int)&stack0xffffffcc + (uint)bVar4 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xffffffd8 + (uint)bVar4 * -8);
      *(uint *)(&stack0xffffffd0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      core_dirmat_cpp_FUN_0045b870(iVar1,pfVar5);
      uStack_44 = uStack_50;
      *(uint *)((int)&stack0xffffffc0 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffb4 + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffb8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      if (puVar3 != &stack0xffffffbc) {
        *puVar3 = uStack_44;
        puVar3[1] = uStack_40;
        puVar3[2] = uStack_3c;
      }
      iStack_14 = iStack_14 + 1;
      pfVar2 = pfVar2 + 0x1d;
    } while (iStack_14 < *(int *)(param_1 + 0x204));
  }
  return;
}
