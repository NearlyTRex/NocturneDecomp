// Name: FUN_004e4c70
// Address: 004e4c70
// Address Range: [[004e4c70, 004e4ff4]]
// Convention: unknown
// Signature: void FUN_004e4c70(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int *param_6)

#include "nocturne.h"

void FUN_004e4c70(int param_1,uint param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  uint local_34 [5];
  ushort uStack_20;
  ushort local_1e;
  short sStack_1c;
  uint local_1a;
  uint local_16;
  
  iVar1 = param_3 + param_5 * 0xa0 + 0x18 + param_4 * 0x48;
  iVar5 = *param_6;
  sStack_1c = 0;
  uVar3 = *(uint *)(iVar1 + 0xc);
  if ((*(int *)(iVar1 + 0x14) == 2) && (*(int *)(iVar1 + 0x18) == 0)) {
    sStack_1c = 1;
  }
  if ((*(int *)(iVar1 + 0x14) == 2) && (*(int *)(iVar1 + 0x18) == 1)) {
    sStack_1c = 2;
  }
  iVar1 = *(int *)(iVar5 + 0x20);
  if (((iVar1 != 1) && (iVar1 != 3)) || (param_5 != 1)) {
    iVar1 = param_3 + param_5 * 0xa0 + param_4 * 0x48;
    if (uVar3 < 400) {
      local_34[0] = (uVar3 >> 4) / 5;
      uStack_20 = 5;
      local_1e = 0;
      local_34[2] = (uVar3 & 0xf) >> 2;
      local_34[1] = (uVar3 >> 4) % 5;
      local_34[3] = uVar3 & 3;
      *(uint *)(iVar1 + 0x54) = 0;
      local_1a = local_1a & 0xffff;
    }
    else if (uVar3 < 500) {
      local_34[4] = uVar3 - 400;
      local_34[0] = (local_34[4] >> 2) / 5;
      uStack_20 = 5;
      local_1e = 0;
      local_34[2] = local_34[4] & 3;
      local_34[1] = (local_34[4] >> 2) % 5;
      local_34[3] = 0;
      local_1a = CONCAT22(1,(ushort)local_1a);
      *(uint *)(iVar1 + 0x54) = 0;
    }
    else if (uVar3 < 0x200) {
      local_34[0] = (uVar3 - 500) / 3;
      uStack_20 = 3;
      local_1e = 0;
      local_34[1] = (uVar3 - 500) % 3;
      local_34[2] = 0;
      local_34[3] = 0;
      local_1a = CONCAT22(2,(ushort)local_1a);
      *(uint *)(iVar1 + 0x54) = 1;
    }
  }
  iVar5 = *(int *)(iVar5 + 0x20);
  if (((iVar5 == 1) || (iVar5 == 3)) && (param_5 == 1)) {
    uVar3 = uVar3 >> 1;
    iVar5 = param_4 * 0x48 + param_3 + 0xa0;
    if (uVar3 < 0xb4) {
      local_34[0] = uVar3 / 0x24;
      local_34[1] = (uint)(((ulonglong)uVar3 % 0x24) / 6);
      local_34[3] = 0;
      local_34[2] = (uint)(((ulonglong)uVar3 % 0x24) % 6);
      *(uint *)(iVar5 + 0x54) = 0;
      local_1a = CONCAT22(3,(ushort)local_1a);
    }
    else if (uVar3 < 0xf4) {
      uVar3 = uVar3 - 0xb4;
      local_34[0] = (uVar3 & 0x3f) >> 4;
      local_34[3] = 0;
      local_34[2] = uVar3 & 3;
      local_34[1] = (uVar3 & 0xf) >> 2;
      *(uint *)(iVar5 + 0x54) = 0;
      local_1a = CONCAT22(4,(ushort)local_1a);
    }
    else if (uVar3 < 0xff) {
      local_34[0] = (uVar3 - 0xf4) / 3;
      local_34[2] = 0;
      local_34[3] = 0;
      local_34[1] = (uVar3 - 0xf4) % 3;
      *(uint *)(iVar5 + 0x54) = 0;
      local_1a = CONCAT22(5,(ushort)local_1a);
    }
  }
  for (sVar4 = 0; sVar4 < 0x2d; sVar4 = sVar4 + 1) {
    *(uint *)(param_1 + 0x7358 + sVar4 * 4) = 0;
  }
  sVar4 = 0;
  local_16 = (uint)(ushort)local_16;
  while ((int)local_16 >> 0x10 < 4) {
    for (sVar6 = 0;
        (uint)(int)sVar6 <
        *(uint *)(&DAT_005bc470 +
                 ((int)local_16 >> 0x10) * 4 + sStack_1c * 0x10 + ((int)local_1a >> 0x10) * 0x30);
        sVar6 = sVar6 + 1) {
      if (local_34[(int)local_16 >> 0x10] == 0) {
        *(uint *)(param_1 + 0x7358 + sVar4 * 4) = 0;
      }
      else {
        uVar2 = FUN_004e2cf0(param_1,local_34[(int)local_16 >> 0x10]);
        *(uint *)(param_1 + 0x7358 + sVar4 * 4) = uVar2;
      }
      sVar4 = sVar4 + 1;
    }
    local_16 = CONCAT22(local_16._2_2_ + 1,(ushort)local_16);
  }
  return;
}
