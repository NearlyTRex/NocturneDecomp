// Name: FUN_0056dd30
// Address: 0056dd30
// Address Range: [[0056dd30, 0056de0a]]
// Convention: unknown
// Signature: int FUN_0056dd30(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int FUN_0056dd30(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1010 [1000];
  byte *puVar5;
  uint auStack_4c [6];
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint auStack_24 [2];
  uint uStack_1c;
  uint auStack_18 [2];
  
  bVar4 = 0;
  FUN_004087f0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar2 = (uint *)&stack0xffffff9c;
  puVar3 = auStack_4c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_0041daf0(auStack_4c);
  if (iVar1 == 0) {
    FUN_00408830(param_1);
    return 0;
  }
  uStack_30 = *(uint *)(param_1 + 0x310);
  uStack_34 = 0;
  uStack_2c = 0;
  FUN_00408b40(param_1,&uStack_34);
  puVar5 = (byte *)&uStack_1c;
  uStack_1c = uStack_28;
  *(uint *)((int)auStack_18 + (uint)bVar4 * 0xfffffff8) =
       *(uint *)((int)auStack_24 + (uint)bVar4 * 0xfffffff8);
  *(uint *)((int)auStack_18 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
       auStack_24[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1];
  FUN_0046cf30(DAT_005f2afc,&DAT_02cfd900,puVar5);
  FUN_00462540(param_1 + 0x158,0,0xffffffff);
  thunk_FUN_004e5ef0(DAT_005f2afc);
  FUN_00408830(param_1);
  return iVar1;
}
