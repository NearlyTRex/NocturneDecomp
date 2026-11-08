// Name: FUN_004c5350
// Address: 004c5350
// Address Range: [[004c5350, 004c5e36]]
// Convention: unknown
// Signature: void FUN_004c5350(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c5350(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  float afStackY_1128 [997];
  float *pfVar7;
  byte auStack_17c [4];
  float fStack_178;
  int iStack_148;
  int iStack_144;
  float fStack_140;
  float afStack_13c [4];
  float fStack_12c;
  uint uStack_128;
  float fStack_124;
  float afStack_11c [3];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  uint uStack_f4;
  float fStack_f0;
  float afStack_ec [3];
  uint uStack_e0;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  float afStack_b0 [3];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint uStack_8c;
  float afStack_80 [4];
  float afStack_70 [5];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  uint uStack_50;
  float fStack_4c;
  float afStack_44 [3];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2);
  if (iVar3 == 0) {
    iVar3 = FUN_004fc070(param_1 + 0x158);
    if (*(int *)(iVar3 + 0x24) == 8) {
      return;
    }
    if (*(int *)(iVar3 + 0x24) == 5) {
      return;
    }
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_38 = param_2 * *(float *)(param_1 + 0xcdcc);
  iStack_1c = param_1 + 0x158;
  while (0.0 < fStack_38) {
    uVar4 = FUN_004fbb70(iStack_1c,&fStack_38);
    FUN_00433fb0(param_1,uVar4);
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc));
  iVar3 = FUN_004fc070(iStack_1c);
  iVar3 = *(int *)(iVar3 + 0x24);
  iStack_2c = iVar3;
  iVar5 = FUN_00431660(param_1,param_2);
  if (iVar5 == 0) {
    switch(iVar3) {
    case 0:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iVar3 = FUN_004c51a0(param_1);
      if (iVar3 == 0) {
        fStack_14 = (float)FUN_0040ce40(0,0x3f800000);
        *(float *)(param_1 + 0xd0ac) = fStack_14;
        FUN_004fc0d0(iStack_1c,5,1);
        iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd098));
        if (iVar3 == 0) {
          uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"gargoyle-stone.wav");
          *(uint *)(param_1 + 0xd098) = uVar4;
        }
      }
      else if (*(int *)(param_1 + 0xd0a8) == 0) {
        iVar3 = *(int *)(param_1 + 0xcde4);
        if (iVar3 == 0) {
          iVar3 = FUN_00489ff0(param_1,param_2);
          if (iVar3 != 0) {
            FUN_004fc0d0(iStack_1c,1,1);
          }
        }
        else {
          fStack_104 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_100 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_fc = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_d4 = fStack_104;
          afStack_13c[(uint)bVar6 * -2 + 0x1b] = afStack_13c[(uint)bVar6 * -2 + 0xf];
          afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
               afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
          fStack_34 = SQRT(fStack_cc * fStack_cc + fStack_d4 * fStack_d4 + fStack_d0 * fStack_d0);
          fStack_28 = fStack_34;
          if (fStack_34 < 0x40400000) {
            FUN_00576250(afStack_13c + 0x1a);
            uStack_50 = uStack_e0;
            afStack_70[(uint)bVar6 * -2 + 9] = afStack_13c[(uint)bVar6 * -2 + 0x18];
            afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
                 afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
            fStack_14 = (float)FUN_0040cfa0(fStack_4c - *(float *)(param_1 + 0x34));
            if (ABS(fStack_14) < (float)_DAT_005c3f98) {
              FUN_004fc0d0(iStack_1c,3,1);
            }
          }
          if (fStack_28 < *(float *)(param_1 + 0xcddc)) {
            iVar3 = param_1 + 0x158;
            if (_DAT_005e0778 <= fStack_28) {
              iVar5 = FUN_0040cf40(0x3dcccccd);
              if (iVar5 == 0) {
                FUN_004fc0d0(iVar3,2,1);
              }
              else {
                FUN_004fc0d0(iVar3,4,1);
              }
            }
            else {
              FUN_004fc0d0(iVar3,1,1);
            }
          }
        }
      }
      else {
        FUN_004fc0d0(iStack_1c,1,1);
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iVar3 = FUN_004c51a0(param_1);
      fVar2 = 0x40400000;
      iStack_20 = param_1 + 0x158;
      if (iVar3 == 0) {
        fStack_14 = (float)FUN_0040ce40(0,0x3f800000);
        *(float *)(param_1 + 0xd0ac) = fStack_14;
        FUN_004fc0d0(iStack_20,5,1);
        iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd098));
        if (iVar3 == 0) {
          uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"gargoyle-stone.wav");
          *(uint *)(param_1 + 0xd098) = uVar4;
        }
      }
      else if (*(int *)(param_1 + 0xd0a8) == 0) {
        if (*(int *)(param_1 + 0xcde4) == 0) {
          iVar3 = FUN_00489ff0(param_1,param_2);
          if (iVar3 == 0) {
            FUN_004fc0d0(iStack_20,0,1);
          }
          else {
            FUN_004fc0d0(iStack_20,1,1);
          }
        }
        else {
          *(uint *)(param_1 + 0x24a4) = 0;
          *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
          *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
          afStack_44[0] = 0.0;
          afStack_44[1] = 0.0;
          afStack_44[2] = fVar2;
          fStack_18 = fVar2;
          uVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xc4))
                            (*(int *)(param_1 + 0xcde4),afStack_70 + 0xb,0x3f000000,0x3e32b8c2);
          iVar3 = FUN_0042b9e0(param_1,*(int *)(param_1 + 0xcde4) + 0x20,uVar4);
          if (-1 < iVar3) {
            iVar3 = *(int *)(param_1 + 0xcde4);
            fStack_98 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
            fStack_94 = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
            fStack_90 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
            fStack_f8 = fStack_98;
            afStack_13c[(uint)bVar6 * -2 + 0x12] = afStack_13c[(uint)bVar6 * -2 + 0x2a];
            afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
                 afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b];
            uStack_f4 = 0;
            fStack_30 = SQRT(fStack_f0 * fStack_f0 + fStack_f8 * fStack_f8);
            fStack_24 = fStack_30;
            if (_DAT_005e0778 < fStack_30) {
              iVar3 = FUN_0040cf40(0x3dcccccd);
              if (iVar3 == 0) {
                uVar4 = 2;
              }
              else {
                uVar4 = 4;
              }
              FUN_004fc0d0(iStack_20,uVar4,1);
            }
            if ((fStack_24 <= fStack_18) && (*(float *)(param_1 + 0xcde0) <= 0.0)) {
              iVar3 = *(int *)(param_1 + 0xcde4);
              afStack_13c[2] = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
              afStack_13c[3] = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
              fStack_12c = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
              afStack_70[2] = afStack_13c[2];
              afStack_70[(uint)bVar6 * -2 + 3] = afStack_13c[(uint)bVar6 * -2 + 3];
              afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                   afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
              FUN_00576250(afStack_70 + 2);
              uStack_128 = uStack_bc;
              afStack_13c[(uint)bVar6 * -2 + 6] = afStack_13c[(uint)bVar6 * -2 + 0x21];
              afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
                   afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22];
              fStack_14 = (float)FUN_0040cfa0(fStack_124 - *(float *)(param_1 + 0x34));
              if (ABS(fStack_14) < (float)_DAT_005c3f98) {
                FUN_004fc0d0(param_1 + 0x158,3,1);
                *(uint *)(param_1 + 0xcde0) = 0x3f800000;
              }
            }
            if (*(float *)(param_1 + 0xcddc) < fStack_24) {
              FUN_004fc0d0(param_1 + 0x158,0,1);
            }
          }
        }
      }
      else {
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        afStack_80[0] = 0.0;
        afStack_80[1] = 0.0;
        afStack_80[2] = 0.0;
        uVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xd090) + 0x154) + 0xc4))
                          (*(int *)(param_1 + 0xd090),afStack_13c + 0x2f,0x3f000000,0x3e32b8c2);
        FUN_0042b9e0(param_1,*(int *)(param_1 + 0xd090) + 0x20,uVar4);
      }
      break;
    case 3:
      FUN_0042abb0(auStack_17c);
      fStack_178 = (float)FUN_0040ce40(0x40400000,0x40a00000);
      iStack_148 = param_1;
      iStack_144 = param_1;
      fStack_14 = fStack_178;
      FUN_00583260(&DAT_02cfd900,_DAT_01d22cac * 0x30 + param_1 + 0xfd8,0x3ecccccd,auStack_17c);
      pfVar7 = afStack_13c + 0x14;
      afStack_ec[0] = (float)uStack_8c;
      afStack_13c[(uint)bVar6 * -2 + 0x15] = afStack_13c[(uint)bVar6 * -2 + 0x2d];
      afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
           afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2e];
      FUN_00408b80(param_1,pfVar7);
      pfVar7 = afStack_13c + 8;
      afStack_11c[0] = afStack_80[3];
      afStack_13c[(uint)bVar6 * -2 + 9] = afStack_70[(uint)bVar6 * -2];
      iVar3 = param_1;
      afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      FUN_004893f0(iVar3,pfVar7);
      break;
    case 5:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iVar3 = FUN_004c51a0(param_1);
      if ((iVar3 != 0) &&
         (fVar2 = *(float *)(param_1 + 0xd0ac) - param_2, *(float *)(param_1 + 0xd0ac) = fVar2,
         fVar2 < 0.0)) {
        *(uint *)(param_1 + 0xd0ac) = 0;
        FUN_004fc0d0(iStack_1c,0,1);
        iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd098));
        if (iVar3 == 0) {
          uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"gargoyle-alive?.wav");
          *(uint *)(param_1 + 0xd098) = uVar4;
        }
      }
    }
    goto switchD_004c5d74_caseD_4;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004c5463:
      uVar4 = 1;
    }
    else {
LAB_004c56ef:
      uVar4 = 0;
    }
    FUN_004fc0d0(param_1 + 0x158,uVar4,1);
  }
  else {
    if (uVar1 < 3) goto LAB_004c5463;
    if (uVar1 != 3) goto LAB_004c56ef;
    FUN_004fc0d0(iStack_1c,0,1);
    FUN_00441ff0(PTR_DAT_005f1690,">%s confused while walking to scriptDest!\n" + 1,param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_004c5d74_caseD_4:
  if (0.0 < *(float *)(param_1 + 0xcde0)) {
    *(float *)(param_1 + 0xcde0) = *(float *)(param_1 + 0xcde0) - param_2;
  }
  iVar3 = FUN_0042ccf0(param_1);
  if (iVar3 != 0) {
    FUN_0042c1e0(param_1,param_2);
    fStack_110 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_10c = *(float *)(param_1 + 0x251c) * param_2;
    fStack_108 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_c8 = fStack_110;
    afStack_13c[(uint)bVar6 * -2 + 0x1e] = afStack_13c[(uint)bVar6 * -2 + 0xc];
    afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
         afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    fStack_a4 = fStack_c8 + *(float *)(param_1 + 0x250c);
    fStack_a0 = fStack_c4 + *(float *)(param_1 + 0x2510);
    fStack_9c = fStack_c0 + *(float *)(param_1 + 0x2514);
    fStack_5c = fStack_a4;
    afStack_70[(uint)bVar6 * -2 + 6] = afStack_13c[(uint)bVar6 * -2 + 0x27];
    afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28];
    fStack_140 = fStack_5c + *(float *)(param_1 + 0x249c);
    afStack_13c[0] = fStack_58 + *(float *)(param_1 + 0x24a0);
    afStack_13c[1] = fStack_54 + *(float *)(param_1 + 0x24a4);
    afStack_b0[0] = fStack_140;
    afStack_13c[(uint)bVar6 * -2 + 0x24] = afStack_13c[(uint)bVar6 * -2];
    afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25] =
         afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(float *)(param_1 + 0x24a0) = *(float *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a4);
    FUN_0042c230(param_1,afStack_13c + 0x23);
  }
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00433350(param_1,param_2);
  if (iStack_2c == 5) {
    *(int *)(param_1 + 0xd09c) = *(int *)(param_1 + 0xd084) << 8;
    *(int *)(param_1 + 0xd0a0) = *(int *)(param_1 + 0xd088) << 8;
    *(int *)(param_1 + 0xd0a4) = *(int *)(param_1 + 0xd08c) << 8;
  }
  else {
    *(uint *)(param_1 + 0xd0a0) = 0xffff;
    *(uint *)(param_1 + 0xd0a4) = 0xffff;
    *(uint *)(param_1 + 0xd09c) = 0xffff;
  }
  if (*(int *)(param_1 + 0x108) < *(int *)(param_1 + 0xd09c)) {
    iVar3 = *(int *)(param_1 + 0x108) + _DAT_01c5fad0;
    *(int *)(param_1 + 0x108) = iVar3;
    if (*(int *)(param_1 + 0xd09c) < iVar3) {
      *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0xd09c);
    }
  }
  else if (*(int *)(param_1 + 0xd09c) < *(int *)(param_1 + 0x108)) {
    iVar3 = *(int *)(param_1 + 0x108) - _DAT_01c5fad0;
    *(int *)(param_1 + 0x108) = iVar3;
    if (iVar3 < *(int *)(param_1 + 0xd09c)) {
      *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0xd09c);
    }
  }
  if (*(int *)(param_1 + 0x10c) < *(int *)(param_1 + 0xd0a0)) {
    iVar3 = *(int *)(param_1 + 0x10c) + _DAT_01c5fad0;
    *(int *)(param_1 + 0x10c) = iVar3;
    if (*(int *)(param_1 + 0xd0a0) < iVar3) {
      *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0xd0a0);
    }
  }
  else if (*(int *)(param_1 + 0xd0a0) < *(int *)(param_1 + 0x10c)) {
    iVar3 = *(int *)(param_1 + 0x10c) - _DAT_01c5fad0;
    *(int *)(param_1 + 0x10c) = iVar3;
    if (iVar3 < *(int *)(param_1 + 0xd0a0)) {
      *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0xd0a0);
    }
  }
  if (*(int *)(param_1 + 0x110) < *(int *)(param_1 + 0xd0a4)) {
    iVar3 = *(int *)(param_1 + 0x110) + _DAT_01c5fad0;
    *(int *)(param_1 + 0x110) = iVar3;
    if (*(int *)(param_1 + 0xd0a4) < iVar3) {
      *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0xd0a4);
      return;
    }
  }
  else if (*(int *)(param_1 + 0xd0a4) < *(int *)(param_1 + 0x110)) {
    iVar3 = *(int *)(param_1 + 0x110) - _DAT_01c5fad0;
    *(int *)(param_1 + 0x110) = iVar3;
    if (iVar3 < *(int *)(param_1 + 0xd0a4)) {
      *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0xd0a4);
      return;
    }
  }
  return;
}
