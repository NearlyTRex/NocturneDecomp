// Name: FUN_00419550
// Address: 00419550
// Address Range: [[00419550, 00419784]]
// Convention: unknown
// Signature: void FUN_00419550(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00419550(int param_1)

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
  FUN_00431ce0(param_1);
  *(uint *)(param_1 + 0xd0e4) = 1;
  *(uint *)(param_1 + 0xd694) = 0;
  if ((uint *)(param_1 + 0xd068) != (uint *)(param_1 + 0x20)) {
    *(uint *)(param_1 + 0xd068) = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0xd06c) = *(uint *)(param_1 + 0x24);
    *(uint *)(param_1 + 0xd070) = *(uint *)(param_1 + 0x28);
  }
  local_18 = FUN_0054ea40(param_1 + 0x158);
  iVar1 = *(int *)(local_18 + 0xc00);
  *(int *)(param_1 + 0xd0e8) = iVar1;
  if (0x14 < iVar1) {
    _DAT_01d71de0 = "..\\core\\boneguy.cpp";
    _DAT_01d71de4 = 0x49c;
    FUN_004e4330("CBoneGuy::explode - Not enough containers");
  }
  local_1c = 0;
  if (0 < *(int *)(local_18 + 0xc00)) {
    local_24 = param_1 + 0xd0f0;
    local_2c = param_1 + 0x30;
    local_28 = param_1 + 0x20;
    puVar3 = (uint *)(param_1 + 0xd0fc);
    local_20 = param_1;
    do {
      local_38 = FUN_0040ce40(0xc0a00000,0x40a00000);
      local_14 = local_38;
      local_34 = FUN_0040ce40(0,0x41200000);
      local_14 = local_34;
      local_30 = FUN_0040ce40(0xc0a00000,0x40a00000);
      local_14 = local_30;
      iVar1 = FUN_00414550(local_28,local_2c,&stack0xffffffc8,param_1,1,1,2);
      FUN_00430590(param_1,iVar1,local_1c,1);
      *(uint *)(iVar1 + 0xcc4) = 1;
      FUN_004157c0(iVar1);
      *(int *)(local_20 + 0xd134) = iVar1;
      puVar2 = (uint *)(local_1c * 0x48 + local_24);
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
      FUN_005860b0(iVar1 + 0x30);
      iVar1 = local_20 + 0x48;
      local_1c = local_1c + 1;
      puVar2 = (uint *)(local_20 + 0xd11c + (uint)bVar5 * -8);
      *(uint *)(local_20 + 0xd118) = local_48;
      puVar4 = puVar2 + (uint)bVar5 * -2 + 1;
      *puVar2 = *(uint *)(&stack0xffffffbc + (uint)bVar5 * -8);
      *puVar4 = *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      puVar4[(uint)bVar5 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
            ((uint)bVar5 * -2 + 1) * 4);
      local_20 = iVar1;
    } while (local_1c < *(int *)(local_18 + 0xc00));
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"boneguy-fallapart.wav");
  return;
}
