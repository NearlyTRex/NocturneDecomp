// Name: FUN_004ca0c0
// Address: 004ca0c0
// Address Range: [[004ca0c0, 004ca448]]
// Convention: unknown
// Signature: float FUN_004ca0c0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_004ca0c0(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_109c [970];
  byte *puVar7;
  uint uVar8;
  byte local_15c [120];
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float afStack_cc [6];
  float fStack_b4;
  float afStack_b0 [4];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float afStack_78 [3];
  uint uStack_6c;
  uint uStack_60;
  float fStack_5c;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint uStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  
  bVar6 = 0;
  iVar2 = FUN_0040c600(param_2,_DAT_01c3f6a0);
  FUN_005c0357(local_15c,10,&DAT_005fb430);
  iVar3 = (**(code **)(*(int *)(param_2 + 0x154) + 0x54))(param_2,local_15c);
  if ((iVar3 != 0) &&
     ((iVar2 == 0 || (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2), iVar2 < 1)))) {
    FUN_00408bb0(param_1,param_2 + 0x20);
    afStack_b0[2] = fStack_30;
    afStack_b0[(uint)bVar6 * -2 + 3] = afStack_b0[(uint)bVar6 * -2 + 0x21];
    afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22];
    if (0.0 < fStack_a0) {
      fVar1 = SQRT(fStack_a0 * fStack_a0 +
                   afStack_b0[2] * afStack_b0[2] + afStack_b0[3] * afStack_b0[3]);
      fStack_20 = fVar1;
      FUN_005a7520(afStack_b0 + 2);
      uStack_60 = uStack_6c;
      afStack_b0[(uint)bVar6 * -2 + 0x15] = afStack_b0[(uint)bVar6 * -2 + 0x12];
      afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
           afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
      if (param_3 == 0) {
        if ((float)_DAT_005e11bc < fVar1) {
          return -1.0;
        }
        if (fStack_5c < (float)_DAT_005e11c4) {
          return -1.0;
        }
        if (_DAT_005e11cc < (double)fStack_5c) {
          return -1.0;
        }
      }
      else {
        if ((float)_DAT_005e11d4 < fVar1) {
          return -1.0;
        }
        if (fStack_5c < _DAT_005e11dc) {
          return -1.0;
        }
        if (0x3fc90fdb < (int)fStack_5c) {
          return -1.0;
        }
      }
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
      pfVar4 = afStack_cc;
      pfVar5 = &fStack_e4;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar5 = *pfVar4;
        pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
        pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
      }
      fStack_84 = fStack_e4 + fStack_d8;
      fStack_80 = fStack_e0 + fStack_d4;
      fStack_7c = fStack_dc + fStack_d0;
      fStack_90 = fStack_e4 + fStack_d8;
      afStack_b0[(uint)bVar6 * -2 + 9] = afStack_b0[(uint)bVar6 * -2 + 0xc];
      afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
      puVar7 = local_15c;
      fStack_3c = fStack_90 * _DAT_005e11e0;
      fStack_38 = fStack_8c * _DAT_005e11e0;
      fStack_34 = fStack_88 * _DAT_005e11e0;
      fStack_54 = fStack_90 * _DAT_005e11e0;
      afStack_b0[(uint)bVar6 * -2 + 0x18] = afStack_b0[(uint)bVar6 * -2 + 0x1e];
      afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
           afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f];
      fStack_9c = *(float *)(param_1 + 0x20) + fStack_54;
      fStack_98 = *(float *)(param_1 + 0x24) + fStack_50;
      fStack_94 = *(float *)(param_1 + 0x28) + fStack_4c;
      fStack_b4 = fStack_9c;
      afStack_b0[(uint)bVar6 * -2] = afStack_b0[(uint)bVar6 * -2 + 6];
      afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      FUN_00408b40(param_2,puVar7);
      uVar8 = 1;
      afStack_78[0] = (float)uStack_48;
      afStack_b0[(uint)bVar6 * -2 + 0xf] = afStack_b0[(uint)bVar6 * -2 + 0x1b];
      iVar2 = 0x01E82168;
      afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
           afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
      FUN_005592d0(iVar2,uVar8);
      FUN_00559250(0x01E82168,param_1);
      fStack_24 = (float)FUN_00557300(0x01E82168,&fStack_b4,afStack_b0 + 0xe);
      fStack_18 = fStack_24;
      FUN_00559220(0x01E82168);
      if ((fStack_24 <= 1.0) && (param_2 == *(int *)(0x01E82168 + 0x14d144))) {
        return fStack_20;
      }
    }
  }
  return -1.0;
}
