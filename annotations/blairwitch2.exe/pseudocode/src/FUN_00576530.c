// Name: FUN_00576530
// Address: 00576530
// Address Range: [[00576530, 0057674b]]
// Convention: unknown
// Signature: void FUN_00576530(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00576530(int param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1018 [979];
  byte auStack_c4 [4];
  uint uStack_c0;
  byte auStack_88 [24];
  float fStack_70;
  float fStack_6c;
  float afStack_60 [6];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float afStack_2c [4];
  float fStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x430) == 0) {
    iVar1 = *(int *)(param_1 + 0x434);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x114))(iVar1);
      if (iVar1 == 0) {
        return;
      }
      *(uint *)(*(int *)(param_1 + 0x434) + 0x10b24) = 0;
      *(uint *)(param_1 + 0x434) = 0;
    }
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
    iStack_14 = 0;
    iStack_18 = 0;
    pfVar2 = afStack_60;
    pfVar3 = &fStack_48;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = *pfVar2;
      pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
      pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
    }
    for (; iStack_14 < *(int *)(0x01E661B8 + 0x150fec); iStack_14 = iStack_14 + 1) {
      iVar1 = FUN_0040c8f0(*(uint *)(0x01E661B8 + iStack_18 + 0x150ff0),_DAT_02662d54);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10b24) == 0)) {
        FUN_00537fa0(auStack_88);
        (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x44))(iVar1,auStack_88);
        if ((*(float *)(iVar1 + 0x24) <= *(float *)(param_1 + 0x24) + fStack_38) &&
           (*(float *)(param_1 + 0x24) + fStack_44 <= *(float *)(iVar1 + 0x24) + fStack_70)) {
          FUN_00408de0(param_1,iVar1 + 0x20);
          afStack_2c[2] = fStack_30;
          afStack_2c[(uint)bVar4 * -2 + 3] = afStack_2c[(uint)bVar4 * -2];
          afStack_2c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
               afStack_2c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
          if ((((fStack_48 <= afStack_2c[2] + fStack_6c) && (afStack_2c[2] - fStack_6c <= fStack_3c)
               ) && (fStack_40 <= fStack_1c + fStack_6c)) && (fStack_1c - fStack_6c <= fStack_34)) {
            *(int *)(param_1 + 0x434) = iVar1;
            *(uint *)(iVar1 + 0x10b28) = 0x40000000;
            *(int *)(iVar1 + 0x10b24) = param_1;
            FUN_004222d0(auStack_c4);
            uStack_c0 = 0x41200000;
            (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x110))(iVar1,auStack_c4);
            return;
          }
        }
      }
      iStack_18 = iStack_18 + 4;
    }
  }
  return;
}
