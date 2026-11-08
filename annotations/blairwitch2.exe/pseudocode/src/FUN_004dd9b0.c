// Name: FUN_004dd9b0
// Address: 004dd9b0
// Address Range: [[004dd9b0, 004dee69]]
// Convention: unknown
// Signature: void FUN_004dd9b0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dd9b0(float *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint extraout_ECX;
  int iVar8;
  char *pcVar9;
  byte bVar10;
  float10 fVar11;
  float afStackY_1178 [530];
  byte *puVar12;
  char *pcVar13;
  ulonglong uVar14;
  float local_908;
  float local_904;
  char local_900 [256];
  byte local_800 [256];
  byte local_700 [256];
  byte local_600 [256];
  byte local_500 [256];
  byte local_400 [256];
  byte local_300 [256];
  byte local_200 [4];
  uint local_1fc;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  uint local_1dc;
  uint local_1d8;
  uint local_1d4;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint local_1bc;
  byte local_1b8 [40];
  float local_190;
  float local_18c [5];
  float local_178;
  float local_16c;
  float local_168;
  uint local_164;
  float local_160;
  float local_15c;
  uint local_158;
  float local_154;
  float local_148;
  float local_144;
  uint local_140;
  uint local_13c;
  float afStack_138 [4];
  uint local_128;
  float local_124;
  float afStack_120 [5];
  float local_10c;
  float local_108;
  uint local_104;
  uint local_100;
  float afStack_fc [5];
  uint local_e8;
  float local_dc;
  float local_d8;
  uint local_d4;
  float local_d0;
  float afStack_cc [4];
  uint local_bc;
  float local_b8;
  float local_b4 [5];
  int local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  float local_74;
  float local_70;
  float local_6c;
  int local_68;
  int local_64;
  float local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  int local_18;
  
  bVar10 = 0;
  if (*(int *)(0x01CB6900 + 0x244) != 0) {
    return;
  }
  if (param_1[1] != *(float *)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
    return;
  }
  if (DAT_006141bc != _DAT_01d02f40) {
    FUN_004da990();
  }
  local_94 = _DAT_01c37788;
  local_30 = _DAT_01511cc4;
  _DAT_01c37788 = 0;
  if ((DAT_006141bc < 0x180) && (param_1[0x115] == 0.0)) {
    local_30 = _DAT_01511ccc;
  }
  if ((param_1[(int)param_1[0x11a] + 0x184] == 0.0) || (param_1[0xd0] <= 0.0)) goto LAB_004ddd00;
  local_68 = 0x000000D0;
  local_5c = 0x10;
  local_88 = 0x70;
  local_78 = 0x00000060;
  iVar8 = 0x24;
  if ((DAT_006141bc < 0x180) && (param_1[0x115] == 0.0)) {
    local_68 = 0x000000D0 / 2;
    local_78 = 0x00000060 / 2;
    iVar8 = 0x12;
    local_88 = 0x28;
    local_5c = 8;
  }
  local_8c = 0xffff;
  if (param_1[0xd0] < 1.0) {
    fVar11 = (float10)param_1[0xd0] * (float10)_DAT_005dbb06;
    FUN_005b7ff0();
    local_8c = (int)ROUND(fVar11);
  }
  iVar3 = FUN_0040c8f0(param_1[(int)param_1[0x11a] + 0x184],_DAT_01d03560);
  if (iVar3 == 0) {
    iVar3 = FUN_004dd0a0(param_1,param_1[(int)param_1[0x11a] + 0x184],3);
    if ((iVar3 == 0) &&
       (iVar3 = FUN_004dd0a0(param_1,param_1[(int)param_1[0x11a] + 0x184],6), iVar3 == 0)) {
      local_90 = DAT_006141bc - iVar8;
      iVar8 = DAT_006141b8 - iVar8;
      iVar6 = 0;
      iVar3 = FUN_0040c840(param_1[(int)param_1[0x11a] + 0x184],"CTommyGun");
      if (iVar3 != 0) {
        iVar6 = 0x1d02e44;
      }
      iVar3 = FUN_0040c840(param_1[(int)param_1[0x11a] + 0x184],"CShotgun");
      if (iVar3 != 0) {
        iVar6 = 0x1d02e94;
      }
      iVar3 = FUN_0040c840(param_1[(int)param_1[0x11a] + 0x184],"CElephantGun");
      if (iVar3 != 0) {
        iVar6 = 0x1d02e94;
      }
      iVar3 = FUN_0040c840(param_1[(int)param_1[0x11a] + 0x184],&DAT_005dbaaf);
      if (iVar3 != 0) {
        if (*(int *)((int)param_1[(int)param_1[0x11a] + 0x184] + 0x6c8) == 0) {
          iVar6 = 0x1d02e58;
        }
        if (*(int *)((int)param_1[(int)param_1[0x11a] + 0x184] + 0x6c8) == 3) {
          iVar6 = 0x1d02e6c;
        }
        if (*(int *)((int)param_1[(int)param_1[0x11a] + 0x184] + 0x6c8) == 7) {
          iVar6 = 0x1d02e80;
        }
        if (*(int *)((int)param_1[(int)param_1[0x11a] + 0x184] + 0x6c8) == 8) {
          iVar6 = 0x1d02ea8;
        }
        if (*(int *)((int)param_1[(int)param_1[0x11a] + 0x184] + 0x6c8) == 1) {
          iVar6 = 0x1d02ebc;
        }
      }
      if (iVar6 != 0) {
        FUN_0040d900(iVar6,iVar8,local_90,local_8c);
      }
      if ((param_1[0xd4] <= 0.0) || (param_1[0x115] != 0.0)) {
        uVar14 = CONCAT44(*(uint *)((int)param_1[(int)param_1[0x11a] + 0x184] + 0x6c4),
                          &DAT_005dbab4);
      }
      else {
        uVar14 = CONCAT44(*(uint *)((int)param_1[(int)param_1[0x11a] + 0x184] + 0x6c4),
                          "Bullets %d");
      }
      FUN_005b7790(local_300,uVar14);
      iVar8 = FUN_004ab560(local_30,0x58);
      iVar3 = FUN_004aaf00(local_30,local_300);
      iVar8 = (DAT_006141bc - local_5c) - iVar8;
      iVar3 = (DAT_006141b8 - local_5c) - iVar3;
      puVar12 = local_300;
      goto LAB_004ddb97;
    }
  }
  else {
    fVar11 = (float10)*(float *)(iVar3 + 0x6e0) * (float10)_DAT_005dbb0a;
    FUN_005b7ff0();
    local_1c = (float)(int)ROUND(fVar11);
    FUN_005b7790(local_700,&DAT_005dba8a,local_1c);
    iVar8 = FUN_004ab560(local_30,0x58);
    iVar3 = FUN_004aaf00(local_30,local_700);
    iVar8 = (DAT_006141bc - local_5c) - iVar8;
    iVar3 = (DAT_006141b8 - local_5c) - iVar3;
    puVar12 = local_700;
LAB_004ddb97:
    FUN_004a8df0(local_30,puVar12,iVar3,iVar8,0xf8);
  }
  if (param_1[0x115] == 0.0) goto LAB_004ddd00;
  iVar8 = FUN_004dd0a0(param_1,param_1[(int)param_1[0x11a] + 0x184],3);
  if (iVar8 == 0) {
    iVar8 = FUN_004dd0a0(param_1,param_1[(int)param_1[0x11a] + 0x184],0);
    if ((iVar8 == 0) &&
       (iVar8 = FUN_004dd0a0(param_1,param_1[(int)param_1[0x11a] + 0x184],1), iVar8 == 0)) {
      uVar4 = FUN_004d9f80();
      uVar5 = FUN_004d9f10(param_1[(int)param_1[0x11a] + 0x184],uVar4);
      uVar14 = CONCAT44(uVar4,uVar5);
      pcVar13 = "%s\n\n%s";
      goto LAB_004ddc00;
    }
    uVar4 = FUN_004d9f10();
    uVar4 = FUN_004d9f80(param_1[(int)param_1[0x11a] + 0x184],uVar4);
    uVar4 = FUN_004d9f10(param_1[(int)param_1[0x11a] + 0x184],uVar4);
    FUN_005b7790(local_900,"%s\n\n%s %s",uVar4);
    pcVar7 = (char *)FUN_0050fe80();
    iVar8 = -1;
    pcVar13 = local_900;
    do {
      pcVar9 = pcVar13;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar9 = pcVar13 + (uint)bVar10 * -2 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
  }
  else {
    uVar4 = FUN_004d9f80();
    uVar5 = FUN_004d9f10(param_1[(int)param_1[0x11a] + 0x184],uVar4);
    uVar14 = CONCAT44(uVar4,uVar5);
    pcVar13 = "%s\n\n%s";
LAB_004ddc00:
    FUN_005b7790(local_900,pcVar13,uVar14);
  }
  local_40 = local_30;
  iVar8 = FUN_004ab2b0(local_30,local_900,0x1cee3b0,10,0x100,local_68 - local_88);
  local_4c = iVar8;
  local_58 = FUN_004ab560(local_30,0x58);
  iVar3 = (DAT_006141bc - local_78) + local_5c;
  local_50 = local_5c + (DAT_006141b8 - local_68);
  local_20 = 0;
  if (0 < iVar8) {
    iVar8 = 0x1cee3b0;
    do {
      FUN_004a8df0(local_40,iVar8,local_50,iVar3,0xf8,0);
      iVar8 = iVar8 + 0x100;
      local_20 = local_20 + 1;
      iVar3 = iVar3 + local_58;
    } while (local_20 < local_4c);
  }
LAB_004ddd00:
  if ((param_1[(int)param_1[0x11a] + 0x17f] != 0.0) && (0.0 < param_1[0xd1])) {
    iVar3 = 0x10;
    local_84 = 0x70;
    local_64 = 0x000000D0;
    iVar8 = 0x00000060;
    if ((DAT_006141bc < 0x180) && (param_1[0x115] == 0.0)) {
      local_64 = 0x000000D0 / 2;
      iVar8 = 0x00000060 / 2;
      iVar3 = 8;
      local_84 = 0x28;
    }
    iVar6 = FUN_0040c8f0(param_1[(int)param_1[0x11a] + 0x17f],_DAT_01ceded8);
    if (iVar6 != 0) {
      FUN_005b7790(local_400,"%d x%3.0f%%",*(uint *)(iVar6 + 0x430),
                   (double)*(float *)(iVar6 + 0x434));
      local_1c = (float)FUN_004ab560(local_30,0x58);
      iVar6 = FUN_004aaf00(local_30,local_400);
      FUN_004a8df0(local_30,local_400,(DAT_006141b8 - iVar3) - iVar6,
                   (DAT_006141bc - iVar3) - (int)local_1c,0xf8,0);
    }
    iVar6 = FUN_0040c8f0(param_1[(int)param_1[0x11a] + 0x17f],DAT_007bc3a4);
    if (iVar6 != 0) {
      FUN_005b7790(local_500,"%d x 6",*(uint *)(iVar6 + 0x470));
      local_1c = (float)FUN_004ab560(local_30,0x58);
      iVar6 = FUN_004aaf00(local_30,local_500);
      FUN_004a8df0(local_30,local_500,(DAT_006141b8 - iVar3) - iVar6,
                   (DAT_006141bc - iVar3) - (int)local_1c,0xf8,0);
    }
    iVar6 = FUN_0040c8f0(param_1[(int)param_1[0x11a] + 0x17f],_DAT_01c3de74);
    if (iVar6 != 0) {
      uVar4 = FUN_004d9f10();
      FUN_005b7790(local_600,&DAT_005dbafa,uVar4);
      local_1c = (float)FUN_004ab560(local_30,0x58);
      iVar6 = FUN_004aaf00(local_30,local_600);
      FUN_004a8df0(local_30,local_600,(DAT_006141b8 - iVar3) - iVar6,
                   (DAT_006141bc - iVar3) - (int)local_1c,0xf8,0);
    }
    if (param_1[0x115] != 0.0) {
      uVar4 = FUN_004d9f80();
      uVar4 = FUN_004d9f10(param_1[(int)param_1[0x11a] + 0x17f],uVar4);
      FUN_005b7790(local_800,"%s\n\n%s",uVar4);
      local_44 = local_30;
      local_48 = FUN_004ab2b0(local_30,local_800,0x1ceedb0,10,0x100,local_64 - local_84);
      local_1c = (float)local_48;
      local_54 = FUN_004ab560(local_30,0x58);
      iVar8 = (DAT_006141bc - iVar8) + iVar3;
      local_38 = (DAT_006141b8 - local_64) + iVar3;
      local_24 = 0;
      if (0 < (int)local_1c) {
        iVar3 = 0x1ceedb0;
        do {
          FUN_004a8df0(local_44,iVar3,local_38,iVar8,0xf8,0);
          iVar3 = iVar3 + 0x100;
          local_24 = local_24 + 1;
          iVar8 = iVar8 + local_54;
        } while (local_24 < local_48);
      }
    }
  }
  if ((*(int *)(0x01CB6900 + 0x264) != 0) || (*(int *)(0x01CB6900 + 0x25c) != 0)) {
    local_a0 = DAT_006141bc + -0x21;
    local_1c = (float)(DAT_006141bc + -6);
    fVar11 = (float10)(int)local_1c +
             (float10)(local_a0 - (int)local_1c) * (float10)*param_1 * (float10)_DAT_005dbb12;
    FUN_005b7ff0(0x10,local_1c,2);
    iVar8 = DAT_006141bc;
    local_a0 = (int)ROUND(fVar11);
    FUN_004031c0(6,local_a0);
    FUN_0040d900(0x1d02e08,4,iVar8 + -0x24,0xffff);
  }
  if ((0.0 < param_1[0xd1]) || (0.0 < param_1[0xd2])) {
    local_908 = param_1[0xd2];
    if (local_908 < param_1[0xd1]) {
      local_908 = param_1[0xd1];
    }
    local_80 = 0xffff;
    if (local_908 < 1.0) {
      fVar11 = (float10)local_908 * (float10)_DAT_005dbb06;
      FUN_005b7ff0();
      local_80 = (int)ROUND(fVar11);
    }
    local_904 = *(float *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x25a8) * (float)_DAT_005dbb12;
    if (local_904 < 0.0) {
      local_904 = 0.0;
    }
    if (1.0 < local_904) {
      local_904 = 1.0;
    }
    local_1c = 8.82818e-44;
    iVar8 = 0x1b;
    if (DAT_006141bc < 0x180) {
      local_1c = 4.34403e-44;
      iVar8 = 0xd;
    }
    local_9c = (DAT_006141b8 + -4) - iVar8;
    fVar11 = (float10)(int)local_1c - (float10)(int)local_1c * (float10)local_904;
    uVar4 = FUN_005b7ff0();
    local_98 = (int)ROUND(fVar11);
    FUN_0040dab0(0x1d02e1c,local_9c,local_98 + 4,0,local_98,iVar8 + -1,extraout_ECX);
    FUN_0040d900(0x1d02e30,local_9c,4,uVar4);
  }
  fVar1 = param_1[0xd3];
  if (0.0 < fVar1) {
    local_7c = 0xffff;
    if (fVar1 < 1.0) {
      fVar11 = (float10)fVar1 * (float10)_DAT_005dbb1a;
      FUN_005b7ff0();
      local_7c = (int)ROUND(fVar11);
    }
    FUN_00406da0();
    local_2c = _DAT_01511cc4;
    iVar8 = 0x00000060;
    if (DAT_006141bc < 0x180) {
      iVar8 = 0x00000060 / 2;
      local_2c = _DAT_01511ccc;
    }
    iVar8 = FUN_004ab2b0(local_2c,param_1 + 0xd5,0x1cef7b0,10,0x100,(DAT_006141b8 - iVar8) + -4);
    local_34 = iVar8;
    local_3c = FUN_004ab560(local_2c,0x58);
    iVar8 = (DAT_006141bc + -4) - local_3c * iVar8;
    if (((_DAT_01511ccc != local_2c) || (_DAT_01d63250 == 0)) && (iVar3 = 0, 0 < local_34)) {
      local_28 = 0x1cef7b0;
      do {
        FUN_004a8df0(local_2c,local_28,4,iVar8,0xf8,0);
        iVar3 = iVar3 + 1;
        local_28 = local_28 + 0x100;
        iVar8 = iVar8 + local_3c;
      } while (iVar3 < local_34);
    }
  }
  iVar8 = _DAT_01d02edc;
  if (param_1[2] != 0.0) {
    iVar3 = DAT_006141bc + -2;
    iVar6 = iVar3 - _DAT_01d02ee0;
    FUN_0040d900(0x1d02ed0,2,iVar6,0xffff);
    fVar1 = (float)_DAT_005dbb22;
    local_18 = iVar3 + iVar6;
    _DAT_01c37788 = 0;
    local_18c[2] = 0.0;
    local_18c[3] = 0.0;
    local_6c = (float)iVar8 * fVar1;
    local_1c = *(float *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x34) -
               *(float *)(0x01E661B8 + 0x15acbc);
    local_70 = (float)(iVar8 + 4) * fVar1;
    local_18c[4] = local_1c;
    local_60 = (float)(iVar3 - iVar6) * fVar1;
    local_74 = (float)(iVar3 + iVar6) * fVar1;
    uVar14 = CONCAT44(local_b4 + 2,local_1b8);
    local_b4[2] = 0.0;
    local_b4[(uint)bVar10 * -2 + 3] = local_18c[(uint)bVar10 * -2 + 3];
    local_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         local_18c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    FUN_00449280(uVar14);
    FUN_004e8730();
    afStack_138[3] = -local_60;
    local_128 = 0;
    afStack_138[2] = -local_6c;
    local_1c = afStack_138[3];
    FUN_00449530(local_1b8,afStack_138 + 2);
    local_160 = local_d0;
    local_18c[(uint)bVar10 * -2 + 0xc] = afStack_cc[(uint)bVar10 * -2];
    local_18c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
         afStack_cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    if (afStack_120 + 5 != local_18c + 0xb) {
      local_10c = local_160;
      local_108 = local_15c;
      local_104 = local_158;
    }
    FUN_004d9ff0(local_70 + local_10c,local_74 + local_108);
    local_124 = (float)local_e8;
    afStack_120[(uint)bVar10 * -2] = afStack_fc[(uint)bVar10 * -2 + 6];
    afStack_120[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_fc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    FUN_0055d723(*DAT_0060b280,afStack_138 + 5);
    local_d8 = -local_60;
    local_dc = local_6c;
    local_d4 = 0;
    local_1c = local_d8;
    FUN_00449530(local_1b8,afStack_fc + 8);
    local_b8 = local_154;
    local_b4[(uint)bVar10 * -2] = local_18c[(uint)bVar10 * -2 + 0xf];
    local_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         local_18c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
    if (afStack_120 + 5 != afStack_cc + 5) {
      local_10c = local_b8;
      local_108 = local_b4[0];
      local_104 = local_b4[1];
    }
    FUN_004d9ff0(local_70 + local_10c,local_74 + local_108);
    local_124 = afStack_fc[2];
    afStack_120[(uint)bVar10 * -2] = afStack_fc[(uint)bVar10 * -2 + 3];
    afStack_120[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_fc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    FUN_0055d723(*DAT_0060b280 + 0x30,afStack_138 + 5);
    local_148 = local_6c;
    local_144 = local_60;
    local_140 = 0;
    FUN_00449530(local_1b8,local_18c + 0x11);
    local_190 = afStack_120[2];
    local_18c[(uint)bVar10 * -2] = afStack_120[(uint)bVar10 * -2 + 3];
    local_18c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_120[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    if (afStack_120 + 5 != &local_190) {
      local_10c = local_190;
      local_108 = local_18c[0];
      local_104 = local_18c[1];
    }
    FUN_004d9ff0(local_70 + local_10c,local_74 + local_108);
    local_124 = (float)local_100;
    afStack_120[(uint)bVar10 * -2] = afStack_fc[(uint)bVar10 * -2];
    afStack_120[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_fc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    FUN_0055d723(*DAT_0060b280 + 0x60,afStack_138 + 5);
    afStack_cc[3] = local_60;
    afStack_cc[2] = -local_6c;
    local_bc = 0;
    FUN_00449530(local_1b8,afStack_cc + 2);
    local_16c = local_178;
    local_18c[(uint)bVar10 * -2 + 9] = local_18c[(uint)bVar10 * -2 + 6];
    local_18c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
         local_18c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    if (afStack_120 + 5 != local_18c + 8) {
      local_10c = local_16c;
      local_108 = local_168;
      local_104 = local_164;
    }
    FUN_004d9ff0(local_70 + local_10c,local_74 + local_108);
    local_124 = (float)local_13c;
    afStack_120[(uint)bVar10 * -2] = afStack_138[(uint)bVar10 * -2];
    afStack_120[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_138[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    FUN_0055d723(*DAT_0060b280 + 0x90,afStack_138 + 5);
    local_1fc = 4;
    local_1e8 = 0;
    local_1e4 = 0;
    local_1e0 = 0;
    local_1dc = 1;
    local_1d8 = 0x1000000;
    local_1d4 = 0;
    local_1cc = 0x1000000;
    local_1c8 = 0x1000000;
    local_1d0 = 2;
    local_1bc = 0x1000000;
    local_1c4 = 3;
    local_1c0 = 0;
    FUN_0046b880(DAT_0060b280,0);
    FUN_0046b870(DAT_0060b280,0);
    FUN_0046b8e0(DAT_0060b280,0xffff);
    FUN_0046ca00(DAT_0060b280,0x1d02ee4);
    FUN_00469d00(DAT_0060b280,local_200,0x23);
    FUN_0046b870(DAT_0060b280,1);
  }
  _DAT_01c37788 = local_94;
  return;
}
