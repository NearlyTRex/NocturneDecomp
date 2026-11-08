// Name: FUN_00549ba0
// Address: 00549ba0
// Address Range: [[00549ba0, 0054a636]]
// Convention: unknown
// Signature: void FUN_00549ba0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00549ba0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float afStackY_115c [952];
  float *pfVar6;
  uint uVar7;
  byte auStack_264 [4];
  uint uStack_260;
  uint uStack_234;
  int iStack_230;
  int iStack_22c;
  byte auStack_228 [48];
  uint uStack_1f8;
  byte auStack_1ec [4];
  uint *puStack_1e8;
  int iStack_1b8;
  int iStack_1b4;
  byte auStack_1b0 [4];
  uint *puStack_1ac;
  int iStack_17c;
  int iStack_178;
  uint uStack_174;
  float afStack_170 [4];
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float afStack_150 [3];
  uint uStack_144;
  float fStack_140;
  uint uStack_138;
  float afStack_12c [3];
  uint uStack_120;
  uint uStack_114;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float afStack_fc [3];
  float afStack_f0 [3];
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float afStack_cc [3];
  uint uStack_c0;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float afStack_60 [3];
  float afStack_54 [3];
  uint uStack_48;
  float afStack_3c [3];
  float afStack_30 [2];
  float fStack_28;
  int iStack_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  uint *puStack_14;
  
  bVar5 = 0;
  fVar1 = *(float *)(param_1 + 0x10b34) - param_2;
  *(float *)(param_1 + 0x10b34) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0x10b34) = 0;
  }
  if ((*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b28) * 4) == 0) &&
     (iVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))(param_1), iVar2 == 0)) {
    FUN_004222d0(auStack_264);
    uStack_234 = 0;
    iStack_230 = param_1;
    iStack_22c = param_1;
    uStack_260 = 0x461c3f9a;
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x110))(param_1,auStack_264);
  }
  iVar2 = FUN_004244b0(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  afStack_30[0] = param_2 * *(float *)(param_1 + 0x10a60);
  iVar2 = param_1 + 0x2b4;
  while (0.0 < afStack_30[0]) {
    uVar3 = FUN_005030c0(iVar2,afStack_30);
    if (uVar3 < 0x66) {
      if (uVar3 == 0x65) {
        iVar4 = *(int *)(param_1 + 0x10a78);
        if (iVar4 == 0) {
          FUN_00503620(iVar2,1,1);
        }
        else {
          iVar4 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0xf4))(iVar4,param_1,0);
          if (iVar4 == 0) {
            FUN_00503620(iVar2,1,1);
          }
        }
      }
      else {
        FUN_0042aa00(param_1,uVar3);
      }
    }
    else if (uVar3 < 0x67) {
      iVar4 = *(int *)(param_1 + 0x10a78);
      if (iVar4 != 0) {
        (**(code **)(*(int *)(iVar4 + 0x2b0) + 0xf8))(iVar4);
      }
    }
    else if (uVar3 == 0x67) {
      iVar4 = *(int *)(param_1 + 0x10b2c) + 1;
      *(int *)(param_1 + 0x10b2c) = iVar4;
      if (2 < iVar4) {
        if (*(int *)(param_1 + 0x10a78) == 0) {
          (**(code **)(iRam000002b0 + 0xf8))(0);
          FUN_00503620(iVar2,1,1);
        }
        else {
          FUN_004222d0(auStack_228);
          uStack_1f8 = 4;
          (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0x110))
                    (*(int *)(param_1 + 0x10a78),auStack_228);
        }
      }
    }
    else {
      FUN_0042aa00(param_1,uVar3);
    }
  }
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  FUN_0042b2a0(param_1,param_2 * *(float *)(param_1 + 0x10a60));
  iStack_1c = param_1 + 0x2b4;
  iVar2 = FUN_005035c0(iStack_1c);
  iVar2 = *(int *)(iVar2 + 0x24);
  iStack_24 = iVar2;
  iVar4 = FUN_004287f0(param_1,param_2);
  if (iVar4 == 0) {
    switch(iVar2) {
    case 1:
      iVar2 = FUN_0048e340(0x01C38BC0,"Capture");
      if (iVar2 == 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
        iVar2 = *(int *)(param_1 + 0x10a78);
        if (iVar2 != 0) {
          fStack_84 = *(float *)(iVar2 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_80 = *(float *)(iVar2 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_7c = *(float *)(iVar2 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_108 = fStack_84;
          afStack_170[(uint)bVar5 * -2 + 0x1b] = afStack_170[(uint)bVar5 * -2 + 0x3c];
          afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c] =
               afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x3d];
          fStack_28 = SQRT(fStack_100 * fStack_100 +
                           fStack_108 * fStack_108 + fStack_104 * fStack_104);
          fStack_18 = fStack_28;
          if (fStack_28 < 0x40200000 + 1.0) {
            FUN_005838f0(afStack_170 + 0x1a);
            uStack_144 = uStack_90;
            afStack_170[(uint)bVar5 * -2 + 0xc] = afStack_170[(uint)bVar5 * -2 + 0x39];
            afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
                 afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x3a];
            puStack_14 = (uint *)FUN_0040d0c0(fStack_140 - *(float *)(param_1 + 0x34));
            if (ABS((float)puStack_14) < (float)_DAT_005e77fd) {
              *(uint *)(param_1 + 0x10b2c) = 0;
              FUN_00503620(iStack_1c,9,1);
            }
          }
          if (fStack_28 < *(float *)(param_1 + 0x10afc)) {
            FUN_00503620(param_1 + 0x2b4,2,1);
          }
        }
      }
      break;
    case 2:
      iVar2 = FUN_0048e340(0x01C38BC0,"Capture");
      if (iVar2 == 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
        iVar2 = *(int *)(param_1 + 0x10a78);
        if (iVar2 == 0) {
          FUN_00503620(iStack_1c,1,1);
        }
        else {
          if (param_1 == *(int *)(iVar2 + 0x276c)) {
            (**(code **)(*(int *)(iVar2 + 0x2b0) + 0xf8))(iVar2);
          }
          afStack_3c[2] = 0x40200000;
          fStack_20 = 0x40200000;
          *(uint *)(param_1 + 0x2510) = 0;
          *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
          *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
          afStack_3c[0] = 0.0;
          afStack_3c[1] = 0.0;
          uVar7 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xcc))
                            (*(int *)(param_1 + 0x10a78),afStack_170 + 0x4d,0x3f000000,0x3e32b8c2);
          iVar2 = FUN_00423000(param_1,*(int *)(param_1 + 0x10a78) + 0x20,uVar7);
          if ((-1 < iVar2) && (0 < iVar2)) {
            iVar2 = *(int *)(param_1 + 0x10a78);
            fStack_b4 = *(float *)(iVar2 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_b0 = *(float *)(iVar2 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_ac = *(float *)(iVar2 + 0x28) - *(float *)(param_1 + 0x28);
            fStack_6c = fStack_b4;
            afStack_170[(uint)bVar5 * -2 + 0x42] = afStack_170[(uint)bVar5 * -2 + 0x30];
            afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x43] =
                 afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x31];
            if ((SQRT(fStack_64 * fStack_64 + fStack_6c * fStack_6c + fStack_68 * fStack_68) <
                 fStack_20 + 1.0) && (*(float *)(param_1 + 0x10af8) <= 0.0)) {
              FUN_00503620(param_1 + 0x2b4,6,1);
              *(uint *)(param_1 + 0x10af8) = 0x3f800000;
            }
          }
        }
      }
      else {
        FUN_00503620(iStack_1c,1,1);
      }
      break;
    case 6:
      if (*(int *)(param_1 + 0x10a78) == 0) {
        (**(code **)(iRam000002b0 + 0xf8))(0);
        FUN_00503620(iStack_1c,1,1);
      }
      else {
        FUN_004222d0(auStack_1ec);
        puStack_1e8 = (uint *)FUN_0040cf60(0x40e00000,0x41700000);
        iStack_1b8 = param_1;
        iStack_1b4 = param_1;
        puStack_14 = puStack_1e8;
        FUN_00591530(&DAT_0265370c,_DAT_02628618 * 0x30 + param_1 + 0x1134,0x3f800000,auStack_1ec);
        pfVar6 = afStack_170 + 0x1d;
        afStack_fc[0] = (float)uStack_114;
        afStack_170[(uint)bVar5 * -2 + 0x1e] = afStack_170[(uint)bVar5 * -2 + 0x18];
        afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1f] =
             afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
        FUN_00408d70(param_1,pfVar6);
        pfVar6 = afStack_170 + 0x20;
        afStack_f0[0] = (float)uStack_174;
        afStack_170[(uint)bVar5 * -2 + 0x21] = afStack_170[(uint)bVar5 * -2];
        iVar2 = param_1;
        afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x22] =
             afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        FUN_00488110(iVar2,pfVar6);
      }
      break;
    case 8:
      if ((*(int *)(param_1 + 0x10a64) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_005469a0(iStack_1c,0);
        pfVar6 = afStack_170 + 0x29;
        afStack_cc[0] = (float)uStack_138;
        afStack_170[(uint)bVar5 * -2 + 0x2a] = afStack_170[(uint)bVar5 * -2 + 0xf];
        afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x2b] =
             afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
        FUN_00408d70(param_1,pfVar6);
        uVar7 = 0;
        afStack_150[0] = (float)uStack_48;
        afStack_170[(uint)bVar5 * -2 + 9] = afStack_170[(uint)bVar5 * -2 + 0x4b];
        afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
             afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x4c];
        FUN_004c9ad0(0x01CB8284,afStack_170 + 8,uVar7);
        *(uint *)(param_1 + 0x10a64) = 1;
      }
      break;
    case 9:
      iVar2 = *(int *)(param_1 + 0x10a78);
      if (iVar2 == 0) {
        FUN_00503620(iStack_1c,1,1);
      }
      else if (*(int *)(iVar2 + 0x276c) == 0) {
        FUN_00503620(iStack_1c,1,1);
      }
      else {
        iVar2 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x114))(iVar2);
        if (iVar2 == 0) {
          FUN_004222d0(auStack_1b0);
          puStack_1ac = (uint *)FUN_0040cf60(0x40e00000,0x41700000);
          iStack_17c = param_1;
          iStack_178 = param_1;
          puStack_14 = puStack_1ac;
          FUN_00591530(&DAT_0265370c,param_1 + 0x1134 + _DAT_02628618 * 0x30,0x3f800000,auStack_1b0)
          ;
          pfVar6 = afStack_170 + 0x47;
          afStack_54[0] = (float)uStack_c0;
          afStack_170[(uint)bVar5 * -2 + 0x48] = afStack_170[(uint)bVar5 * -2 + 0x2d];
          afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x49] =
               afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x2e];
          FUN_00408d70(param_1,pfVar6);
          pfVar6 = afStack_170 + 0x44;
          afStack_60[0] = (float)uStack_120;
          afStack_170[(uint)bVar5 * -2 + 0x45] = afStack_170[(uint)bVar5 * -2 + 0x15];
          iVar2 = param_1;
          afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x46] =
               afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16];
          FUN_00488110(iVar2,pfVar6);
        }
        else {
          (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xf8))
                    (*(int *)(param_1 + 0x10a78));
          FUN_00503620(iStack_1c,1,1);
        }
      }
      break;
    case 10:
      iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0x114))
                        (*(int *)(param_1 + 0x10a78));
      if (iVar2 != 0) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xf8))
                  (*(int *)(param_1 + 0x10a78));
        FUN_00503620(iStack_1c,1,1);
      }
    }
    goto switchD_0054a4fd_caseD_3;
  }
  uVar3 = *(uint *)(param_1 + 0x27ac);
  if (uVar3 < 2) {
    if (uVar3 == 1) {
LAB_00549e39:
      uVar7 = 2;
    }
    else {
LAB_00549f5a:
      uVar7 = 1;
    }
    FUN_00503620(param_1 + 0x2b4,uVar7,1);
  }
  else {
    if (uVar3 < 3) goto LAB_00549e39;
    if (uVar3 != 3) goto LAB_00549f5a;
    FUN_00503620(param_1 + 0x2b4,1,1);
    FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
switchD_0054a4fd_caseD_3:
  if (0.0 < *(float *)(param_1 + 0x10af8)) {
    *(float *)(param_1 + 0x10af8) = *(float *)(param_1 + 0x10af8) - param_2;
  }
  if (iStack_24 == 0xb) {
    puStack_14 = (uint *)(param_1 + 0x2508);
    FUN_00408cf0(param_1,puStack_14);
    fStack_15c = fStack_78;
    afStack_170[(uint)bVar5 * -2 + 6] = afStack_170[(uint)bVar5 * -2 + 0x3f];
    afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
         afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x40];
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fStack_15c;
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_158;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_154;
    puStack_14[2] = 0;
    puStack_14[1] = puStack_14[2];
    *puStack_14 = puStack_14[1];
  }
  else {
    iVar2 = FUN_00424430(param_1);
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0x10a78);
      if ((iVar2 != 0) &&
         (iVar2 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0xfc))(iVar2), iVar2 == param_1)) {
        FUN_00537e30(0x01E661B8,*(uint *)(param_1 + 0x10a78));
      }
      FUN_00423a10(param_1,param_2);
      fStack_e4 = *(float *)(param_1 + 0x2588) * param_2;
      fStack_e0 = *(float *)(param_1 + 0x258c) * param_2;
      fStack_dc = *(float *)(param_1 + 0x2590) * param_2;
      fStack_d8 = fStack_e4;
      afStack_170[(uint)bVar5 * -2 + 0x27] = afStack_170[(uint)bVar5 * -2 + 0x24];
      afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x28] =
           afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25];
      fStack_a8 = fStack_d8 + *(float *)(param_1 + 0x257c);
      fStack_a4 = fStack_d4 + *(float *)(param_1 + 0x2580);
      fStack_a0 = fStack_d0 + *(float *)(param_1 + 0x2584);
      afStack_170[2] = fStack_a8;
      afStack_170[(uint)bVar5 * -2 + 3] = afStack_170[(uint)bVar5 * -2 + 0x33];
      afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x34];
      fStack_9c = afStack_170[2] + *(float *)(param_1 + 0x2508);
      fStack_98 = afStack_170[3] + *(float *)(param_1 + 0x250c);
      fStack_94 = fStack_160 + *(float *)(param_1 + 0x2510);
      afStack_12c[0] = fStack_9c;
      afStack_170[(uint)bVar5 * -2 + 0x12] = afStack_170[(uint)bVar5 * -2 + 0x36];
      afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13] =
           afStack_170[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x37];
      *(uint *)(param_1 + 0x2584) = 0;
      *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
      *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2580);
      *(uint *)(param_1 + 0x2510) = 0;
      *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
      *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x2510);
      FUN_00423a60(param_1,afStack_170 + 0x11);
    }
  }
  FUN_00424470(param_1);
  FUN_00544f00(param_1 + 0x2b4);
  FUN_00429e90(param_1,param_2);
  return;
}
