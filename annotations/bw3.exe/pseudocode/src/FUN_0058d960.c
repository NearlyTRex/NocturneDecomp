// Name: FUN_0058d960
// Address: 0058d960
// Address Range: [[0058d960, 0058e8c5]]
// Convention: unknown
// Signature: void FUN_0058d960(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058d960(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float afStackY_11cc [979];
  float *pfVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  byte auStack_268 [4];
  float fStack_264;
  int iStack_234;
  int iStack_230;
  byte auStack_22c [4];
  uint uStack_228;
  int iStack_1f8;
  int iStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  float fStack_1e8;
  uint uStack_1e4;
  float afStack_1e0 [4];
  float fStack_1d0;
  uint uStack_1cc;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float afStack_1a8 [3];
  float afStack_19c [3];
  float afStack_190 [3];
  uint uStack_184;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  uint uStack_16c;
  uint uStack_160;
  float fStack_15c;
  uint uStack_154;
  uint uStack_148;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float afStack_124 [3];
  uint uStack_118;
  float fStack_114;
  uint uStack_10c;
  float fStack_108;
  uint uStack_100;
  float afStack_f4 [3];
  float afStack_e8 [3];
  float fStack_dc;
  float afStack_d8 [5];
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float afStack_ac [3];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  uint uStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  uint uStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  float afStack_58 [3];
  float fStack_4c;
  uint uStack_48;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
  float fStack_38;
  uint uStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar5 = 0;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd108) * 4) == 0) {
    FUN_0042abb0(auStack_22c);
    iStack_1f8 = param_1;
    iStack_1f4 = param_1;
    uStack_228 = 0x4479f99a;
    (**(code **)(*(int *)(param_1 + 0x154) + 0x108))(param_1,auStack_22c);
  }
  if (*(int *)(param_1 + 0xbc68) != 0) {
    *(uint *)(param_1 + 0xbc6c) = 0;
  }
  if (0 < *(int *)(param_1 + 0x33a0)) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
    iVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
    if (((iVar3 == 0) && (iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd0dc)), iVar3 == 0)) &&
       (iVar3 = FUN_00556700(*(uint *)(param_1 + 0xd0d4)), iVar3 == 0)) {
      uVar8 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"mob-scream?.wav");
      *(uint *)(param_1 + 0xd0dc) = uVar8;
    }
  }
  fVar2 = *(float *)(param_1 + 0xd110) - param_2;
  *(float *)(param_1 + 0xd110) = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)(param_1 + 0xd110) = 0;
  }
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd0ec) * 4) == 0) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
  }
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd0e4) * 4) == 0) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
  }
  if ((*(int *)(param_1 + 0xd06c) == 0) &&
     (iVar3 = FUN_00491aa0(0x01C6E360,param_1 + 0xd070), iVar3 != 0)) {
    *(uint *)(param_1 + 0xd06c) = 1;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_40 = param_2 * *(float *)(param_1 + 0xcdcc);
  iStack_18 = param_1 + 0x158;
  while (0.0 < fStack_40) {
    iVar3 = FUN_004fbb70(param_1 + 0x158,afStack_d8 + 0x26);
    if (iVar3 == 100) {
      iVar3 = *(int *)(param_1 + 0xd060);
      if (iVar3 != 0) {
        *(uint *)(param_1 + 0xd060) = 0;
        FUN_004319d0(param_1,1,iVar3,0x3e4ccccd,0);
      }
    }
    else {
      FUN_00433fb0(param_1,iVar3);
    }
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc));
  iVar3 = FUN_004fc070(iStack_18);
  uVar8 = *(uint *)(iVar3 + 0x24);
  iVar3 = FUN_00431660(param_1,param_2);
  if (iVar3 == 0) {
    switch(uVar8) {
    case 0:
      if (*(int *)(param_1 + 0xd06c) == 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
        if (*(int *)(param_1 + 0xcde4) == 0) {
          iVar3 = FUN_00489ff0(param_1,param_2);
          if (iVar3 != 0) {
            FUN_004fc0d0(iStack_18,1,1);
          }
        }
        else {
          iVar3 = *(int *)(param_1 + 0xd068);
          if (iVar3 != 0) {
            if (*(int *)(param_1 + 0xd064) == 0) {
              fStack_c4 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
              fStack_c0 = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
              fStack_bc = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
              fStack_13c = fStack_c4;
              afStack_1e0[(uint)bVar5 * -2 + 0x2a] = afStack_d8[(uint)bVar5 * -2 + 6];
              afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x2b] =
                   afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
              if ((float)_DAT_005d8bb0 <
                  SQRT(fStack_134 * fStack_134 + fStack_13c * fStack_13c + fStack_138 * fStack_138))
              {
                *(uint *)(param_1 + 0xd064) = 1;
                FUN_004fc0d0(iStack_18,8,1);
                break;
              }
            }
            else {
              *(uint *)(param_1 + 0xd064) = 0;
            }
          }
          iVar3 = *(int *)(param_1 + 0xcde4);
          fStack_b8 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_b4 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_b0 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_1c0 = fStack_b8;
          afStack_1e0[(uint)bVar5 * -2 + 9] = afStack_d8[(uint)bVar5 * -2 + 9];
          afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
               afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
          fStack_1c = SQRT(fStack_1b8 * fStack_1b8 +
                           fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc);
          iStack_24 = param_1 + 0x158;
          if (fStack_1c < 0x40400000 + 1.0) {
            FUN_00576250(afStack_1e0 + 8);
            uStack_160 = uStack_154;
            afStack_1e0[(uint)bVar5 * -2 + 0x21] = afStack_1e0[(uint)bVar5 * -2 + 0x24];
            afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x22] =
                 afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25];
            fStack_14 = (float)FUN_0040cfa0(fStack_15c - *(float *)(param_1 + 0x34));
            if ((ABS(fStack_14) < (float)_DAT_005d8ba8) && (*(float *)(param_1 + 0xcde0) <= 0.0)) {
              FUN_004fc0d0(iStack_24,9,1);
              *(uint *)(param_1 + 0xcde0) = 0x40000000;
            }
          }
          else if (fStack_1c < *(float *)(param_1 + 0xcddc)) {
            if (_DAT_005e7058 <= fStack_1c) {
              FUN_004fc0d0(iStack_24,8,1);
            }
            else {
              FUN_004fc0d0(iStack_24,1,1);
            }
          }
        }
      }
      else {
        *(uint *)(param_1 + 0xcde4) = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        if ((float)_DAT_005d8ba0 < *(float *)(param_1 + 0xd10c)) {
          FUN_0058f4a0(param_1);
        }
      }
      break;
    case 1:
    case 8:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      iVar3 = param_1 + 0x158;
      if (*(int *)(param_1 + 0xcde4) == 0) {
        iVar4 = FUN_00489ff0(param_1,param_2);
        if (iVar4 == 0) {
          FUN_004fc0d0(iVar3,0,1);
        }
        else {
          FUN_004fc0d0(iVar3,1,1);
        }
      }
      else if (*(int *)(param_1 + 0xd064) == 0) {
        iVar3 = FUN_0058efb0(param_1,param_2);
        if (iVar3 == 0) {
          fStack_30 = 0x40400000 + 1.0;
          if ((*(int *)(param_1 + 0x2628) != 0) || (*(int *)(param_1 + 0x25b0) != 0)) {
            fStack_30 = 0x41F00000;
          }
          *(uint *)(param_1 + 0x24a4) = 0;
          *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
          *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
          afStack_e8[0] = 0.0;
          fStack_2c = 0x40400000;
          afStack_e8[2] = 0x40400000;
          afStack_e8[1] = 0.0;
          uVar8 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xc4))
                            (*(int *)(param_1 + 0xcde4),afStack_1e0 + 0x3e,0x3f000000,0x3e32b8c2);
          iVar3 = FUN_0042b9e0(param_1,*(int *)(param_1 + 0xcde4) + 0x20,uVar8);
          if (-1 < iVar3) {
            pfVar6 = (float *)(param_1 + 0x20);
            iVar3 = *(int *)(param_1 + 0xcde4);
            fStack_88 = *pfVar6 - *(float *)(iVar3 + 0x20);
            fStack_84 = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
            fStack_80 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
            fStack_4c = fStack_88;
            afStack_d8[(uint)bVar5 * -2 + 0x24] = afStack_d8[(uint)bVar5 * -2 + 0x15];
            afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x25] =
                 afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16];
            fStack_20 = SQRT(fStack_44 * fStack_44 + fStack_4c * fStack_4c);
            uStack_48 = 0;
            fStack_38 = fStack_20;
            if ((fStack_20 <= fStack_30) && (*(float *)(param_1 + 0xcde0) <= 0.0)) {
              iStack_28 = param_1 + 0x158;
              if (*(int *)(param_1 + 0x25b0) == 0) {
                fStack_130 = *(float *)(iVar3 + 0x20) - *pfVar6;
                fStack_12c = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
                fStack_128 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
                afStack_124[0] = fStack_130;
                afStack_1e0[(uint)bVar5 * -2 + 0x30] = afStack_1e0[(uint)bVar5 * -2 + 0x2d];
                afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x31] =
                     afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x2e];
                FUN_00576250(afStack_1e0 + 0x2f);
                uStack_118 = uStack_100;
                afStack_1e0[(uint)bVar5 * -2 + 0x33] = afStack_1e0[(uint)bVar5 * -2 + 0x39];
                afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x34] =
                     afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x3a];
                fStack_14 = (float)FUN_0040cfa0(fStack_114 - *(float *)(param_1 + 0x34));
                if (ABS(fStack_14) < (float)_DAT_005d8ba8) {
                  FUN_004fc0d0(iStack_28,9,1);
                }
              }
              else if (fStack_2c + 1.0 <= fStack_20) {
                if (((float)_DAT_005d8ba0 < *(float *)(param_1 + 0xd10c)) &&
                   (*(float *)(param_1 + 0xd110) <= 0.0)) {
                  FUN_0058f4a0(param_1);
                }
              }
              else {
                fStack_178 = *(float *)(iVar3 + 0x20) - *pfVar6;
                fStack_174 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
                fStack_170 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
                afStack_1a8[0] = fStack_178;
                afStack_1e0[(uint)bVar5 * -2 + 0xf] = afStack_1e0[(uint)bVar5 * -2 + 0x1b];
                afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
                     afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c];
                FUN_00576250(afStack_1e0 + 0xe);
                uStack_10c = uStack_64;
                afStack_1e0[(uint)bVar5 * -2 + 0x36] = afStack_d8[(uint)bVar5 * -2 + 0x1e];
                afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x37] =
                     afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1f];
                fStack_14 = (float)FUN_0040cfa0(fStack_108 - *(float *)(param_1 + 0x34));
                if ((ABS(fStack_14) < (float)_DAT_005d8ba8) && (*(float *)(param_1 + 0xcde0) <= 0.0)
                   ) {
                  FUN_004fc0d0(iStack_28,9,1);
                  *(uint *)(param_1 + 0xcde0) = 0x40000000;
                }
              }
              *(uint *)(param_1 + 0xcde0) = 0x3f800000;
            }
            if (*(float *)(param_1 + 0xcddc) < fStack_38) {
              FUN_004fc0d0(param_1 + 0x158,0,1);
            }
          }
        }
      }
      else {
        *(uint *)(param_1 + 0x24a4) = 0;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        uStack_1f0 = 0;
        fStack_1e8 = 0x40400000;
        uStack_1ec = 0;
        uVar8 = (**(code **)(*(int *)(*(int *)(param_1 + 0xd068) + 0x154) + 0xc4))
                          (*(int *)(param_1 + 0xd068),&uStack_1f0,0x3f000000,0x3e32b8c2);
        iVar4 = FUN_0042b9e0(param_1,*(int *)(param_1 + 0xd068) + 0x20,uVar8);
        if (iVar4 < 1) {
          if (iVar4 < 0) {
            FUN_004fc0d0(iVar3,0,1);
            *(uint *)(param_1 + 0xd068) = 0;
          }
        }
        else {
          FUN_004fc0d0(iVar3,0,1);
        }
      }
      break;
    case 2:
    case 6:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      if (*(int *)(param_1 + 0xcde4) != 0) {
        iVar3 = FUN_0040c840(*(uint *)(param_1 + 0x2628),_DAT_02d0c150);
        if (iVar3 != 0) {
          FUN_0053ebe0(0x01ED78C8);
          uStack_34 = *(uint *)(iVar3 + 0x568);
          *(int *)(iVar3 + 0x304) = param_1;
          *(uint *)(iVar3 + 0x568) = 100;
          iVar4 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xe8))(iVar3);
          if (iVar4 != 0) {
            (**(code **)(*(int *)(iVar3 + 0x154) + 0xe4))(iVar3);
          }
          *(uint *)(iVar3 + 0x568) = uStack_34;
        }
        iVar3 = FUN_0040c840(*(uint *)(param_1 + 0x25b0),_DAT_02d0c150);
        if (iVar3 != 0) {
          FUN_0053ebe0(0x01ED78C8);
          uStack_3c = *(uint *)(iVar3 + 0x568);
          *(int *)(iVar3 + 0x304) = param_1;
          *(uint *)(iVar3 + 0x568) = 100;
          iVar4 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xe8))(iVar3);
          if (iVar4 == 0) {
            *(uint *)(iVar3 + 0x568) = uStack_3c;
          }
          else {
            (**(code **)(*(int *)(iVar3 + 0x154) + 0xe4))(iVar3);
            *(uint *)(iVar3 + 0x568) = uStack_3c;
          }
        }
      }
      if ((*(float *)(param_1 + 0xd10c) < (float)_DAT_005d8ba0) ||
         (*(float *)(param_1 + 0xd110) <= 0.0)) {
        if (*(int *)(param_1 + 0xd06c) == 0) {
          uVar9 = 0x40800000;
          uVar8 = 0x40000000;
        }
        else {
          uVar9 = 0x40a00000;
          uVar8 = 0x40800000;
        }
        fStack_14 = (float)FUN_0040ce40(uVar8,uVar9);
        *(float *)(param_1 + 0xd110) = fStack_14;
        FUN_004fc0d0(param_1 + 0x158,0,1);
      }
      break;
    case 5:
      if ((*(int *)(param_1 + 0xcdd0) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_0054dbd0(iStack_18,0);
        pfVar6 = afStack_d8 + 0xb;
        afStack_ac[0] = (float)uStack_184;
        afStack_d8[(uint)bVar5 * -2 + 0xc] = afStack_1e0[(uint)bVar5 * -2 + 0x18];
        afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
             afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
        FUN_00408b80(param_1,pfVar6);
        uVar9 = 0;
        pfVar6 = afStack_d8 + 2;
        afStack_d8[2] = (float)uStack_94;
        afStack_d8[(uint)bVar5 * -2 + 3] = afStack_d8[(uint)bVar5 * -2 + 0x12];
        uVar8 = 0x01D22E44;
        afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13];
        FUN_004cec40(uVar8,pfVar6,uVar9);
        *(uint *)(param_1 + 0xcdd0) = 1;
      }
      break;
    case 9:
      FUN_0042abb0(auStack_268);
      fStack_264 = (float)FUN_0040ce40(0x40e00000,0x41700000);
      iStack_234 = param_1;
      iStack_230 = param_1;
      fStack_14 = fStack_264;
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd0e4) * 4) != 0) {
        FUN_00583260(&DAT_02cfd900,param_1 + 0xfd8 + _DAT_02d24974 * 0x30,0x3ecccccd,auStack_268);
        pfVar6 = afStack_1e0 + 0x3b;
        afStack_f4[0] = (float)uStack_148;
        afStack_1e0[(uint)bVar5 * -2 + 0x3c] = afStack_1e0[(uint)bVar5 * -2 + 0x27];
        afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x3d] =
             afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x28];
        FUN_00408b80(param_1,pfVar6);
        puVar7 = &uStack_1e4;
        uStack_1e4 = uStack_1cc;
        afStack_1e0[(uint)bVar5 * -2] = afStack_1e0[(uint)bVar5 * -2 + 6];
        iVar3 = param_1;
        afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
        FUN_004893f0(iVar3,puVar7);
      }
      fStack_264 = (float)FUN_0040ce40(0x40e00000,0x41700000);
      fStack_14 = fStack_264;
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd0ec) * 4) != 0) {
        FUN_00583260(&DAT_02cfd900,_DAT_02d24978 * 0x30 + param_1 + 0xfd8,0x3ecccccd,auStack_268);
        pfVar6 = afStack_1e0 + 0x11;
        afStack_19c[0] = (float)uStack_16c;
        afStack_1e0[(uint)bVar5 * -2 + 0x12] = afStack_1e0[(uint)bVar5 * -2 + 0x1e];
        afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13] =
             afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1f];
        FUN_00408b80(param_1,pfVar6);
        pfVar6 = afStack_1e0 + 0x14;
        afStack_190[0] = (float)uStack_7c;
        afStack_1e0[(uint)bVar5 * -2 + 0x15] = afStack_d8[(uint)bVar5 * -2 + 0x18];
        iVar3 = param_1;
        afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x16] =
             afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
        FUN_004893f0(iVar3,pfVar6);
      }
    }
    goto switchD_0058e8bf_caseD_3;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0058dc3d:
      uVar8 = 1;
    }
    else {
LAB_0058de9d:
      uVar8 = 0;
    }
    FUN_004fc0d0(param_1 + 0x158,uVar8,1);
  }
  else {
    if (uVar1 < 3) goto LAB_0058dc3d;
    if (uVar1 != 3) goto LAB_0058de9d;
    FUN_004fc0d0(iStack_18,0,1);
    FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_0058e8bf_caseD_3:
  if (0.0 < *(float *)(param_1 + 0xcde0)) {
    *(float *)(param_1 + 0xcde0) = *(float *)(param_1 + 0xcde0) - param_2;
  }
  iVar3 = FUN_0042ccf0(param_1);
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0xcde4);
    if ((iVar3 != 0) &&
       (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xf4))(iVar3), iVar3 == param_1)) {
      FUN_0053ec10(0x01ED78C8,*(uint *)(param_1 + 0xcde4));
    }
    FUN_0042c1e0(param_1,param_2);
    fStack_70 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_6c = *(float *)(param_1 + 0x251c) * param_2;
    fStack_68 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_a0 = fStack_70;
    afStack_d8[(uint)bVar5 * -2 + 0xf] = afStack_d8[(uint)bVar5 * -2 + 0x1b];
    afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
         afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c];
    fStack_dc = fStack_a0 + *(float *)(param_1 + 0x250c);
    afStack_d8[0] = fStack_9c + *(float *)(param_1 + 0x2510);
    afStack_d8[1] = fStack_98 + *(float *)(param_1 + 0x2514);
    fStack_1b4 = fStack_dc;
    afStack_1e0[(uint)bVar5 * -2 + 0xc] = afStack_d8[(uint)bVar5 * -2];
    afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
         afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    afStack_1e0[2] = fStack_1b4 + *(float *)(param_1 + 0x249c);
    afStack_1e0[3] = fStack_1b0 + *(float *)(param_1 + 0x24a0);
    fStack_1d0 = fStack_1ac + *(float *)(param_1 + 0x24a4);
    afStack_58[0] = afStack_1e0[2];
    afStack_d8[(uint)bVar5 * -2 + 0x21] = afStack_1e0[(uint)bVar5 * -2 + 3];
    afStack_d8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x22] =
         afStack_1e0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042c230(param_1,afStack_d8 + 0x20);
  }
  iVar3 = FUN_0040c840(*(uint *)(param_1 + 0x2628),_DAT_02d0c150);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x154) + 0xc))(iVar3,param_2);
  }
  iVar3 = FUN_0040c840(*(uint *)(param_1 + 0x25b0),_DAT_02d0c150);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x154) + 0xc))(iVar3,param_2);
  }
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  iVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if (iVar3 == 0) {
    FUN_0058e8d0(param_1,param_2);
  }
  FUN_00433350(param_1,param_2);
  return;
}
