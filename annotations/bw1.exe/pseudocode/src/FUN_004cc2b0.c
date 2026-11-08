// Name: FUN_004cc2b0
// Address: 004cc2b0
// Address Range: [[004cc2b0, 004cc800]]
// Convention: unknown
// Signature: void FUN_004cc2b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cc2b0(int param_1)

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
  
  local_60 = DAT_0061b498;
  local_5c = DAT_0061b49c;
  local_64 = DAT_0061b49c;
  if ((*(uint *)(param_1 + 0x3b4) & 0x7fffffff) != 0) {
    if (1.0 <= *(float *)(param_1 + 0x3b4)) {
      iVar5 = 0xffff;
    }
    else {
      fVar7 = (float10)*(float *)(param_1 + 0x3b4) * (float10)_DAT_005e13a4;
      FUN_005c03a0();
      iVar5 = (int)ROUND(fVar7);
      local_14 = iVar5;
    }
    FUN_00406bd0(iVar5);
    local_38 = _DAT_0152d244;
    if (_DAT_01fe3930 < 0x1e0) {
      local_38 = _DAT_0152d248;
    }
    iVar5 = FUN_004c4260(local_38,param_1 + 0x2b4,0x1cc91a0,10,0x100,(_DAT_01fe3930 * 9) / 10);
    local_48 = iVar5;
    iVar3 = FUN_004c4510(local_38,0x58);
    iVar5 = DAT_0061b49c - iVar5 * iVar3;
    local_54 = iVar3;
    iVar2 = FUN_00543950(0x01E81C80);
    iVar3 = (iVar5 - iVar2) - iVar3;
    if (_DAT_0152d248 == local_38) {
      iVar3 = iVar3 + -7;
    }
    iVar5 = 0;
    if (0 < local_48) {
      iVar2 = 0x1cc91a0;
      local_4c = DAT_0061b498 + -1;
      do {
        iVar4 = FUN_004c3ea0(local_38,iVar2);
        iVar5 = iVar5 + 1;
        FUN_004c1dd0(local_38,iVar2,(local_4c - iVar4) / 2,iVar3,0xf8,0);
        iVar2 = iVar2 + 0x100;
        iVar3 = iVar3 + local_54;
      } while (iVar5 < local_48);
    }
  }
  if (0.0 < _DAT_01cd0aec) {
    iVar5 = _DAT_0152d23c;
    if ((DAT_0061b49c < 0x1e0) && (iVar5 = _DAT_0152d240, DAT_0061b49c < 0x180)) {
      iVar5 = _DAT_0152d248;
    }
    iVar2 = FUN_004c4510(iVar5,0x58);
    iVar3 = FUN_004c44e0(iVar5,0x58);
    FUN_00543950(0x01E81C80);
    iVar4 = FUN_00543950(0x01E81C80);
    iVar4 = DAT_0061b49c - iVar4;
    FUN_00406bd0(0xffff);
    FUN_005bfb40(local_164,"?%d - %s" + 1,_DAT_01cd0ae8,&DAT_01cd09e8);
    FUN_004c1dd0(iVar5,local_164,iVar3 * 2,(iVar4 - iVar2) - iVar3,0xf8,0);
  }
  if ((*(int *)(param_1 + 0x244) == 0) && (0 < *(int *)(param_1 + 0x3bc))) {
    iVar2 = local_60 >> 0x1f;
    iVar5 = local_60 + iVar2 * -4;
    local_44 = local_5c / 0x28;
    local_40 = _DAT_0152d248;
    if (0x280 < DAT_0061b498) {
      local_40 = _DAT_0152d240;
    }
    if (800 < DAT_0061b498) {
      local_40 = _DAT_0152d23c;
    }
    iVar3 = FUN_004c4510(local_40,0x58);
    if (local_44 < iVar3) {
      local_44 = FUN_004c4510(local_40,0x58);
    }
    local_3c = local_60 / 0x50;
    local_58 = local_3c + ((int)(iVar5 - (uint)(iVar2 << 1 < 0)) >> 2);
    iVar5 = local_64 - local_5c / 0x50;
    local_20 = 0;
    if (0 < *(int *)(param_1 + 0x3bc)) {
      local_1c = param_1 + 0x3c0;
      local_50 = (local_44 * 3) / 2;
      local_18 = param_1;
      do {
        iVar2 = local_3c;
        local_34 = iVar5 - local_44;
        local_28 = local_58;
        uVar6 = 2;
        fVar1 = *(float *)(local_18 + 0x8c0);
        if (fVar1 < (float)_DAT_005e13ac) {
          uVar6 = 0xfb;
        }
        if (fVar1 < (float)_DAT_005e13b4) {
          uVar6 = 1;
        }
        local_30 = local_34;
        local_24 = iVar5;
        FUN_00403250(local_3c,local_34,local_58,iVar5,0,0);
        local_14 = (local_28 - iVar2) + 1;
        fVar7 = (float10)local_14 * (float10)fVar1;
        FUN_005c03a0();
        local_2c = (int)ROUND(fVar7);
        if (0 < local_2c) {
          FUN_004031c0(iVar2,local_34,local_2c + iVar2,local_24,uVar6);
        }
        iVar2 = local_1c;
        FUN_004c1dd0(local_40,local_1c,local_3c,local_30,0xf8,0);
        local_1c = iVar2 + 0x100;
        local_18 = local_18 + 4;
        iVar5 = iVar5 - local_50;
        local_20 = local_20 + 1;
      } while (local_20 < *(int *)(param_1 + 0x3bc));
    }
  }
  return;
}
