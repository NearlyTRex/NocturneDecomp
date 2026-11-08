// Name: FUN_00489600
// Address: 00489600
// Address Range: [[00489600, 00489726]]
// Convention: unknown
// Signature: bool FUN_00489600(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

bool FUN_00489600(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1068 [1001];
  uint uVar5;
  byte *puVar6;
  byte *puVar7;
  uint auStack_b0 [6];
  uint auStack_98 [6];
  uint uStack_80;
  uint auStack_7c [2];
  uint local_74;
  uint auStack_70 [2];
  uint uStack_68;
  uint auStack_64 [2];
  uint uStack_5c;
  uint auStack_58 [5];
  uint uStack_44;
  uint auStack_40 [5];
  uint uStack_2c;
  uint auStack_28 [5];
  uint uStack_14;
  
  bVar4 = 0;
  if (param_2 == 0) {
    return false;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x140))(param_1);
  puVar7 = (byte *)&local_74;
  local_74 = auStack_58[2];
  *(uint *)((int)auStack_70 + (uint)bVar4 * 0xfffffff8) =
       *(uint *)((int)auStack_58 + ((uint)bVar4 * -2 + 3) * 4);
  *(uint *)((int)auStack_70 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
       *(uint *)((int)auStack_58 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 4) * 4);
  FUN_00408b80(param_1,puVar7);
  uStack_2c = uStack_80;
  *(uint *)((int)auStack_28 + (uint)bVar4 * 0xfffffff8) =
       *(uint *)((int)auStack_7c + (uint)bVar4 * 0xfffffff8);
  *(uint *)((int)auStack_28 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
       *(uint *)((int)auStack_58 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + -8) * 4);
  (**(code **)(*(int *)(param_2 + 0x154) + 0x1c))(param_2);
  puVar2 = auStack_98;
  puVar3 = auStack_b0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  FUN_00408bf0(param_2,&uStack_2c);
  puVar7 = (byte *)&uStack_68;
  uStack_68 = auStack_40[2];
  *(uint *)((int)auStack_64 + (uint)bVar4 * 0xfffffff8) =
       *(uint *)((int)auStack_40 + ((uint)bVar4 * -2 + 3) * 4);
  *(uint *)((int)auStack_64 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
       *(uint *)((int)auStack_40 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 4) * 4);
  FUN_0041ee30(auStack_b0,puVar7);
  puVar7 = (byte *)&uStack_44;
  uStack_44 = uStack_14;
  *(uint *)((int)auStack_40 + (uint)bVar4 * 0xfffffff8) =
       *(uint *)((int)auStack_28 + ((uint)bVar4 * -2 + 6) * 4);
  *(uint *)((int)auStack_40 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
       *(uint *)((int)auStack_28 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 7) * 4);
  FUN_00408b80(param_2,puVar7);
  puVar7 = (byte *)&uStack_5c;
  puVar6 = (byte *)&uStack_2c;
  uStack_5c = auStack_28[2];
  *(uint *)((int)auStack_58 + (uint)bVar4 * 0xfffffff8) =
       *(uint *)((int)auStack_28 + ((uint)bVar4 * -2 + 3) * 4);
  uVar5 = 0x01ED78C8;
  *(uint *)((int)auStack_58 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
       *(uint *)((int)auStack_28 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 4) * 4);
  iVar1 = FUN_0053cca0(uVar5,puVar6,puVar7);
  return iVar1 == 0;
}
