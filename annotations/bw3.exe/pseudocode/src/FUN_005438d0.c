// Name: FUN_005438d0
// Address: 005438d0
// Address Range: [[005438d0, 00544fc1]]
// Convention: unknown
// Signature: void FUN_005438d0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005438d0(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  float afStackY_1238 [973];
  byte auStack_2ec [4];
  uint uStack_2e8;
  uint uStack_2bc;
  int iStack_2b8;
  int iStack_2b4;
  float afStack_2b0 [6];
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float afStack_280 [6];
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float afStack_24c [4];
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float afStack_21c [4];
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  uint uStack_1d8;
  float afStack_1cc [3];
  uint uStack_1c0;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float afStack_174 [4];
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  uint uStack_154;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float afStack_12c [5];
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float afStack_10c [3];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  uint uStack_f4;
  float afStack_e8 [3];
  float afStack_dc [3];
  uint uStack_d0;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float afStack_b8 [3];
  uint uStack_ac;
  float fStack_a8;
  float afStack_a0 [3];
  float afStack_94 [3];
  float afStack_88 [3];
  float afStack_7c [3];
  uint uStack_70;
  float afStack_6c [5];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar11 = 0;
  iVar4 = FUN_004fc070(param_1 + 0x158);
  fStack_38 = *(float *)(param_1 + 0x160);
  iVar4 = *(int *)(iVar4 + 0x24);
  iVar5 = FUN_004fc070(param_1 + 0x158);
  fStack_2c = (float)*(int *)(iVar5 + 100);
  FUN_00433c60(param_1,param_2);
  iVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2);
  if (iVar5 == 0) {
    FUN_00556be0(*(uint *)(param_1 + 0xd084));
    return;
  }
  if ((*(int *)(param_1 + 0xd054) == 2) && (0.0 <= *(float *)(param_1 + 0xd0a0))) {
    *(float *)(param_1 + 0xd0a0) = *(float *)(param_1 + 0xd0a0) - param_2;
  }
  fStack_44 = param_2 * *(float *)(param_1 + 0xcdcc) * *(float *)(param_1 + 0xd0e4);
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  while (0.0 < fStack_44) {
    uVar6 = FUN_004fbb70(param_1 + 0x158,afStack_6c + 10);
    FUN_00433fb0(param_1,uVar6);
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc));
  if (*(int *)(param_1 + 0xd054) == 2) {
    *(float *)(param_1 + 0x2528) = *(float *)(param_1 + 0x2528) * (float)_DAT_005d129e;
  }
  iVar7 = FUN_00431660(param_1,param_2);
  iVar5 = 0x01D2130C;
  if (iVar7 != 0) {
    uVar1 = *(uint *)(param_1 + 0x273c);
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        iVar4 = 5;
        uVar6 = 1;
      }
      else {
LAB_00543fd8:
        uVar6 = 1;
        iVar4 = FUN_0040cea0(0,4,1);
      }
LAB_00543ab8:
      FUN_004fc0d0(param_1 + 0x158,iVar4,uVar6);
    }
    else if (uVar1 < 3) {
      fStack_14 = (float)FUN_004fc930(param_1 + 0x158);
      if ((float)_DAT_005d12de < fStack_14) {
        uVar6 = 1;
        iVar4 = FUN_0040cea0(0,1,1);
        iVar4 = iVar4 + 0xb;
        goto LAB_00543ab8;
      }
    }
    else {
      if (uVar1 != 3) goto LAB_00543fd8;
      FUN_004fc0d0(param_1 + 0x158,0,1);
      FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
    }
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
    goto LAB_00543af0;
  }
  switch(iVar4) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    goto switchD_00544f80_caseD_0;
  case 5:
  case 0xb:
  case 0xc:
    if (*(int *)(param_1 + 0xd0bc) != 0) {
      fVar2 = *(float *)(param_1 + 0xd0c4) - param_2;
      *(float *)(param_1 + 0xd0c4) = fVar2;
      if (0.0 < fVar2) {
        FUN_004310e0(param_1,*(uint *)(param_1 + 0xd0bc),0x3f800000,0x3f800000,
                     param_1 + 0xd0c0);
        uVar1 = *(uint *)(param_1 + 0xd0c0);
        if (uVar1 == 0) {
LAB_00544b88:
          uVar6 = FUN_0040cea0(0,4,1);
          FUN_004fc0d0(param_1 + 0x158,uVar6);
          *(uint *)(param_1 + 0xd0bc) = 0;
        }
        else {
          if (uVar1 < 2) {
            FUN_004fc0d0(param_1 + 0x158,5,1);
          }
          else {
            if (uVar1 != 2) goto LAB_00544b88;
            fStack_14 = (float)FUN_004fc930(param_1 + 0x158);
            if ((float)_DAT_005d12d6 < fStack_14) {
              *(int *)(param_1 + 0xd0cc) = *(int *)(param_1 + 0xd0cc) + 1;
            }
            if (2 < *(int *)(param_1 + 0xd0cc)) {
              fStack_14 = (float)FUN_004fc930(param_1 + 0x158);
              if ((float)_DAT_005d12de < fStack_14) {
                iVar5 = FUN_0040cea0(0,1,1);
                FUN_004fc0d0(param_1 + 0x158,iVar5 + 0xb);
                *(uint *)(param_1 + 0xd0cc) = 0;
              }
            }
          }
          if (*(int *)(param_1 + 0xd0bc) != 0) break;
        }
      }
      else {
        *(uint *)(param_1 + 0xd0bc) = 0;
        *(uint *)(param_1 + 0xd0c4) = 0;
      }
    }
    (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
    iVar5 = *(int *)(param_1 + 0xcde4);
    iStack_28 = param_1 + 0x158;
    if (iVar5 == 0) {
      uVar6 = FUN_0040cea0(0,4,1);
      FUN_004fc0d0(iStack_28,uVar6);
    }
    else {
      fStack_1b4 = *(float *)(iVar5 + 0x20) - *(float *)(param_1 + 0x20);
      fStack_1b0 = *(float *)(iVar5 + 0x24) - *(float *)(param_1 + 0x24);
      fStack_1ac = *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x28);
      fStack_130 = fStack_1b4;
      afStack_12c[(uint)bVar11 * -2] = afStack_21c[(uint)bVar11 * -2 + 0x1b];
      afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
           afStack_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c];
      fStack_20 = SQRT(afStack_12c[1] * afStack_12c[1] +
                       fStack_130 * fStack_130 + afStack_12c[0] * afStack_12c[0]);
      if (*(float *)(param_1 + 0xcddc) < fStack_20) {
        *(uint *)(param_1 + 0xcde4) = 0;
        uVar6 = FUN_0040cea0(0,4,1);
        FUN_004fc0d0(iStack_28,uVar6);
      }
      else if (((fStack_20 <= _DAT_005e3d4c + _DAT_005d12e6) || (_DAT_005e3d4c + 1.0 <= fStack_20))
              || (iVar5 = FUN_0040cea0(0,3), iVar5 == 1)) {
        afStack_7c[2] = 0x40400000;
        fStack_40 = 0x40400000;
        iVar5 = *(int *)(param_1 + 0xcde4);
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        afStack_7c[0] = 0.0;
        afStack_7c[1] = 0.0;
        uVar6 = (**(code **)(*(int *)(iVar5 + 0x154) + 0xc4))
                          (iVar5,afStack_12c + 0x2c,0x3f000000,0x3e32b8c2);
        iVar7 = FUN_0042b9e0(param_1,(float *)(iVar5 + 0x20),uVar6);
        if (iVar7 < 0) {
          FUN_00441ff0(PTR_DAT_005f1690,"%s gave up chase - I'm confused\n",param_1);
          uVar6 = FUN_0040cea0(0,4,1);
          FUN_004fc0d0(param_1 + 0x158,uVar6);
        }
        else if (iVar7 < 1) {
          iVar7 = FUN_0040c840(*(uint *)(param_1 + 0xd088),_DAT_02cfd81c);
          if (iVar7 == 0) {
            fStack_220 = *(float *)(iVar5 + 0x20) - *(float *)(param_1 + 0x20);
            afStack_21c[0] = *(float *)(iVar5 + 0x24) - *(float *)(param_1 + 0x24);
            afStack_21c[1] = *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x28);
            fStack_100 = fStack_220;
            afStack_12c[(uint)bVar11 * -2 + 0xc] = afStack_21c[(uint)bVar11 * -2];
            afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
                 afStack_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            if (afStack_24c + 8 != afStack_12c + 0xb) {
              fStack_22c = fStack_100;
              fStack_228 = fStack_fc;
              fStack_224 = fStack_f8;
            }
            fStack_34 = SQRT(fStack_224 * fStack_224 +
                             fStack_22c * fStack_22c + fStack_228 * fStack_228);
            fStack_24 = 20.0;
            if (*(int *)(param_1 + 0xd054) == 1) {
              fStack_24 = 10.0;
            }
            if (*(int *)(param_1 + 0xd054) == 2) {
              fStack_24 = 10.0;
            }
            iVar5 = param_1 + 0x158;
            iStack_1c = iVar5;
            if (fStack_24 < fStack_34) {
              FUN_00576250(afStack_24c + 8);
              uStack_ac = uStack_1c0;
              afStack_12c[(uint)bVar11 * -2 + 0x21] = afStack_21c[(uint)bVar11 * -2 + 0x18];
              afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x22] =
                   afStack_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19];
              fStack_14 = (float)FUN_0040cfa0(fStack_a8 - *(float *)(param_1 + 0x34));
              if (ABS(fStack_14) < (float)_DAT_005d12ee) {
                fStack_14 = (float)FUN_004fc930(iStack_1c);
                if ((float)_DAT_005d12de < fStack_14) {
                  iVar4 = FUN_0040cea0(0,1,1);
                  FUN_004fc0d0(iStack_1c,iVar4 + 0xb);
                }
                iVar4 = FUN_0040cf40(0x3e19999a);
                if (iVar4 != 0) {
                  FUN_00545040(param_1);
                }
                iVar4 = 0;
                iVar5 = 0;
                while (iVar5 < *(int *)(0x01ED78C8 + 0x150fec)) {
                  iVar7 = FUN_0040c840(*(uint *)(iVar4 + 0x150ff0 + 0x01ED78C8),
                                       _DAT_0270f850);
                  if ((iVar7 == 0) || (iVar7 == param_1)) {
                    iVar5 = iVar5 + 1;
                    iVar4 = iVar4 + 4;
                  }
                  else {
                    iVar8 = FUN_004fc070(iVar7 + 0x158);
                    if ((*(int *)(iVar8 + 0x24) == 0xb) ||
                       (iVar7 = FUN_004fc070(iVar7 + 0x158), *(int *)(iVar7 + 0x24) == 0xc)) {
                      iVar4 = FUN_0040cea0(0,2);
                      if (iVar4 == 1) {
                        *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + _DAT_005d12fe;
                      }
                      if (iVar4 == 2) {
                        *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + _DAT_005d1302;
                      }
                      break;
                    }
                    iVar5 = iVar5 + 1;
                    iVar4 = iVar4 + 4;
                  }
                }
              }
            }
            else if (fStack_34 < 0x40400000 * _DAT_005d12c2) {
              if ((iVar4 == 5) &&
                 (fStack_14 = (float)FUN_004fc930(iVar5), (float)_DAT_005d12de < fStack_14)) {
                uVar6 = FUN_0040cea0(0,4,1);
                FUN_004fc0d0(iVar5,uVar6);
              }
              if ((iVar4 == 0xb) || (iVar4 == 0xc)) {
                FUN_004fc0d0(param_1 + 0x158,5,1);
              }
            }
          }
        }
        else if (*(float *)(param_1 + 0xcde0) <= 0.0) {
          FUN_004fc0d0(param_1 + 0x158,6,1);
          iVar4 = FUN_004348b0(param_1,&DAT_005d1293);
          *(int *)(param_1 + 0xd0bc) = iVar4;
          if (iVar4 != 0) {
            fStack_14 = (float)FUN_0040ce40(0x40800000,0x41400000);
            *(float *)(param_1 + 0xd0c4) = fStack_14;
          }
          iVar4 = FUN_0040cf40(0x3f4ccccd);
          if (iVar4 != 0) {
            FUN_00545040(param_1);
          }
        }
        fVar2 = *(float *)(param_1 + 0xd07c) - param_2;
        *(float *)(param_1 + 0xd07c) = fVar2;
        if (fVar2 < 0.0) {
          FUN_00545040(param_1);
        }
      }
      else {
        FUN_004fc0d0(iStack_28,7,1);
        iVar4 = FUN_004348b0(param_1,&DAT_005d1270);
        *(int *)(param_1 + 0xd0bc) = iVar4;
        if (iVar4 != 0) {
          fStack_14 = (float)FUN_0040ce40(0x40800000,0x41400000);
          *(float *)(param_1 + 0xd0c4) = fStack_14;
        }
      }
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    FUN_0042abb0(auStack_2ec);
    uStack_2e8 = *(uint *)(param_1 + 0xce5c);
    uStack_2bc = 0x6d;
    iStack_2b8 = param_1;
    iStack_2b4 = param_1;
    iVar5 = param_1 + 0xfd8;
    FUN_00583260(&DAT_02cfd900,*(int *)(param_1 + 0xd060) * 0x30 + iVar5,0x3f800000,auStack_2ec);
    afStack_dc[0] = (float)uStack_154;
    afStack_12c[(uint)bVar11 * -2 + 0x15] = afStack_174[(uint)bVar11 * -2 + 9];
    afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16] =
         afStack_174[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
    FUN_00408b80(param_1,afStack_12c + 0x14);
    afStack_1cc[0] = (float)uStack_d0;
    afStack_21c[(uint)bVar11 * -2 + 0x15] = afStack_12c[(uint)bVar11 * -2 + 0x18];
    afStack_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16] =
         afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19];
    FUN_004893f0(param_1,afStack_21c + 0x14);
    uStack_2e8 = *(uint *)(param_1 + 0xce5c);
    iStack_2b8 = param_1;
    iStack_2b4 = param_1;
    FUN_00583260(&DAT_02cfd900,*(int *)(param_1 + 0xd05c) * 0x30 + iVar5,0x3f800000,auStack_2ec);
    pfVar9 = afStack_12c + 0x1d;
    afStack_b8[0] = (float)uStack_70;
    afStack_12c[(uint)bVar11 * -2 + 0x1e] = afStack_6c[(uint)bVar11 * -2];
    afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f] =
         afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    FUN_00408b80(param_1,pfVar9);
    pfVar9 = afStack_12c + 0x11;
    afStack_e8[0] = afStack_6c[2];
    afStack_12c[(uint)bVar11 * -2 + 0x12] = afStack_6c[(uint)bVar11 * -2 + 3];
    iVar4 = param_1;
    afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
         afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    FUN_004893f0(iVar4,pfVar9);
    uStack_2e8 = *(uint *)(param_1 + 0xce5c);
    iStack_2b8 = param_1;
    iStack_2b4 = param_1;
    FUN_00583260(&DAT_02cfd900,iVar5 + *(int *)(param_1 + 0xd064) * 0x30,0x3f800000,auStack_2ec);
    pfVar9 = afStack_12c + 0x23;
    afStack_a0[0] = (float)uStack_f4;
    afStack_12c[(uint)bVar11 * -2 + 0x24] = afStack_12c[(uint)bVar11 * -2 + 0xf];
    afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25] =
         afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
    FUN_00408b80(param_1,pfVar9);
    pfVar9 = afStack_12c + 0x26;
    afStack_94[0] = (float)uStack_1d8;
    afStack_12c[(uint)bVar11 * -2 + 0x27] = afStack_21c[(uint)bVar11 * -2 + 0x12];
    iVar4 = param_1;
    afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x28] =
         afStack_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
    FUN_004893f0(iVar4,pfVar9);
    iVar4 = *(int *)(param_1 + 0xcde4);
    if ((iVar4 != 0) && (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4), iVar4 != 0))
    {
      FUN_004fc0d0(param_1 + 0x158,10,1);
    }
    FUN_00545080(param_1);
    break;
  default:
    *(uint *)(param_1 + 0xd0d0) = 1;
    *(uint *)(param_1 + 0xd0d8) = 65000;
switchD_00544f80_caseD_0:
    *(uint *)(param_1 + 0xd0d0) = 1;
    *(uint *)(param_1 + 0xd0d8) = 65000;
    iVar4 = FUN_00489ff0(param_1,param_2);
    if (iVar4 != 0) {
      FUN_004fc0d0(param_1 + 0x158,5,1);
      break;
    }
    if (*(int *)(param_1 + 0xd0bc) != 0) {
      fVar2 = *(float *)(param_1 + 0xd0c4) - param_2;
      *(float *)(param_1 + 0xd0c4) = fVar2;
      if (0.0 < fVar2) {
        FUN_004310e0(param_1,*(uint *)(param_1 + 0xd0bc),0x3f800000,0x3f800000,
                     param_1 + 0xd0c0);
        uVar1 = *(uint *)(param_1 + 0xd0c0);
        if (uVar1 == 0) {
LAB_00544758:
          *(uint *)(param_1 + 0xd0bc) = 0;
        }
        else {
          if (uVar1 < 2) {
            uVar6 = 1;
            iVar4 = 5;
          }
          else {
            if (uVar1 != 2) goto LAB_00544758;
            uVar6 = 1;
            iVar4 = FUN_0040cea0(0,1,1);
            iVar4 = iVar4 + 0xb;
          }
          FUN_004fc0d0(param_1 + 0x158,iVar4,uVar6);
          if (*(int *)(param_1 + 0xd0bc) != 0) break;
        }
      }
      else {
        *(uint *)(param_1 + 0xd0bc) = 0;
        *(uint *)(param_1 + 0xd0c4) = 0;
      }
    }
    (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
    iVar4 = *(int *)(param_1 + 0xcde4);
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0xd088) != 0) {
        fStack_19c = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
        fStack_198 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_194 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
        fStack_178 = fStack_19c;
        afStack_174[(uint)bVar11 * -2] = afStack_21c[(uint)bVar11 * -2 + 0x21];
        afStack_174[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x22];
        fStack_30 = SQRT(afStack_174[1] * afStack_174[1] +
                         fStack_178 * fStack_178 + afStack_174[0] * afStack_174[0]);
        if ((*(float *)(param_1 + 0xcddc) < fStack_30) || ((float)_DAT_005d12f6 < fStack_30)) {
          *(uint *)(param_1 + 0xcde4) = 0;
          break;
        }
      }
      if (*(int *)(param_1 + 0xcde4) == 0) {
        fStack_14 = (float)FUN_004fc930(param_1 + 0x158);
        if ((float)_DAT_005d12de < fStack_14) {
          uVar6 = FUN_0040cea0(0,4,1);
          FUN_004fc0d0(param_1 + 0x158,uVar6);
        }
      }
      else {
        iVar4 = FUN_0040cf40(0x3ecccccd);
        if (iVar4 != 0) {
          FUN_00545040(param_1);
        }
        FUN_004fc0d0(param_1 + 0x158,5,1);
      }
    }
    break;
  case 0xd:
  case 0xe:
    fVar12 = (((float10)fStack_2c - (float10)fStack_38) * (float10)_DAT_005d12a6) /
             (float10)fStack_2c;
    *(uint *)(param_1 + 0xd0d0) = 0;
    iVar4 = FUN_005a3120();
    *(int *)(iVar4 + 0xd0d8) = (int)ROUND(fVar12);
    fVar12 = (float10)*(float *)(iVar5 + 0x314) * (float10)_DAT_005d12ae +
             (float10)*(float *)(iVar4 + 0xd098);
    *(float *)(iVar4 + 0xd098) = (float)fVar12;
    fVar13 = (float10)fsin(fVar12);
    fVar12 = (float10)fcos(fVar12);
    fStack_18 = (float)fVar13;
    fStack_3c = (float)fVar12;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
    pfVar9 = afStack_280;
    pfVar10 = &fStack_298;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + (uint)bVar11 * -2 + 1;
      pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
    }
    fVar2 = (fStack_284 - fStack_290) * fStack_3c;
    fVar3 = (fStack_28c - fStack_298) * fStack_18 * (float)_DAT_005d12b6;
    afStack_174[2] = fStack_298 + fStack_28c;
    afStack_174[3] = fStack_294 + fStack_288;
    fStack_164 = fStack_290 + fStack_284;
    fStack_208 = fStack_298 + fStack_28c;
    afStack_21c[(uint)bVar11 * -2 + 6] = afStack_174[(uint)bVar11 * -2 + 3];
    afStack_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_174[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    fStack_13c = fVar3;
    fStack_134 = fVar2 * (float)_DAT_005d12b6;
    fStack_1e4 = fStack_208 * _DAT_005d12be;
    fStack_1e0 = fStack_204 * _DAT_005d12be;
    fStack_1dc = fStack_200 * _DAT_005d12be;
    afStack_12c[2] = fStack_208 * _DAT_005d12be;
    afStack_12c[(uint)bVar11 * -2 + 3] = afStack_21c[(uint)bVar11 * -2 + 0xf];
    afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
    fStack_138 = afStack_12c[3];
    fStack_1f0 = fVar3 + *(float *)(param_1 + 0x20);
    fStack_1ec = afStack_12c[3] + *(float *)(param_1 + 0x24);
    fStack_1e8 = fStack_134 + *(float *)(param_1 + 0x28);
    fStack_118 = fStack_1f0;
    afStack_12c[(uint)bVar11 * -2 + 6] = afStack_21c[(uint)bVar11 * -2 + 0xc];
    afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
    if (afStack_174 + 0xe != afStack_12c + 5) {
      fStack_13c = fStack_118;
      fStack_138 = fStack_114;
      fStack_134 = fStack_110;
    }
    FUN_0045aae0(0x270f7d8,afStack_174 + 0xe);
    _DAT_0270f814 = 60000;
    DAT_0270f7f4 = 0x3a;
    FUN_0045ab30(0x270f7d8,0x40c00000);
    _DAT_0270f7f8 = 0;
    FUN_005372f0(0x01ED78C8,0x270f7d8);
    iVar4 = param_1 + 0x158;
    *(uint *)(param_1 + 0xd0dc) = 1;
    iVar5 = FUN_0054eac0(iVar4);
    fStack_14 = (float)FUN_004fc930(iVar4);
    fVar12 = (float10)_DAT_005d12c6;
    FUN_005a4764();
    fVar13 = (float10)_DAT_005d12ce;
    FUN_005a4764();
    *(float *)(param_1 + 0xd0d4) = (float)((float10)1 + fVar12 / fVar13);
    iVar7 = 0;
    if (0 < *(int *)(iVar5 + 0x1de78)) {
      do {
        iVar7 = iVar7 + 1;
        *(uint *)(iVar4 + 0x514) = *(uint *)(param_1 + 0xd0d4);
        iVar4 = iVar4 + 4;
      } while (iVar7 < *(int *)(iVar5 + 0x1de78));
    }
    break;
  case 0xf:
    *(uint *)(param_1 + 0xd0d8) = 0;
    *(uint *)(param_1 + 0xd0d4) = 0x3f800000;
    *(uint *)(param_1 + 0x70) = 2;
    return;
  case 0x14:
    fVar12 = ((float10)fStack_38 * (float10)_DAT_005d12a6) / (float10)fStack_2c;
    *(uint *)(param_1 + 0xd0d0) = 0;
    iVar4 = FUN_005a3120();
    *(int *)(iVar4 + 0xd0d8) = (int)ROUND(fVar12);
  }
LAB_00543af0:
  *(uint *)(param_1 + 0x3270) = 0x40000000;
  if (0.0 < *(float *)(param_1 + 0xcde0)) {
    *(float *)(param_1 + 0xcde0) = *(float *)(param_1 + 0xcde0) - param_2;
  }
  iVar4 = FUN_004fc070(param_1 + 0x158);
  iVar4 = *(int *)(iVar4 + 0x24);
  if ((((((iVar4 != 0xf) && (iVar4 != 0)) && (iVar4 != 1)) && ((iVar4 != 2 && (iVar4 != 3)))) &&
      (iVar4 != 4)) || (*(int *)(param_1 + 0xdc) != 0)) {
    iVar4 = *(int *)(param_1 + 0xcde4);
    if ((iVar4 != 0) &&
       (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xf4))(iVar4), iVar4 == param_1)) {
      FUN_0053ec10(0x01ED78C8,*(uint *)(param_1 + 0xcde4));
    }
    FUN_0042c1e0(param_1,param_2);
    afStack_21c[2] = *(float *)(param_1 + 0x2518) * param_2;
    afStack_21c[3] = *(float *)(param_1 + 0x251c) * param_2;
    fStack_20c = *(float *)(param_1 + 0x2520) * param_2;
    fStack_c4 = afStack_21c[2];
    afStack_12c[(uint)bVar11 * -2 + 0x1b] = afStack_21c[(uint)bVar11 * -2 + 3];
    afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c] =
         afStack_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    fStack_1a8 = fStack_c4 + *(float *)(param_1 + 0x249c);
    fStack_1a4 = fStack_c0 + *(float *)(param_1 + 0x24a0);
    fStack_1a0 = fStack_bc + *(float *)(param_1 + 0x24a4);
    fStack_238 = fStack_1a8;
    afStack_24c[(uint)bVar11 * -2 + 6] = afStack_21c[(uint)bVar11 * -2 + 0x1e];
    afStack_24c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f];
    fStack_1fc = fStack_238 + *(float *)(param_1 + 0x250c);
    fStack_1f8 = fStack_234 + *(float *)(param_1 + 0x2510);
    fStack_1f4 = fStack_230 + *(float *)(param_1 + 0x2514);
    afStack_10c[0] = fStack_1fc;
    afStack_12c[(uint)bVar11 * -2 + 9] = afStack_21c[(uint)bVar11 * -2 + 9];
    afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         afStack_21c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    FUN_0042c230(param_1,afStack_12c + 8);
  }
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00433350(param_1,param_2);
  FUN_00545c80(param_1);
  if ((0.0 <= *(float *)(param_1 + 0xd0c8)) &&
     (param_2 = *(float *)(param_1 + 0xd0c8) - param_2, *(float *)(param_1 + 0xd0c8) = param_2,
     param_2 <= 0.0)) {
    fStack_14 = (float)FUN_0040ce40(0x3f800000,0x40000000);
    *(float *)(param_1 + 0xd0c8) = fStack_14;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
    pfVar9 = afStack_2b0;
    pfVar10 = &fStack_268;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + (uint)bVar11 * -2 + 1;
      pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
    }
    fStack_148 = fStack_268 + fStack_25c;
    fStack_144 = fStack_264 + fStack_258;
    fStack_140 = fStack_260 + fStack_254;
    fStack_160 = fStack_268 + fStack_25c;
    afStack_174[(uint)bVar11 * -2 + 6] = afStack_174[(uint)bVar11 * -2 + 0xc];
    afStack_174[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_174[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
    pfVar9 = afStack_12c + 0x29;
    afStack_24c[2] = fStack_160 * _DAT_005d12be;
    afStack_24c[3] = fStack_15c * _DAT_005d12be;
    fStack_23c = fStack_158 * _DAT_005d12be;
    afStack_88[0] = fStack_160 * _DAT_005d12be;
    afStack_12c[(uint)bVar11 * -2 + 0x2a] = afStack_24c[(uint)bVar11 * -2 + 3];
    iVar4 = param_1;
    afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2b] =
         afStack_24c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    FUN_00408b80(iVar4,pfVar9);
    fStack_58 = fStack_250;
    afStack_6c[(uint)bVar11 * -2 + 6] = afStack_24c[(uint)bVar11 * -2];
    afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_24c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    if (&fStack_184 != afStack_6c + 5) {
      fStack_184 = fStack_58;
      fStack_180 = fStack_54;
      fStack_17c = fStack_50;
    }
    iStack_190 = (int)ROUND(fStack_184 * _DAT_005e3d30);
    iStack_18c = (int)ROUND(fStack_180 * _DAT_005e3d30);
    iStack_188 = (int)ROUND(fStack_17c * _DAT_005e3d30);
    fStack_14 = (float)FUN_00537e20(0x01ED78C8,&iStack_190,0);
    if ((*(int *)(param_1 + 0xd0e0) != 0) &&
       (_DAT_005e3d60 * (float)_DAT_005d1306 <= (float)(int)fStack_14)) {
      uVar6 = FUN_0040cea0(0,4,1);
      FUN_004fc0d0(param_1 + 0x158,uVar6);
      iVar4 = FUN_004348b0(param_1,&DAT_005d1295);
      *(int *)(param_1 + 0xd0bc) = iVar4;
      if (iVar4 != 0) {
        uVar6 = FUN_0040ce40(0x40400000,0x40c00000);
        *(uint *)(param_1 + 0xd0c4) = uVar6;
      }
      *(float *)(param_1 + 0xd0c8) = *(float *)(param_1 + 0xd0c8) + _DAT_005d130e;
      return;
    }
  }
  return;
}
