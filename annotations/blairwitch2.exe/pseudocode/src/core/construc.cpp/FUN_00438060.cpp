// Name: FUN_00438060
// Address: 00438060
// Address Range: [[00438060, 00438291]]
// Convention: unknown
// Signature: void FUN_00438060(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00438060(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_1820 [1520];
  uint local_44;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar6 = 0;
  FUN_00428e00(param_1);
  *(uint *)(param_1 + 0x112d8) = 1;
  *(uint *)(param_1 + 0x112dc) = 0;
  local_20 = FUN_00547810(param_1 + 0x2b4);
  iVar3 = *(int *)(local_20 + 0xc00);
  *(int *)(param_1 + 0x10c14) = iVar3;
  if (0x18 < iVar3) {
    _DAT_01d046a0 = "..\\core\\construc.cpp";
    _DAT_01d046a4 = 0x294;
    FUN_004e4500("CConstruct::explode - Not enough containers");
  }
  iVar3 = 0;
  if (0 < *(int *)(local_20 + 0xc00)) {
    local_1c = param_1 + 0x10c18;
    local_28 = param_1 + 0x30;
    local_24 = param_1 + 0x20;
    puVar4 = (uint *)(param_1 + 0x10c24);
    local_18 = param_1;
    do {
      local_34 = FUN_0040cf60(0xc0a00000,0x40a00000);
      local_14 = local_34;
      local_30 = FUN_0040cf60(0,0x41200000);
      local_14 = local_30;
      local_2c = FUN_0040cf60(0xc0a00000,0x40a00000);
      local_14 = local_2c;
      iVar1 = FUN_004154f0(local_24,local_28,&stack0xffffffcc,param_1,1,1,2);
      FUN_004277e0(param_1,iVar1,iVar3,0);
      if (iVar3 == *(int *)(param_1 + 0x10b60)) {
        *(int *)(param_1 + 0x112e0) = *(int *)(param_1 + 0x10b60);
        *(uint *)(iVar1 + 0x10d8) = 0;
      }
      else {
        *(uint *)(iVar1 + 0x10d8) = 1;
      }
      FUN_00416700(iVar1);
      *(int *)(local_18 + 0x10c5c) = iVar1;
      puVar2 = (uint *)(iVar3 * 0x48 + local_1c);
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
      FUN_00594380(iVar1 + 0x30);
      iVar1 = local_18;
      puVar2 = (uint *)(local_18 + 0x10c40);
      local_18 = local_18 + 0x48;
      puVar5 = (uint *)(iVar1 + 0x10c44 + (uint)bVar6 * -8);
      *puVar2 = local_44;
      puVar2 = puVar5 + (uint)bVar6 * -2 + 1;
      *puVar5 = *(uint *)(&stack0xffffffc0 + (uint)bVar6 * -8);
      *puVar2 = *(uint *)(&stack0xffffffc4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      puVar2[(uint)bVar6 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffc4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 0x12;
    } while (iVar3 < *(int *)(local_20 + 0xc00));
  }
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"boneguy-fallapart.wav");
  return;
}
