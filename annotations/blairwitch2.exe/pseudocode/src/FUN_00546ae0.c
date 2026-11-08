// Name: FUN_00546ae0
// Address: 00546ae0
// Address Range: [[00546ae0, 00546d28]]
// Convention: unknown
// Signature: void FUN_00546ae0(int param_1)

#include "nocturne.h"

void FUN_00546ae0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int aiStackY_1030 [1016];
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar4 = 0;
  local_30 = FUN_00547890(param_1);
  local_20 = 0;
  if (0 < *(int *)(local_30 + 0x1d1f8)) {
    local_1c = 0;
    local_2c = param_1 + 0xe80;
    local_14 = param_1 + 0x6b0;
    local_18 = param_1 + 0x58;
    iVar1 = param_1;
    iVar2 = param_1;
    local_28 = local_30;
    local_24 = local_2c;
    do {
      iVar3 = local_20 * 0x30;
      FUN_005938c0(local_24,local_14);
      if (*(int *)(iVar1 + 0xcf0) != 0x3f800000) {
        *(float *)(iVar3 + 0xe80 + param_1) =
             *(float *)(iVar1 + 0xcf0) * *(float *)(iVar3 + 0xe80 + param_1);
        *(float *)(iVar3 + 0xe84 + param_1) =
             *(float *)(iVar1 + 0xcf0) * *(float *)(iVar3 + 0xe84 + param_1);
        *(float *)(iVar3 + 0xe88 + param_1) =
             *(float *)(iVar1 + 0xcf0) * *(float *)(iVar3 + 0xe88 + param_1);
        *(float *)(iVar3 + 0xe90 + param_1) =
             *(float *)(iVar1 + 0xcf0) * *(float *)(iVar3 + 0xe90 + param_1);
        *(float *)(iVar3 + 0xe94 + param_1) =
             *(float *)(iVar1 + 0xcf0) * *(float *)(iVar3 + 0xe94 + param_1);
        *(float *)(iVar3 + 0xe98 + param_1) =
             *(float *)(iVar1 + 0xcf0) * *(float *)(iVar3 + 0xe98 + param_1);
        *(float *)(iVar3 + 0xea0 + param_1) =
             *(float *)(iVar1 + 0xcf0) * *(float *)(iVar3 + 0xea0 + param_1);
        *(float *)(iVar3 + 0xea4 + param_1) =
             *(float *)(iVar1 + 0xcf0) * *(float *)(iVar3 + 0xea4 + param_1);
        *(float *)(iVar3 + 0xea8 + param_1) =
             *(float *)(iVar1 + 0xcf0) * *(float *)(iVar3 + 0xea8 + param_1);
      }
      if (*(int *)(local_28 + 0x1d21c) < 0) {
        iVar3 = param_1 + local_1c;
        *(float *)(iVar2 + 0xe8c) = *(float *)(iVar3 + 0x58) + *(float *)(param_1 + 0x6a4);
        *(float *)(iVar2 + 0xe9c) = *(float *)(iVar3 + 0x5c) + *(float *)(param_1 + 0x6a8);
        *(float *)(iVar2 + 0xeac) = *(float *)(iVar3 + 0x60) + *(float *)(param_1 + 0x6ac);
      }
      else {
        FUN_00591530(local_18 + local_1c,*(int *)(local_28 + 0x1d21c) * 0x30 + local_2c);
        local_48 = local_3c;
        *(uint *)((int)&stack0xffffffbc + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffffc8 + (uint)bVar4 * -8);
        *(uint *)((int)&stack0xffffffc0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffffcc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
        *(uint *)(iVar2 + 0xe8c) = local_48;
        *(uint *)(iVar2 + 0xe9c) = local_44;
        *(uint *)(iVar2 + 0xeac) = local_40;
      }
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 0x30;
      local_24 = local_24 + 0x30;
      local_14 = local_14 + 0x10;
      local_1c = local_1c + 0xc;
      local_28 = local_28 + 0x24;
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)(local_30 + 0x1d1f8));
  }
  *(uint *)(param_1 + 0x2230) = 0xffffffff;
  return;
}
