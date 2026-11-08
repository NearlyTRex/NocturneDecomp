// Name: FUN_004c0050
// Address: 004c0050
// Address Range: [[004c0050, 004c0b2f]]
// Convention: unknown
// Signature: void FUN_004c0050(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c0050(int param_1,float param_2)

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
  float afStack_13c [5];
  float afStack_128 [3];
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float afStack_104 [4];
  float afStack_f4 [4];
  float fStack_e4;
  uint uStack_e0;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  uint uStack_b0;
  float fStack_ac;
  float afStack_a4 [3];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float afStack_80 [3];
  float fStack_74;
  float afStack_70 [5];
  uint uStack_5c;
  float fStack_50;
  uint uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar3 = FUN_004244b0(param_1,param_2);
  if (iVar3 == 0) {
    iVar3 = FUN_005035c0(param_1 + 0x2b4);
    if (*(int *)(iVar3 + 0x24) == 8) {
      return;
    }
    if (*(int *)(iVar3 + 0x24) == 5) {
      return;
    }
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  fStack_34 = param_2 * *(float *)(param_1 + 0x10a60);
  iStack_18 = param_1 + 0x2b4;
  while (0.0 < fStack_34) {
    uVar4 = FUN_005030c0(iStack_18,afStack_70 + 0xf);
    FUN_0042aa00(param_1,uVar4);
  }
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  FUN_0042b2a0(param_1,param_2 * *(float *)(param_1 + 0x10a60));
  iVar3 = FUN_005035c0(iStack_18);
  iVar3 = *(int *)(iVar3 + 0x24);
  iStack_2c = iVar3;
  iVar5 = FUN_004287f0(param_1,param_2);
  if (iVar5 == 0) {
    switch(iVar3) {
    case 0:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
      iVar3 = FUN_004bfea0(param_1);
      if (iVar3 == 0) {
        fStack_14 = (float)FUN_0040cf60(0,0x3f800000);
        *(float *)(param_1 + 0x10b50) = fStack_14;
        FUN_00503620(iStack_18,5,1);
        iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10b3c));
        if (iVar3 == 0) {
          uVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))
                            (param_1,"gargoyle-stone.wav");
          *(uint *)(param_1 + 0x10b3c) = uVar4;
        }
      }
      else if (*(int *)(param_1 + 0x10b4c) == 0) {
        iVar3 = *(int *)(param_1 + 0x10a78);
        if (iVar3 == 0) {
          iVar3 = FUN_00488970(param_1,param_2);
          if (iVar3 != 0) {
            FUN_00503620(iStack_18,1,1);
          }
        }
        else {
          fStack_110 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_10c = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_108 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_44 = fStack_110;
          afStack_70[(uint)bVar6 * -2 + 0xc] = afStack_13c[(uint)bVar6 * -2 + 0xc];
          afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
               afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
          fStack_38 = SQRT(fStack_3c * fStack_3c + fStack_44 * fStack_44 + fStack_40 * fStack_40);
          fStack_28 = fStack_38;
          if (fStack_38 < 0x40400000) {
            FUN_005838f0(afStack_70 + 0xb);
            uStack_b0 = uStack_bc;
            afStack_f4[(uint)bVar6 * -2 + 0x12] = afStack_f4[(uint)bVar6 * -2 + 0xf];
            afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
                 afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
            fStack_14 = (float)FUN_0040d0c0(fStack_ac - *(float *)(param_1 + 0x34));
            if (ABS(fStack_14) < (float)_DAT_005d8dd2) {
              FUN_00503620(iStack_18,3,1);
            }
          }
          if (fStack_28 < *(float *)(param_1 + 0x10a70)) {
            iVar3 = param_1 + 0x2b4;
            if (_DAT_005f75e8 <= fStack_28) {
              iVar5 = FUN_0040d060(0x3dcccccd);
              if (iVar5 == 0) {
                FUN_00503620(iVar3,2,1);
              }
              else {
                FUN_00503620(iVar3,4,1);
              }
            }
            else {
              FUN_00503620(iVar3,1,1);
            }
          }
        }
      }
      else {
        FUN_00503620(iStack_18,1,1);
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
      iVar3 = FUN_004bfea0(param_1);
      fVar2 = 0x40400000;
      iStack_1c = param_1 + 0x2b4;
      if (iVar3 == 0) {
        fStack_14 = (float)FUN_0040cf60(0,0x3f800000);
        *(float *)(param_1 + 0x10b50) = fStack_14;
        FUN_00503620(iStack_1c,5,1);
        iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10b3c));
        if (iVar3 == 0) {
          uVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))
                            (param_1,"gargoyle-stone.wav");
          *(uint *)(param_1 + 0x10b3c) = uVar4;
        }
      }
      else if (*(int *)(param_1 + 0x10b4c) == 0) {
        if (*(int *)(param_1 + 0x10a78) == 0) {
          iVar3 = FUN_00488970(param_1,param_2);
          if (iVar3 == 0) {
            FUN_00503620(iStack_1c,0,1);
          }
          else {
            FUN_00503620(iStack_1c,1,1);
          }
        }
        else {
          *(uint *)(param_1 + 0x2510) = 0;
          *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
          *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
          afStack_80[0] = 0.0;
          afStack_80[1] = 0.0;
          afStack_80[2] = fVar2;
          fStack_20 = fVar2;
          uVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xcc))
                            (*(int *)(param_1 + 0x10a78),afStack_f4 + 0x1d,0x3f000000,0x3e32b8c2);
          iVar3 = FUN_00423000(param_1,*(int *)(param_1 + 0x10a78) + 0x20,uVar4);
          if (-1 < iVar3) {
            iVar3 = *(int *)(param_1 + 0x10a78);
            fStack_d4 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
            fStack_d0 = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
            fStack_cc = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
            fStack_50 = fStack_d4;
            afStack_70[(uint)bVar6 * -2 + 9] = afStack_f4[(uint)bVar6 * -2 + 9];
            afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
                 afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
            uStack_4c = 0;
            fStack_30 = SQRT(fStack_48 * fStack_48 + fStack_50 * fStack_50);
            fStack_24 = fStack_30;
            if (_DAT_005f75e8 < fStack_30) {
              iVar3 = FUN_0040d060(0x3dcccccd);
              if (iVar3 == 0) {
                uVar4 = 2;
              }
              else {
                uVar4 = 4;
              }
              FUN_00503620(iStack_1c,uVar4,1);
            }
            if ((fStack_24 <= fStack_20) && (*(float *)(param_1 + 0x10a74) <= 0.0)) {
              iVar3 = *(int *)(param_1 + 0x10a78);
              fStack_140 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
              afStack_13c[0] = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
              afStack_13c[1] = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
              fStack_74 = fStack_140;
              afStack_70[(uint)bVar6 * -2] = afStack_13c[(uint)bVar6 * -2];
              afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                   afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
              FUN_005838f0(&fStack_74);
              afStack_70[2] = (float)uStack_5c;
              afStack_70[(uint)bVar6 * -2 + 3] = afStack_70[(uint)bVar6 * -2 + 6];
              afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                   afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
              fStack_14 = (float)FUN_0040d0c0(afStack_70[3] - *(float *)(param_1 + 0x34));
              if (ABS(fStack_14) < (float)_DAT_005d8dd2) {
                FUN_00503620(param_1 + 0x2b4,3,1);
                *(uint *)(param_1 + 0x10a74) = 0x3f800000;
              }
            }
            if (*(float *)(param_1 + 0x10a70) < fStack_24) {
              FUN_00503620(param_1 + 0x2b4,0,1);
            }
          }
        }
      }
      else {
        *(uint *)(param_1 + 0x2510) = 0;
        *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
        *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
        afStack_104[0] = 0.0;
        afStack_104[1] = 0.0;
        afStack_104[2] = 0.0;
        uVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10b34) + 0x2b0) + 0xcc))
                          (*(int *)(param_1 + 0x10b34),afStack_13c + 0xe,0x3f000000,0x3e32b8c2);
        FUN_00423000(param_1,*(int *)(param_1 + 0x10b34) + 0x20,uVar4);
      }
      break;
    case 3:
      FUN_004222d0(auStack_17c);
      fStack_178 = (float)FUN_0040cf60(0x40400000,0x40a00000);
      iStack_148 = param_1;
      iStack_144 = param_1;
      fStack_14 = fStack_178;
      FUN_00591530(&DAT_0265370c,_DAT_01cb8128 * 0x30 + param_1 + 0x1134,0x3ecccccd,auStack_17c);
      pfVar7 = afStack_13c + 2;
      afStack_13c[2] = afStack_104[3];
      afStack_13c[(uint)bVar6 * -2 + 3] = afStack_f4[(uint)bVar6 * -2];
      afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      FUN_00408d70(param_1,pfVar7);
      pfVar7 = afStack_13c + 5;
      afStack_128[0] = (float)uStack_e0;
      afStack_13c[(uint)bVar6 * -2 + 6] = afStack_f4[(uint)bVar6 * -2 + 6];
      iVar3 = param_1;
      afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      FUN_00488110(iVar3,pfVar7);
      break;
    case 5:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
      iVar3 = FUN_004bfea0(param_1);
      if ((iVar3 != 0) &&
         (fVar2 = *(float *)(param_1 + 0x10b50) - param_2, *(float *)(param_1 + 0x10b50) = fVar2,
         fVar2 < 0.0)) {
        *(uint *)(param_1 + 0x10b50) = 0;
        FUN_00503620(iStack_18,0,1);
        iVar3 = FUN_00550b70(*(uint *)(param_1 + 0x10b3c));
        if (iVar3 == 0) {
          uVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))
                            (param_1,"gargoyle-alive?.wav");
          *(uint *)(param_1 + 0x10b3c) = uVar4;
        }
      }
    }
    goto switchD_004c0a6d_caseD_4;
  }
  uVar1 = *(uint *)(param_1 + 0x27ac);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004c015c:
      uVar4 = 1;
    }
    else {
LAB_004c03df:
      uVar4 = 0;
    }
    FUN_00503620(param_1 + 0x2b4,uVar4,1);
  }
  else {
    if (uVar1 < 3) goto LAB_004c015c;
    if (uVar1 != 3) goto LAB_004c03df;
    FUN_00503620(iStack_18,0,1);
    FUN_00436710(PTR_DAT_00609ed0,">%s confused while walking to scriptDest!\n" + 1,param_1);
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
switchD_004c0a6d_caseD_4:
  if (0.0 < *(float *)(param_1 + 0x10a74)) {
    *(float *)(param_1 + 0x10a74) = *(float *)(param_1 + 0x10a74) - param_2;
  }
  iVar3 = FUN_00424430(param_1);
  if (iVar3 != 0) {
    FUN_00423a10(param_1,param_2);
    fStack_11c = *(float *)(param_1 + 0x2588) * param_2;
    fStack_118 = *(float *)(param_1 + 0x258c) * param_2;
    fStack_114 = *(float *)(param_1 + 0x2590) * param_2;
    afStack_f4[2] = fStack_11c;
    afStack_f4[(uint)bVar6 * -2 + 3] = afStack_13c[(uint)bVar6 * -2 + 9];
    afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    fStack_8c = afStack_f4[2] + *(float *)(param_1 + 0x257c);
    fStack_88 = afStack_f4[3] + *(float *)(param_1 + 0x2580);
    fStack_84 = fStack_e4 + *(float *)(param_1 + 0x2584);
    fStack_c8 = fStack_8c;
    afStack_f4[(uint)bVar6 * -2 + 0xc] = afStack_f4[(uint)bVar6 * -2 + 0x1b];
    afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
         afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
    fStack_98 = fStack_c8 + *(float *)(param_1 + 0x2508);
    fStack_94 = fStack_c4 + *(float *)(param_1 + 0x250c);
    fStack_90 = fStack_c0 + *(float *)(param_1 + 0x2510);
    afStack_a4[0] = fStack_98;
    afStack_f4[(uint)bVar6 * -2 + 0x15] = afStack_f4[(uint)bVar6 * -2 + 0x18];
    afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
         afStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
    *(uint *)(param_1 + 0x2584) = 0;
    *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
    *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2580);
    *(uint *)(param_1 + 0x2510) = 0;
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x2510);
    FUN_00423a60(param_1,afStack_f4 + 0x14);
  }
  FUN_00424470(param_1);
  FUN_00544f00(param_1 + 0x2b4);
  FUN_00429e90(param_1,param_2);
  if (iStack_2c == 5) {
    *(int *)(param_1 + 0x10b40) = *(int *)(param_1 + 0x10b28) << 8;
    *(int *)(param_1 + 0x10b44) = *(int *)(param_1 + 0x10b2c) << 8;
    *(int *)(param_1 + 0x10b48) = *(int *)(param_1 + 0x10b30) << 8;
  }
  else {
    *(uint *)(param_1 + 0x10b44) = 0xffff;
    *(uint *)(param_1 + 0x10b48) = 0xffff;
    *(uint *)(param_1 + 0x10b40) = 0xffff;
  }
  if (*(int *)(param_1 + 0x108) < *(int *)(param_1 + 0x10b40)) {
    iVar3 = *(int *)(param_1 + 0x108) + _DAT_01c2a370;
    *(int *)(param_1 + 0x108) = iVar3;
    if (*(int *)(param_1 + 0x10b40) < iVar3) {
      *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x10b40);
    }
  }
  else if (*(int *)(param_1 + 0x10b40) < *(int *)(param_1 + 0x108)) {
    iVar3 = *(int *)(param_1 + 0x108) - _DAT_01c2a370;
    *(int *)(param_1 + 0x108) = iVar3;
    if (iVar3 < *(int *)(param_1 + 0x10b40)) {
      *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x10b40);
    }
  }
  if (*(int *)(param_1 + 0x10c) < *(int *)(param_1 + 0x10b44)) {
    iVar3 = *(int *)(param_1 + 0x10c) + _DAT_01c2a370;
    *(int *)(param_1 + 0x10c) = iVar3;
    if (*(int *)(param_1 + 0x10b44) < iVar3) {
      *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10b44);
    }
  }
  else if (*(int *)(param_1 + 0x10b44) < *(int *)(param_1 + 0x10c)) {
    iVar3 = *(int *)(param_1 + 0x10c) - _DAT_01c2a370;
    *(int *)(param_1 + 0x10c) = iVar3;
    if (iVar3 < *(int *)(param_1 + 0x10b44)) {
      *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10b44);
    }
  }
  if (*(int *)(param_1 + 0x110) < *(int *)(param_1 + 0x10b48)) {
    iVar3 = *(int *)(param_1 + 0x110) + _DAT_01c2a370;
    *(int *)(param_1 + 0x110) = iVar3;
    if (*(int *)(param_1 + 0x10b48) < iVar3) {
      *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x10b48);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x10b48) < *(int *)(param_1 + 0x110)) {
    iVar3 = *(int *)(param_1 + 0x110) - _DAT_01c2a370;
    *(int *)(param_1 + 0x110) = iVar3;
    if (iVar3 < *(int *)(param_1 + 0x10b48)) {
      *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x10b48);
      return;
    }
  }
  return;
}
