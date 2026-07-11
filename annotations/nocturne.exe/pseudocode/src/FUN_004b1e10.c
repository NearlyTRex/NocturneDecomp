// Name: FUN_004b1e10
// Address: 004b1e10
// Address Range: [[004b1e10, 004b1fe0]]
// Convention: unknown
// Signature: void FUN_004b1e10(int param_1,uint param_2,uint param_3)

#include "nocturne.h"

void FUN_004b1e10(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte auStack_84 [4];
  uint local_80;
  uint local_6c;
  uint local_68;
  uint local_64;
  byte local_4c [4];
  uint local_48;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_14;
  
  iVar4 = (param_2 - *(int *)(param_1 + 0x2c)) + *(int *)(param_1 + 0x10);
  iVar3 = (param_3 - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x14);
  param_3 = param_3 & *(uint *)(param_1 + 0xc);
  param_2 = param_2 & *(uint *)(param_1 + 8);
  uVar1 = FUN_004b1800(param_1,iVar3,iVar4);
  *(uint *)(param_1 + 0x4c) = uVar1;
  local_14 = iVar4 + 1;
  uVar1 = FUN_004b1800(param_1,iVar3,local_14);
  *(uint *)(param_1 + 0x50) = uVar1;
  uVar1 = FUN_004b1800(param_1,iVar3 + 1,local_14);
  *(uint *)(param_1 + 0x54) = uVar1;
  uVar1 = FUN_004b1800(param_1,iVar3 + 1,iVar4);
  *(uint *)(param_1 + 0x58) = uVar1;
  uVar2 = (&DAT_005c5024)[*(int *)(param_1 + 0x58) * 0xc] &
          (&DAT_005c5024)[*(int *)(param_1 + 0x4c) * 0xc] &
          (&DAT_005c5024)[*(int *)(param_1 + 0x50) * 0xc] &
          (&DAT_005c5024)[*(int *)(param_1 + 0x54) * 0xc];
  if (((uVar2 & 0x80000000) != 0) && ((char)uVar2 != '\0')) {
    return;
  }
  FUN_004b1d00(param_1,param_2,param_3);
  if ((param_2 & 1) == (param_3 & 1)) {
    local_80 = 3;
    local_64 = *(uint *)(param_1 + 0x4c);
    local_68 = *(uint *)(param_1 + 0x50);
    local_6c = *(uint *)(param_1 + 0x54);
    FUN_004b1df0(param_1,auStack_84);
    local_48 = 3;
    local_2c = *(uint *)(param_1 + 0x4c);
    local_30 = *(uint *)(param_1 + 0x54);
    local_34 = *(uint *)(param_1 + 0x58);
    FUN_004b1df0(param_1,local_4c);
    return;
  }
  local_80 = 3;
  local_64 = *(uint *)(param_1 + 0x4c);
  local_68 = *(uint *)(param_1 + 0x50);
  local_6c = *(uint *)(param_1 + 0x58);
  FUN_004b1df0(param_1,auStack_84);
  local_48 = 3;
  local_2c = *(uint *)(param_1 + 0x50);
  local_30 = *(uint *)(param_1 + 0x54);
  local_34 = *(uint *)(param_1 + 0x58);
  FUN_004b1df0(param_1,local_4c);
  return;
}
