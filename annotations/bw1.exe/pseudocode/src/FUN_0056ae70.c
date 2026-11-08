// Name: FUN_0056ae70
// Address: 0056ae70
// Address Range: [[0056ae70, 0056af89]]
// Convention: unknown
// Signature: undefined4 * FUN_0056ae70(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint * FUN_0056ae70(int param_1)

{
  int iVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_1040 [1009];
  uint local_70 [6];
  uint local_58;
  uint auStack_54 [5];
  uint local_40;
  uint auStack_3c [5];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  local_20 = FUN_00569eb0(param_1);
  iVar1 = FUN_00563c40(local_20);
  iVar1 = *(int *)(iVar1 + 0x1de78);
  FUN_00421570(local_70);
  local_14 = 0;
  if (0 < iVar1) {
    local_18 = local_20 + 0x274c;
    local_1c = param_1 + 0xe80;
    do {
      if (*(int *)(local_20 + 0x30ac) == 2) {
        iVar2 = 0;
        do {
          FUN_00420570(local_18,iVar2,local_1c);
          local_40 = auStack_54[2];
          *(uint *)((int)auStack_3c + (uint)bVar5 * 0xfffffff8) =
               auStack_54[(uint)bVar5 * 0xfffffffe + 3];
          *(uint *)((int)auStack_3c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
               auStack_54[(uint)bVar5 * 0xfffffffe + (uint)bVar5 * 0xfffffffe + 4];
          FUN_005b5080(&local_40);
          local_58 = auStack_3c[2];
          *(uint *)((int)auStack_54 + (uint)bVar5 * 0xfffffff8) =
               *(uint *)((int)auStack_3c + ((uint)bVar5 * -2 + 3) * 4);
          *(uint *)((int)auStack_3c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -5) * 4) =
               *(uint *)((int)auStack_3c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4);
          iVar2 = iVar2 + 1;
          FUN_00420500(local_70,&local_58);
        } while (iVar2 < 8);
      }
      local_20 = local_20 + 4;
      local_18 = local_18 + 0x18;
      local_1c = local_1c + 0x30;
      local_14 = local_14 + 1;
    } while (local_14 < iVar1);
  }
  puVar3 = local_70;
  puVar4 = unaff_ESI;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  return unaff_ESI;
}
