// Name: FUN_0059b960
// Address: 0059b960
// Address Range: [[0059b960, 0059cff3]]
// Convention: unknown
// Signature: void FUN_0059b960(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059b960(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_129c [979];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte auStack_32c [4];
  uint uStack_328;
  uint uStack_2fc;
  byte auStack_2f0 [4];
  uint uStack_2ec;
  uint uStack_2c0;
  float fStack_2b4;
  float afStack_2b0 [5];
  float fStack_29c;
  float fStack_298;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  uint uStack_280;
  uint uStack_27c;
  uint uStack_278;
  uint uStack_274;
  uint uStack_270;
  float fStack_26c;
  float fStack_268;
  uint uStack_264;
  float fStack_260;
  float afStack_25c [5];
  float fStack_248;
  float afStack_244 [4];
  float fStack_234;
  float afStack_230 [3];
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float afStack_20c [3];
  uint uStack_200;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float afStack_1e8 [3];
  uint uStack_1dc;
  float afStack_1d8 [4];
  float fStack_1c8;
  uint uStack_1c4;
  float afStack_1c0 [5];
  float afStack_1ac [3];
  uint uStack_1a0;
  uint uStack_194;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float afStack_178 [5];
  float fStack_164;
  float fStack_160;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  uint uStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint uStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float afStack_128 [3];
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float afStack_110 [3];
  float fStack_104;
  float afStack_100 [5];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float afStack_a4 [3];
  double dStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  int iStack_6c;
  float fStack_68;
  int iStack_64;
  float fStack_60;
  int iStack_5c;
  int iStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x148))(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  fStack_7c = param_2 * *(float *)(param_1 + 0xcdcc);
  iStack_58 = param_1 + 0x158;
  while (0.0 < fStack_7c) {
    iVar4 = FUN_004fbb70(iStack_58,&fStack_7c);
    switch(iVar4) {
    case 0x5dc:
      iVar5 = FUN_00556700(*(uint *)(param_1 + 0xbf4c + iVar4 * 4));
      if (iVar5 == 0) {
        uVar10 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                           (param_1,"hino_stand_fly.wav");
        *(uint *)(param_1 + 0xbf4c + iVar4 * 4) = uVar10;
      }
      break;
    case 0x5dd:
      iVar5 = FUN_00556700(*(uint *)(param_1 + 0xbf4c + iVar4 * 4));
      if (iVar5 == 0) {
        uVar10 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                           (param_1,"hino_walk_fly.wav");
        *(uint *)(param_1 + 0xbf4c + iVar4 * 4) = uVar10;
      }
      break;
    case 0x5de:
      iVar5 = FUN_00556700(*(uint *)(param_1 + 0xbf4c + iVar4 * 4));
      if (iVar5 == 0) {
        uVar10 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                           (param_1,"hino_run_fly.wav");
        *(uint *)(param_1 + 0xbf4c + iVar4 * 4) = uVar10;
      }
      break;
    case 0x5df:
      iVar5 = FUN_00556700(*(uint *)(param_1 + 0xbf4c + iVar4 * 4));
      if (iVar5 == 0) {
        uVar10 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                           (param_1,"hino_reverse.wav");
        *(uint *)(param_1 + 0xbf4c + iVar4 * 4) = uVar10;
      }
      break;
    case 0x5e0:
      iVar5 = FUN_00556700(*(uint *)(param_1 + 0xbf4c + iVar4 * 4));
      if (iVar5 == 0) {
        uVar10 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                           (param_1,"hino_attack_fly.wav");
        *(uint *)(param_1 + 0xbf4c + iVar4 * 4) = uVar10;
      }
      break;
    case 0x5e1:
      iVar5 = FUN_00556700(*(uint *)(param_1 + 0xbf4c + iVar4 * 4));
      if (iVar5 == 0) {
        uVar10 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                           (param_1,"hino_attack_fly2.wav");
        *(uint *)(param_1 + 0xbf4c + iVar4 * 4) = uVar10;
      }
      break;
    case 0x5e2:
      iVar5 = FUN_00556700(*(uint *)(param_1 + 0xbf4c + iVar4 * 4));
      if (iVar5 == 0) {
        uVar10 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                           (param_1,"hino_damage_fly.wav");
        *(uint *)(param_1 + 0xbf4c + iVar4 * 4) = uVar10;
      }
      break;
    case 0x5e3:
      iVar5 = FUN_00556700(*(uint *)(param_1 + 0xbf4c + iVar4 * 4));
      if (iVar5 == 0) {
        uVar10 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                           (param_1,"hino_die_fly.WAV");
        *(uint *)(param_1 + 0xbf4c + iVar4 * 4) = uVar10;
      }
      break;
    case 0x5e4:
      iVar5 = FUN_00556700(*(uint *)(param_1 + 0xbf4c + iVar4 * 4));
      if (iVar5 == 0) {
        uVar10 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                           (param_1,"hino_warning.wav");
        *(uint *)(param_1 + 0xbf4c + iVar4 * 4) = uVar10;
      }
      break;
    case 0x5e5:
      iVar5 = FUN_00556700(*(uint *)(param_1 + 0xbf4c + iVar4 * 4));
      if (iVar5 == 0) {
        uVar10 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                           (param_1,"hino_big_attack.wav");
        *(uint *)(param_1 + 0xbf4c + iVar4 * 4) = uVar10;
      }
      break;
    case 0x5e6:
      iVar5 = FUN_00556700(*(uint *)(param_1 + 0xbf4c + iVar4 * 4));
      if (iVar5 == 0) {
        uVar10 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"hino_appear.wav")
        ;
        *(uint *)(param_1 + 0xbf4c + iVar4 * 4) = uVar10;
      }
      break;
    case 0x5e7:
      iVar5 = FUN_00556700(*(uint *)(param_1 + 0xbf4c + iVar4 * 4));
      if (iVar5 == 0) {
        uVar10 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                           (param_1,"hino_disappear.wav");
        *(uint *)(param_1 + 0xbf4c + iVar4 * 4) = uVar10;
      }
      break;
    default:
      FUN_00433fb0(param_1,iVar4);
    }
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2 * *(float *)(param_1 + 0xcdcc));
  iStack_5c = param_1 + 0x158;
  iVar4 = FUN_004fc070(iStack_5c);
  iVar4 = *(int *)(iVar4 + 0x24);
  FUN_00441ff0(PTR_DAT_005f1690,"State: %d\n",iVar4);
  iStack_6c = iVar4;
  iVar5 = FUN_00431660(param_1,param_2);
  if (iVar5 == 0) {
    switch(iVar4) {
    case 0:
      if (*(float *)(param_1 + 0xd068) <= 0.0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
        iVar4 = *(int *)(param_1 + 0xcde4);
        if (iVar4 == 0) {
          iVar4 = FUN_00489ff0(param_1,param_2);
          if (iVar4 != 0) {
            FUN_004fc0d0(iStack_5c,1,1);
          }
        }
        else {
          fStack_bc = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_b8 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_b4 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_260 = fStack_bc;
          afStack_25c[(uint)bVar7 * -2] = afStack_100[(uint)bVar7 * -2 + 0x12];
          afStack_25c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_100[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
          fStack_84 = SQRT(afStack_25c[1] * afStack_25c[1] +
                           fStack_260 * fStack_260 + afStack_25c[0] * afStack_25c[0]);
          fStack_78 = fStack_84;
          if (fStack_84 < 0x40600000) {
            FUN_00576250(&fStack_260);
            uStack_1c4 = afStack_1c0[2];
            afStack_1c0[(uint)bVar7 * -2] = afStack_1c0[(uint)bVar7 * -2 + 3];
            afStack_1c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_1c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            fStack_14 = (float)FUN_0040cfa0(afStack_1c0[0] - *(float *)(param_1 + 0x34));
            if (ABS(fStack_14) < (float)_DAT_005d9e44) {
              iVar4 = FUN_0040cea0(0,100);
              if (iVar4 < 0x32) {
                FUN_004fc0d0(iStack_5c,4,1);
              }
              else {
                FUN_004fc0d0(iStack_5c,5,1);
              }
              break;
            }
          }
          if (fStack_78 < *(float *)(param_1 + 0xcddc)) {
            if ((0.0 < *(float *)(param_1 + 0xd064)) || (iVar4 = FUN_0040cea0(0,100), iVar4 < 0x4c))
            {
              FUN_004fc0d0(param_1 + 0x158,2,1);
              *(uint *)(param_1 + 0xcde0) = 0;
            }
            else {
              *(uint *)(param_1 + 0xd060) = 0x40000000;
              FUN_004fc0d0(param_1 + 0x158,0xc,1);
              *(uint *)(param_1 + 0xd064) = 0x41500000;
              *(uint *)(param_1 + 0xcde0) = 0;
            }
          }
        }
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x144))(param_1,param_2);
      fVar2 = 0x40600000;
      iStack_64 = param_1 + 0x158;
      if (*(int *)(param_1 + 0xcde4) == 0) {
        iVar4 = FUN_00489ff0(param_1,param_2);
        if (iVar4 == 0) {
          FUN_004fc0d0(iStack_64,0,1);
        }
        else {
          FUN_004fc0d0(iStack_64,1,1);
        }
      }
      else {
        fStack_70 = 0x40600000;
        *(uint *)(param_1 + 0x24a4) = 0;
        afStack_110[2] = fVar2 + (float)_DAT_005d9e34;
        *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
        *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
        afStack_110[0] = 0.0;
        afStack_110[1] = 0.0;
        fStack_14 = afStack_110[2];
        uVar10 = (**(code **)(*(int *)(*(int *)(param_1 + 0xcde4) + 0x154) + 0xc4))
                           (*(int *)(param_1 + 0xcde4),afStack_178 + 0x1a,0x3f000000,0x3e32b8c2);
        iVar4 = FUN_0042b9e0(param_1,*(int *)(param_1 + 0xcde4) + 0x20,uVar10);
        if (-1 < iVar4) {
          iVar4 = *(int *)(param_1 + 0xcde4);
          fStack_218 = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
          fStack_214 = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
          fStack_210 = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
          fStack_14c = fStack_218;
          afStack_178[(uint)bVar7 * -2 + 0xc] = afStack_244[(uint)bVar7 * -2 + 0xc];
          afStack_178[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
               afStack_244[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
          fStack_60 = SQRT(fStack_144 * fStack_144 + fStack_14c * fStack_14c);
          uStack_148 = 0;
          fStack_68 = fStack_60;
          if (((_DAT_005e81b8 < fStack_60) && (fStack_60 < (float)_DAT_005d9e3c)) &&
             (iStack_6c != 2)) {
            *(uint *)(param_1 + 0xcde0) = 0;
            FUN_004fc0d0(iStack_64,2,1);
          }
          if ((fStack_68 <= fStack_70) && (*(float *)(param_1 + 0xcde0) <= 0.0)) {
            iVar4 = *(int *)(param_1 + 0xcde4);
            fStack_c8 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_c4 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_c0 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
            afStack_128[0] = fStack_c8;
            afStack_178[(uint)bVar7 * -2 + 0x15] = afStack_100[(uint)bVar7 * -2 + 0xf];
            afStack_178[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
                 afStack_100[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
            FUN_00576250(afStack_178 + 0x14);
            uStack_1dc = uStack_1a0;
            afStack_1d8[(uint)bVar7 * -2] = afStack_1c0[(uint)bVar7 * -2 + 9];
            afStack_1d8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_1c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
            fStack_14 = (float)FUN_0040cfa0(afStack_1d8[0] - *(float *)(param_1 + 0x34));
            if (ABS(fStack_14) < (float)_DAT_005d9e44) {
              iVar4 = FUN_0040cea0(0,100);
              if (iVar4 == 0) {
                uVar10 = 5;
              }
              else {
                uVar10 = 4;
              }
              FUN_004fc0d0(param_1 + 0x158,uVar10,1);
              *(uint *)(param_1 + 0xcde0) = 0x40000000;
            }
          }
          if (fStack_68 < (float)_DAT_005d9e3c) {
            if ((0.0 < *(float *)(param_1 + 0xd064)) || (iVar4 = FUN_0040cea0(0,100), iVar4 < 0x4c))
            {
              FUN_004fc0d0(param_1 + 0x158,2,1);
              *(uint *)(param_1 + 0xcde0) = 0;
            }
            else {
              *(uint *)(param_1 + 0xd060) = 0x40000000;
              FUN_004fc0d0(param_1 + 0x158,0xc,1);
              *(uint *)(param_1 + 0xd064) = 0x41500000;
            }
          }
          if ((float)_DAT_005d9e3c < fStack_68) {
            *(uint *)(param_1 + 0xd060) = 0x40000000;
            FUN_004fc0d0(param_1 + 0x158,0xc,1);
            *(uint *)(param_1 + 0xd064) = 0x41500000;
          }
        }
      }
      break;
    case 4:
    case 5:
      (**(code **)(*(int *)(*(int *)(param_1 + 0x25b0) + 0x154) + 0x78))
                (*(int *)(param_1 + 0x25b0),2);
      break;
    case 8:
      if ((*(int *)(param_1 + 0xcdd0) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        FUN_0054dbd0(iStack_5c,0);
        pfVar6 = afStack_100 + 0x17;
        afStack_a4[0] = (float)uStack_194;
        afStack_100[(uint)bVar7 * -2 + 0x18] = afStack_1c0[(uint)bVar7 * -2 + 0xc];
        afStack_100[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
             afStack_1c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
        FUN_00408b80(param_1,pfVar6);
        uVar10 = 0;
        afStack_1ac[0] = (float)uStack_200;
        afStack_1c0[(uint)bVar7 * -2 + 6] = afStack_244[(uint)bVar7 * -2 + 0x12];
        afStack_1c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
             afStack_244[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
        FUN_004cec40(0x01D22E44,afStack_1c0 + 5,uVar10);
        *(uint *)(param_1 + 0xcdd0) = 1;
      }
      break;
    case 9:
      if (*(int *)(param_1 + 0xd070) == 0) {
        uVar10 = FUN_0059d000(param_1);
        *(uint *)(param_1 + 0xd074) = uVar10;
        if (*0x02D0C1A0 == 0) {
          iVar4 = 0x01ED78C8 + *(int *)(0x01ED78C8 + 0x15aeb8) * 0x1a4;
          if (&uStack_278 != (uint *)(iVar4 + 0x104)) {
            uStack_278 = *(uint *)(iVar4 + 0x104);
            uStack_274 = *(uint *)(iVar4 + 0x108);
            uStack_270 = *(uint *)(iVar4 + 0x10c);
          }
          iVar4 = *(int *)(0x01ED78C8 + 0x15aeb8) * 0x1a4 + 0x01ED78C8;
          if (afStack_2b0 + 0xb != (float *)(iVar4 + 0x110)) {
            fStack_284 = *(float *)(iVar4 + 0x110);
            uStack_280 = *(uint *)(iVar4 + 0x114);
            uStack_27c = *(uint *)(iVar4 + 0x118);
          }
          FUN_0057d050(0x02D0C1A0,5);
          FUN_0057d1a0(0x02D0C1A0,&uStack_278,afStack_2b0 + 0xb);
        }
        else {
          FUN_0057d050(0x02D0C1A0,5);
        }
        *(uint *)(param_1 + 0xd070) = 1;
      }
      FUN_0053b440(0x01ED78C8,0x42c80000,0,0,0x3f800000);
      if (*(float *)(param_1 + 0xd060) <= 0.0) {
        FUN_004fc0d0(param_1 + 0x158,10,1);
        *(uint *)(param_1 + 0xd060) = 0x40000000;
      }
      else {
        *(float *)(param_1 + 0xd060) = *(float *)(param_1 + 0xd060) - param_2;
      }
      break;
    case 10:
      iStack_38 = 0;
      for (iStack_34 = 0; iStack_34 < *(int *)(0x01ED78C8 + 0x14d164); iStack_34 = iStack_34 + 1)
      {
        iVar4 = FUN_0040c840(*(uint *)(0x01ED78C8 + iStack_38 + 0x14d168),_DAT_02d0bcd8);
        if (iVar4 != 0) {
          iVar5 = FUN_005a3d00(iVar4,"CenterPoint");
          if (iVar5 == 0) {
            iStack_2c = FUN_0040c840(*(uint *)(param_1 + 0x25b0),_DAT_02d0c150);
            iStack_20 = iStack_2c;
            if (iVar4 != 0) {
              (**(code **)(*(int *)(iStack_2c + 0x154) + 0xe0))(iStack_2c);
              iVar4 = iStack_20;
              pfVar6 = afStack_178 + 2;
              afStack_178[2] = afStack_100[2];
              afStack_178[(uint)bVar7 * -2 + 3] = afStack_100[(uint)bVar7 * -2 + 3];
              afStack_178[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                   afStack_100[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
              FUN_00408b80(iVar4,pfVar6);
              fStack_140 = fStack_b0;
              afStack_178[(uint)bVar7 * -2 + 0xf] = afStack_100[(uint)bVar7 * -2 + 0x15];
              afStack_178[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
                   afStack_100[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
              if (&fStack_26c != afStack_178 + 0xe) {
                fStack_26c = fStack_140;
                fStack_268 = fStack_13c;
                uStack_264 = uStack_138;
              }
              (**(code **)(*(int *)(iStack_2c + 0x154) + 0xe0))(iStack_2c);
              afStack_230[0] = afStack_2b0[2];
              afStack_244[(uint)bVar7 * -2 + 6] = afStack_2b0[(uint)bVar7 * -2 + 3];
              afStack_244[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                   afStack_2b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
              FUN_00408b80(iStack_2c,afStack_244 + 5);
              fStack_11c = fStack_2b4;
              afStack_178[(uint)bVar7 * -2 + 0x18] = afStack_2b0[(uint)bVar7 * -2];
              afStack_178[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19] =
                   afStack_2b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
              if (afStack_1d8 + 2 != afStack_178 + 0x17) {
                afStack_1d8[2] = fStack_11c;
                afStack_1d8[3] = fStack_118;
                fStack_1c8 = fStack_114;
              }
              fStack_268 = fStack_268 + _DAT_005d9e28;
            }
          }
          else {
            iVar5 = FUN_005a4010(iVar4,"Platform");
            if ((iVar5 == 0) || (*(int *)(param_1 + 0xd074) == 0)) {
              iVar5 = FUN_005a4010(iVar4,"Bridge");
              if ((iVar5 != 0) && (*(int *)(param_1 + 0xd074) == 0)) {
                fStack_48 = (float)FUN_0040ce40(0xbf800000,0x3f800000);
                fStack_14 = fStack_48;
                afStack_25c[4] = (float)FUN_0040ce40(0xbf800000,0x3f800000);
                afStack_25c[2] = fStack_48;
                afStack_25c[3] = 0.0;
                if (afStack_2b0 + 8 != afStack_25c + 2) {
                  fStack_290 = fStack_48;
                  fStack_28c = 0.0;
                  fStack_288 = afStack_25c[4];
                }
                fStack_50 = SQRT(fStack_288 * fStack_288 +
                                 fStack_290 * fStack_290 + fStack_28c * fStack_28c);
                if (fStack_50 <= 0.0) {
                  fStack_28c = 0.0;
                  fStack_290 = 0.0;
                  fStack_288 = 0.0;
                }
                else {
                  fVar2 = 1.0 / fStack_50;
                  fStack_290 = fStack_290 * fVar2;
                  fStack_28c = fStack_28c * fVar2;
                  fStack_288 = fStack_288 * fVar2;
                }
                fStack_54 = afStack_25c[4];
                fStack_14 = afStack_25c[4];
                fStack_28 = (float)FUN_0040ce40(0,0x40a00000);
                fStack_290 = fStack_290 * fStack_28 + *(float *)(iVar4 + 0x20);
                fStack_28c = fStack_28c * fStack_28 + *(float *)(iVar4 + 0x24);
                fStack_288 = fStack_288 * fStack_28 + *(float *)(iVar4 + 0x28);
                if (afStack_1d8 + 2 != afStack_2b0 + 8) {
                  afStack_1d8[2] = fStack_290;
                  afStack_1d8[3] = fStack_28c;
                  fStack_1c8 = fStack_288;
                }
                fStack_14 = fStack_28;
                FUN_004a3bd0(0x01C73654,afStack_1d8 + 2,0x41f00000,1,0);
                iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
                fStack_248 = *(float *)(iVar5 + 0x20) - *(float *)(iVar4 + 0x20);
                afStack_244[0] = *(float *)(iVar5 + 0x24) - *(float *)(iVar4 + 0x24);
                afStack_244[1] = *(float *)(iVar5 + 0x28) - *(float *)(iVar4 + 0x28);
                fStack_158 = fStack_248;
                afStack_178[(uint)bVar7 * -2 + 9] = afStack_244[(uint)bVar7 * -2];
                afStack_178[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
                     afStack_244[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
                fStack_8c = fStack_150 * fStack_150 +
                            fStack_158 * fStack_158 + fStack_154 * fStack_154;
                fStack_88 = (float)(((int)fStack_8c >> 1) + _DAT_01d1a0a4);
                if (fStack_88 <= (float)_DAT_005d9e54) {
                  FUN_0042abb0(auStack_32c);
                  uStack_328 = 0x41c80000;
                  uStack_2fc = 0x6a;
                  iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
                  (**(code **)(*(int *)(iVar4 + 0x154) + 0x108))(iVar4,auStack_32c);
                }
              }
            }
            else {
              fStack_4c = (float)FUN_0040ce40(0xbf800000,0x3f800000);
              fStack_14 = fStack_4c;
              afStack_1e8[2] = (float)FUN_0040ce40(0xbf800000,0x3f800000);
              afStack_1e8[0] = fStack_4c;
              afStack_1e8[1] = 0.0;
              if (afStack_1c0 + 0xe != afStack_244 + 0x17) {
                fStack_188 = fStack_4c;
                fStack_184 = 0.0;
                fStack_180 = afStack_1e8[2];
              }
              fStack_40 = SQRT(fStack_180 * fStack_180 +
                               fStack_188 * fStack_188 + fStack_184 * fStack_184);
              if (fStack_40 <= 0.0) {
                fStack_184 = 0.0;
                fStack_188 = 0.0;
                fStack_180 = 0.0;
              }
              else {
                fVar2 = 1.0 / fStack_40;
                fStack_188 = fStack_188 * fVar2;
                fStack_184 = fStack_184 * fVar2;
                fStack_180 = fStack_180 * fVar2;
              }
              fStack_44 = afStack_1e8[2];
              fStack_14 = afStack_1e8[2];
              fStack_24 = (float)FUN_0040ce40(0,0x40c00000);
              fStack_188 = fStack_188 * fStack_24 + *(float *)(iVar4 + 0x20);
              fStack_184 = fStack_184 * fStack_24 + *(float *)(iVar4 + 0x24);
              fStack_180 = fStack_180 * fStack_24 + *(float *)(iVar4 + 0x28);
              if (afStack_1d8 + 2 != afStack_1c0 + 0xe) {
                afStack_1d8[2] = fStack_188;
                afStack_1d8[3] = fStack_184;
                fStack_1c8 = fStack_180;
              }
              fStack_14 = fStack_24;
              FUN_004a3bd0(0x01C73654,afStack_1d8 + 2,0x41f00000,1,0);
              iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
              afStack_244[2] = *(float *)(iVar5 + 0x20) - *(float *)(iVar4 + 0x20);
              afStack_244[3] = *(float *)(iVar5 + 0x24) - *(float *)(iVar4 + 0x24);
              fStack_234 = *(float *)(iVar5 + 0x28) - *(float *)(iVar4 + 0x28);
              fStack_1f4 = afStack_244[2];
              afStack_244[(uint)bVar7 * -2 + 0x15] = afStack_244[(uint)bVar7 * -2 + 3];
              afStack_244[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
                   afStack_244[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
              fStack_1c = fStack_1ec * fStack_1ec +
                          fStack_1f4 * fStack_1f4 + fStack_1f0 * fStack_1f0;
              fStack_18 = (float)(((int)fStack_1c >> 1) + _DAT_01d1a0a4);
              if (fStack_18 <= (float)_DAT_005d9e5c) {
                FUN_0042abb0(auStack_2f0);
                uStack_2ec = 0x41c80000;
                uStack_2c0 = 0x6a;
                iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
                (**(code **)(*(int *)(iVar4 + 0x154) + 0x108))(iVar4,auStack_2f0);
              }
            }
          }
        }
        iStack_38 = iStack_38 + 4;
      }
      fStack_14 = (float)FUN_004fc930(param_1 + 0x158);
      piVar3 = 0x02D0C1A0;
      if ((float)_DAT_005d9e4c < fStack_14) {
        *(uint *)(param_1 + 0xd070) = 0;
        FUN_0057d050(piVar3,0);
      }
      break;
    case 0xb:
      fStack_14 = (float)FUN_004fc930(iStack_5c);
      if (fStack_14 < (float)_DAT_005d9e2c) {
        uVar12 = 0xffff;
        uVar11 = 0x3e800000;
        pfVar6 = (float *)(param_1 + 0x24 + (uint)bVar7 * -8);
        fStack_29c = *(float *)(param_1 + 0x20);
        afStack_2b0[(uint)bVar7 * -2 + 6] = *pfVar6;
        afStack_2b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] = pfVar6[(uint)bVar7 * -2 + 1];
        uVar9 = 3;
        uVar8 = 0x40700000;
        uVar10 = 0x3f400000;
        pfVar6 = (float *)(param_1 + 0x24 + (uint)bVar7 * -8);
        fStack_17c = *(float *)(param_1 + 0x20);
        afStack_178[(uint)bVar7 * -2] = *pfVar6;
        afStack_178[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] = pfVar6[(uint)bVar7 * -2 + 1];
        afStack_178[0] = afStack_178[0] + _DAT_005d9e24;
        fStack_298 = fStack_298 + _DAT_005d9e28;
        FUN_004a3c50(0x01C73654,afStack_1c0 + 0x11,afStack_2b0 + 5,0,uVar10,uVar8,uVar9,uVar11,
                     uVar12);
      }
      *(uint *)(param_1 + 0xd06c) = 1;
      *(uint *)(param_1 + 0xd068) = 0x3e800000;
      break;
    case 0xc:
      fStack_14 = (float)FUN_004fc930(iStack_5c);
      if (fStack_14 < (float)_DAT_005d9e1c) {
        uVar12 = 0xffff;
        uVar11 = 0x3e800000;
        pfVar6 = (float *)(param_1 + 0x24 + (uint)bVar7 * -8);
        fStack_164 = *(float *)(param_1 + 0x20);
        afStack_178[(uint)bVar7 * -2 + 6] = *pfVar6;
        afStack_178[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] = pfVar6[(uint)bVar7 * -2 + 1];
        uVar9 = 3;
        uVar8 = 0x40700000;
        uVar10 = 0x3f400000;
        pfVar6 = (float *)(param_1 + 0x24 + (uint)bVar7 * -8);
        fStack_d4 = *(float *)(param_1 + 0x20);
        afStack_100[(uint)bVar7 * -2 + 0xc] = *pfVar6;
        afStack_100[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] = pfVar6[(uint)bVar7 * -2 + 1];
        fStack_160 = fStack_160 + _DAT_005d9e28;
        fStack_d0 = fStack_d0 + _DAT_005d9e24;
        FUN_004a3c50(0x01C73654,afStack_100 + 0xb,afStack_178 + 5,0,uVar10,uVar8,uVar9,uVar11,
                     uVar12);
      }
      *(uint *)(param_1 + 0xd06c) = 0;
      *(uint *)(param_1 + 0xd068) = 0x3e800000;
    }
    goto switchD_0059ceee_caseD_3;
  }
  uVar1 = *(uint *)(param_1 + 0x273c);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0059ba56:
      uVar10 = 1;
    }
    else {
LAB_0059bf31:
      uVar10 = 0;
    }
    FUN_004fc0d0(param_1 + 0x158,uVar10,1);
  }
  else {
    if (uVar1 < 3) goto LAB_0059ba56;
    if (uVar1 != 3) goto LAB_0059bf31;
    FUN_004fc0d0(param_1 + 0x158,0,1);
    FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
switchD_0059ceee_caseD_3:
  if (0.0 < *(float *)(param_1 + 0xcde0)) {
    *(float *)(param_1 + 0xcde0) = *(float *)(param_1 + 0xcde0) - param_2;
  }
  if (0.0 < *(float *)(param_1 + 0xd064)) {
    *(float *)(param_1 + 0xd064) = *(float *)(param_1 + 0xd064) - param_2;
  }
  dStack_98 = (double)*(float *)(param_1 + 0xd068);
  if (0.0 < dStack_98) {
    if (((*(int *)(param_1 + 0xd06c) != 0) || (dStack_98 <= 0.0)) ||
       (fStack_74 = *(float *)(param_1 + 0xd068) - param_2, 0.0 < fStack_74)) {
      *(float *)(param_1 + 0xd068) = *(float *)(param_1 + 0xd068) - param_2;
    }
    else {
      iStack_3c = 0;
      *(float *)(param_1 + 0xd068) = fStack_74;
      for (iStack_30 = 0; iStack_30 < *(int *)(0x01ED78C8 + 0x14d164); iStack_30 = iStack_30 + 1)
      {
        iVar4 = FUN_0040c840(*(uint *)(0x01ED78C8 + iStack_3c + 0x14d168),_DAT_02d0bcd8);
        if ((iVar4 != 0) && (iVar5 = FUN_005a3d00(iVar4,"CenterPoint"), iVar5 == 0)) {
          FUN_004a3c50(0x01C73654,(uint *)(param_1 + 0x20),(uint *)(iVar4 + 0x20),0,
                       0x3f400000,0x3f400000,3,0x3e800000,0xffff);
          *(uint *)(param_1 + 0x20) = *(uint *)(iVar4 + 0x20);
          *(uint *)(param_1 + 0x24) = *(uint *)(iVar4 + 0x24);
          *(uint *)(param_1 + 0x28) = *(uint *)(iVar4 + 0x28);
          *(uint *)(param_1 + 0x2c) = *(uint *)(iVar4 + 0x2c);
        }
        iStack_3c = iStack_3c + 4;
      }
      FUN_004fc0d0(param_1 + 0x158,0xb,1);
    }
  }
  iVar4 = FUN_0042ccf0(param_1);
  if (iVar4 != 0) {
    if ((iStack_6c == 8) || (iStack_6c == 7)) {
      FUN_0042c1e0(param_1,param_2);
    }
    fStack_e0 = *(float *)(param_1 + 0x2518) * param_2;
    fStack_dc = *(float *)(param_1 + 0x251c) * param_2;
    fStack_d8 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_224 = fStack_e0;
    afStack_244[(uint)bVar7 * -2 + 9] = afStack_100[(uint)bVar7 * -2 + 9];
    afStack_244[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         afStack_100[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
    fStack_ec = fStack_224 + *(float *)(param_1 + 0x250c);
    fStack_e8 = fStack_220 + *(float *)(param_1 + 0x2510);
    fStack_e4 = fStack_21c + *(float *)(param_1 + 0x2514);
    fStack_104 = fStack_ec;
    afStack_100[(uint)bVar7 * -2] = afStack_100[(uint)bVar7 * -2 + 6];
    afStack_100[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_100[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    fStack_134 = fStack_104 + *(float *)(param_1 + 0x249c);
    fStack_130 = afStack_100[0] + *(float *)(param_1 + 0x24a0);
    fStack_12c = afStack_100[1] + *(float *)(param_1 + 0x24a4);
    afStack_20c[0] = fStack_134;
    afStack_244[(uint)bVar7 * -2 + 0xf] = afStack_178[(uint)bVar7 * -2 + 0x12];
    afStack_244[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
         afStack_178[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    FUN_0042c230(param_1,afStack_244 + 0xe);
  }
  FUN_0042cd30(param_1);
  FUN_0054c130(param_1 + 0x158);
  FUN_00433350(param_1,param_2);
  return;
}
