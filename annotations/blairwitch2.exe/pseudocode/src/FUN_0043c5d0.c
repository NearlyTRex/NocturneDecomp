// Name: FUN_0043c5d0
// Address: 0043c5d0
// Address Range: [[0043c5d0, 0043c6a5]]
// Convention: unknown
// Signature: void FUN_0043c5d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043c5d0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  uint auStackY_1000 [1017];
  uint local_18;
  
  bVar3 = 0;
  *(uint *)(param_1 + 0x178) = _DAT_01c38b9c;
  *(uint *)(param_1 + 0x17c) = _DAT_01c38ba0;
  *(uint *)(param_1 + 0x180) = _DAT_01c38ba4;
  *(uint *)(param_1 + 0x184) = _DAT_01c38ba8;
  *(uint *)(param_1 + 0x188) = _DAT_01c38bac;
  *(uint *)(param_1 + 0x18c) = _DAT_01c38bb0;
  *(uint *)(param_1 + 400) = _DAT_01c38bb4;
  uVar1 = DAT_0060b280;
  *(uint *)(param_1 + 0x194) = _DAT_01c38bb8;
  *(uint *)(param_1 + 0x198) = _DAT_01c38bbc;
  FUN_0046b5c0(uVar1);
  puVar2 = (uint *)(param_1 + 0x170 + (uint)bVar3 * -8);
  *(uint *)(param_1 + 0x16c) = local_18;
  *puVar2 = *(uint *)(&stack0xffffffec + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(uint *)(&stack0xfffffff0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  *(uint *)(param_1 + 0x1c0) = _DAT_01c35e38;
  *(uint *)(param_1 + 0x1c4) = _DAT_01c35e3c;
  *(uint *)(param_1 + 0x1c8) = _DAT_01c35e40;
  *(uint *)(param_1 + 0x1cc) = _DAT_01c35e44;
  FUN_0043c330(param_1);
  return;
}
