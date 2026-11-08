// Name: FUN_00423b70
// Address: 00423b70
// Address Range: [[00423b70, 00424835]]
// Convention: unknown
// Signature: void FUN_00423b70(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00423b70(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  float afStackY_1174 [937];
  float *pfVar7;
  uint *puVar8;
  byte auStack_2b8 [4];
  float fStack_2b4;
  int iStack_284;
  int iStack_280;
  byte auStack_27c [4];
  uint uStack_278;
  int iStack_248;
  int iStack_244;
  byte auStack_240 [4];
  float fStack_23c;
  int iStack_20c;
  int iStack_208;
  byte auStack_204 [4];
  float fStack_200;
  int iStack_1d0;
  int iStack_1cc;
  byte auStack_1c8 [4];
  float fStack_1c4;
  int iStack_194;
  int iStack_190;
  uint uStack_18c;
  float afStack_188 [5];
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float afStack_168 [3];
  uint uStack_15c;
  float afStack_158 [5];
  uint uStack_144;
  uint uStack_138;
  uint uStack_12c;
  uint uStack_128;
  float fStack_124;
  uint uStack_120;
  float afStack_11c [5];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float afStack_fc [3];
  float afStack_f0 [3];
  float afStack_e4 [3];
  uint uStack_d8;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  uint uStack_c0;
  uint uStack_b4;
  uint uStack_a8;
  uint uStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_84 [3];
  float afStack_78 [3];
  uint uStack_6c;
  uint uStack_60;
  double dStack_54;
  double dStack_4c;
  double dStack_44;
  double dStack_3c;
  double dStack_34;
  double dStack_2c;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar3 = FUN_0042e1a0(param_1,param_2);
  if (iVar3 != 0) {
    if (0.0 <= *(float *)(param_1 + 0xc290)) {
      *(float *)(param_1 + 0xc290) = *(float *)(param_1 + 0xc290) - param_2;
    }
    iVar3 = param_1 + 0x158;
    fStack_1c = -1.0;
    iVar4 = FUN_00524770(iVar3);
    uVar1 = *(uint *)(iVar4 + 0x24);
    if (uVar1 < 5) {
      if (uVar1 == 0) {
        iVar4 = FUN_004a0fe0(param_1,param_2);
        if (iVar4 == 0) {
          (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
          if (*(int *)(param_1 + 0xc1e8) != 0) {
            FUN_005247c0(iVar3,1,1);
            iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc294));
            if ((iVar3 == 0) &&
               (iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc298)), iVar3 == 0)) {
              uVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                (param_1,"ub-attack?.wav");
              *(uint *)(param_1 + 0xc298) = uVar5;
            }
          }
        }
        else {
          FUN_005247c0(param_1 + 0x158,1,1);
        }
      }
      else if (uVar1 == 1) {
        if (*(float *)(param_1 + 0xc290) <= 0.0) {
          fStack_14 = (float)FUN_0040cc00(0x41200000,0x41a00000);
          *(float *)(param_1 + 0xc290) = fStack_14;
          FUN_005247c0(iVar3,3,1);
          iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc294));
          if ((iVar3 == 0) && (iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc298)), iVar3 == 0))
          {
            uVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"ub-howl?.wav");
            *(uint *)(param_1 + 0xc298) = uVar5;
          }
        }
        *(float *)(param_1 + 0x2524) = param_2 * *(float *)(param_1 + 0xc1d0) * (float)_DAT_005d4f58
        ;
        FUN_00435320(param_1,param_2 * *(float *)(param_1 + 0xc1d0));
        if ((((*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc274) * 4) == 0) &&
             (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc26c) * 4) == 0)) ||
            (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc288) * 4) == 0)) &&
           ((0.0 <= *(float *)(param_1 + 0xc28c) &&
            (fVar2 = *(float *)(param_1 + 0xc28c) + param_2, *(float *)(param_1 + 0xc28c) = fVar2,
            (float)_DAT_005d4f50 <= fVar2)))) {
          FUN_0042c010(auStack_27c);
          uStack_278 = 0x461c3f9a;
          iStack_248 = param_1;
          iStack_244 = param_1;
          (**(code **)(*(int *)(param_1 + 0x154) + 0x108))(param_1,auStack_27c);
          *(uint *)(param_1 + 0xc28c) = 0xbf800000;
        }
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
        iVar3 = param_1 + 0x158;
        if (*(int *)(param_1 + 0xc1e8) == 0) {
          iVar4 = FUN_004a0fe0(param_1,param_2);
          if (iVar4 == 0) {
            FUN_005247c0(iVar3,0,1);
          }
        }
        else {
          afStack_168[0] = 0.0;
          afStack_168[2] = 0x40200000;
          afStack_168[1] = 0.0;
          uVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xc4))
                            (*(int *)(param_1 + 0xc1e8),afStack_188 + 8,0x3f800000,0x3e32b8c2);
          iVar4 = FUN_0042ccf0(param_1,*(int *)(param_1 + 0xc1e8) + 0x20,uVar5);
          if (iVar4 < 0) {
            FUN_005247c0(iVar3,0,1);
          }
          else if (((0 < iVar4) && (*(float *)(param_1 + 0xc1e4) <= 0.0)) &&
                  (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf4))
                                     (*(int *)(param_1 + 0xc1e8)), iVar4 == 0)) {
            iVar4 = FUN_0040cd00(0x3f000000);
            if (iVar4 == 0) {
              uVar5 = 6;
            }
            else {
              uVar5 = 5;
            }
            FUN_005247c0(iVar3,uVar5,1);
            iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc294));
            if ((iVar3 == 0) &&
               (iVar3 = FUN_005735a0(*(uint *)(param_1 + 0xc298)), iVar3 == 0)) {
              uVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                                (param_1,"ub-attack?.wav");
              *(uint *)(param_1 + 0xc298) = uVar5;
            }
          }
        }
      }
    }
    else if (uVar1 < 6) {
      iVar4 = *(int *)(param_1 + 0xc1e8);
      if (iVar4 == 0) {
        FUN_005247c0(iVar3,1,1);
      }
      else {
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xf4))(iVar4);
        if (iVar4 == 0) {
          fStack_14 = (float)FUN_0040cc00(0x3e4ccccd,0x3f000000);
          *(float *)(param_1 + 0xc1e4) = fStack_14;
          fStack_20 = (float)FUN_00525020(iVar3);
          dStack_34 = (double)fStack_20;
          fStack_14 = fStack_20;
          if (fStack_20 <= (float)_DAT_005d4f58) {
            fStack_1c = 0x40200000;
            if ((dStack_34 < 1.0) || (_DAT_005d4f40 < dStack_34)) {
              dStack_3c = (double)fStack_20;
              if (((float)_DAT_005d4f58 <= fStack_20) &&
                 ((dStack_3c <= _DAT_005d4f60 &&
                  (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc26c) * 4) != 0)))) {
                FUN_0042c010(auStack_240);
                fStack_23c = (float)FUN_0040cc00(0x40e00000,0x41700000);
                iStack_20c = param_1;
                iStack_208 = param_1;
                fStack_14 = fStack_23c;
                FUN_005b5080(&DAT_007c5340,DAT_007c538c * 0x30 + param_1 + 0xfd8,0x3ecccccd,
                             auStack_240);
                pfVar7 = afStack_11c + 0xb;
                afStack_f0[0] = (float)uStack_b4;
                afStack_11c[(uint)bVar6 * -2 + 0xc] = afStack_11c[(uint)bVar6 * -2 + 0x1b];
                afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
                     afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
                FUN_00408b40(param_1,pfVar7);
                pfVar7 = afStack_11c + 0xe;
                afStack_e4[0] = afStack_188[2];
                afStack_11c[(uint)bVar6 * -2 + 0xf] = afStack_188[(uint)bVar6 * -2 + 3];
                iVar3 = param_1;
                afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
                     afStack_188[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
                FUN_004a0770(iVar3,pfVar7);
              }
            }
            else if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc274) * 4) != 0) {
              FUN_0042c010(auStack_2b8);
              fStack_2b4 = (float)FUN_0040cc00(0x40e00000,0x41700000);
              iStack_284 = param_1;
              iStack_280 = param_1;
              fStack_14 = fStack_2b4;
              FUN_005b5080(&DAT_007c5340,param_1 + 0xfd8 + DAT_007c5390 * 0x30,0x3ecccccd,
                           auStack_2b8);
              puVar8 = &uStack_15c;
              uStack_15c = uStack_c0;
              afStack_158[(uint)bVar6 * -2] = afStack_11c[(uint)bVar6 * -2 + 0x18];
              afStack_158[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                   afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
              FUN_00408b40(param_1,puVar8);
              puVar8 = &uStack_18c;
              uStack_18c = uStack_d8;
              afStack_188[(uint)bVar6 * -2] = afStack_11c[(uint)bVar6 * -2 + 0x12];
              iVar3 = param_1;
              afStack_188[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                   afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
              FUN_004a0770(iVar3,puVar8);
            }
          }
        }
        else {
          FUN_005247c0(iVar3,1,1);
        }
      }
    }
    else if (uVar1 < 7) {
      iVar4 = *(int *)(param_1 + 0xc1e8);
      if (iVar4 == 0) {
        FUN_005247c0(iVar3,1,1);
      }
      else {
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xf4))(iVar4);
        if (iVar4 == 0) {
          fStack_14 = (float)FUN_0040cc00(0x3e4ccccd,0x3f000000);
          *(float *)(param_1 + 0xc1e4) = fStack_14;
          fStack_18 = (float)FUN_00525020(iVar3);
          dStack_44 = (double)fStack_18;
          fStack_14 = fStack_18;
          if (fStack_18 <= (float)_DAT_005d4f38) {
            fStack_1c = 0x40200000;
            if (((1.0 <= dStack_44) && (dStack_44 <= _DAT_005d4f40)) ||
               ((dStack_2c = (double)fStack_18, (float)_DAT_005d4f48 <= fStack_18 &&
                (dStack_2c <= _DAT_005d4f50)))) {
              if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc274) * 4) != 0) {
                FUN_0042c010(auStack_204);
                fStack_200 = (float)FUN_0040cc00(0x40e00000,0x41700000);
                iStack_1d0 = param_1;
                iStack_1cc = param_1;
                fStack_14 = fStack_200;
                FUN_005b5080(&DAT_007c5340,DAT_007c5390 * 0x30 + param_1 + 0xfd8,0x3ecccccd,
                             auStack_204);
                pfVar7 = afStack_11c + 0x26;
                afStack_84[0] = (float)uStack_a8;
                afStack_11c[(uint)bVar6 * -2 + 0x27] = afStack_11c[(uint)bVar6 * -2 + 0x1e];
                afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28] =
                     afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f];
                FUN_00408b40(param_1,pfVar7);
                pfVar7 = afStack_158 + 2;
                afStack_158[2] = (float)uStack_9c;
                afStack_158[(uint)bVar6 * -2 + 3] = afStack_11c[(uint)bVar6 * -2 + 0x21];
                iVar3 = param_1;
                afStack_158[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                     afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22];
                FUN_004a0770(iVar3,pfVar7);
              }
            }
            else {
              dStack_54 = (double)fStack_18;
              if (((((float)_DAT_005d4f58 <= fStack_18) && (dStack_54 <= _DAT_005d4f60)) ||
                  ((dStack_4c = (double)fStack_18, (float)_DAT_005d4f68 <= fStack_18 &&
                   (dStack_4c <= _DAT_005d4f38)))) &&
                 (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc26c) * 4) != 0)) {
                FUN_0042c010(auStack_1c8);
                fStack_1c4 = (float)FUN_0040cc00(0x40e00000,0x41700000);
                iStack_194 = param_1;
                iStack_190 = param_1;
                fStack_14 = fStack_1c4;
                FUN_005b5080(&DAT_007c5340,DAT_007c538c * 0x30 + param_1 + 0xfd8,0x3ecccccd,
                             auStack_1c8);
                puVar8 = &uStack_120;
                uStack_120 = uStack_6c;
                afStack_11c[(uint)bVar6 * -2] = afStack_11c[(uint)bVar6 * -2 + 0x2d];
                afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                     afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2e];
                FUN_00408b40(param_1,puVar8);
                pfVar7 = afStack_11c + 2;
                afStack_11c[2] = (float)uStack_138;
                afStack_11c[(uint)bVar6 * -2 + 3] = afStack_158[(uint)bVar6 * -2 + 9];
                iVar3 = param_1;
                afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                     afStack_158[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
                FUN_004a0770(iVar3,pfVar7);
              }
            }
          }
        }
        else {
          FUN_005247c0(iVar3,1,1);
        }
      }
    }
    else if ((uVar1 == 0xe) && (*(int *)(param_1 + 0xc1d4) == 0)) {
      FUN_00569040(iVar3,0);
      pfVar7 = afStack_11c + 0x29;
      afStack_78[0] = (float)uStack_60;
      afStack_11c[(uint)bVar6 * -2 + 0x2a] = afStack_11c[(uint)bVar6 * -2 + 0x30];
      afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b] =
           afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x31];
      FUN_00408b40(param_1,pfVar7);
      uVar5 = 0;
      afStack_fc[0] = (float)uStack_144;
      afStack_11c[(uint)bVar6 * -2 + 9] = afStack_158[(uint)bVar6 * -2 + 6];
      afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           afStack_158[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      FUN_004e62e0(0x01CD0E3C,afStack_11c + 8,uVar5);
      (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
      *(uint *)(param_1 + 0xc1d4) = 1;
    }
    if ((*(int *)(param_1 + 0xc1e8) != 0) && (0.0 <= fStack_1c)) {
      *(float *)(param_1 + 0x2524) = param_2 * (float)_DAT_005d4f70 * *(float *)(param_1 + 0xc1d0);
      FUN_00435320(param_1,param_2 * *(float *)(param_1 + 0xc1d0));
      uStack_12c = 0;
      fStack_124 = fStack_1c;
      uStack_128 = 0;
      uVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xc4))
                        (*(int *)(param_1 + 0xc1e8),afStack_158 + 0xb,0x40400000,0x3f060a92);
      iVar3 = FUN_0042ccf0(param_1,*(int *)(param_1 + 0xc1e8) + 0x20,uVar5);
      if (iVar3 != 1) {
        FUN_005247c0(param_1 + 0x158,1,1);
        *(uint *)(param_1 + 0x2508) = 0;
      }
    }
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
    fStack_24 = param_2 * *(float *)(param_1 + 0xc1d0);
    while (0.0 < fStack_24) {
      iVar3 = FUN_00524270(param_1 + 0x158,&fStack_24);
      if (iVar3 != 0x11) {
        FUN_00434a80(param_1,iVar3);
      }
    }
    if (0.0 < *(float *)(param_1 + 0xc1e4)) {
      *(float *)(param_1 + 0xc1e4) = *(float *)(param_1 + 0xc1e4) - param_2;
    }
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x2508) + *(float *)(param_1 + 0x34);
    FUN_004088b0(param_1);
    iVar3 = FUN_0042e120(param_1);
    if (iVar3 != 0) {
      FUN_0042d700(param_1,param_2);
      fStack_108 = *(float *)(param_1 + 0x2518) * param_2;
      iVar3 = param_1 + 0x158;
      fStack_104 = *(float *)(param_1 + 0x251c) * param_2;
      fStack_100 = *(float *)(param_1 + 0x2520) * param_2;
      fStack_90 = fStack_108;
      afStack_11c[(uint)bVar6 * -2 + 0x24] = afStack_11c[(uint)bVar6 * -2 + 6];
      afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25] =
           afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      fStack_174 = fStack_90 + *(float *)(param_1 + 0x250c);
      fStack_170 = fStack_8c + *(float *)(param_1 + 0x2510);
      fStack_16c = fStack_88 + *(float *)(param_1 + 0x2514);
      fStack_cc = fStack_174;
      afStack_11c[(uint)bVar6 * -2 + 0x15] = afStack_188[(uint)bVar6 * -2 + 6];
      afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
           afStack_188[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      iVar3 = FUN_00524770(iVar3);
      if (*(int *)(iVar3 + 0x24) != 1) {
        fStack_cc = fStack_cc + *(float *)(param_1 + 0x249c);
        fStack_c8 = fStack_c8 + *(float *)(param_1 + 0x24a0);
        fStack_c4 = fStack_c4 + *(float *)(param_1 + 0x24a4);
      }
      FUN_0042d750(param_1,afStack_11c + 0x14);
    }
    FUN_005675a0(param_1 + 0x158);
    FUN_00433e80(param_1,param_2);
    if (*(int *)(param_1 + 0xc1d4) == 0) {
      FUN_00430a90(param_1,*(uint *)(param_1 + 0xc268),DAT_007c539c,0x3e4ccccd);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc268) * 4) != 0) {
        FUN_00430a90(param_1,*(uint *)(param_1 + 0xc26c),DAT_007c5394,0x3e4ccccd);
      }
      FUN_00430a90(param_1,*(uint *)(param_1 + 0xc270),DAT_007c53a0,0x3e4ccccd);
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc270) * 4) != 0) {
        FUN_00430a90(param_1,*(uint *)(param_1 + 0xc274),DAT_007c5398,0x3e4ccccd);
      }
      FUN_00430b60(param_1,*(uint *)(param_1 + 0xc288),DAT_007c5388,0x3f333333);
      FUN_00430960(param_1);
    }
  }
  return;
}
