// Name: FUN_00460cb0
// Address: 00460cb0
// Address Range: [[00460cb0, 00460e73]]
// Convention: unknown
// Signature: void FUN_00460cb0(int param_1)

#include "nocturne.h"

void FUN_00460cb0(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_1824 [1520];
  uint local_48;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar6 = 0;
  *(uint *)(param_1 + 0xc9bc) = 1;
  *(uint *)(param_1 + 0xc9c8) = 0;
  local_28 = FUN_00569eb0(param_1 + 0x158);
  iVar3 = *(int *)(local_28 + 0xc00);
  local_18 = 0;
  *(int *)(param_1 + 0xc2f8) = iVar3;
  if (0 < iVar3) {
    local_20 = param_1 + 0xc2fc;
    local_2c = param_1 + 0x30;
    local_24 = param_1 + 0x20;
    puVar4 = (uint *)(param_1 + 0xc308);
    local_1c = param_1;
    do {
      local_38 = FUN_0040cc00(0xc0a00000,0x40a00000);
      local_14 = local_38;
      local_34 = FUN_0040cc00(0,0x41200000);
      local_14 = local_34;
      local_30 = FUN_0040cc00(0xc0a00000,0x40a00000);
      local_14 = local_30;
      iVar1 = FUN_00418940(local_24,local_2c,&stack0xffffffc8,param_1,1,1,2);
      iVar3 = local_18;
      FUN_00431210(param_1,iVar1,local_18,0);
      *(uint *)(iVar1 + 0xcc4) = 1;
      FUN_00419b90(iVar1);
      puVar2 = (uint *)(iVar3 * 0x48 + local_20);
      *(int *)(local_1c + 0xc340) = iVar1;
      if (puVar2 != (uint *)(iVar1 + 0x20)) {
        *puVar2 = *(uint *)(iVar1 + 0x20);
        puVar2[1] = *(uint *)(iVar1 + 0x24);
        puVar2[2] = *(uint *)(iVar1 + 0x28);
      }
      if (puVar4 != (uint *)(iVar1 + 0x30)) {
        *puVar4 = *(uint *)(iVar1 + 0x30);
        puVar4[1] = *(uint *)(iVar1 + 0x34);
        puVar4[2] = *(uint *)(iVar1 + 0x38);
      }
      FUN_005b7ed0(iVar1 + 0x30);
      iVar3 = local_1c + 0x48;
      puVar2 = (uint *)(local_1c + 0xc328 + (uint)bVar6 * -8);
      *(uint *)(local_1c + 0xc324) = local_48;
      puVar5 = puVar2 + (uint)bVar6 * -2 + 1;
      *puVar2 = *(uint *)(&stack0xffffffbc + (uint)bVar6 * -8);
      *puVar5 = *(uint *)(&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      puVar5[(uint)bVar6 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
      puVar4 = puVar4 + 0x12;
      local_18 = local_18 + 1;
      local_1c = iVar3;
    } while (local_18 < *(int *)(local_28 + 0xc00));
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"?djien-die.wav @ 5" + 1);
  return;
}
