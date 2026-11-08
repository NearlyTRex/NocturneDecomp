// Name: FUN_004472a0
// Address: 004472a0
// Address Range: [[004472a0, 004474c1]]
// Convention: unknown
// Signature: void FUN_004472a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004472a0(int param_1)

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
  FUN_004328c0(param_1);
  *(uint *)(param_1 + 0xca58) = 1;
  *(uint *)(param_1 + 0xca5c) = 0;
  local_20 = FUN_00569eb0(param_1 + 0x158);
  iVar3 = *(int *)(local_20 + 0xc00);
  *(int *)(param_1 + 0xc394) = iVar3;
  if (0x18 < iVar3) {
    _DAT_01d1d400 = "..\\core\\construc.cpp";
    _DAT_01d1d404 = 0x31d;
    FUN_005030e0("CConstruct::explode - Not enough containers");
  }
  iVar3 = 0;
  if (0 < *(int *)(local_20 + 0xc00)) {
    local_1c = param_1 + 0xc398;
    local_24 = param_1 + 0x30;
    local_28 = param_1 + 0x20;
    puVar4 = (uint *)(param_1 + 0xc3a4);
    local_18 = param_1;
    do {
      local_34 = FUN_0040cc00(0xc0a00000,0x40a00000);
      local_14 = local_34;
      local_30 = FUN_0040cc00(0,0x41200000);
      local_14 = local_30;
      local_2c = FUN_0040cc00(0xc0a00000,0x40a00000);
      local_14 = local_2c;
      iVar1 = FUN_00418940(local_28,local_24,&stack0xffffffcc,param_1,1,1,2);
      FUN_00431210(param_1,iVar1,iVar3,0);
      if (iVar3 == *(int *)(param_1 + 0xc2cc)) {
        *(int *)(param_1 + 0xca60) = *(int *)(param_1 + 0xc2cc);
        *(uint *)(iVar1 + 0xcc4) = 0;
        *(uint *)(iVar1 + 0xcc8) = 1;
      }
      else {
        *(uint *)(iVar1 + 0xcc4) = 1;
      }
      FUN_00419b90(iVar1);
      *(int *)(local_18 + 0xc3dc) = iVar1;
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
      FUN_005b7ed0(iVar1 + 0x30);
      iVar1 = local_18;
      puVar2 = (uint *)(local_18 + 0xc3c0);
      local_18 = local_18 + 0x48;
      puVar5 = (uint *)(iVar1 + 0xc3c4 + (uint)bVar6 * -8);
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
  return;
}
