// Name: FUN_00519f00
// Address: 00519f00
// Address Range: [[00519f00, 0051a8e8]]
// Convention: unknown
// Signature: undefined4 FUN_00519f00(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00519f00(uint *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  bool bVar11;
  byte local_6a4 [256];
  char local_5a4 [268];
  uint local_498;
  byte local_490 [8];
  char local_488 [80];
  uint local_438;
  uint local_434;
  uint local_42c;
  char local_428 [80];
  char local_3d8 [80];
  uint local_388;
  int local_380;
  uint local_37c;
  byte local_370 [4];
  char local_36c [256];
  uint local_26c;
  byte local_260 [256];
  byte local_160 [8];
  char local_158 [80];
  uint local_108;
  uint local_104;
  int local_100;
  char local_fc [80];
  char local_ac [64];
  uint local_6c;
  uint local_68;
  uint local_60;
  char local_5c [32];
  uint local_3c;
  uint local_38;
  char local_34;
  char local_33;
  char local_32;
  char local_31;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar10 = 0;
  local_18 = 0;
  FUN_0051a8f0(param_1);
  FUN_00460910(local_6a4,0,param_2);
  iVar2 = FUN_004609e0(local_6a4);
  if (iVar2 == 0) {
    return 0;
  }
  pcVar8 = local_5a4;
  pcVar9 = (char *)(param_1 + 1);
  do {
    cVar1 = *pcVar8;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  param_1[0x41] = local_498;
  iVar2 = FUN_005b910c(param_1 + 1,&DAT_005e2407);
  local_30 = iVar2;
  if (iVar2 == 0) goto LAB_00519fa2;
  FUN_00461070(param_2,0,0,0,local_260);
  iVar3 = FUN_005b8130(local_260,&DAT_005e240a);
  if ((iVar3 == 0) || (iVar3 = FUN_005b8130(local_260,&DAT_005e240e), iVar3 == 0)) {
    FUN_005b87c0(local_370,1,0x110,local_30);
    pcVar9 = local_36c;
    pcVar8 = (char *)(param_1 + 0x42);
    param_1[0x104] = local_26c;
    do {
      cVar1 = *pcVar9;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    iVar2 = FUN_005b8580(param_1[0x104] * 0x14);
    param_1[0x105] = iVar2;
    if (iVar2 == 0) goto LAB_00519fa2;
    iVar2 = 0;
    local_2c = 0;
    local_28 = 0;
    if (0 < (int)param_1[0x104]) {
      local_1c = 0;
      do {
        FUN_005b87c0(local_ac,1,0x50,local_30);
        *(int *)(param_1[0x105] + local_1c) = iVar2;
        uVar6 = 0xffffffff;
        pcVar8 = local_ac;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
        } while (cVar1 != '\0');
        iVar2 = iVar2 + ~uVar6;
        if (local_2c < iVar2) {
          local_2c = (param_1[0x104] - local_28) * 0x30 + iVar2;
          iVar3 = FUN_005b8ce0(param_1[0x106],local_2c);
          param_1[0x106] = iVar3;
          if (iVar3 == 0) {
            _DAT_01d046a0 = "..\\engine\\pod.cpp";
            _DAT_01d046a4 = 0x198;
            FUN_004e4500("Out of memory!");
          }
        }
        pcVar8 = local_ac;
        pcVar9 = (char *)(param_1[0x106] + *(int *)(param_1[0x105] + local_1c));
        do {
          cVar1 = *pcVar8;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        *(uint *)(local_1c + param_1[0x105] + 4) = local_6c;
        *(uint *)(param_1[0x105] + local_1c + 8) = local_68;
        *(uint *)(local_1c + param_1[0x105] + 0x10) = local_60;
        local_28 = local_28 + 1;
        *(uint *)(local_1c + param_1[0x105] + 0xc) = param_1[0x41];
        local_1c = local_1c + 0x14;
      } while (local_28 < (int)param_1[0x104]);
    }
    bVar11 = SBORROW4(iVar2,local_2c);
    iVar3 = iVar2 - local_2c;
  }
  else {
    FUN_005b87c0(&local_34,1,4,iVar2);
    FUN_005b929c(iVar2,0,0);
    iVar3 = local_30;
    if ((((local_34 == 'P') && (local_33 == 'O')) && (local_32 == 'D')) && (local_31 == '3')) {
      pcVar9 = local_488;
      FUN_005b87c0(local_490,1,0x120,iVar2);
      pcVar8 = (char *)(param_1 + 0x42);
      *param_1 = 300;
      do {
        cVar1 = *pcVar9;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      pcVar9 = local_428;
      pcVar8 = (char *)(param_1 + 0x82);
      do {
        cVar1 = *pcVar9;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      pcVar9 = local_3d8;
      pcVar8 = (char *)(param_1 + 0xc2);
      do {
        cVar1 = *pcVar9;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      param_1[0x104] = local_438;
      param_1[0x107] = local_434;
      param_1[0x109] = local_37c;
      param_1[0x102] = local_42c;
      iVar3 = FUN_005b8580(param_1[0x104] * 0x14);
      param_1[0x105] = iVar3;
      if (iVar3 != 0) {
        FUN_005b929c(iVar2,local_388,0);
        FUN_005b87c0(param_1[0x105],param_1[0x104],0x14,iVar2);
        if ((*(byte *)(iVar2 + 0xc) & 0x20) == 0) {
          iVar2 = 0;
          if (0 < (int)param_1[0x104]) {
            do {
              iVar2 = iVar2 + 1;
            } while (iVar2 < (int)param_1[0x104]);
          }
          if (((int)param_1[0x104] <= local_380) && (local_380 <= param_1[0x104] * 0x100)) {
            iVar2 = FUN_005b8580(local_380);
            param_1[0x106] = iVar2;
            if (iVar2 == 0) {
              _DAT_01d046a0 = "..\\engine\\pod.cpp";
              _DAT_01d046a4 = 0x1ed;
              FUN_004e4500("Out of memory!");
            }
            FUN_005b87c0(param_1[0x106],local_380,1,local_30);
            if ((*(byte *)(local_30 + 0xc) & 0x20) == 0) {
              uVar5 = FUN_005baab0(local_30);
              param_1[0x10a] = uVar5;
              param_1[0x108] = param_1[0x10a] + param_1[0x109] * 0x108;
              iVar2 = local_380;
              goto LAB_0051a22e;
            }
          }
        }
      }
      goto LAB_00519fa2;
    }
    if (((local_34 == 'P') && (local_33 == 'O')) && ((local_32 == 'D' && (local_31 == '2')))) {
      pcVar9 = local_158;
      FUN_005b87c0(local_160,1,0x60,local_30);
      pcVar8 = (char *)(param_1 + 0x42);
      *param_1 = 200;
      do {
        cVar1 = *pcVar9;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      param_1[0x104] = local_108;
      param_1[0x107] = local_104;
      iVar2 = FUN_005b8580(param_1[0x104] * 0x14);
      param_1[0x105] = iVar2;
      if (iVar2 == 0) goto LAB_00519fa2;
      FUN_005b87c0(iVar2,param_1[0x104],0x14,iVar3);
      iVar2 = 0;
      if (0 < (int)param_1[0x104]) {
        do {
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)param_1[0x104]);
      }
      iVar3 = param_1[0x104];
      iVar2 = *(int *)(param_1[0x105] + 8) + -0x60 + iVar3 * -0x14;
      if ((iVar2 < iVar3) || (iVar3 * 0x100 < iVar2)) goto LAB_00519fa2;
      iVar3 = FUN_005b8580(iVar2);
      param_1[0x106] = iVar3;
      if (iVar3 == 0) {
        _DAT_01d046a0 = "..\\engine\\pod.cpp";
        _DAT_01d046a4 = 0x228;
        FUN_004e4500("Out of memory!");
      }
      FUN_005b87c0(param_1[0x106],iVar2,1,local_30);
      iVar3 = param_1[0x105] + (param_1[0x104] + -1) * 0x14;
      param_1[0x108] = *(int *)(iVar3 + 8) + *(int *)(iVar3 + 4);
      goto LAB_0051a22e;
    }
    *param_1 = 1;
    FUN_005b87c0(&local_100,1,0x54,local_30);
    if ((local_100 < 1) || (99999 < local_100)) {
LAB_00519fa2:
      if (local_30 != 0) {
        FUN_005b89c0(local_30);
      }
      FUN_0051a8f0(param_1);
      return 0;
    }
    pcVar9 = local_fc;
    pcVar8 = (char *)(param_1 + 0x42);
    param_1[0x104] = local_100;
    do {
      cVar1 = *pcVar9;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    iVar2 = FUN_005b8580(param_1[0x104] * 0x14);
    param_1[0x105] = iVar2;
    if (iVar2 == 0) goto LAB_00519fa2;
    iVar2 = 0;
    local_14 = 0;
    local_20 = 0;
    if (0 < (int)param_1[0x104]) {
      local_24 = 0;
      do {
        FUN_005b87c0(local_5c,1,0x28,local_30);
        *(int *)(param_1[0x105] + local_24) = iVar2;
        uVar6 = 0xffffffff;
        pcVar8 = local_5c;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
        } while (cVar1 != '\0');
        iVar2 = iVar2 + ~uVar6;
        if (local_14 < iVar2) {
          local_14 = (param_1[0x104] - local_20) * 0x30 + iVar2;
          iVar3 = FUN_005b8ce0(param_1[0x106],local_14);
          param_1[0x106] = iVar3;
          if (iVar3 == 0) {
            _DAT_01d046a0 = "..\\engine\\pod.cpp";
            _DAT_01d046a4 = 0x260;
            FUN_004e4500("Out of memory!");
          }
        }
        pcVar8 = local_5c;
        pcVar9 = (char *)(param_1[0x106] + *(int *)(param_1[0x105] + local_24));
        do {
          cVar1 = *pcVar8;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        *(uint *)(param_1[0x105] + local_24 + 4) = local_3c;
        *(uint *)(local_24 + param_1[0x105] + 8) = local_38;
        *(uint *)(param_1[0x105] + local_24 + 0x10) = 0;
        *(uint *)(param_1[0x105] + local_24 + 0xc) = param_1[0x41];
        local_24 = local_24 + 0x14;
        local_20 = local_20 + 1;
      } while (local_20 < (int)param_1[0x104]);
    }
    bVar11 = SBORROW4(iVar2,local_14);
    iVar3 = iVar2 - local_14;
  }
  if (bVar11 != iVar3 < 0) {
    local_18 = 1;
  }
LAB_0051a22e:
  FUN_005b89c0(local_30);
  if (local_18 != 0) {
    iVar3 = FUN_005b8ce0(param_1[0x106],iVar2);
    param_1[0x106] = iVar3;
    if (iVar3 == 0) {
      _DAT_01d046a0 = "..\\engine\\pod.cpp";
      _DAT_01d046a4 = 0x27b;
      FUN_004e4500("realloc returns NULL shrinking filenameBlockSize to fit.");
    }
  }
  iVar3 = 0;
  if (0 < (int)param_1[0x104]) {
    iVar7 = 0;
    do {
      piVar4 = (int *)(param_1[0x105] + iVar7);
      if ((*piVar4 < 0) || (iVar2 <= *piVar4)) goto LAB_00519fa2;
      *piVar4 = param_1[0x106] + *piVar4;
      iVar3 = iVar3 + 1;
      iVar7 = iVar7 + 0x14;
    } while (iVar3 < (int)param_1[0x104]);
  }
  FUN_005b78b8(param_1[0x105],param_1[0x104],0x14,&LAB_00519ee0);
  return 1;
}
