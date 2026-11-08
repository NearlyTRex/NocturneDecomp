// Name: FUN_0049f2e0
// Address: 0049f2e0
// Address Range: [[0049f2e0, 0049f849]]
// Convention: unknown
// Signature: void FUN_0049f2e0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049f2e0(int param_1,float param_2)

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
  if (((*(char *)(param_1 + 0x314) != '\0') && (*(int *)(param_1 + 0x310) == 0)) &&
     (iVar1 = FUN_0048e340(0x01C38BC0,param_1 + 0x314), iVar1 != 0)) {
    if ((*(int *)(param_1 + 0x304) != 1) && (*(int *)(param_1 + 0x304) != 3)) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        FUN_0049d090(0x01C3DEB4,param_1 + 0x20,0,0x4000,0x10000,1,0xffff);
      } while (iVar1 < 10);
    }
    *(uint *)(param_1 + 0x3ec) = 1;
    *(uint *)(param_1 + 0x310) = 1;
  }
  if (((*(char *)(param_1 + 0x378) != '\0') && (*(int *)(param_1 + 0x310) != 0)) &&
     ((iVar1 = FUN_0048e340(0x01C38BC0,param_1 + 0x378), iVar1 != 0 &&
      (*(uint *)(param_1 + 0x310) = 0, *(int *)(param_1 + 0x304) != 3)))) {
    FUN_0049d230(0x01C3DEB4,param_1 + 0x20,*(float *)(param_1 + 0x2b8) * (float)_DAT_005d585d,0,
                 0xffff);
  }
  if (*(int *)(param_1 + 0x310) != 0) {
    *(float *)(param_1 + 0x2c0) = param_2 * (float)_DAT_005d5865 + *(float *)(param_1 + 0x2c0);
    if (0x40ffffff < *(int *)(param_1 + 0x2c0)) {
      *(float *)(param_1 + 0x2c0) = *(float *)(param_1 + 0x2c0) + _DAT_005d586d;
    }
    *(uint *)(param_1 + 0x30) = 0;
    *(uint *)(param_1 + 0x38) = 0;
    *(uint *)(param_1 + 0x34) = 0;
    FUN_004a0590(param_1);
    if (*(int *)(param_1 + 0x3fc) == 0) {
      if (*(int *)(param_1 + 0x30c) != 0) {
        FUN_0055af80(0x0264B290,*(int *)(param_1 + 0x30c));
        *(uint *)(param_1 + 0x30c) = 0;
      }
    }
    else {
      iVar1 = FUN_0055af70(0x0264B290,*(uint *)(param_1 + 0x30c));
      if (iVar1 == 0) {
        local_14 = (float)FUN_0040cf60(0x3f733333,0x3f866666);
        FUN_005b7790(local_110,"torch.wav * %f",(double)local_14);
        FUN_00550450();
        local_14 = (float)FUN_0040cf60(0,0x3f800000,2);
        FUN_005503e0((double)local_14);
        uVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,local_110);
        *(uint *)(param_1 + 0x30c) = uVar2;
        FUN_005504d0();
      }
    }
    if (*(int *)(param_1 + 0x3e4) != 0) {
      FUN_00537fa0(local_ac);
      iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x44))(iVar1,local_ac);
      if (iVar1 == 2) {
        iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        afStack_58[2] = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
        afStack_58[3] = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_48 = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
        fStack_5c = afStack_58[2];
        afStack_58[(uint)bVar4 * -2] = afStack_58[(uint)bVar4 * -2 + 3];
        afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
             afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
        if (((float)_DAT_005d5875 < afStack_58[0]) && (afStack_58[0] < fStack_94)) {
          fVar5 = ((float10)*(float *)(param_1 + 0x2b4) + (float10)*(float *)(param_1 + 700)) *
                  (float10)_DAT_005d587d;
          FUN_005b7ff0();
          fStack_20 = (float)(int)ROUND(fVar5);
          fStack_24 = (float)(int)fStack_20;
          local_14 = fStack_20;
          if ((ABS(fStack_5c) < fStack_90 + fStack_24) &&
             (ABS(afStack_58[1]) < fStack_90 + fStack_24)) {
            FUN_00426e70(extraout_EDX,param_1 + 0x20,0,0,0x40000000,1);
          }
        }
      }
    }
    if (*(int *)(param_1 + 1000) != 0) {
      if (*(int *)(param_1 + 0x3f8) < 0) {
        *(uint *)(param_1 + 0x3f8) = 0;
      }
      if (*(int *)(0x01E661B8 + 0x150fec) <= *(int *)(param_1 + 0x3f8)) {
        *(uint *)(param_1 + 0x3f8) = 0;
      }
      if (0 < *(int *)(0x01E661B8 + 0x150fec)) {
        iVar1 = *(int *)(0x01E661B8 + 0x150ff0 + *(int *)(param_1 + 0x3f8) * 4);
        FUN_00537fa0(auStack_84);
        iVar3 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x44))(iVar1,auStack_84);
        if (iVar3 == 2) {
          fStack_44 = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_40 = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_3c = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_38 = fStack_44;
          afStack_58[(uint)bVar4 * -2 + 9] = afStack_58[(uint)bVar4 * -2 + 6];
          afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
               afStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
          fVar6 = ((float10)*(float *)(param_1 + 0x2b4) + (float10)*(float *)(param_1 + 700)) *
                  (float10)_DAT_005d587d;
          fVar5 = (float10)fStack_34;
          FUN_005b7ff0();
          iStack_1c = (int)ROUND(fVar6);
          if (((float10)_DAT_005d5875 < fVar5) && (fStack_34 < fStack_6c)) {
            fStack_18 = (float)iStack_1c;
            if ((ABS(fStack_38) < fStack_68 + fStack_18) && (ABS(fStack_30) < fStack_68 + fStack_18)
               ) {
              local_14 = (float)iStack_1c;
              FUN_00426e70(iVar1,extraout_EDX_00,0,0,0x40000000,0);
            }
          }
        }
        *(int *)(param_1 + 0x3f8) = *(int *)(param_1 + 0x3f8) + 1;
        return;
      }
    }
  }
  return;
}
