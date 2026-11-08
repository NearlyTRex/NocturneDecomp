// Name: FUN_004fae10
// Address: 004fae10
// Address Range: [[004fae10, 004fc23d]]
// Convention: unknown
// Signature: void FUN_004fae10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fae10(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  byte bVar11;
  float10 fVar12;
  float afStackY_1158 [530];
  char *pcVar13;
  ulonglong uVar14;
  float local_8e8;
  float local_8e4;
  byte local_8e0 [256];
  byte local_7e0 [256];
  byte local_6e0 [256];
  byte local_5e0 [256];
  byte local_4e0 [256];
  byte local_3e0 [256];
  char local_2e0 [256];
  byte local_1e0 [4];
  uint local_1dc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint local_1bc;
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  byte local_198 [40];
  uint local_170;
  float afStack_16c [4];
  uint local_15c;
  float local_158;
  float local_14c;
  float local_148;
  uint local_144;
  float local_140 [3];
  uint local_134;
  float local_128;
  float local_124;
  uint local_120;
  uint local_11c;
  float afStack_118 [5];
  float local_104;
  float local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  float local_f0;
  float local_ec;
  float local_e0;
  float local_dc;
  uint local_d8;
  float local_d4 [3];
  float local_c8;
  float local_bc;
  float local_b8;
  uint local_b4;
  float local_b0;
  float local_ac [5];
  float local_98;
  float local_94;
  uint local_90;
  float local_8c;
  float local_88;
  uint local_84;
  int local_80;
  int local_7c;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  float local_5c;
  float local_58;
  int local_54;
  float local_50;
  float local_4c;
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
  int local_1c;
  int local_18;
  float local_14;
  
  bVar11 = 0;
  if (*(int *)(0x01CCF390 + 0x244) != 0) {
    return;
  }
  if (*(int *)(param_1 + 4) != *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
    return;
  }
  if (*(int *)(0x01CC8004 + 0x40) != 0) {
    *(uint *)(param_1 + 0x344) = 0;
    *(uint *)(param_1 + 0x34c) = 0;
    *(uint *)(param_1 + 0x350) = 0;
    *(uint *)(param_1 + 0x340) = 0;
  }
  if (DAT_0061b49c != _DAT_01d1bc5c) {
    FUN_004f70e0();
  }
  local_78 = _DAT_01c50948;
  local_1c = _DAT_0152d248;
  _DAT_01c50948 = 0;
  if ((DAT_0061b49c < 0x180) && (*(int *)(param_1 + 0x454) == 0)) {
    local_1c = _DAT_0152d250;
  }
  if ((*(int *)(param_1 + 0x338) == 0) || (*(float *)(param_1 + 0x340) <= 0.0)) goto LAB_004fb230;
  iVar9 = 0x30;
  local_54 = 0x000000D0;
  local_48 = 0x10;
  local_70 = 0x70;
  local_60 = 0x00000060;
  iVar8 = 0x24;
  if ((DAT_0061b49c < 0x180) && (*(int *)(param_1 + 0x454) == 0)) {
    local_54 = 0x000000D0 / 2;
    local_60 = 0x00000060 / 2;
    iVar9 = 0x18;
    iVar8 = 0x12;
    local_70 = 0x28;
    local_48 = 8;
  }
  local_64 = 0xffff;
  if (*(float *)(param_1 + 0x340) < 1.0) {
    fVar12 = (float10)*(float *)(param_1 + 0x340) * (float10)_DAT_005e6914;
    FUN_005c03a0();
    local_64 = (int)ROUND(fVar12);
  }
  iVar3 = FUN_0040c600(*(uint *)(param_1 + 0x338),_DAT_01d1c27c);
  if (iVar3 != 0) {
    fVar12 = (float10)*(float *)(iVar3 + 0x584) * (float10)_DAT_005e6918;
    FUN_005c03a0();
    local_14 = (float)(int)ROUND(fVar12);
    FUN_005bfb40(local_6e0,&DAT_005e6894,local_14);
    iVar3 = FUN_004c4510(local_1c,0x58);
    iVar4 = FUN_004c3ea0(local_1c,local_6e0);
    FUN_004c1dd0(local_1c,local_6e0,(DAT_0061b498 - iVar9) - iVar4,(DAT_0061b49c - local_48) - iVar3
                 ,0xf8,0);
  }
  iVar3 = FUN_0040c600(*(uint *)(param_1 + 0x338),_DAT_01d1c2b8);
  if (iVar3 != 0) {
    fVar12 = (float10)*(float *)(iVar3 + 0x584) * (float10)_DAT_005e6918;
    FUN_005c03a0();
    local_14 = (float)(int)ROUND(fVar12);
    FUN_005bfb40(local_8e0,&DAT_005e6899,local_14);
    iVar3 = FUN_004c4510(local_1c,0x58);
    iVar4 = FUN_004c3ea0(local_1c,local_8e0);
    FUN_004c1dd0(local_1c,local_8e0,(DAT_0061b498 - iVar9) - iVar4,(DAT_0061b49c - local_48) - iVar3
                 ,0xf8,0);
  }
  iVar9 = FUN_004fa540(param_1,*(uint *)(param_1 + 0x338),3);
  if (iVar9 == 0) {
    iVar4 = DAT_0061b498 - iVar8;
    iVar8 = DAT_0061b49c - iVar8;
    iVar9 = FUN_0040c550(*(uint *)(param_1 + 0x338),"CTommyGun");
    iVar3 = 0;
    if (iVar9 != 0) {
      iVar3 = 0x1d1ba0c;
    }
    iVar9 = FUN_0040c550(*(uint *)(param_1 + 0x338),"CShotgun");
    if (iVar9 != 0) {
      iVar3 = 0x1d1ba5c;
    }
    iVar9 = FUN_0040c550(*(uint *)(param_1 + 0x338),"CElephantGun");
    if (iVar9 != 0) {
      iVar3 = 0x1d1ba5c;
    }
    iVar9 = FUN_0040c550(*(uint *)(param_1 + 0x338),&DAT_005e68be);
    if (iVar9 != 0) {
      if (*(int *)(*(int *)(param_1 + 0x338) + 0x56c) == 0) {
        iVar3 = 0x1d1ba20;
      }
      if (*(int *)(*(int *)(param_1 + 0x338) + 0x56c) == 3) {
        iVar3 = 0x1d1ba34;
      }
      if (*(int *)(*(int *)(param_1 + 0x338) + 0x56c) == 7) {
        iVar3 = 0x1d1ba48;
      }
      if (*(int *)(*(int *)(param_1 + 0x338) + 0x56c) == 8) {
        iVar3 = 0x1d1ba70;
      }
      if (*(int *)(*(int *)(param_1 + 0x338) + 0x56c) == 1) {
        iVar3 = 0x1d1ba84;
      }
    }
    if (iVar3 != 0) {
      FUN_0040d4b0(iVar3,iVar4,iVar8,local_64);
    }
    iVar8 = FUN_0040c550(*(uint *)(param_1 + 0x338),"CFlashlight");
    if (iVar8 == 0) {
      if ((*(float *)(param_1 + 0x350) <= 0.0) || (*(int *)(param_1 + 0x454) != 0)) {
        FUN_005bfb40(local_5e0,&DAT_005e68cf,*(uint *)(*(int *)(param_1 + 0x338) + 0x568));
      }
      else {
        uVar5 = FUN_004f62e0(*(uint *)(param_1 + 0x464),
                             *(uint *)(*(int *)(param_1 + 0x338) + 0x568));
        FUN_005bfb40(local_5e0,"%s %d",uVar5);
      }
      iVar9 = FUN_004c4510(local_1c,0x58);
      iVar8 = local_1c;
      iVar3 = FUN_004c3ea0(local_1c,local_5e0);
      FUN_004c1dd0(iVar8,local_5e0,(DAT_0061b498 - local_48) - iVar3,
                   (DAT_0061b49c - local_48) - iVar9,0xf8,0);
    }
  }
  if (*(int *)(param_1 + 0x454) == 0) goto LAB_004fb230;
  iVar8 = FUN_004fa540(param_1,*(uint *)(param_1 + 0x338),3);
  if (iVar8 == 0) {
    iVar8 = FUN_004fa540(param_1,*(uint *)(param_1 + 0x338),0);
    if ((iVar8 == 0) &&
       (iVar8 = FUN_004fa540(param_1,*(uint *)(param_1 + 0x338),1), iVar8 == 0)) {
      uVar5 = FUN_004f6350();
      uVar6 = FUN_004f62e0(*(uint *)(param_1 + 0x338),uVar5);
      uVar14 = CONCAT44(uVar5,uVar6);
      pcVar13 = "%s\n\n%s";
      goto LAB_004fb13d;
    }
    uVar5 = FUN_004f62e0();
    uVar5 = FUN_004f6350(*(uint *)(param_1 + 0x338),uVar5);
    uVar5 = FUN_004f62e0(*(uint *)(param_1 + 0x338),uVar5);
    FUN_005bfb40(local_2e0,"%s\n\n%s %s",uVar5);
    pcVar7 = (char *)FUN_00531090();
    iVar8 = -1;
    pcVar13 = local_2e0;
    do {
      pcVar10 = pcVar13;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar10 = pcVar13 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
  }
  else {
    uVar5 = FUN_004f6350();
    uVar6 = FUN_004f62e0(*(uint *)(param_1 + 0x338),uVar5);
    uVar14 = CONCAT44(uVar5,uVar6);
    pcVar13 = "%s\n\n%s";
LAB_004fb13d:
    FUN_005bfb40(local_2e0,pcVar13,uVar14);
  }
  iVar8 = local_1c;
  local_2c = local_1c;
  iVar9 = FUN_004c4260(local_1c,local_2e0,0x1d06f78,10,0x100,local_54 - local_70);
  local_34 = iVar9;
  local_3c = FUN_004c4510(iVar8,0x58);
  iVar8 = (DAT_0061b49c - local_60) + local_48;
  local_30 = local_48 + (DAT_0061b498 - local_54);
  iVar3 = 0;
  if (0 < iVar9) {
    iVar9 = 0x1d06f78;
    do {
      iVar3 = iVar3 + 1;
      FUN_004c1dd0(local_2c,iVar9,local_30,iVar8,0xf8,0);
      iVar9 = iVar9 + 0x100;
      iVar8 = iVar8 + local_3c;
    } while (iVar3 < local_34);
  }
LAB_004fb230:
  if ((*(int *)(param_1 + 0x33c) != 0) && (0.0 < *(float *)(param_1 + 0x344))) {
    iVar3 = 0x10;
    local_6c = 0x70;
    iVar8 = 0x00000060;
    iVar9 = 0x000000D0;
    if ((DAT_0061b49c < 0x180) && (*(int *)(param_1 + 0x454) == 0)) {
      iVar9 = 0x000000D0 / 2;
      iVar8 = 0x00000060 / 2;
      iVar3 = 8;
      local_6c = 0x28;
    }
    iVar4 = FUN_0040c600(*(uint *)(param_1 + 0x33c),_DAT_01d06a90);
    if (iVar4 != 0) {
      FUN_005bfb40(local_4e0,"%d x%3.0f%%",*(uint *)(iVar4 + 0x2d4),
                   (double)*(float *)(iVar4 + 0x2d8));
      local_14 = (float)FUN_004c4510(local_1c,0x58);
      iVar4 = FUN_004c3ea0(local_1c,local_4e0);
      FUN_004c1dd0(local_1c,local_4e0,(DAT_0061b498 - iVar3) - iVar4,
                   (DAT_0061b49c - iVar3) - (int)local_14,0xf8,0);
    }
    iVar4 = FUN_0040c600(*(uint *)(param_1 + 0x33c),_DAT_01c57034);
    if (iVar4 != 0) {
      uVar5 = FUN_004f62e0();
      FUN_005bfb40(local_7e0,&DAT_005e6909,uVar5);
      local_14 = (float)FUN_004c4510(local_1c,0x58);
      iVar4 = FUN_004c3ea0(local_1c,local_7e0);
      FUN_004c1dd0(local_1c,local_7e0,(DAT_0061b498 - iVar3) - iVar4,
                   (DAT_0061b49c - iVar3) - (int)local_14,0xf8,0);
    }
    if (*(int *)(param_1 + 0x454) != 0) {
      uVar5 = FUN_004f6350();
      uVar5 = FUN_004f62e0(*(uint *)(param_1 + 0x33c),uVar5);
      FUN_005bfb40(local_3e0,"%s\n\n%s",uVar5);
      local_40 = local_1c;
      local_24 = FUN_004c4260(local_1c,local_3e0,0x1d07978,10,0x100,iVar9 - local_6c);
      local_14 = (float)local_24;
      local_38 = FUN_004c4510(local_1c,0x58);
      iVar8 = (DAT_0061b49c - iVar8) + iVar3;
      local_28 = (DAT_0061b498 - iVar9) + iVar3;
      iVar9 = 0;
      if (0 < (int)local_14) {
        iVar3 = 0x1d07978;
        do {
          iVar9 = iVar9 + 1;
          FUN_004c1dd0(local_40,iVar3,local_28,iVar8,0xf8,0);
          iVar3 = iVar3 + 0x100;
          iVar8 = iVar8 + local_38;
        } while (iVar9 < local_24);
      }
    }
  }
  if ((0.0 < *(float *)(param_1 + 0x344)) || (0.0 < *(float *)(param_1 + 0x348))) {
    local_8e8 = *(float *)(param_1 + 0x348);
    if (local_8e8 < *(float *)(param_1 + 0x344)) {
      local_8e8 = *(float *)(param_1 + 0x344);
    }
    local_68 = 0xffff;
    if (local_8e8 < 1.0) {
      fVar12 = (float10)local_8e8 * (float10)_DAT_005e6914;
      FUN_005c03a0();
      local_68 = (int)ROUND(fVar12);
    }
    local_8e4 = *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x2538) * (float)_DAT_005e6920;
    if (local_8e4 < 0.0) {
      local_8e4 = 0.0;
    }
    if (1.0 < local_8e4) {
      local_8e4 = 1.0;
    }
    local_14 = 8.82818e-44;
    iVar8 = 0x1b;
    if (DAT_0061b49c < 0x180) {
      local_14 = 4.34403e-44;
      iVar8 = 0xd;
    }
    local_80 = (DAT_0061b498 + -4) - iVar8;
    fVar12 = (float10)(int)local_14 - (float10)(int)local_14 * (float10)local_8e4;
    uVar5 = FUN_005c03a0(local_14,local_68 / 2);
    local_7c = (int)ROUND(fVar12);
    FUN_0040d660(0x1d1b9e4,local_80,local_7c + 4,0,local_7c,iVar8 + -1);
    FUN_0040d4b0(0x1d1b9f8,local_80,4,uVar5);
  }
  fVar1 = *(float *)(param_1 + 0x34c);
  if (0.0 < fVar1) {
    local_74 = 0xffff;
    if (fVar1 < 1.0) {
      fVar12 = (float10)fVar1 * (float10)_DAT_005e6928;
      FUN_005c03a0();
      local_74 = (int)ROUND(fVar12);
    }
    FUN_00406bd0();
    local_18 = _DAT_0152d248;
    iVar8 = 0x00000060;
    if (DAT_0061b49c < 0x180) {
      iVar8 = 0x00000060 / 2;
      local_18 = _DAT_0152d250;
    }
    iVar8 = FUN_004c4260(local_18,param_1 + 0x354,0x1d08378,10,0x100,(DAT_0061b498 - iVar8) + -4);
    local_20 = iVar8;
    local_44 = FUN_004c4510(local_18,0x58);
    iVar8 = (DAT_0061b49c + -4) - local_44 * iVar8;
    if (((_DAT_0152d250 != local_18) || (_DAT_01d7f1b8 == 0)) && (iVar9 = 0, 0 < local_20)) {
      iVar3 = 0x1d08378;
      do {
        iVar9 = iVar9 + 1;
        FUN_004c1dd0(local_18,iVar3,4,iVar8,0xf8,0);
        iVar3 = iVar3 + 0x100;
        iVar8 = iVar8 + local_44;
      } while (iVar9 < local_20);
    }
  }
  if ((*(int *)(param_1 + 0xc) != 0) && (FUN_0040d4b0(0x1d1baf4,2,2,0xffff), _DAT_01d1bc48 != -1)) {
    iVar8 = _DAT_01d1bc48 * 0x50;
    iVar9 = FUN_0040cc60(0,3,0x20,7,0xffff);
    FUN_0040d4b0(iVar9 * 0x14 + iVar8 + 0x1d1bb08);
  }
  iVar8 = _DAT_01d1baa4;
  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = DAT_0061b49c + -2;
    iVar9 = iVar3 - _DAT_01d1baa8;
    FUN_0040d4b0(0x1d1ba98,2,iVar9,0xffff);
    fVar1 = (float)_DAT_005e6930;
    _DAT_01c50948 = 0;
    local_f8 = 0;
    local_f4 = 0;
    local_50 = (float)iVar8 * fVar1;
    local_14 = *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x34) -
               *(float *)(0x01E82168 + 0x15acbc);
    local_5c = (float)(iVar8 + 4) * fVar1;
    local_f0 = local_14;
    local_58 = (float)(iVar3 - iVar9) * fVar1;
    local_4c = (float)(iVar9 + iVar3) * fVar1;
    uVar14 = CONCAT44(afStack_16c + 0xb,local_198);
    local_140[0] = 0.0;
    afStack_16c[(uint)bVar11 * -2 + 0xc] = afStack_118[(uint)bVar11 * -2 + 9];
    afStack_16c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
         afStack_118[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
    FUN_0045f3e0(uVar14);
    FUN_005073d0();
    local_b8 = -local_58;
    local_b4 = 0;
    local_bc = -local_50;
    local_14 = local_b8;
    FUN_0045f690(local_198,afStack_118 + 0x17);
    local_104 = afStack_118[2];
    afStack_118[(uint)bVar11 * -2 + 6] = afStack_118[(uint)bVar11 * -2 + 3];
    afStack_118[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_118[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    if (afStack_16c + 0x11 != afStack_118 + 5) {
      local_128 = local_104;
      local_124 = local_100;
      local_120 = local_fc;
    }
    FUN_004f63c0(local_5c + local_128,local_4c + local_124);
    local_d4[0] = (float)local_134;
    afStack_118[(uint)bVar11 * -2 + 0x12] = afStack_16c[(uint)bVar11 * -2 + 0xf];
    afStack_118[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
         afStack_16c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
    FUN_00580173(*DAT_00612560,afStack_118 + 0x11);
    local_94 = -local_58;
    local_98 = local_50;
    local_90 = 0;
    local_14 = local_94;
    FUN_0045f690(local_198,local_ac + 5);
    afStack_16c[2] = local_c8;
    afStack_16c[(uint)bVar11 * -2 + 3] = afStack_118[(uint)bVar11 * -2 + 0x15];
    afStack_16c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_118[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
    if (afStack_16c + 0x11 != afStack_16c + 2) {
      local_128 = afStack_16c[2];
      local_124 = afStack_16c[3];
      local_120 = local_15c;
    }
    FUN_004f63c0(local_5c + local_128,local_4c + local_124);
    local_d4[0] = (float)local_11c;
    afStack_118[(uint)bVar11 * -2 + 0x12] = afStack_118[(uint)bVar11 * -2];
    afStack_118[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
         afStack_118[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    FUN_00580173(*DAT_00612560 + 0x30,afStack_118 + 0x11);
    local_14c = local_50;
    local_148 = local_58;
    local_144 = 0;
    FUN_0045f690(local_198,afStack_16c + 8);
    local_b0 = local_ec;
    local_ac[(uint)bVar11 * -2] = afStack_118[(uint)bVar11 * -2 + 0xc];
    local_ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_118[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
    if (afStack_16c + 0x11 != afStack_118 + 0x1a) {
      local_128 = local_b0;
      local_124 = local_ac[0];
      local_120 = local_ac[1];
    }
    FUN_004f63c0(local_5c + local_128,local_4c + local_124);
    local_d4[0] = (float)local_170;
    afStack_118[(uint)bVar11 * -2 + 0x12] = afStack_16c[(uint)bVar11 * -2];
    afStack_118[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
         afStack_16c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    FUN_00580173(*DAT_00612560 + 0x60,afStack_118 + 0x11);
    local_88 = local_58;
    local_8c = -local_50;
    local_84 = 0;
    FUN_0045f690(local_198,local_ac + 8);
    local_e0 = local_158;
    afStack_118[(uint)bVar11 * -2 + 0xf] = afStack_16c[(uint)bVar11 * -2 + 6];
    afStack_118[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
         afStack_16c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    if (afStack_16c + 0x11 != afStack_118 + 0xe) {
      local_128 = local_e0;
      local_124 = local_dc;
      local_120 = local_d8;
    }
    FUN_004f63c0(local_5c + local_128,local_4c + local_124);
    local_d4[0] = local_ac[2];
    afStack_118[(uint)bVar11 * -2 + 0x12] = local_ac[(uint)bVar11 * -2 + 3];
    afStack_118[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
         local_ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    FUN_00580173(*DAT_00612560 + 0x90,afStack_118 + 0x11);
    local_1dc = 4;
    local_1c8 = 0;
    local_1c4 = 0;
    local_1c0 = 0;
    local_1bc = 1;
    local_1b8 = 0x1000000;
    local_1b4 = 0;
    local_1ac = 0x1000000;
    local_1a8 = 0x1000000;
    local_1b0 = 2;
    local_19c = 0x1000000;
    local_1a4 = 3;
    local_1a0 = 0;
    FUN_00483d80(DAT_00612560,0);
    FUN_00483d70(DAT_00612560,0);
    FUN_00483de0(DAT_00612560,0xffff);
    FUN_00484f00(DAT_00612560,0x1d1baac);
    FUN_00482210(DAT_00612560,local_1e0,0x23);
    FUN_00483d70(DAT_00612560,1);
  }
  _DAT_01c50948 = local_78;
  return;
}
