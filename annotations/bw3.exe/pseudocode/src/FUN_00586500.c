// Name: FUN_00586500
// Address: 00586500
// Address Range: [[00586500, 00586e48]]
// Convention: unknown
// Signature: void FUN_00586500(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00586500(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1108 [997];
  float *pfVar6;
  uint uVar7;
  byte auStack_15c [4];
  float fStack_158;
  int iStack_128;
  int iStack_124;
  float fStack_120;
  float afStack_11c [5];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  uint uStack_f0;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  uint uStack_d8;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  uint uStack_c0;
  uint uStack_b4;
  float afStack_a8 [3];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float afStack_90 [3];
  float fStack_84;
  float afStack_80 [5];
  uint auStack_6c [3];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  uint uStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  iVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  FUN_00433c60(param_1,param_2);
  FUN_00432330(param_1,param_2,*(int *)(param_1 + 0xcdd0) == 1);
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_34 = param_2 * *(float *)(param_1 + 0xcdcc) * *(float *)(param_1 + 0xd074);
  while (0.0 < fStack_34) {
    uVar3 = FUN_004fbb70(param_1 + 0x158,afStack_80 + 0x13);
    FUN_00433fb0(param_1,uVar3);
  }
  iVar2 = FUN_004fc070(param_1 + 0x158);
  iVar2 = *(int *)(iVar2 + 0x24);
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  iStack_20 = iVar2;
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc));
  if (iVar2 == 8) {
    *(float *)(param_1 + 0x2528) = *(float *)(param_1 + 0x2528) * (float)_DAT_005d82cf;
  }
  iVar2 = FUN_00431660(param_1,param_2);
  if (iVar2 == 0) {
    switch(iStack_20) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar2 = FUN_00489ff0(param_1,param_2);
      iStack_24 = param_1 + 0x158;
      if (iVar2 == 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
        iVar2 = *(int *)(param_1 + 0xcde4);
        if (iVar2 != 0) {
          fStack_9c = *(float *)(iVar2 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_98 = *(float *)(iVar2 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_94 = *(float *)(iVar2 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_e4 = fStack_9c;
          afStack_11c[(uint)bVar5 * -2 + 0xf] = afStack_11c[(uint)bVar5 * -2 + 0x21];
          afStack_11c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
               afStack_11c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x22];
          fStack_2c = fStack_dc * fStack_dc + fStack_e4 * fStack_e4 + fStack_e0 * fStack_e0;
          fStack_30 = (float)(((int)fStack_2c >> 1) + _DAT_01d1a0a4);
          if (fStack_30 < _DAT_005e65e8) {
            iVar2 = FUN_0040cea0(0,2,1);
            iVar2 = iVar2 + 5;
          }
          else {
            iVar2 = FUN_0040cea0(0,0,1);
            iVar2 = iVar2 + 8;
          }
          FUN_004fc0d0(iStack_24,iVar2);
          iVar2 = FUN_00560af0(0x02CF5680,*(uint *)(param_1 + 0xd070));
          if (iVar2 == 0) {
            uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"dog5.wav");
            *(uint *)(param_1 + 0xd070) = uVar3;
          }
        }
      }
      else {
        fStack_14 = (float)FUN_004fc930(iStack_24);
        if ((float)_DAT_005d82df < fStack_14) {
          iVar2 = FUN_0040cea0(0,2,1);
          FUN_004fc0d0(iStack_24,iVar2 + 5);
        }
      }
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iVar2 = *(int *)(param_1 + 0xcde4);
      if (iVar2 == 0) {
        iVar4 = FUN_00489ff0(param_1,param_2);
        iVar2 = param_1 + 0x158;
        if (iVar4 == 0) {
          uVar3 = FUN_0040cea0(0,3,1);
          FUN_004fc0d0(iVar2,uVar3);
        }
        else {
          fStack_14 = (float)FUN_004fc930(iVar2);
          if ((float)_DAT_005d82df < fStack_14) {
            iVar4 = FUN_0040cea0(0,2,1);
            FUN_004fc0d0(iVar2,iVar4 + 5);
          }
        }
        break;
      }
      fStack_fc = *(float *)(param_1 + 0x20) - *(float *)(iVar2 + 0x20);
      fStack_f8 = *(float *)(param_1 + 0x24) - *(float *)(iVar2 + 0x24);
      fStack_f4 = *(float *)(param_1 + 0x28) - *(float *)(iVar2 + 0x28);
      fStack_120 = fStack_fc;
      afStack_11c[(uint)bVar5 * -2] = afStack_11c[(uint)bVar5 * -2 + 9];
      afStack_11c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_11c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
      fStack_28 = SQRT(afStack_11c[1] * afStack_11c[1] +
                       fStack_120 * fStack_120 + afStack_11c[0] * afStack_11c[0]);
      fStack_18 = fStack_28;
      if ((((_DAT_005e65e8 < fStack_28) && (iStack_20 == 5)) || (iStack_20 == 6)) ||
         (iStack_20 == 7)) {
        iVar2 = param_1 + 0x158;
        if (*(float *)(param_1 + 0xcde0) <= (float)_DAT_005d82d7) {
          fStack_14 = (float)FUN_004fc930(iVar2);
          if ((float)_DAT_005d82df < fStack_14) {
            iVar4 = FUN_0040cea0(0,0,1);
            iVar4 = iVar4 + 8;
            goto LAB_00586c35;
          }
        }
        else {
          fStack_14 = (float)FUN_004fc930(iVar2);
          if ((float)_DAT_005d82df < fStack_14) {
            iVar4 = FUN_0040cea0(0,2,1);
            iVar4 = iVar4 + 5;
LAB_00586c35:
            FUN_004fc0d0(iVar2,iVar4);
          }
        }
      }
      if (((_DAT_005d82e7 < fStack_28) && (fStack_28 < _DAT_005d82eb)) &&
         (iVar2 = FUN_0040cea0(0,10), iVar2 == 5)) {
        iVar2 = FUN_0040cea0(0,1,1);
        FUN_004fc0d0(param_1 + 0x158,iVar2 + 9);
        *(uint *)(param_1 + 0xcde0) = 0x40200000;
      }
      afStack_90[2] = (float)0x40800000;
      uStack_1c = 0x40800000;
      *(uint *)(param_1 + 0x24a4) = 0;
      *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
      *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
      afStack_90[0] = 0.0;
      afStack_90[1] = 0.0;
      uVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xc4))
                        (*(int *)(param_1 + 0xcde4),afStack_11c + 0x23,0x3fc00000,0x3f060a92);
      iVar2 = FUN_0042b9e0(param_1,*(int *)(param_1 + 0xcde4) + 0x20,uVar3);
      if (iVar2 < 0) {
        FUN_00441ff0(PTR_DAT_005f1690,"%s gave up chase - I'm confused\n",param_1);
        FUN_004fc0d0(param_1 + 0x158,0,1);
      }
      else if ((0 < iVar2) && (*(float *)(param_1 + 0xcde0) <= 0.0)) {
        iVar2 = FUN_0040cea0(2,3,1);
        FUN_004fc0d0(param_1 + 0x158,iVar2 + 9);
        *(uint *)(param_1 + 0xcde0) = 0x40200000;
      }
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      FUN_0042abb0(auStack_15c);
      fStack_158 = (float)FUN_0040ce40(0x40e00000,0x41700000);
      iStack_128 = param_1;
      iStack_124 = param_1;
      fStack_14 = fStack_158;
      FUN_00583260(&DAT_02cfd900,param_1 + 0xfd8 + *(int *)(param_1 + 0xd058) * 0x30,0x3f333333,
                   auStack_15c);
      pfVar6 = afStack_11c + 2;
      afStack_11c[2] = (float)uStack_f0;
      afStack_11c[(uint)bVar5 * -2 + 3] = afStack_11c[(uint)bVar5 * -2 + 0xc];
      afStack_11c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           afStack_11c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
      FUN_00408b80(param_1,pfVar6);
      pfVar6 = afStack_80 + 5;
      auStack_6c[0] = uStack_d8;
      afStack_80[(uint)bVar5 * -2 + 6] = afStack_11c[(uint)bVar5 * -2 + 0x12];
      iVar2 = param_1;
      afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           afStack_11c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
      FUN_004893f0(iVar2,pfVar6);
      iVar2 = FUN_00560af0(0x02CF5680,*(uint *)(param_1 + 0xd070));
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"dog5.wav");
        *(uint *)(param_1 + 0xd070) = uVar3;
      }
      break;
    case 0x13:
    case 0x14:
    case 0x15:
      if ((*(int *)(param_1 + 0xcdd0) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_0054dbd0(param_1 + 0x158,0);
        pfVar6 = afStack_80 + 2;
        afStack_80[2] = (float)uStack_c0;
        afStack_80[(uint)bVar5 * -2 + 3] = afStack_11c[(uint)bVar5 * -2 + 0x18];
        afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             afStack_11c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
        FUN_00408b80(param_1,pfVar6);
        uVar7 = 0;
        pfVar6 = afStack_11c + 0x1d;
        afStack_a8[0] = (float)uStack_b4;
        afStack_11c[(uint)bVar5 * -2 + 0x1e] = afStack_11c[(uint)bVar5 * -2 + 0x1b];
        uVar3 = 0x01D22E44;
        afStack_11c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1f] =
             afStack_11c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c];
        FUN_004cec40(uVar3,pfVar6,uVar7);
        uVar3 = 0x01C6E360;
        *(uint *)(param_1 + 0xcdd0) = 1;
        FUN_0048c150(uVar3,"YowDead");
      }
    }
    goto switchD_00586e42_caseD_4;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  iVar2 = param_1 + 0x158;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
      fStack_14 = (float)FUN_004fc930(iVar2);
      if ((float)_DAT_005d82df < fStack_14) {
        iVar2 = FUN_0040cea0(0,2,1);
        iVar2 = iVar2 + 5;
LAB_00586670:
        FUN_004fc0d0(param_1 + 0x158,iVar2);
      }
    }
    else {
LAB_0058685d:
      fStack_14 = (float)FUN_004fc930(param_1 + 0x158);
      if ((float)_DAT_005d82df < fStack_14) {
        iVar2 = FUN_0040cea0(0,3,1);
        goto LAB_00586670;
      }
    }
  }
  else if (uVar1 < 3) {
    fStack_14 = (float)FUN_004fc930(iVar2);
    if ((float)_DAT_005d82df < fStack_14) {
      iVar2 = FUN_0040cea0(0,0,1);
      iVar2 = iVar2 + 8;
      goto LAB_00586670;
    }
  }
  else {
    if (uVar1 != 3) goto LAB_0058685d;
    FUN_004fc0d0(iVar2,0,1);
    FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_00586e42_caseD_4:
  if (0.0 < *(float *)(param_1 + 0xcde0)) {
    *(float *)(param_1 + 0xcde0) = *(float *)(param_1 + 0xcde0) - param_2;
  }
  iVar2 = FUN_0042ccf0(param_1);
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0xcde4);
    if ((iVar2 != 0) &&
       (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0xf4))(iVar2), iVar2 == param_1)) {
      FUN_0053ec10(0x01ED78C8,*(uint *)(param_1 + 0xcde4));
    }
    FUN_0042c1e0(param_1,param_2);
    fStack_108 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_104 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_100 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_cc = fStack_108;
    afStack_11c[(uint)bVar5 * -2 + 0x15] = afStack_11c[(uint)bVar5 * -2 + 6];
    afStack_11c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16] =
         afStack_11c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    fStack_48 = fStack_cc + *(float *)(param_1 + 0x250c);
    fStack_44 = fStack_c8 + *(float *)(param_1 + 0x2510);
    fStack_40 = fStack_c4 + *(float *)(param_1 + 0x2514);
    fStack_60 = fStack_48;
    afStack_80[(uint)bVar5 * -2 + 9] = afStack_80[(uint)bVar5 * -2 + 0xf];
    afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
         afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
    fStack_54 = fStack_60 + *(float *)(param_1 + 0x249c);
    fStack_50 = fStack_5c + *(float *)(param_1 + 0x24a0);
    fStack_4c = fStack_58 + *(float *)(param_1 + 0x24a4);
    fStack_84 = fStack_54;
    afStack_80[(uint)bVar5 * -2] = afStack_80[(uint)bVar5 * -2 + 0xc];
    afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_80[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(float *)(param_1 + 0x24a0) = *(float *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a4);
    FUN_0042c230(param_1,&fStack_84);
  }
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00433350(param_1,param_2);
  return;
}
