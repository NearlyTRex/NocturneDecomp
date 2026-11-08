// Name: FUN_0041dbe0
// Address: 0041dbe0
// Address Range: [[0041dbe0, 0041e7f6]]
// Convention: unknown
// Signature: void FUN_0041dbe0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041dbe0(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  float afStackY_1174 [952];
  float *pfVar6;
  byte auStack_27c [4];
  float fStack_278;
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
  float afStack_170 [4];
  float fStack_160;
  float afStack_15c [3];
  float afStack_150 [3];
  uint uStack_144;
  uint uStack_138;
  float afStack_12c [3];
  float afStack_120 [3];
  uint uStack_114;
  uint uStack_108;
  uint uStack_fc;
  uint uStack_f0;
  float afStack_e4 [3];
  uint uStack_d8;
  float afStack_d4 [5];
  uint auStack_c0 [3];
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  uint auStack_a8 [3];
  uint uStack_9c;
  uint auStack_90 [3];
  uint auStack_84 [3];
  uint auStack_78 [3];
  uint auStack_6c [3];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
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
  
  bVar5 = 0;
  iVar2 = FUN_004244b0(param_1,param_2);
  if (iVar2 != 0) {
    if (0.0 <= *(float *)(param_1 + 0x10b1c)) {
      *(float *)(param_1 + 0x10b1c) = *(float *)(param_1 + 0x10b1c) - param_2;
    }
    iVar2 = param_1 + 0x2b4;
    fStack_18 = -1.0;
    iVar3 = FUN_005035c0(iVar2);
    uVar1 = *(uint *)(iVar3 + 0x24);
    if (uVar1 < 5) {
      if (uVar1 == 0) {
        iVar3 = FUN_00488970(param_1,param_2);
        if (iVar3 == 0) {
          (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
          if (*(int *)(param_1 + 0x10a78) != 0) {
            FUN_00503620(iVar2,1,1);
            iVar2 = FUN_00550b70(*(uint *)(param_1 + 0x10b20));
            if ((iVar2 == 0) &&
               (iVar2 = FUN_00550b70(*(uint *)(param_1 + 0x10b24)), iVar2 == 0)) {
              uVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))
                                (param_1,"ub-attack?.wav");
              *(uint *)(param_1 + 0x10b24) = uVar4;
            }
          }
        }
        else {
          FUN_00503620(param_1 + 0x2b4,1,1);
        }
      }
      else if (uVar1 == 1) {
        if (*(float *)(param_1 + 0x10b1c) <= 0.0) {
          fStack_14 = (float)FUN_0040cf60(0x41200000,0x41a00000);
          *(float *)(param_1 + 0x10b1c) = fStack_14;
          FUN_00503620(iVar2,3,1);
          iVar2 = FUN_00550b70(*(uint *)(param_1 + 0x10b20));
          if ((iVar2 == 0) && (iVar2 = FUN_00550b70(*(uint *)(param_1 + 0x10b24)), iVar2 == 0)
             ) {
            uVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"ub-howl?.wav");
            *(uint *)(param_1 + 0x10b24) = uVar4;
          }
        }
        *(float *)(param_1 + 0x2594) =
             param_2 * *(float *)(param_1 + 0x10a60) * (float)_DAT_005cc869;
        FUN_0042b2a0(param_1,param_2 * *(float *)(param_1 + 0x10a60));
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
        iVar2 = param_1 + 0x2b4;
        if (*(int *)(param_1 + 0x10a78) == 0) {
          iVar3 = FUN_00488970(param_1,param_2);
          if (iVar3 == 0) {
            FUN_00503620(iVar2,0,1);
          }
        }
        else {
          afStack_188[2] = 0.0;
          afStack_188[4] = 0x40200000;
          afStack_188[3] = 0.0;
          uVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xcc))
                            (*(int *)(param_1 + 0x10a78),afStack_188 + 2,0x3f800000,0x3e32b8c2);
          iVar3 = FUN_00423000(param_1,*(int *)(param_1 + 0x10a78) + 0x20,uVar4);
          if (iVar3 < 0) {
            FUN_00503620(iVar2,0,1);
          }
          else if (((0 < iVar3) && (*(float *)(param_1 + 0x10a74) <= 0.0)) &&
                  (iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xfc))
                                     (*(int *)(param_1 + 0x10a78)), iVar3 == 0)) {
            iVar3 = FUN_0040d060(0x3f000000);
            if (iVar3 == 0) {
              uVar4 = 6;
            }
            else {
              uVar4 = 5;
            }
            FUN_00503620(iVar2,uVar4,1);
            iVar2 = FUN_00550b70(*(uint *)(param_1 + 0x10b20));
            if ((iVar2 == 0) &&
               (iVar2 = FUN_00550b70(*(uint *)(param_1 + 0x10b24)), iVar2 == 0)) {
              uVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))
                                (param_1,"ub-attack?.wav");
              *(uint *)(param_1 + 0x10b24) = uVar4;
            }
          }
        }
      }
    }
    else if (uVar1 < 6) {
      iVar3 = *(int *)(param_1 + 0x10a78);
      if (iVar3 == 0) {
        FUN_00503620(iVar2,1,1);
      }
      else {
        iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0xfc))(iVar3);
        if (iVar3 == 0) {
          fStack_14 = (float)FUN_0040cf60(0x3e4ccccd,0x3f000000);
          *(float *)(param_1 + 0x10a74) = fStack_14;
          fStack_20 = (float)FUN_00503e60(iVar2);
          dStack_34 = (double)fStack_20;
          fStack_14 = fStack_20;
          if (fStack_20 <= (float)_DAT_005cc869) {
            fStack_18 = 0x40200000;
            if ((dStack_34 < 1.0) || (_DAT_005cc851 < dStack_34)) {
              dStack_4c = (double)fStack_20;
              if (((float)_DAT_005cc869 <= fStack_20) &&
                 ((dStack_4c <= _DAT_005cc871 &&
                  (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10afc) * 4) != 0)))) {
                FUN_004222d0(auStack_1c8);
                fStack_1c4 = (float)FUN_0040cf60(0x40e00000,0x41700000);
                iStack_194 = param_1;
                iStack_190 = param_1;
                fStack_14 = fStack_1c4;
                FUN_00591530(&DAT_007bcc94,DAT_007bcce0 * 0x30 + param_1 + 0x1134,0x3ecccccd,
                             auStack_1c8);
                pfVar6 = afStack_d4 + 0x17;
                auStack_78[0] = uStack_108;
                afStack_d4[(uint)bVar5 * -2 + 0x18] = afStack_170[(uint)bVar5 * -2 + 0x1b];
                afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19] =
                     afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c];
                FUN_00408d70(param_1,pfVar6);
                pfVar6 = afStack_170 + 0x11;
                afStack_12c[0] = (float)uStack_f0;
                afStack_170[(uint)bVar5 * -2 + 0x12] = afStack_170[(uint)bVar5 * -2 + 0x21];
                iVar2 = param_1;
                afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13] =
                     afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x22];
                FUN_00488110(iVar2,pfVar6);
              }
            }
            else if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b04) * 4) != 0) {
              FUN_004222d0(auStack_27c);
              fStack_278 = (float)FUN_0040cf60(0x40e00000,0x41700000);
              iStack_248 = param_1;
              iStack_244 = param_1;
              fStack_14 = fStack_278;
              FUN_00591530(&DAT_007bcc94,DAT_007bcce4 * 0x30 + param_1 + 0x1134,0x3ecccccd,
                           auStack_27c);
              pfVar6 = afStack_170 + 0x14;
              afStack_120[0] = (float)uStack_144;
              afStack_170[(uint)bVar5 * -2 + 0x15] = afStack_170[(uint)bVar5 * -2 + 0xc];
              afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16] =
                   afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
              FUN_00408d70(param_1,pfVar6);
              pfVar6 = afStack_d4 + 0xb;
              auStack_a8[0] = uStack_18c;
              afStack_d4[(uint)bVar5 * -2 + 0xc] = afStack_188[(uint)bVar5 * -2];
              iVar2 = param_1;
              afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
                   afStack_188[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
              FUN_00488110(iVar2,pfVar6);
            }
          }
        }
        else {
          FUN_00503620(iVar2,1,1);
        }
      }
    }
    else if (uVar1 < 7) {
      iVar3 = *(int *)(param_1 + 0x10a78);
      if (iVar3 == 0) {
        FUN_00503620(iVar2,1,1);
      }
      else {
        iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0xfc))(iVar3);
        if (iVar3 == 0) {
          fStack_14 = (float)FUN_0040cf60(0x3e4ccccd,0x3f000000);
          *(float *)(param_1 + 0x10a74) = fStack_14;
          fStack_1c = (float)FUN_00503e60(iVar2);
          dStack_54 = (double)fStack_1c;
          fStack_14 = fStack_1c;
          if (fStack_1c <= (float)_DAT_005cc849) {
            fStack_18 = 0x40200000;
            if (((1.0 <= dStack_54) && (dStack_54 <= _DAT_005cc851)) ||
               ((dStack_3c = (double)fStack_1c, (float)_DAT_005cc859 <= fStack_1c &&
                (dStack_3c <= _DAT_005cc861)))) {
              if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b04) * 4) != 0) {
                FUN_004222d0(auStack_240);
                fStack_23c = (float)FUN_0040cf60(0x40e00000,0x41700000);
                iStack_20c = param_1;
                iStack_208 = param_1;
                fStack_14 = fStack_23c;
                FUN_00591530(&DAT_007bcc94,DAT_007bcce4 * 0x30 + param_1 + 0x1134,0x3ecccccd,
                             auStack_240);
                pfVar6 = afStack_d4 + 0x1a;
                auStack_6c[0] = uStack_9c;
                afStack_d4[(uint)bVar5 * -2 + 0x1b] = afStack_d4[(uint)bVar5 * -2 + 0xf];
                afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c] =
                     afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
                FUN_00408d70(param_1,pfVar6);
                pfVar6 = afStack_d4 + 5;
                auStack_c0[0] = uStack_138;
                afStack_d4[(uint)bVar5 * -2 + 6] = afStack_170[(uint)bVar5 * -2 + 0xf];
                iVar2 = param_1;
                afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
                     afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
                FUN_00488110(iVar2,pfVar6);
              }
            }
            else {
              dStack_44 = (double)fStack_1c;
              if (((((float)_DAT_005cc869 <= fStack_1c) && (dStack_44 <= _DAT_005cc871)) ||
                  ((dStack_2c = (double)fStack_1c, (float)_DAT_005cc879 <= fStack_1c &&
                   (dStack_2c <= _DAT_005cc849)))) &&
                 (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10afc) * 4) != 0)) {
                FUN_004222d0(auStack_204);
                fStack_200 = (float)FUN_0040cf60(0x40e00000,0x41700000);
                iStack_1d0 = param_1;
                iStack_1cc = param_1;
                fStack_14 = fStack_200;
                FUN_00591530(&DAT_007bcc94,param_1 + 0x1134 + DAT_007bcce0 * 0x30,0x3ecccccd,
                             auStack_204);
                pfVar6 = afStack_d4 + 0x11;
                auStack_90[0] = uStack_114;
                afStack_d4[(uint)bVar5 * -2 + 0x12] = afStack_170[(uint)bVar5 * -2 + 0x18];
                afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13] =
                     afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
                FUN_00408d70(param_1,pfVar6);
                pfVar6 = afStack_d4 + 0x14;
                auStack_84[0] = uStack_fc;
                afStack_d4[(uint)bVar5 * -2 + 0x15] = afStack_170[(uint)bVar5 * -2 + 0x1e];
                iVar2 = param_1;
                afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16] =
                     afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1f];
                FUN_00488110(iVar2,pfVar6);
              }
            }
          }
        }
        else {
          FUN_00503620(iVar2,1,1);
        }
      }
    }
    else if ((uVar1 == 0xe) && (*(int *)(param_1 + 0x10a64) == 0)) {
      FUN_005469a0(iVar2,0);
      pfVar6 = afStack_170 + 8;
      afStack_150[0] = (float)uStack_d8;
      afStack_170[(uint)bVar5 * -2 + 9] = afStack_d4[(uint)bVar5 * -2];
      afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
           afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      FUN_00408d70(param_1,pfVar6);
      uVar4 = 0;
      afStack_15c[0] = afStack_d4[2];
      afStack_170[(uint)bVar5 * -2 + 6] = afStack_d4[(uint)bVar5 * -2 + 3];
      afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
           afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      FUN_004c9ad0(0x01CB8284,afStack_170 + 5,uVar4);
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0xb0))(param_1,0x32,0x41c80000);
      *(uint *)(param_1 + 0x10a64) = 1;
    }
    if ((*(int *)(param_1 + 0x10a78) != 0) && (0.0 <= fStack_18)) {
      *(float *)(param_1 + 0x2594) = param_2 * (float)_DAT_005cc881 * *(float *)(param_1 + 0x10a60);
      FUN_0042b2a0(param_1,param_2 * *(float *)(param_1 + 0x10a60));
      afStack_e4[0] = 0.0;
      afStack_e4[2] = fStack_18;
      afStack_e4[1] = 0.0;
      uVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xcc))
                        (*(int *)(param_1 + 0x10a78),afStack_170 + 0x23,0x40400000,0x3f060a92);
      iVar2 = FUN_00423000(param_1,*(int *)(param_1 + 0x10a78) + 0x20,uVar4);
      if (iVar2 != 1) {
        FUN_00503620(param_1 + 0x2b4,1,1);
        *(uint *)(param_1 + 0x2578) = 0;
      }
    }
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
    fStack_24 = param_2 * *(float *)(param_1 + 0x10a60);
    while (0.0 < fStack_24) {
      iVar2 = FUN_005030c0(param_1 + 0x2b4,&fStack_24);
      if (iVar2 != 0x11) {
        FUN_0042aa00(param_1,iVar2);
      }
    }
    if (0.0 < *(float *)(param_1 + 0x10a74)) {
      *(float *)(param_1 + 0x10a74) = *(float *)(param_1 + 0x10a74) - param_2;
    }
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x2578) + *(float *)(param_1 + 0x34);
    FUN_00408ae0(param_1);
    iVar2 = FUN_00424430(param_1);
    if (iVar2 != 0) {
      FUN_00423a10(param_1,param_2);
      fStack_60 = *(float *)(param_1 + 0x2588) * param_2;
      iVar2 = param_1 + 0x2b4;
      fStack_5c = *(float *)(param_1 + 0x258c) * param_2;
      fStack_58 = *(float *)(param_1 + 0x2590) * param_2;
      fStack_b4 = fStack_60;
      afStack_d4[(uint)bVar5 * -2 + 9] = afStack_d4[(uint)bVar5 * -2 + 0x1e];
      afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
           afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1f];
      fStack_174 = fStack_b4 + *(float *)(param_1 + 0x257c);
      afStack_170[0] = fStack_b0 + *(float *)(param_1 + 0x2580);
      afStack_170[1] = fStack_ac + *(float *)(param_1 + 0x2584);
      afStack_170[2] = fStack_174;
      afStack_170[(uint)bVar5 * -2 + 3] = afStack_170[(uint)bVar5 * -2];
      afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      iVar2 = FUN_005035c0(iVar2);
      if (*(int *)(iVar2 + 0x24) != 1) {
        afStack_170[2] = afStack_170[2] + *(float *)(param_1 + 0x2508);
        afStack_170[3] = afStack_170[3] + *(float *)(param_1 + 0x250c);
        fStack_160 = fStack_160 + *(float *)(param_1 + 0x2510);
      }
      FUN_00423a60(param_1,afStack_170 + 2);
    }
    FUN_00544f00(param_1 + 0x2b4);
    FUN_00429e90(param_1,param_2);
    if (*(int *)(param_1 + 0x10a64) == 0) {
      FUN_00427060(param_1,*(uint *)(param_1 + 0x10af8),DAT_007bccf0,0x3e4ccccd);
      if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10af8) * 4) != 0) {
        FUN_00427060(param_1,*(uint *)(param_1 + 0x10afc),DAT_007bcce8,0x3e4ccccd);
      }
      FUN_00427060(param_1,*(uint *)(param_1 + 0x10b00),DAT_007bccf4,0x3e4ccccd);
      if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b00) * 4) != 0) {
        FUN_00427060(param_1,*(uint *)(param_1 + 0x10b04),DAT_007bccec,0x3e4ccccd);
      }
      FUN_00427130(param_1,*(uint *)(param_1 + 0x10b18),DAT_007bccdc,0x3f333333);
      FUN_00426f30(param_1);
    }
  }
  return;
}
