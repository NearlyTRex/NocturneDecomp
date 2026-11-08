// Name: FUN_00568730
// Address: 00568730
// Address Range: [[00568730, 00568861]]
// Convention: unknown
// Signature: void FUN_00568730(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00568730(int param_1)

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
  
  fStack_18 = *(float *)(param_1 + 0x160) * (float)_DAT_005d5ca0;
  fStack_14 = -*(float *)(param_1 + 0x160) * (float)_DAT_005d5ca0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x16c)) {
    iVar3 = param_1 + 0x170;
    iVar1 = param_1 + 0x1a8;
    do {
      iVar2 = iVar2 + 1;
      fStack_54 = *(float *)(param_1 + 0x158) * (float)iVar2;
      fStack_50 = *(float *)(param_1 + 0x15c) * (float)iVar2;
      fStack_38 = fStack_50 - *(float *)(param_1 + 0x168);
      fStack_3c = fStack_54 - *(float *)(param_1 + 0x164);
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
      FUN_00478a50(iVar3,&fStack_58,&fStack_4c,&fStack_34);
      iVar3 = iVar3 + 0x70;
      FUN_00478a50(iVar1,&fStack_58,&fStack_34,&fStack_40);
      iVar1 = iVar1 + 0x70;
    } while (iVar2 < *(int *)(param_1 + 0x16c));
  }
  return;
}
