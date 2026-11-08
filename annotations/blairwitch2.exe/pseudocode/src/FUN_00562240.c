// Name: FUN_00562240
// Address: 00562240
// Address Range: [[00562240, 00562371]]
// Convention: unknown
// Signature: void FUN_00562240(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00562240(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  int iStack_10;
  
  fStack_18 = *(float *)(param_1 + 700) * (float)_DAT_005eb170;
  fStack_14 = -*(float *)(param_1 + 700) * (float)_DAT_005eb170;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2c8)) {
    iVar3 = param_1 + 0x2cc;
    iVar1 = param_1 + 0x304;
    do {
      iVar2 = iVar2 + 1;
      fStack_54 = *(float *)(param_1 + 0x2b4) * (float)iVar2;
      fStack_50 = *(float *)(param_1 + 0x2b8) * (float)iVar2;
      fStack_38 = fStack_50 - *(float *)(param_1 + 0x2c4);
      fStack_3c = fStack_54 - *(float *)(param_1 + 0x2c0);
      fStack_58 = fStack_14;
      fStack_4c = fStack_18;
      fStack_34 = fStack_18;
      fStack_40 = fStack_14;
      fStack_48 = fStack_54;
      fStack_44 = fStack_50;
      fStack_30 = fStack_3c;
      fStack_2c = fStack_38;
      fStack_28 = fStack_38;
      fStack_24 = fStack_54;
      fStack_20 = fStack_3c;
      fStack_1c = fStack_50;
      iStack_10 = iVar2;
      FUN_004779e0(iVar3,&fStack_58,&fStack_4c,&fStack_34);
      iVar3 = iVar3 + 0x70;
      FUN_004779e0(iVar1,&fStack_58,&fStack_34,&fStack_40);
      iVar1 = iVar1 + 0x70;
    } while (iVar2 < *(int *)(param_1 + 0x2c8));
  }
  return;
}
