// Name: FUN_0044dc90
// Address: 0044dc90
// Address Range: [[0044dc90, 0044dd65]]
// Convention: unknown
// Signature: void FUN_0044dc90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044dc90(int param_1)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  uint auStackY_1000 [1017];
  uint local_18;
  
  bVar3 = 0;
  *(uint *)(param_1 + 0x178) = _DAT_01c51d5c;
  *(uint *)(param_1 + 0x17c) = _DAT_01c51d60;
  *(uint *)(param_1 + 0x180) = _DAT_01c51d64;
  *(uint *)(param_1 + 0x184) = _DAT_01c51d68;
  *(uint *)(param_1 + 0x188) = _DAT_01c51d6c;
  *(uint *)(param_1 + 0x18c) = _DAT_01c51d70;
  *(uint *)(param_1 + 400) = _DAT_01c51d74;
  uVar1 = DAT_00612560;
  *(uint *)(param_1 + 0x194) = _DAT_01c51d78;
  *(uint *)(param_1 + 0x198) = _DAT_01c51d7c;
  FUN_00483ac0(uVar1);
  puVar2 = (uint *)(param_1 + 0x170 + (uint)bVar3 * -8);
  *(uint *)(param_1 + 0x16c) = local_18;
  *puVar2 = *(uint *)(&stack0xffffffec + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(uint *)(&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *(uint *)(param_1 + 0x1c0) = _DAT_01c4eff8;
  *(uint *)(param_1 + 0x1c4) = _DAT_01c4effc;
  *(uint *)(param_1 + 0x1c8) = _DAT_01c4f000;
  *(uint *)(param_1 + 0x1cc) = _DAT_01c4f004;
  FUN_0044d9f0(param_1);
  return;
}
