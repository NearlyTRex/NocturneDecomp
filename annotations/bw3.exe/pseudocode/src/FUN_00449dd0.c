// Name: FUN_00449dd0
// Address: 00449dd0
// Address Range: [[00449dd0, 00449ea5]]
// Convention: unknown
// Signature: void FUN_00449dd0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449dd0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  uint auStackY_1000 [1017];
  uint local_18;
  
  bVar3 = 0;
  *(uint *)(param_1 + 0x178) = _DAT_01c6e2fc;
  *(uint *)(param_1 + 0x17c) = _DAT_01c6e300;
  *(uint *)(param_1 + 0x180) = _DAT_01c6e304;
  *(uint *)(param_1 + 0x184) = _DAT_01c6e308;
  *(uint *)(param_1 + 0x188) = _DAT_01c6e30c;
  *(uint *)(param_1 + 0x18c) = _DAT_01c6e310;
  *(uint *)(param_1 + 400) = _DAT_01c6e314;
  uVar1 = DAT_005f2afc;
  *(uint *)(param_1 + 0x194) = _DAT_01c6e318;
  *(uint *)(param_1 + 0x198) = _DAT_01c6e31c;
  FUN_0046d1a0(uVar1);
  puVar2 = (uint *)(param_1 + 0x170 + (uint)bVar3 * -8);
  *(uint *)(param_1 + 0x16c) = local_18;
  *puVar2 = *(uint *)(&stack0xffffffec + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(uint *)(&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *(uint *)(param_1 + 0x1c0) = _DAT_01c6b598;
  *(uint *)(param_1 + 0x1c4) = _DAT_01c6b59c;
  *(uint *)(param_1 + 0x1c8) = _DAT_01c6b5a0;
  *(uint *)(param_1 + 0x1cc) = _DAT_01c6b5a4;
  FUN_00449b30(param_1);
  return;
}
