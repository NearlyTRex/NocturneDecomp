// Name: FUN_00446b50
// Address: 00446b50
// Address Range: [[00446b50, 00446c51]]
// Convention: unknown
// Signature: void FUN_00446b50(int param_1)

#include "nocturne.h"

void FUN_00446b50(int param_1)

{
  float *pfVar1;
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
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  float *pfStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar3 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x204)) {
    iStack_14 = param_1 + 0x208;
    iStack_20 = param_1 + 0x3c;
    pfStack_1c = (float *)(param_1 + 0x20);
    pfVar1 = (float *)(param_1 + 0x228);
    do {
      iStack_18 = iStack_14 + iVar2 * 0x74;
      FUN_0045b800(iStack_20,iStack_18);
      fStack_44 = fStack_38;
      *(uint *)((int)&stack0xffffffc0 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffcc + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      fStack_50 = fStack_44 + *pfStack_1c;
      fStack_4c = fStack_40 + pfStack_1c[1];
      fStack_48 = fStack_3c + pfStack_1c[2];
      fStack_2c = fStack_44 + *pfStack_1c;
      *(uint *)((int)&stack0xffffffd8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffffb4 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (pfVar1 != &stack0xffffffd4) {
        *pfVar1 = fStack_2c;
        pfVar1[1] = fStack_28;
        pfVar1[2] = fStack_24;
      }
      if ((uint *)(iStack_18 + 0x38) != (uint *)(iStack_18 + 0x20)) {
        *(uint *)(iStack_18 + 0x38) = *(uint *)(iStack_18 + 0x20);
        *(uint *)(iStack_18 + 0x3c) = *(uint *)(iStack_18 + 0x24);
        *(uint *)(iStack_18 + 0x40) = *(uint *)(iStack_18 + 0x28);
      }
      iVar2 = iVar2 + 1;
      pfVar1 = pfVar1 + 0x1d;
    } while (iVar2 < *(int *)(param_1 + 0x204));
  }
  return;
}
