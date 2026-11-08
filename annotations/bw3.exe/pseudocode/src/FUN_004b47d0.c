// Name: FUN_004b47d0
// Address: 004b47d0
// Address Range: [[004b47d0, 004b4d4c]]
// Convention: unknown
// Signature: void FUN_004b47d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b47d0(int param_1)

{
  char cVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  float10 fVar9;
  byte local_164 [256];
  int local_64;
  int local_60;
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
  int local_1c;
  int local_18;
  int local_14;
  
  local_60 = DAT_005fba18;
  local_5c = DAT_005fba1c;
  local_64 = DAT_005fba1c;
  iVar6 = -1;
  pcVar7 = (char *)(param_1 + 0xb80);
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (iVar6 != -2) {
    FUN_004b0fa0(_DAT_01549aa0,0,0x27f,10,0xf8,0,(char *)(param_1 + 0xb80));
  }
  if ((*(uint *)(param_1 + 0x434) & 0x7fffffff) != 0) {
    if (1.0 <= *(float *)(param_1 + 0x434)) {
      iVar6 = 0xffff;
    }
    else {
      fVar9 = (float10)*(float *)(param_1 + 0x434) * (float10)_DAT_005c2220;
      FUN_005a3120();
      iVar6 = (int)ROUND(fVar9);
      local_14 = iVar6;
    }
    FUN_00406bf0(iVar6);
    local_38 = _DAT_01549aa8;
    if (_DAT_02039090 < 0x1e0) {
      local_38 = _DAT_01549ab4;
    }
    iVar6 = local_38;
    iVar3 = FUN_004b2e40(local_38,param_1 + 0x334,0x1d1b110,10,0x100,(_DAT_02039090 * 9) / 10);
    local_48 = iVar3;
    iVar4 = FUN_004b30f0(iVar6,0x58);
    iVar3 = DAT_005fba1c - iVar3 * iVar4;
    local_54 = iVar4;
    iVar5 = FUN_00528f60(0x01ED73E0);
    iVar4 = (iVar3 - iVar5) - iVar4;
    if (iVar6 == _DAT_01549ab4) {
      iVar4 = iVar4 + -7;
    }
    iVar6 = 0;
    if (0 < local_48) {
      iVar3 = 0x1d1b110;
      local_4c = DAT_005fba18 + -1;
      do {
        iVar5 = FUN_004b2a80(local_38,iVar3);
        iVar6 = iVar6 + 1;
        FUN_004b0a20(local_38,iVar3,(local_4c - iVar5) / 2,iVar4,0xf8,0);
        iVar3 = iVar3 + 0x100;
        iVar4 = iVar4 + local_54;
      } while (iVar6 < local_48);
    }
  }
  if (0.0 < _DAT_01d22af4) {
    iVar6 = _DAT_01549aa0;
    if ((DAT_005fba1c < 0x1e0) && (iVar6 = _DAT_01549aa4, DAT_005fba1c < 0x180)) {
      iVar6 = _DAT_01549ab4;
    }
    iVar3 = FUN_004b30f0(iVar6,0x58);
    iVar5 = FUN_004b30c0(iVar6,0x58);
    FUN_00528f60(0x01ED73E0);
    iVar4 = FUN_00528f60(0x01ED73E0);
    iVar4 = DAT_005fba1c - iVar4;
    FUN_00406bf0(0xffff);
    FUN_005a28c0(local_164,"?%d - %s" + 1,_DAT_01d22af0,&DAT_01d229f0);
    FUN_004b0a20(iVar6,local_164,iVar5 * 2,(iVar4 - iVar3) - iVar5,0xf8,0);
  }
  if ((*(int *)(param_1 + 0x24c) == 0) && (0 < *(int *)(param_1 + 0x43c))) {
    iVar3 = local_60 >> 0x1f;
    iVar6 = local_60 + iVar3 * -4;
    local_44 = local_5c / 0x28;
    local_40 = _DAT_01549ab4;
    if (0x280 < DAT_005fba18) {
      local_40 = _DAT_01549aa4;
    }
    if (800 < DAT_005fba18) {
      local_40 = _DAT_01549aa0;
    }
    iVar5 = FUN_004b30f0(local_40,0x58);
    if (local_44 < iVar5) {
      local_44 = FUN_004b30f0(local_40,0x58);
    }
    local_3c = local_60 / 0x50;
    local_50 = local_3c + ((int)(iVar6 - (uint)(iVar3 << 1 < 0)) >> 2);
    iVar6 = local_64 - local_5c / 0x50;
    local_20 = 0;
    if (0 < *(int *)(param_1 + 0x43c)) {
      local_18 = param_1 + 0x440;
      local_58 = (local_44 * 3) / 2;
      local_1c = param_1;
      do {
        iVar3 = local_3c;
        local_34 = iVar6 - local_44;
        local_30 = local_50;
        uVar8 = 2;
        fVar2 = *(float *)(local_1c + 0x940);
        if (fVar2 < (float)_DAT_005c2228) {
          uVar8 = 0xfb;
        }
        if (fVar2 < (float)_DAT_005c2230) {
          uVar8 = 1;
        }
        local_2c = local_34;
        local_28 = iVar6;
        FUN_00403250(local_3c,local_34,local_50,iVar6,0,0);
        local_14 = (local_30 - iVar3) + 1;
        fVar9 = (float10)local_14 * (float10)fVar2;
        FUN_005a3120();
        local_24 = (int)ROUND(fVar9);
        if (0 < local_24) {
          FUN_004031c0(iVar3,local_2c,local_24 + iVar3,local_28,uVar8);
        }
        iVar3 = local_18;
        FUN_004b0a20(local_40,local_18,local_3c,local_34,0xf8,0);
        local_18 = iVar3 + 0x100;
        local_1c = local_1c + 4;
        iVar6 = iVar6 - local_58;
        local_20 = local_20 + 1;
      } while (local_20 < *(int *)(param_1 + 0x43c));
    }
  }
  return;
}
