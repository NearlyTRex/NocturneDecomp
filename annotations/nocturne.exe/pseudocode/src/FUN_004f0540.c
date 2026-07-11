// Name: FUN_004f0540
// Address: 004f0540
// Address Range: [[004f0540, 004f0784]]
// Convention: unknown
// Signature: undefined4 FUN_004f0540(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004f0540(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar1 = param_4;
  local_34 = 1;
  iVar3 = param_3;
  local_1c = param_5;
  if (param_6 < param_3) {
    iVar3 = param_6;
    local_1c = param_2;
    param_4 = param_7;
    param_2 = param_5;
    param_6 = param_3;
    param_7 = iVar1;
  }
  local_1c = local_1c - param_2;
  param_6 = param_6 - iVar3;
  if (local_1c < 0) {
    local_1c = -local_1c;
    local_34 = -1;
  }
  if (param_6 < local_1c) {
    local_14 = param_6 * 2 - local_1c;
    local_2c = 0;
    if (-1 < local_1c) {
      local_28 = iVar3 + -1;
      do {
        iVar1 = FUN_004f04a0(param_1,local_28,param_2,param_4);
        uVar2 = iVar1 - param_4 >> 0x1f;
        if (_DAT_01e312f4 < (int)((iVar1 - param_4 ^ uVar2) - uVar2)) {
          return 0;
        }
        iVar1 = FUN_004f04a0(param_1,iVar3 + 1,param_2,param_4);
        uVar2 = iVar1 - param_4 >> 0x1f;
        if (_DAT_01e312f4 < (int)((iVar1 - param_4 ^ uVar2) - uVar2)) {
          return 0;
        }
        local_38 = FUN_004f04a0(param_1,iVar3,param_2,param_4);
        uVar2 = local_38 - param_4 >> 0x1f;
        if (_DAT_01e312f4 < (int)((local_38 - param_4 ^ uVar2) - uVar2)) {
          return 0;
        }
        if (0 < local_14) {
          local_14 = local_14 - local_1c;
          local_28 = local_28 + 1;
          iVar3 = iVar3 + 1;
        }
        param_2 = param_2 + local_34;
        local_14 = local_14 + param_6;
        local_2c = local_2c + 1;
        param_4 = local_38;
      } while (local_2c <= local_1c);
    }
  }
  else {
    local_18 = local_1c * 2 - param_6;
    local_24 = 0;
    if (-1 < param_6) {
      do {
        iVar1 = FUN_004f04a0(param_1,iVar3,param_2 + 1,param_4);
        uVar2 = iVar1 - param_4 >> 0x1f;
        if (_DAT_01e312f4 < (int)((iVar1 - param_4 ^ uVar2) - uVar2)) {
          return 0;
        }
        iVar1 = FUN_004f04a0(param_1,iVar3,param_2 + -1,param_4);
        uVar2 = iVar1 - param_4 >> 0x1f;
        if (_DAT_01e312f4 < (int)((iVar1 - param_4 ^ uVar2) - uVar2)) {
          return 0;
        }
        local_38 = FUN_004f04a0(param_1,iVar3,param_2,param_4);
        uVar2 = local_38 - param_4 >> 0x1f;
        if (_DAT_01e312f4 < (int)((local_38 - param_4 ^ uVar2) - uVar2)) {
          return 0;
        }
        if (0 < local_18) {
          local_18 = local_18 - param_6;
          param_2 = param_2 + local_34;
        }
        local_18 = local_18 + local_1c;
        iVar3 = iVar3 + 1;
        local_24 = local_24 + 1;
        param_4 = local_38;
      } while (local_24 <= param_6);
    }
  }
  if (local_38 != param_7) {
    return 0;
  }
  return 1;
}
