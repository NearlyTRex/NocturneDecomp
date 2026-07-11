// Name: FUN_0049ab50
// Address: 0049ab50
// Address Range: [[0049ab50, 0049b0a0]]
// Convention: unknown
// Signature: void FUN_0049ab50(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049ab50(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
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
  
  local_60 = DAT_005b761c;
  local_5c = DAT_005b7620;
  local_64 = DAT_005b7620;
  if ((*(uint *)(param_1 + 900) & 0x7fffffff) != 0) {
    if (1.0 <= *(float *)(param_1 + 900)) {
      iVar5 = 0xffff;
    }
    else {
      fVar7 = (float10)*(float *)(param_1 + 900) * (float10)ram0x005823e2;
      FUN_00563a30();
      iVar5 = (int)ROUND(fVar7);
      local_14 = iVar5;
    }
    FUN_00408370(iVar5);
    local_38 = _DAT_014b9900;
    if (_DAT_01fb8644 < 0x1e0) {
      local_38 = _DAT_014b9904;
    }
    iVar5 = FUN_00492f30(local_38,param_1 + 0x284,0x1c71430,10,0x100,(_DAT_01fb8644 * 9) / 10);
    local_48 = iVar5;
    iVar3 = FUN_004930e0(local_38,0x58);
    iVar5 = DAT_005b7620 - iVar5 * iVar3;
    local_54 = iVar3;
    iVar2 = FUN_004fe710(0x01E56DA0);
    iVar3 = (iVar5 - iVar2) - iVar3;
    if (_DAT_014b9904 == local_38) {
      iVar3 = iVar3 + -7;
    }
    iVar5 = 0;
    if (0 < local_48) {
      iVar2 = 0x1c71430;
      local_4c = DAT_005b761c + -1;
      do {
        iVar4 = FUN_00492da0(local_38,iVar2);
        iVar5 = iVar5 + 1;
        FUN_00490980(local_38,iVar2,(local_4c - iVar4) / 2,iVar3,0xf8,0);
        iVar2 = iVar2 + 0x100;
        iVar3 = iVar3 + local_54;
      } while (iVar5 < local_48);
    }
  }
  if (0.0 < _DAT_01c78ac4) {
    iVar5 = _DAT_014b98f8;
    if ((DAT_005b7620 < 0x1e0) && (iVar5 = _DAT_014b98fc, DAT_005b7620 < 0x180)) {
      iVar5 = _DAT_014b9904;
    }
    iVar2 = FUN_004930e0(iVar5,0x58);
    iVar3 = FUN_004930b0(iVar5,0x58);
    FUN_004fe710(0x01E56DA0);
    iVar4 = FUN_004fe710(0x01E56DA0);
    iVar4 = DAT_005b7620 - iVar4;
    FUN_00408370(0xffff);
    FUN_00563c90(local_164,"?%d - %s" + 1,_DAT_01c78ac0,&DAT_01c789c0);
    FUN_00490980(iVar5,local_164,iVar3 * 2,(iVar4 - iVar2) - iVar3,0xf8,0);
  }
  if ((*(int *)(param_1 + 0x228) == 0) && (0 < *(int *)(param_1 + 0x388))) {
    iVar2 = local_60 >> 0x1f;
    iVar5 = local_60 + iVar2 * -4;
    local_44 = local_5c / 0x28;
    local_40 = _DAT_014b9904;
    if (0x280 < DAT_005b761c) {
      local_40 = _DAT_014b98fc;
    }
    if (800 < DAT_005b761c) {
      local_40 = _DAT_014b98f8;
    }
    iVar3 = FUN_004930e0(local_40,0x58);
    if (local_44 < iVar3) {
      local_44 = FUN_004930e0(local_40,0x58);
    }
    local_3c = local_60 / 0x50;
    local_58 = local_3c + ((int)(iVar5 - (uint)(iVar2 << 1 < 0)) >> 2);
    iVar5 = local_64 - local_5c / 0x50;
    local_20 = 0;
    if (0 < *(int *)(param_1 + 0x388)) {
      local_1c = param_1 + 0x38c;
      local_50 = (local_44 * 3) / 2;
      local_18 = param_1;
      do {
        iVar2 = local_3c;
        local_34 = iVar5 - local_44;
        local_28 = local_58;
        uVar6 = 2;
        fVar1 = *(float *)(local_18 + 0x88c);
        if (fVar1 < (float)_DAT_005823ea) {
          uVar6 = 0xfb;
        }
        if (fVar1 < (float)_DAT_005823f2) {
          uVar6 = 1;
        }
        local_30 = local_34;
        local_24 = iVar5;
        FUN_00403ef0(local_3c,local_34,local_58,iVar5,0,0);
        local_14 = (local_28 - iVar2) + 1;
        fVar7 = (float10)local_14 * (float10)fVar1;
        FUN_00563a30();
        local_2c = (int)ROUND(fVar7);
        if (0 < local_2c) {
          FUN_00403e60(iVar2,local_34,local_2c + iVar2,local_24,uVar6);
        }
        iVar2 = local_1c;
        FUN_00490980(local_40,local_1c,local_3c,local_30,0xf8,0);
        local_1c = iVar2 + 0x100;
        local_18 = local_18 + 4;
        iVar5 = iVar5 - local_50;
        local_20 = local_20 + 1;
      } while (local_20 < *(int *)(param_1 + 0x388));
    }
  }
  return;
}
