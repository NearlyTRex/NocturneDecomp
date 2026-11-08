// Name: FUN_004478a0
// Address: 004478a0
// Address Range: [[004478a0, 00447a14]]
// Convention: unknown
// Signature: void FUN_004478a0(int param_1,float param_2)

#include "nocturne.h"

void FUN_004478a0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1038 [1016];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  uint uStack_34;
  uint uStack_30;
  float fStack_2c;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar3 = 0;
  iVar1 = FUN_004a6c30(0x01C51D80,param_1 + 0x740);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x808) = 1;
  }
  iVar1 = FUN_004a6c30(0x01C51D80,param_1 + 0x7a4);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x808) != 0) {
      iStack_1c = param_1 + 0x734;
      iStack_20 = param_1 + 0x80c;
      iStack_14 = 0;
      for (iStack_18 = 0; iStack_18 < *(int *)(0x01E82168 + 0x14d164); iStack_18 = iStack_18 + 1)
      {
        iVar1 = *(int *)(0x01E82168 + iStack_14 + 0x14d168);
        if ((param_1 == *(int *)(iVar1 + 0xdc)) &&
           ((*(char *)(*(int *)(iVar1 + 0xdc) + 0x80c) == '\0' ||
            (iVar2 = FUN_0040c550(iVar1,iStack_20), iVar2 != 0)))) {
          FUN_00408ac0(param_1,iStack_1c);
          fStack_50 = fStack_2c;
          *(uint *)((int)&stack0xffffffb4 + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffffd8 + (uint)bVar3 * -8);
          *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          fStack_44 = fStack_50 * param_2;
          fStack_40 = fStack_4c * param_2;
          fStack_3c = fStack_48 * param_2;
          fStack_38 = fStack_50 * param_2;
          *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * -8) =
               *(uint *)((int)&stack0xffffffc0 + (uint)bVar3 * -8);
          *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
               *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          if ((float *)(iVar1 + 0xe0) != &stack0xffffffc8) {
            *(float *)(iVar1 + 0xe0) = fStack_38;
            *(uint *)(iVar1 + 0xe4) = uStack_34;
            *(uint *)(iVar1 + 0xe8) = uStack_30;
          }
          *(uint *)(iVar1 + 0xf4) = 0;
          *(uint *)(iVar1 + 0xf0) = 0;
          *(uint *)(iVar1 + 0xec) = 0;
        }
        iStack_14 = iStack_14 + 4;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x808) = 0;
  }
  return;
}
