// Name: FUN_00426030
// Address: 00426030
// Address Range: [[00426030, 004263c7]]
// Convention: unknown
// Signature: void FUN_00426030(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00426030(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  byte bVar5;
  float afStackY_10a8 [1004];
  float *pfVar6;
  byte auStack_e8 [40];
  float fStack_c0;
  float afStack_bc [5];
  float fStack_a8;
  float fStack_a4;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  byte auStack_90 [12];
  float fStack_84;
  float afStack_80 [4];
  float fStack_70;
  float afStack_6c [3];
  float fStack_60;
  float afStack_5c [4];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float afStack_3c [3];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float *pfStack_18;
  float fStack_14;
  
  bVar5 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
  if ((*(int *)(param_1 + 0x19c48) != 0) && (iVar4 = *(int *)(param_1 + 0xc1e8), iVar4 != 0)) {
    afStack_80[2] = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
    afStack_80[3] = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
    fStack_70 = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
    fStack_9c = afStack_80[2];
    afStack_bc[(uint)bVar5 * -2 + 9] = afStack_80[(uint)bVar5 * -2 + 3];
    *(float *)(auStack_90 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + -4) =
         afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    if ((ABS(fStack_98) < (float)_DAT_005d5110) &&
       ((ABS(fStack_9c) < (float)_DAT_005d5110 && (ABS(fStack_94) < (float)_DAT_005d5110)))) {
      FUN_00425b00(param_1);
      FUN_00427b40(param_1,*(uint *)(param_1 + 0xc1e8));
      if (*(int *)(param_1 + 0xc268) == 1) {
        FUN_004263d0(param_1,param_2);
        return;
      }
      goto LAB_0042610f;
    }
  }
  if ((*(int *)(param_1 + 0x19c44) != 0) && (iVar4 = *(int *)(param_1 + 0xc1e8), iVar4 != 0)) {
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xc4))(iVar4);
    if (iVar4 == 0) {
      iVar4 = FUN_005351f0(*(int *)(param_1 + 0xc1e8) + 0x20);
    }
    pfStack_18 = (float *)(param_1 + 0x20);
    iVar4 = FUN_005349a0(iVar4,pfStack_18,auStack_90,*(uint *)(param_1 + 0x6c));
    if (iVar4 != 0) {
      FUN_0045f3e0(auStack_e8,auStack_90);
      afStack_6c[2] = _DAT_005fd234 * param_2;
      afStack_6c[0] = 0.0;
      afStack_6c[1] = 0.0;
      fStack_14 = afStack_6c[2];
      FUN_0045f690(auStack_e8,afStack_80 + 5);
      pfVar6 = afStack_5c + 8;
      afStack_3c[0] = afStack_bc[2];
      afStack_5c[(uint)bVar5 * -2 + 9] = afStack_bc[(uint)bVar5 * -2 + 3];
      afStack_5c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
           afStack_bc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      pfVar3 = (float *)(param_1 + 0x24 + (uint)bVar5 * -8);
      afStack_5c[2] = *(float *)(param_1 + 0x20);
      afStack_5c[(uint)bVar5 * -2 + 3] = *pfVar3;
      iVar4 = param_1;
      afStack_5c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] = pfVar3[(uint)bVar5 * -2 + 1];
      FUN_0042d750(iVar4,pfVar6);
      pfVar6 = pfStack_18;
      fVar1 = afStack_5c[2];
      pfVar3 = (float *)(param_1 + 0x24 + (uint)bVar5 * -8);
      fStack_48 = *(float *)(param_1 + 0x20);
      afStack_5c[(uint)bVar5 * -2 + 6] = *pfVar3;
      afStack_5c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] = pfVar3[(uint)bVar5 * -2 + 1];
      *pfVar6 = fVar1;
      pfVar6[1] = afStack_5c[3];
      pfVar6[2] = fStack_4c;
      fStack_c0 = fStack_48 - *pfVar6;
      afStack_bc[0] = fStack_44 - pfVar6[1];
      afStack_bc[1] = fStack_40 - pfVar6[2];
      fStack_30 = fStack_48 - *pfVar6;
      afStack_5c[(uint)bVar5 * -2 + 0xc] = afStack_bc[(uint)bVar5 * -2];
      afStack_5c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
           afStack_bc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      fStack_84 = *(float *)(param_1 + 0x19d78) + *(float *)(param_1 + 0x19d84);
      afStack_80[0] = *(float *)(param_1 + 0x19d7c) + *(float *)(param_1 + 0x19d88);
      afStack_80[1] = *(float *)(param_1 + 0x19d80) + *(float *)(param_1 + 0x19d8c);
      fStack_60 = fStack_84;
      afStack_5c[(uint)bVar5 * -2] = afStack_80[(uint)bVar5 * -2];
      afStack_5c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      fStack_24 = fStack_60 * _DAT_005d5118;
      fStack_20 = afStack_5c[0] * _DAT_005d5118;
      fStack_1c = afStack_5c[1] * _DAT_005d5118;
      fStack_a8 = fStack_60 * _DAT_005d5118;
      afStack_bc[(uint)bVar5 * -2 + 6] = afStack_5c[(uint)bVar5 * -2 + 0xf];
      afStack_bc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           afStack_5c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
      fStack_2c = fStack_a4;
      if ((((*(float *)(param_1 + 0x19d78) <= fStack_30) &&
           (*(float *)(param_1 + 0x19d7c) <= fStack_a4)) &&
          (*(float *)(param_1 + 0x19d80) <= fStack_28)) &&
         (((fStack_30 <= *(float *)(param_1 + 0x19d84) &&
           (fStack_a4 <= *(float *)(param_1 + 0x19d88))) &&
          (fStack_28 <= *(float *)(param_1 + 0x19d8c))))) {
        FUN_00427e00(param_1,afStack_5c + 5);
      }
    }
  }
  FUN_00425b00(param_1);
LAB_0042610f:
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xc26c)) {
    iVar2 = param_1 + 0xc270;
    do {
      iVar4 = iVar4 + 1;
      FUN_00426870(param_1,iVar2,param_2,0);
      iVar2 = iVar2 + 0x40;
    } while (iVar4 < *(int *)(param_1 + 0xc26c));
  }
  FUN_00427a30(param_1);
  return;
}
