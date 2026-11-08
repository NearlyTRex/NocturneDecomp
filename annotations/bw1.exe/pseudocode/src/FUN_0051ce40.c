// Name: FUN_0051ce40
// Address: 0051ce40
// Address Range: [[0051ce40, 0051dee5]]
// Convention: unknown
// Signature: void FUN_0051ce40(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051ce40(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float afStackY_11d8 [982];
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  byte auStack_268 [4];
  uint uStack_264;
  int iStack_234;
  int iStack_230;
  byte auStack_22c [4];
  float fStack_228;
  int iStack_1f8;
  int iStack_1f4;
  float fStack_1f0;
  float afStack_1ec [5];
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  uint uStack_1cc;
  uint uStack_1c0;
  uint uStack_1b4;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float afStack_19c [3];
  float afStack_190 [3];
  float afStack_184 [3];
  float afStack_178 [3];
  float afStack_16c [3];
  uint uStack_160;
  float fStack_15c;
  uint uStack_154;
  uint uStack_148;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  uint uStack_130;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  uint uStack_118;
  float fStack_114;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float afStack_f4 [3];
  float fStack_e8;
  float afStack_e4 [5];
  float afStack_d0 [3];
  float fStack_c4;
  float afStack_c0 [5];
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float afStack_a0 [3];
  float afStack_94 [3];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  uint uStack_7c;
  float fStack_78;
  float afStack_70 [3];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  uint uStack_28;
  float fStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar5 = 0;
  iVar3 = FUN_0042e1a0(param_1,param_2);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0xc28c) != 0) {
      FUN_0051cc20(param_1);
      FUN_004328f0(param_1,param_2);
    }
    return;
  }
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc334) * 4) == 0) {
    FUN_0042c010(auStack_268);
    iStack_234 = param_1;
    iStack_230 = param_1;
    uStack_264 = 0x4479f99a;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x108))(param_1,auStack_268);
  }
  if (*(int *)(param_1 + 0xb9e8) != 0) {
    *(uint *)(param_1 + 0xb9ec) = 0;
  }
  if (0 < *(int *)(param_1 + 0x3120)) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
    FUN_00573a80(*(uint *)(param_1 + 0xc300));
    iVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
    if (((iVar3 == 0) && (iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc308)), iVar3 == 0)) &&
       (iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc2fc)), iVar3 == 0)) {
      uVar7 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"mob-scream?.wav");
      *(uint *)(param_1 + 0xc308) = uVar7;
    }
  }
  fVar2 = *(float *)(param_1 + 0xc33c) - param_2;
  *(float *)(param_1 + 0xc33c) = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)(param_1 + 0xc33c) = 0;
  }
  fVar2 = *(float *)(param_1 + 0xc280) - param_2;
  *(float *)(param_1 + 0xc280) = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)(param_1 + 0xc280) = 0;
  }
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc318) * 4) == 0) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
  }
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc310) * 4) == 0) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
  }
  if ((*(int *)(param_1 + 0xc294) == 0) &&
     (iVar3 = FUN_004a6c30(0x01C51D80,param_1 + 0xc298), iVar3 != 0)) {
    *(uint *)(param_1 + 0xc294) = 1;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_40 = param_2 * *(float *)(param_1 + 0xc1d0);
  iStack_20 = param_1 + 0x158;
  while (0.0 < fStack_40) {
    iVar3 = FUN_00524270(param_1 + 0x158,afStack_c0 + 0x20);
    if (iVar3 == 100) {
      iVar3 = *(int *)(param_1 + 0xc274);
      if (iVar3 != 0) {
        *(uint *)(param_1 + 0xc274) = 0;
        FUN_004325b0(param_1,1,iVar3,0x3e4ccccd,0);
      }
    }
    else {
      FUN_00434a80(param_1,iVar3);
    }
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00435320(param_1,param_2 * *(float *)(param_1 + 0xc1d0));
  iVar3 = FUN_00524770(iStack_20);
  uVar7 = *(uint *)(iVar3 + 0x24);
  iVar3 = FUN_00432240(param_1,param_2);
  if (iVar3 == 0) {
    switch(uVar7) {
    case 0:
      if (*(int *)(param_1 + 0xc294) == 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
        if (*(int *)(param_1 + 0xc1e8) == 0) {
          iVar3 = FUN_004a0fe0(param_1,param_2);
          if (iVar3 != 0) {
            FUN_005247c0(iStack_20,1,1);
          }
          break;
        }
        iVar3 = *(int *)(param_1 + 0xc288);
        if (iVar3 != 0) {
          if (*(int *)(param_1 + 0xc284) == 0) {
            fStack_1d8 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
            fStack_1d4 = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
            fStack_1d0 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
            fStack_124 = fStack_1d8;
            afStack_1ec[(uint)bVar5 * -2 + 0x33] = afStack_1ec[(uint)bVar5 * -2 + 6];
            afStack_1ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x34] =
                 afStack_1ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
            if ((float)_DAT_005e9e12 <
                SQRT(fStack_11c * fStack_11c + fStack_124 * fStack_124 + fStack_120 * fStack_120)) {
              *(uint *)(param_1 + 0xc284) = 1;
              FUN_005247c0(iStack_20,8,1);
              break;
            }
          }
          else {
            *(uint *)(param_1 + 0xc284) = 0;
          }
        }
        if (*(int *)(param_1 + 0xc28c) == 0) {
          iVar3 = *(int *)(param_1 + 0xc1e8);
          fStack_4c = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_48 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_44 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_64 = fStack_4c;
          afStack_c0[(uint)bVar5 * -2 + 0x18] = afStack_c0[(uint)bVar5 * -2 + 0x1e];
          afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19] =
               afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1f];
          fStack_30 = SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60);
          fStack_1c = fStack_30;
          if (fStack_30 < 0x40400000 + 1.0) {
            FUN_005a7520(afStack_c0 + 0x17);
            uStack_7c = uStack_130;
            afStack_c0[(uint)bVar5 * -2 + 0x12] = afStack_1ec[(uint)bVar5 * -2 + 0x30];
            afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13] =
                 afStack_1ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x31];
            fStack_14 = (float)FUN_0040cd60(fStack_78 - *(float *)(param_1 + 0x34));
            if ((ABS(fStack_14) < (float)_DAT_005e9e0a) && (*(float *)(param_1 + 0xc1e4) <= 0.0)) {
              FUN_005247c0(param_1 + 0x158,9,1);
              *(uint *)(param_1 + 0xc1e4) = 0x40000000;
            }
          }
          if (fStack_30 < *(float *)(param_1 + 0xc1e0)) {
            if (_DAT_00603d68 <= fStack_30) {
              uVar7 = 8;
            }
            else {
              uVar7 = 1;
            }
            FUN_005247c0(param_1 + 0x158,uVar7,1);
          }
          if ((*(int *)(param_1 + 0xc278) == 0) && (iVar3 = FUN_0040cd00(0x3f333333), iVar3 != 0)) {
            FUN_0051f330(param_1,1);
            *(uint *)(param_1 + 0xc278) = 1;
          }
          else {
            *(uint *)(param_1 + 0xc278) = 1;
          }
          break;
        }
        if (*(float *)(param_1 + 0xc338) <= (float)_DAT_005e9e02) break;
        iVar3 = FUN_0040cd00(0x3e800000);
        if (iVar3 != 0) {
          FUN_0051cd10(param_1);
          break;
        }
      }
      else {
        *(uint *)(param_1 + 0xc1e8) = *(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        if (*(float *)(param_1 + 0xc338) <= (float)_DAT_005e9e02) break;
      }
      FUN_0051eac0(param_1);
      break;
    case 1:
    case 8:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iVar3 = param_1 + 0x158;
      if (*(int *)(param_1 + 0xc1e8) == 0) {
        iVar4 = FUN_004a0fe0(param_1,param_2);
        if (iVar4 == 0) {
          FUN_005247c0(iVar3,0,1);
        }
        else {
          FUN_005247c0(iVar3,1,1);
        }
      }
      else if (*(int *)(param_1 + 0xc284) == 0) {
        iVar3 = FUN_0051e5d0(param_1,param_2);
        if (iVar3 == 0) {
          fStack_38 = 0x40400000 + 1.0;
          if (*(int *)(param_1 + 0x2628) != 0) {
            fStack_38 = 0x41F00000;
          }
          *(uint *)(param_1 + 0x24a4) = 0;
          *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
          *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
          afStack_d0[0] = 0.0;
          fStack_34 = 0x40400000;
          afStack_d0[2] = 0x40400000;
          afStack_d0[1] = 0.0;
          uVar7 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xc4))
                            (*(int *)(param_1 + 0xc1e8),afStack_e4 + 5,0x3f000000,0x3e32b8c2);
          iVar3 = FUN_0042ccf0(param_1,*(int *)(param_1 + 0xc1e8) + 0x20,uVar7);
          if (-1 < iVar3) {
            pfVar6 = (float *)(param_1 + 0x20);
            iVar3 = *(int *)(param_1 + 0xc1e8);
            fStack_13c = *pfVar6 - *(float *)(iVar3 + 0x20);
            fStack_138 = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
            fStack_134 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
            fStack_c4 = fStack_13c;
            afStack_c0[(uint)bVar5 * -2] = afStack_1ec[(uint)bVar5 * -2 + 0x2d];
            afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                 afStack_1ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x2e];
            fStack_24 = SQRT(afStack_c0[1] * afStack_c0[1] + fStack_c4 * fStack_c4);
            afStack_c0[0] = 0.0;
            fStack_3c = fStack_24;
            if ((fStack_24 <= fStack_38) && (*(float *)(param_1 + 0xc1e4) <= 0.0)) {
              iStack_2c = param_1 + 0x158;
              if (*(int *)(param_1 + 0x2628) == 0) {
                fStack_100 = *(float *)(iVar3 + 0x20) - *pfVar6;
                fStack_fc = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
                fStack_f8 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
                afStack_e4[2] = fStack_100;
                afStack_e4[(uint)bVar5 * -2 + 3] = afStack_1ec[(uint)bVar5 * -2 + 0x3c];
                afStack_e4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
                     afStack_1ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x3d];
                FUN_005a7520(afStack_e4 + 2);
                uStack_118 = afStack_c0[2];
                afStack_1ec[(uint)bVar5 * -2 + 0x36] = afStack_c0[(uint)bVar5 * -2 + 3];
                afStack_1ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x37] =
                     afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
                fStack_14 = (float)FUN_0040cd60(fStack_114 - *(float *)(param_1 + 0x34));
                if (ABS(fStack_14) < (float)_DAT_005e9e0a) {
                  FUN_005247c0(iStack_2c,9,1);
                }
              }
              else if (fStack_34 + 1.0 <= fStack_24) {
                if (((float)_DAT_005e9e02 < *(float *)(param_1 + 0xc338)) &&
                   (*(float *)(param_1 + 0xc33c) <= 0.0)) {
                  *(uint *)(param_1 + 0xc280) = 0;
                  iVar3 = FUN_0040cd00(0x3e99999a);
                  if (iVar3 != 0) {
                    FUN_0051f330(param_1,2);
                  }
                  if (*(float *)(param_1 + 0xc280) <= 0.0) {
                    FUN_0051eac0(param_1);
                  }
                  else if (*(int *)(param_1 + 0x25b0) == 0) {
                    FUN_005247c0(param_1 + 0x158,10,1);
                  }
                  else {
                    FUN_005247c0(param_1 + 0x158,0xb,1);
                  }
                }
              }
              else {
                fStack_e8 = *(float *)(iVar3 + 0x20) - *pfVar6;
                afStack_e4[0] = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
                afStack_e4[1] = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
                afStack_178[0] = fStack_e8;
                afStack_1ec[(uint)bVar5 * -2 + 0x1e] = afStack_e4[(uint)bVar5 * -2];
                afStack_1ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1f] =
                     afStack_e4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
                FUN_005a7520(afStack_1ec + 0x1d);
                uStack_160 = uStack_148;
                afStack_1ec[(uint)bVar5 * -2 + 0x24] = afStack_1ec[(uint)bVar5 * -2 + 0x2a];
                afStack_1ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25] =
                     afStack_1ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x2b];
                fStack_14 = (float)FUN_0040cd60(fStack_15c - *(float *)(param_1 + 0x34));
                if ((ABS(fStack_14) < (float)_DAT_005e9e0a) && (*(float *)(param_1 + 0xc1e4) <= 0.0)
                   ) {
                  FUN_005247c0(iStack_2c,9,1);
                  *(uint *)(param_1 + 0xc1e4) = 0x40000000;
                }
              }
              *(uint *)(param_1 + 0xc1e4) = 0x3f800000;
            }
            if (*(float *)(param_1 + 0xc1e0) < fStack_3c) {
              FUN_005247c0(param_1 + 0x158,0,1);
            }
          }
        }
      }
      else {
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        afStack_f4[0] = 0.0;
        afStack_f4[2] = 0x40400000;
        afStack_f4[1] = 0.0;
        uVar7 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc288) + 0x154) + 0xc4))
                          (*(int *)(param_1 + 0xc288),afStack_1ec + 0x3e,0x3f000000,0x3e32b8c2);
        iVar4 = FUN_0042ccf0(param_1,*(int *)(param_1 + 0xc288) + 0x20,uVar7);
        if (iVar4 < 1) {
          if (iVar4 < 0) {
            FUN_005247c0(iVar3,0,1);
            *(uint *)(param_1 + 0xc288) = 0;
          }
        }
        else {
          FUN_005247c0(iVar3,0,1);
        }
      }
      break;
    case 2:
    case 6:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      if (*(int *)(param_1 + 0xc1e8) != 0) {
        iVar3 = FUN_0040c600(*(uint *)(param_1 + 0x2628),_DAT_02c99770);
        if (iVar3 != 0) {
          FUN_00559220(0x01E82168);
          uStack_28 = *(uint *)(iVar3 + 0x568);
          *(uint *)(iVar3 + 0x568) = 100;
          iVar4 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xe8))(iVar3);
          if (iVar4 != 0) {
            (**(code **)(*(int *)(iVar3 + 0x154) + 0xe4))(iVar3);
          }
          *(uint *)(iVar3 + 0x568) = uStack_28;
        }
        iVar3 = FUN_0040c600(*(uint *)(param_1 + 0x25b0),_DAT_02c99770);
        iStack_18 = iVar3;
        if (iVar3 != 0) {
          FUN_00559220(0x01E82168);
          uVar7 = *(uint *)(iVar3 + 0x568);
          *(uint *)(iVar3 + 0x568) = 100;
          iVar4 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xe8))(iVar3);
          if (iVar4 == 0) {
            *(uint *)(iStack_18 + 0x568) = uVar7;
          }
          else {
            (**(code **)(*(int *)(iVar3 + 0x154) + 0xe4))(iVar3);
            *(uint *)(iStack_18 + 0x568) = uVar7;
          }
        }
      }
      if ((*(float *)(param_1 + 0xc338) < (float)_DAT_005e9e02) ||
         (*(float *)(param_1 + 0xc33c) <= 0.0)) {
        if (*(int *)(param_1 + 0xc294) == 0) {
          uVar8 = 0x40800000;
          uVar7 = 0x40000000;
        }
        else {
          uVar8 = 0x40a00000;
          uVar7 = 0x40800000;
        }
        fStack_14 = (float)FUN_0040cc00(uVar7,uVar8);
        *(float *)(param_1 + 0xc33c) = fStack_14;
        FUN_005247c0(param_1 + 0x158,0,1);
        iVar3 = FUN_0040cd00(0x3e99999a);
        if (iVar3 != 0) {
          FUN_0051f330(param_1,3);
        }
      }
      break;
    case 5:
      if ((*(int *)(param_1 + 0xc1d4) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_00569040(iStack_20,0);
        pfVar6 = afStack_c0 + 0xb;
        afStack_94[0] = (float)uStack_1c0;
        afStack_c0[(uint)bVar5 * -2 + 0xc] = afStack_1ec[(uint)bVar5 * -2 + 0xc];
        afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
             afStack_1ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
        FUN_00408b40(param_1,pfVar6);
        uVar8 = 0;
        pfVar6 = afStack_c0 + 8;
        afStack_a0[0] = (float)uStack_1b4;
        afStack_c0[(uint)bVar5 * -2 + 9] = afStack_1ec[(uint)bVar5 * -2 + 0xf];
        uVar7 = 0x01CD0E3C;
        afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
             afStack_1ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
        FUN_004e62e0(uVar7,pfVar6,uVar8);
        *(uint *)(param_1 + 0xc1d4) = 1;
      }
      break;
    case 9:
      FUN_0042c010(auStack_22c);
      fStack_228 = (float)FUN_0040cc00(0x40e00000,0x41700000);
      iStack_1f8 = param_1;
      iStack_1f4 = param_1;
      fStack_14 = fStack_228;
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc310) * 4) != 0) {
        FUN_005b5080(&DAT_02c8af28,_DAT_01d33c04 * 0x30 + param_1 + 0xfd8,0x3ecccccd,auStack_22c);
        pfVar6 = afStack_c0 + 0x14;
        afStack_70[0] = afStack_1ec[2];
        afStack_c0[(uint)bVar5 * -2 + 0x15] = afStack_1ec[(uint)bVar5 * -2 + 3];
        afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16] =
             afStack_1ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
        FUN_00408b40(param_1,pfVar6);
        pfVar6 = afStack_1ec + 0x20;
        afStack_16c[0] = (float)uStack_1cc;
        afStack_1ec[(uint)bVar5 * -2 + 0x21] = afStack_1ec[(uint)bVar5 * -2 + 9];
        iVar3 = param_1;
        afStack_1ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x22] =
             afStack_1ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
        FUN_004a0770(iVar3,pfVar6);
      }
      fStack_228 = (float)FUN_0040cc00(0x40e00000,0x41700000);
      fStack_14 = fStack_228;
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc318) * 4) != 0) {
        FUN_005b5080(&DAT_02c8af28,_DAT_01d33c08 * 0x30 + param_1 + 0xfd8,0x3ecccccd,auStack_22c);
        pfVar6 = afStack_1ec + 0x14;
        afStack_19c[0] = (float)uStack_58;
        afStack_1ec[(uint)bVar5 * -2 + 0x15] = afStack_c0[(uint)bVar5 * -2 + 0x1b];
        afStack_1ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16] =
             afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c];
        FUN_00408b40(param_1,pfVar6);
        pfVar6 = afStack_1ec + 0x17;
        afStack_190[0] = (float)uStack_154;
        afStack_1ec[(uint)bVar5 * -2 + 0x18] = afStack_1ec[(uint)bVar5 * -2 + 0x27];
        iVar3 = param_1;
        afStack_1ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19] =
             afStack_1ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x28];
        FUN_004a0770(iVar3,pfVar6);
      }
      break;
    case 10:
    case 0xb:
      if (*(float *)(param_1 + 0xc280) <= 0.0) {
        FUN_0051eac0(param_1);
      }
    }
    goto switchD_0051ded1_caseD_3;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0051d176:
      uVar7 = 1;
    }
    else {
LAB_0051d3eb:
      uVar7 = 0;
    }
    FUN_005247c0(param_1 + 0x158,uVar7,1);
  }
  else {
    if (uVar1 < 3) goto LAB_0051d176;
    if (uVar1 != 3) goto LAB_0051d3eb;
    FUN_005247c0(iStack_20,0,1);
    FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_0051ded1_caseD_3:
  if (0.0 < *(float *)(param_1 + 0xc1e4)) {
    *(float *)(param_1 + 0xc1e4) = *(float *)(param_1 + 0xc1e4) - param_2;
  }
  if (*(int *)(param_1 + 0xc28c) == 0) {
    iVar3 = FUN_0042e120(param_1);
    if (iVar3 != 0) {
      iVar3 = *(int *)(param_1 + 0xc1e8);
      if ((iVar3 != 0) &&
         (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xf4))(iVar3), iVar3 == param_1)) {
        FUN_00559250(0x01E82168,*(uint *)(param_1 + 0xc1e8));
      }
      FUN_0042d700(param_1,param_2);
      fStack_1f0 = *(float *)(param_1 + 0x2518) * param_2;
      afStack_1ec[0] = *(float *)(param_1 + 0x251c) * param_2;
      afStack_1ec[1] = *(float *)(param_1 + 0x2520) * param_2;
      fStack_1a8 = fStack_1f0;
      afStack_1ec[(uint)bVar5 * -2 + 0x12] = afStack_1ec[(uint)bVar5 * -2];
      afStack_1ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13] =
           afStack_1ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      fStack_ac = fStack_1a8 + *(float *)(param_1 + 0x250c);
      fStack_a8 = fStack_1a4 + *(float *)(param_1 + 0x2510);
      fStack_a4 = fStack_1a0 + *(float *)(param_1 + 0x2514);
      fStack_10c = fStack_ac;
      afStack_1ec[(uint)bVar5 * -2 + 0x39] = afStack_c0[(uint)bVar5 * -2 + 6];
      afStack_1ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x3a] =
           afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
      fStack_88 = fStack_10c + *(float *)(param_1 + 0x249c);
      fStack_84 = fStack_108 + *(float *)(param_1 + 0x24a0);
      fStack_80 = fStack_104 + *(float *)(param_1 + 0x24a4);
      afStack_184[0] = fStack_88;
      afStack_1ec[(uint)bVar5 * -2 + 0x1b] = afStack_c0[(uint)bVar5 * -2 + 0xf];
      afStack_1ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c] =
           afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
      *(uint *)(param_1 + 0x2514) = 0;
      *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
      *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
      *(uint *)(param_1 + 0x24a4) = 0;
      *(float *)(param_1 + 0x24a0) = *(float *)(param_1 + 0x24a4);
      *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a4);
      FUN_0042d750(param_1,afStack_1ec + 0x1a);
    }
  }
  else {
    FUN_0051cc20(param_1);
  }
  iVar3 = FUN_0040c600(*(uint *)(param_1 + 0x2628),_DAT_02c99770);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x154) + 0xc))(iVar3,param_2);
  }
  iVar3 = FUN_0040c600(*(uint *)(param_1 + 0x25b0),_DAT_02c99770);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x154) + 0xc))(iVar3,param_2);
  }
  FUN_0042e160(param_1);
  FUN_005675a0(param_1 + 0x158);
  iVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if (iVar3 == 0) {
    FUN_0051def0(param_1,param_2);
  }
  FUN_00433e80(param_1,param_2);
  return;
}
