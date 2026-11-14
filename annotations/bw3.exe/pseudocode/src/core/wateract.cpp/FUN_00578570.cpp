// Name: core_wateract.cpp_FUN_00578570
// Address: 00578570
// Address Range: [[00578570, 0057865e]]
// Convention: unknown
// Signature: void core_wateract_cpp_FUN_00578570(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_wateract_cpp_FUN_00578570(int param_1)

{
  int iVar1;
  float *pfVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1038 [1016];
  float *pfVar5;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  float fStack_44;
  uint uStack_38;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float *pfStack_14;
  
  bVar4 = 0;
  iStack_18 = 0;
  if (0 < *(int *)(param_1 + 0x29c)) {
    iStack_1c = param_1 + 0x2a0;
    pfStack_14 = (float *)(param_1 + 0x20);
    pfVar2 = (float *)(param_1 + 0x2ac);
    iStack_20 = param_1 + 0x3c;
    do {
      iVar1 = iStack_20;
      puVar3 = (uint *)(iStack_18 * 0x20 + iStack_1c);
      fStack_2c = *pfVar2 - *pfStack_14;
      fStack_28 = pfVar2[1] - pfStack_14[1];
      pfVar5 = &stack0xffffffbc;
      fStack_24 = pfVar2[2] - pfStack_14[2];
      fStack_44 = *pfVar2 - *pfStack_14;
      *(uint *)((int)&stack0xffffffc0 + (uint)bVar4 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xffffffd8 + (uint)bVar4 * -8);
      *(uint *)(&stack0xffffffc4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      core_dirmat_cpp_FUN_0045b870(iVar1,pfVar5);
      uStack_50 = uStack_38;
      *(uint *)((int)&stack0xffffffb4 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffcc + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffffb8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffd0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      if (puVar3 != &stack0xffffffb0) {
        *puVar3 = uStack_50;
        puVar3[1] = uStack_4c;
        puVar3[2] = uStack_48;
      }
      iStack_18 = iStack_18 + 1;
      pfVar2 = pfVar2 + 8;
    } while (iStack_18 < *(int *)(param_1 + 0x29c));
  }
  return;
}
