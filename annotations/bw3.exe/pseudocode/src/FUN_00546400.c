// Name: FUN_00546400
// Address: 00546400
// Address Range: [[00546400, 00546d43]]
// Convention: unknown
// Signature: void FUN_00546400(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00546400(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1130 [997];
  float *pfVar6;
  uint *puVar7;
  uint uVar8;
  byte auStack_184 [4];
  uint uStack_180;
  int iStack_150;
  int iStack_14c;
  uint uStack_148;
  float afStack_144 [5];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  uint auStack_124 [3];
  float fStack_118;
  float fStack_114;
  float fStack_110;
  uint uStack_10c;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint uStack_e8;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  uint uStack_d0;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  uint auStack_b8 [3];
  uint uStack_ac;
  uint uStack_a0;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  uint auStack_88 [3];
  float afStack_7c [3];
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  float afStack_60 [5];
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
  int iStack_24;
  float fStack_20;
  int iStack_1c;
  uint uStack_18;
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
  fStack_2c = param_2 * *(float *)(param_1 + 0xcdcc) * *(float *)(param_1 + 0xd068);
  while (0.0 < fStack_2c) {
    uVar3 = FUN_004fbb70(param_1 + 0x158,afStack_60 + 0xd);
    FUN_00433fb0(param_1,uVar3);
  }
  iStack_1c = param_1 + 0x158;
  iVar2 = FUN_004fc070(iStack_1c);
  iStack_24 = *(int *)(iVar2 + 0x24);
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc));
  iVar2 = FUN_00431660(param_1,param_2);
  if (iVar2 == 0) {
    switch(iStack_24) {
    case 1:
      iVar4 = FUN_00489ff0(param_1,param_2);
      iVar2 = iStack_1c;
      if (iVar4 == 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
        iVar2 = *(int *)(param_1 + 0xcde4);
        if (iVar2 != 0) {
          fStack_94 = *(float *)(iVar2 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_90 = *(float *)(iVar2 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_8c = *(float *)(iVar2 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_130 = fStack_94;
          afStack_144[(uint)bVar5 * -2 + 6] = afStack_144[(uint)bVar5 * -2 + 0x2d];
          afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
               afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x2e];
          fStack_34 = fStack_128 * fStack_128 + fStack_130 * fStack_130 + fStack_12c * fStack_12c;
          fStack_30 = (float)(((int)fStack_34 >> 1) + _DAT_01d1a0a4);
          if (fStack_30 < _DAT_005e4358) {
            iVar2 = FUN_0040cea0(0,0,1);
          }
          else {
            iVar2 = FUN_0040cea0(0,0,1);
          }
          FUN_004fc0d0(iStack_1c,iVar2 + 2);
          iVar2 = FUN_00560af0(0x02CF5680,*(uint *)(param_1 + 0xd064));
          if (iVar2 == 0) {
            uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"dog5.wav");
            *(uint *)(param_1 + 0xd064) = uVar3;
          }
        }
      }
      else {
        fStack_14 = (float)FUN_004fc930(iStack_1c);
        if ((float)_DAT_005d14de < fStack_14) {
          iVar4 = FUN_0040cea0(0,0,1);
          FUN_004fc0d0(iVar2,iVar4 + 2);
        }
      }
      break;
    case 2:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iVar2 = *(int *)(param_1 + 0xcde4);
      if (iVar2 == 0) {
        iVar2 = FUN_00489ff0(param_1,param_2);
        if (iVar2 == 0) {
          iVar2 = FUN_0040cea0(0,0,1);
          FUN_004fc0d0(iStack_1c,iVar2 + 1);
        }
        else {
          fStack_14 = (float)FUN_004fc930(iStack_1c);
          if ((float)_DAT_005d14de < fStack_14) {
            iVar2 = FUN_0040cea0(0,0,1);
            FUN_004fc0d0(iStack_1c,iVar2 + 2);
          }
        }
        break;
      }
      fStack_118 = *(float *)(param_1 + 0x20) - *(float *)(iVar2 + 0x20);
      fStack_114 = *(float *)(param_1 + 0x24) - *(float *)(iVar2 + 0x24);
      fStack_110 = *(float *)(param_1 + 0x28) - *(float *)(iVar2 + 0x28);
      fStack_100 = fStack_118;
      afStack_144[(uint)bVar5 * -2 + 0x12] = afStack_144[(uint)bVar5 * -2 + 0xc];
      iVar2 = iStack_1c;
      afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13] =
           afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
      fStack_28 = SQRT(fStack_f8 * fStack_f8 + fStack_100 * fStack_100 + fStack_fc * fStack_fc);
      fStack_20 = fStack_28;
      if ((_DAT_005e4358 < fStack_28) && (iStack_24 == 2)) {
        if (*(float *)(param_1 + 0xcde0) <= (float)_DAT_005d14d6) {
          fStack_14 = (float)FUN_004fc930(iStack_1c);
          if ((float)_DAT_005d14de < fStack_14) {
            iVar4 = FUN_0040cea0(0,0,1);
            goto LAB_00546b5f;
          }
        }
        else {
          fStack_14 = (float)FUN_004fc930(iStack_1c);
          if ((float)_DAT_005d14de < fStack_14) {
            iVar4 = FUN_0040cea0(0,0,1);
            iVar2 = iStack_1c;
LAB_00546b5f:
            FUN_004fc0d0(iVar2,iVar4 + 2);
          }
        }
      }
      if (((_DAT_005d14e6 < fStack_20) && (fStack_20 < _DAT_005d14ea)) &&
         (iVar2 = FUN_0040cea0(0,10), iVar2 == 5)) {
        FUN_004fc0d0(param_1 + 0x158,3,1);
        *(uint *)(param_1 + 0xcde0) = 0x40200000;
      }
      uStack_68 = 0x41000000;
      uStack_18 = 0x41000000;
      *(uint *)(param_1 + 0x24a4) = 0;
      *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
      *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
      uStack_70 = 0;
      uStack_6c = 0;
      uVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xc4))
                        (*(int *)(param_1 + 0xcde4),afStack_144 + 0x35,0x3f000000,0x3e32b8c2);
      iVar2 = FUN_0042b9e0(param_1,*(int *)(param_1 + 0xcde4) + 0x20,uVar3);
      if (iVar2 < 0) {
        FUN_00441ff0(PTR_DAT_005f1690,"%s gave up chase - I'm confused\n",param_1);
        FUN_004fc0d0(param_1 + 0x158,1,1);
      }
      else if ((0 < iVar2) && (*(float *)(param_1 + 0xcde0) <= 0.0)) {
        FUN_004fc0d0(param_1 + 0x158,3,1);
        *(uint *)(param_1 + 0xcde0) = 0x40200000;
      }
      break;
    case 3:
    case 4:
      FUN_0042abb0(auStack_184);
      uStack_180 = FUN_0040ce40(0x41700000,0x420c0000);
      iStack_150 = param_1;
      iStack_14c = param_1;
      fStack_14 = (float)(param_1 + 0xfd8);
      FUN_00583260(&DAT_02cfd900,*(int *)(param_1 + 0xd05c) * 0x30 + (int)fStack_14,0x3fd9999a,
                   auStack_184);
      pfVar6 = afStack_144 + 2;
      afStack_144[2] = (float)uStack_e8;
      afStack_144[(uint)bVar5 * -2 + 3] = afStack_144[(uint)bVar5 * -2 + 0x18];
      afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
      FUN_00408b80(param_1,pfVar6);
      puVar7 = &uStack_148;
      uStack_148 = uStack_d0;
      afStack_144[(uint)bVar5 * -2] = afStack_144[(uint)bVar5 * -2 + 0x1e];
      iVar2 = param_1;
      afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1f];
      FUN_004893f0(iVar2,puVar7);
      FUN_00583260(&DAT_02cfd900,*(int *)(param_1 + 0xd060) * 0x30 + (int)fStack_14,0x3fd9999a,
                   auStack_184);
      pfVar6 = afStack_144 + 8;
      auStack_124[0] = uStack_ac;
      afStack_144[(uint)bVar5 * -2 + 9] = afStack_144[(uint)bVar5 * -2 + 0x27];
      afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
           afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x28];
      FUN_00408b80(param_1,pfVar6);
      pfVar6 = afStack_144 + 0x23;
      auStack_b8[0] = uStack_a0;
      afStack_144[(uint)bVar5 * -2 + 0x24] = afStack_144[(uint)bVar5 * -2 + 0x2a];
      iVar2 = param_1;
      afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25] =
           afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x2b];
      FUN_004893f0(iVar2,pfVar6);
      iVar2 = FUN_00560af0(0x02CF5680,*(uint *)(param_1 + 0xd064));
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"dog5.wav");
        *(uint *)(param_1 + 0xd064) = uVar3;
      }
      break;
    case 7:
      if ((*(int *)(param_1 + 0xcdd0) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_0054dbd0(iStack_1c,0);
        puVar7 = &uStack_64;
        uStack_64 = afStack_60[2];
        afStack_60[(uint)bVar5 * -2] = afStack_60[(uint)bVar5 * -2 + 3];
        afStack_60[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_60[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        FUN_00408b80(param_1,puVar7);
        uVar8 = 0;
        pfVar6 = afStack_144 + 0x2f;
        auStack_88[0] = uStack_10c;
        afStack_144[(uint)bVar5 * -2 + 0x30] = afStack_144[(uint)bVar5 * -2 + 0xf];
        uVar3 = 0x01D22E44;
        afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x31] =
             afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
        FUN_004cec40(uVar3,pfVar6,uVar8);
        *(uint *)(param_1 + 0xcdd0) = 1;
      }
    }
    goto switchD_00546d3d_caseD_5;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0054652d:
      fStack_14 = (float)FUN_004fc930(param_1 + 0x158);
      if (fStack_14 <= (float)_DAT_005d14de) goto LAB_0054656e;
      iVar2 = FUN_0040cea0(0,0,1);
      iVar2 = iVar2 + 2;
    }
    else {
LAB_00546726:
      fStack_14 = (float)FUN_004fc930(param_1 + 0x158);
      if (fStack_14 <= (float)_DAT_005d14de) goto LAB_0054656e;
      iVar2 = FUN_0040cea0(0,0,1);
      iVar2 = iVar2 + 1;
    }
    FUN_004fc0d0(param_1 + 0x158,iVar2);
  }
  else {
    if (uVar1 < 3) goto LAB_0054652d;
    if (uVar1 != 3) goto LAB_00546726;
    FUN_004fc0d0(iStack_1c,1,1);
    FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
  }
LAB_0054656e:
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_00546d3d_caseD_5:
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
    fStack_f4 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_f0 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_ec = *(float *)(param_1 + 0x2520) * param_2;
    fStack_c4 = fStack_f4;
    afStack_144[(uint)bVar5 * -2 + 0x21] = afStack_144[(uint)bVar5 * -2 + 0x15];
    afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x22] =
         afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16];
    fStack_4c = fStack_c4 + *(float *)(param_1 + 0x250c);
    fStack_48 = fStack_c0 + *(float *)(param_1 + 0x2510);
    fStack_44 = fStack_bc + *(float *)(param_1 + 0x2514);
    fStack_dc = fStack_4c;
    afStack_144[(uint)bVar5 * -2 + 0x1b] = afStack_60[(uint)bVar5 * -2 + 6];
    afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c] =
         afStack_60[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    fStack_40 = fStack_dc + *(float *)(param_1 + 0x249c);
    fStack_3c = fStack_d8 + *(float *)(param_1 + 0x24a0);
    fStack_38 = fStack_d4 + *(float *)(param_1 + 0x24a4);
    afStack_7c[0] = fStack_40;
    afStack_144[(uint)bVar5 * -2 + 0x33] = afStack_60[(uint)bVar5 * -2 + 9];
    afStack_144[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x34] =
         afStack_60[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042c230(param_1,afStack_144 + 0x32);
  }
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00433350(param_1,param_2);
  return;
}
