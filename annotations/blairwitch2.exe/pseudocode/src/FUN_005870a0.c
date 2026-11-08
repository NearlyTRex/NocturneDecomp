// Name: FUN_005870a0
// Address: 005870a0
// Address Range: [[005870a0, 0058717c]]
// Convention: unknown
// Signature: void FUN_005870a0(int param_1)

#include "nocturne.h"

void FUN_005870a0(int param_1)

{
  float *pfVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1034 [1016];
  float fStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  float *pfStack_18;
  int iStack_14;
  
  bVar3 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x3f4)) {
    iStack_14 = param_1 + 0x3f8;
    iStack_1c = param_1 + 0x3c;
    pfStack_18 = (float *)(param_1 + 0x20);
    pfVar1 = (float *)(param_1 + 0x404);
    do {
      FUN_00449530(iStack_1c,iVar2 * 0x20 + iStack_14);
      fStack_28 = fStack_4c;
      *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffb8 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffbc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      fStack_34 = fStack_28 + *pfStack_18;
      fStack_30 = fStack_24 + pfStack_18[1];
      fStack_2c = fStack_20 + pfStack_18[2];
      fStack_40 = fStack_28 + *pfStack_18;
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (pfVar1 != &stack0xffffffc0) {
        *pfVar1 = fStack_40;
        pfVar1[1] = fStack_3c;
        pfVar1[2] = fStack_38;
      }
      iVar2 = iVar2 + 1;
      pfVar1 = pfVar1 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x3f4));
  }
  return;
}
