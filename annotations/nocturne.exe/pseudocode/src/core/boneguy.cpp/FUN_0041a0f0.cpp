// Name: FUN_0041a0f0
// Address: 0041a0f0
// Address Range: [[0041a0f0, 0041a30c]]
// Convention: unknown
// Signature: void FUN_0041a0f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041a0f0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
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
  
  bVar5 = 0;
  FUN_004291f0(param_1);
  *(uint *)(param_1 + 0xc344) = 1;
  *(uint *)(param_1 + 0xc348) = 0;
  local_24 = FUN_0051e020(param_1 + 0x150);
  iVar1 = *(int *)(local_24 + 0xc00);
  *(int *)(param_1 + 0xbda0) = iVar1;
  if (0x14 < iVar1) {
    _DAT_01cc4800 = "..\\core\\boneguy.cpp";
    _DAT_01cc4804 = 0x443;
    FUN_004c8440("CBoneGuy::explode - Not enough containers");
  }
  local_18 = 0;
  if (0 < *(int *)(local_24 + 0xc00)) {
    local_20 = param_1 + 0xbda4;
    local_2c = param_1 + 0x30;
    local_28 = param_1 + 0x20;
    puVar3 = (uint *)(param_1 + 0xbdb0);
    local_1c = param_1;
    do {
      local_38 = FUN_0040dda0(0xc0a00000,0x40a00000);
      local_14 = local_38;
      local_34 = FUN_0040dda0(0,0x41200000);
      local_14 = local_34;
      local_30 = FUN_0040dda0(0xc0a00000,0x40a00000);
      local_14 = local_30;
      iVar1 = FUN_00415b30(local_28,local_2c,&stack0xffffffc8,param_1,1,1,2);
      FUN_00427eb0(param_1,iVar1,local_18,0);
      *(uint *)(iVar1 + 0xcac) = 1;
      FUN_00416d40(iVar1);
      *(int *)(local_1c + 0xbde8) = iVar1;
      puVar2 = (uint *)(local_18 * 0x48 + local_20);
      if (puVar2 != (uint *)(iVar1 + 0x20)) {
        *puVar2 = *(uint *)(iVar1 + 0x20);
        puVar2[1] = *(uint *)(iVar1 + 0x24);
        puVar2[2] = *(uint *)(iVar1 + 0x28);
      }
      if (puVar3 != (uint *)(iVar1 + 0x30)) {
        *puVar3 = *(uint *)(iVar1 + 0x30);
        puVar3[1] = *(uint *)(iVar1 + 0x34);
        puVar3[2] = *(uint *)(iVar1 + 0x38);
      }
      puVar3 = puVar3 + 0x12;
      FUN_0055d610(iVar1 + 0x30);
      iVar1 = local_1c + 0x48;
      local_18 = local_18 + 1;
      puVar2 = (uint *)(local_1c + 0xbdd0 + (uint)bVar5 * -8);
      *(uint *)(local_1c + 0xbdcc) = local_48;
      puVar4 = puVar2 + (uint)bVar5 * -2 + 1;
      *puVar2 = *(uint *)(&stack0xffffffbc + (uint)bVar5 * -8);
      *puVar4 = *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      puVar4[(uint)bVar5 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
            ((uint)bVar5 * -2 + 1) * 4);
      local_1c = iVar1;
    } while (local_18 < *(int *)(local_24 + 0xc00));
  }
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"boneguy-fallapart.wav");
  return;
}
