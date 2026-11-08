// Name: FUN_004b7b90
// Address: 004b7b90
// Address Range: [[004b7b90, 004b80f9]]
// Convention: unknown
// Signature: void FUN_004b7b90(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b7b90(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint extraout_EDX;
  uint extraout_EDX_00;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  float afStackY_1044 [962];
  byte local_110 [100];
  byte local_ac [24];
  float fStack_94;
  float fStack_90;
  byte auStack_84 [24];
  float fStack_6c;
  float fStack_68;
  float fStack_5c;
  float afStack_58 [4];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  float local_14;
  
  bVar4 = 0;
  if (((*(char *)(param_1 + 0x1b8) != '\0') && (*(int *)(param_1 + 0x1b4) == 0)) &&
     (iVar1 = FUN_004a6c30(0x01C51D80,param_1 + 0x1b8), iVar1 != 0)) {
    if ((*(int *)(param_1 + 0x1a8) != 1) && (*(int *)(param_1 + 0x1a8) != 3)) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        FUN_004b59e0(0x01C57074,param_1 + 0x20,0,0x4000,0x10000,1,0xffff);
      } while (iVar1 < 10);
    }
    *(uint *)(param_1 + 0x290) = 1;
    *(uint *)(param_1 + 0x1b4) = 1;
  }
  if (((*(char *)(param_1 + 0x21c) != '\0') && (*(int *)(param_1 + 0x1b4) != 0)) &&
     ((iVar1 = FUN_004a6c30(0x01C51D80,param_1 + 0x21c), iVar1 != 0 &&
      (*(uint *)(param_1 + 0x1b4) = 0, *(int *)(param_1 + 0x1a8) != 3)))) {
    FUN_004b5b30(0x01C57074,param_1 + 0x20,*(float *)(param_1 + 0x15c) * (float)_DAT_005df69f,0,
                 0xffff);
  }
  if (*(int *)(param_1 + 0x1b4) != 0) {
    *(float *)(param_1 + 0x164) = param_2 * (float)_DAT_005df6a7 + *(float *)(param_1 + 0x164);
    if (0x40ffffff < *(int *)(param_1 + 0x164)) {
      *(float *)(param_1 + 0x164) = *(float *)(param_1 + 0x164) + _DAT_005df6af;
    }
    *(uint *)(param_1 + 0x30) = 0;
    *(uint *)(param_1 + 0x38) = 0;
    *(uint *)(param_1 + 0x34) = 0;
    FUN_004b8e40(param_1);
    if (*(int *)(param_1 + 0x2a0) == 0) {
      if (*(int *)(param_1 + 0x1b0) != 0) {
        FUN_0057d9d0(0x02C82A60,*(int *)(param_1 + 0x1b0));
        *(uint *)(param_1 + 0x1b0) = 0;
      }
    }
    else {
      iVar1 = FUN_0057d9c0(0x02C82A60,*(uint *)(param_1 + 0x1b0));
      if (iVar1 == 0) {
        local_14 = (float)FUN_0040cc00(0x3f733333,0x3f866666);
        FUN_005bfb40(local_110,"torch.wav * %f",(double)local_14);
        FUN_00572ac0();
        local_14 = (float)FUN_0040cc00(0,0x3f800000,2);
        FUN_00572a50((double)local_14);
        uVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,local_110);
        *(uint *)(param_1 + 0x1b0) = uVar2;
        FUN_00572b40();
      }
    }
    if (*(int *)(param_1 + 0x288) != 0) {
      FUN_005593c0(local_ac);
      iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x3c))(iVar1,local_ac);
      if (iVar1 == 2) {
        iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        afStack_58[2] = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
        afStack_58[3] = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_48 = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
        fStack_5c = afStack_58[2];
        afStack_58[(uint)bVar4 * -2] = afStack_58[(uint)bVar4 * -2 + 3];
        afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
             afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
        if (((float)_DAT_005df6b7 < afStack_58[0]) && (afStack_58[0] < fStack_94)) {
          fVar5 = ((float10)*(float *)(param_1 + 0x158) + (float10)*(float *)(param_1 + 0x160)) *
                  (float10)_DAT_005df6bf;
          FUN_005c03a0();
          fStack_20 = (float)(int)ROUND(fVar5);
          fStack_24 = (float)(int)fStack_20;
          local_14 = fStack_20;
          if ((ABS(fStack_5c) < fStack_90 + fStack_24) &&
             (ABS(afStack_58[1]) < fStack_90 + fStack_24)) {
            FUN_004308a0(extraout_EDX,param_1 + 0x20,0,0,0x40000000,1);
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x28c) != 0) {
      if (*(int *)(param_1 + 0x29c) < 0) {
        *(uint *)(param_1 + 0x29c) = 0;
      }
      if (*(int *)(0x01E82168 + 0x150fec) <= *(int *)(param_1 + 0x29c)) {
        *(uint *)(param_1 + 0x29c) = 0;
      }
      if (0 < *(int *)(0x01E82168 + 0x150fec)) {
        iVar1 = *(int *)(0x01E82168 + 0x150ff0 + *(int *)(param_1 + 0x29c) * 4);
        FUN_005593c0(auStack_84);
        iVar3 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x3c))(iVar1,auStack_84);
        if (iVar3 == 2) {
          fStack_44 = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_40 = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_3c = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_38 = fStack_44;
          afStack_58[(uint)bVar4 * -2 + 9] = afStack_58[(uint)bVar4 * -2 + 6];
          afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
               afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
          fVar6 = ((float10)*(float *)(param_1 + 0x158) + (float10)*(float *)(param_1 + 0x160)) *
                  (float10)_DAT_005df6bf;
          fVar5 = (float10)fStack_34;
          FUN_005c03a0();
          iStack_1c = (int)ROUND(fVar6);
          if (((float10)_DAT_005df6b7 < fVar5) && (fStack_34 < fStack_6c)) {
            fStack_18 = (float)iStack_1c;
            if ((ABS(fStack_38) < fStack_68 + fStack_18) && (ABS(fStack_30) < fStack_68 + fStack_18)
               ) {
              local_14 = (float)iStack_1c;
              FUN_004308a0(iVar1,extraout_EDX_00,0,0,0x40000000,0);
            }
          }
        }
        *(int *)(param_1 + 0x29c) = *(int *)(param_1 + 0x29c) + 1;
        return;
      }
    }
  }
  return;
}
