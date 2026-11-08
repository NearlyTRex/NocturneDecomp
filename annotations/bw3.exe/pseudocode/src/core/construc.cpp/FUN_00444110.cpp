// Name: FUN_00444110
// Address: 00444110
// Address Range: [[00444110, 00444330]]
// Convention: unknown
// Signature: void FUN_00444110(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00444110(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  bool bVar6;
  byte bVar7;
  uint auStackY_1820 [1520];
  int iVar8;
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
  
  bVar7 = 0;
  FUN_00431ce0(param_1);
  *(uint *)(param_1 + 0xd844) = 1;
  *(uint *)(param_1 + 0xd850) = 0;
  local_20 = FUN_0054ea40(param_1 + 0x158);
  iVar3 = *(int *)(local_20 + 0xc00);
  *(int *)(param_1 + 0xd180) = iVar3;
  if (0x18 < iVar3) {
    _DAT_01d71de0 = "..\\core\\construc.cpp";
    _DAT_01d71de4 = 0x357;
    FUN_004e4330("CConstruct::explode - Not enough containers");
  }
  iVar3 = 0;
  if (0 < *(int *)(local_20 + 0xc00)) {
    local_1c = param_1 + 0xd184;
    local_24 = param_1 + 0x30;
    local_28 = param_1 + 0x20;
    puVar4 = (uint *)(param_1 + 0xd190);
    local_18 = param_1;
    do {
      local_34 = FUN_0040ce40(0xc0a00000,0x40a00000);
      local_14 = local_34;
      local_30 = FUN_0040ce40(0,0x41200000);
      local_14 = local_30;
      local_2c = FUN_0040ce40(0xc0a00000,0x40a00000);
      local_14 = local_2c;
      iVar1 = FUN_00414550(local_28,local_24,&stack0xffffffcc,param_1,1,1,2);
      iVar8 = *(int *)(param_1 + 0xd0b8);
      bVar6 = iVar3 == iVar8;
      if (bVar6) {
        *(int *)(param_1 + 0xd848) = iVar8;
        *(uint *)(iVar1 + 0xcc4) = 0;
        *(uint *)(iVar1 + 0xcc8) = 1;
      }
      else {
        *(uint *)(iVar1 + 0xcc4) = 1;
        iVar8 = iVar3;
      }
      FUN_00430590(param_1,iVar1,iVar8,!bVar6);
      FUN_004157c0(iVar1);
      *(int *)(local_18 + 0xd1c8) = iVar1;
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
      FUN_005860b0(iVar1 + 0x30);
      iVar8 = local_18;
      puVar2 = (uint *)(local_18 + 0xd1ac);
      local_18 = local_18 + 0x48;
      puVar5 = (uint *)(iVar8 + 0xd1b0 + (uint)bVar7 * -8);
      *puVar2 = local_44;
      puVar2 = puVar5 + (uint)bVar7 * -2 + 1;
      *puVar5 = *(uint *)(&stack0xffffffc0 + (uint)bVar7 * -8);
      *puVar2 = *(uint *)(&stack0xffffffc4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      puVar2[(uint)bVar7 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffc4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
            ((uint)bVar7 * -2 + 1) * 4);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 0x12;
    } while (iVar3 < *(int *)(local_20 + 0xc00));
  }
  return;
}
