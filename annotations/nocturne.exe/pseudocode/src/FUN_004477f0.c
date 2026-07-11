// Name: FUN_004477f0
// Address: 004477f0
// Address Range: [[004477f0, 00447903]]
// Convention: unknown
// Signature: void FUN_004477f0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004477f0(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  uint auStack_ffc [1021];
  
  bVar3 = 0;
  FUN_004ce760();
  iVar1 = param_2 * 0xc + param_1;
  param_1 = param_2 * 4 + param_1;
  puVar2 = (uint *)(iVar1 + 0x11f0 + (uint)bVar3 * -8);
  *(uint *)(iVar1 + 0x11ec) = auStack_ffc[0x3fa];
  *puVar2 = auStack_ffc[(uint)bVar3 * -2 + 0x3fb];
  puVar2[(uint)bVar3 * -2 + 1] = auStack_ffc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x3fc];
  *(uint *)(param_1 + 0x124c) = _DAT_01c039e8;
  *(uint *)(param_1 + 0x126c) = _DAT_01c039ec;
  *(uint *)(param_1 + 0x128c) = _DAT_01c039f0;
  *(uint *)(param_1 + 0x12ac) = _DAT_01c039f4;
  *(uint *)(param_1 + 0x12cc) = _DAT_01c039f8;
  *(uint *)(param_1 + 0x12ec) = _DAT_01c039fc;
  *(uint *)(param_1 + 0x130c) = _DAT_01c03a00;
  *(uint *)(param_1 + 0x132c) = _DAT_01c03a04;
  *(uint *)(param_1 + 0x134c) = _DAT_01c03a08;
  *(uint *)(param_1 + 0x136c) = _DAT_01cc5118;
  *(uint *)(param_1 + 0x138c) = _DAT_01cc511c;
  *(uint *)(param_1 + 0x13ac) = _DAT_01cc5120;
  *(uint *)(param_1 + 0x13cc) = _DAT_01cc5124;
  *(uint *)(param_1 + 0x13ec) = _DAT_01cc5128;
  *(uint *)(param_1 + 0x140c) = _DAT_01cc512c;
  *(uint *)(param_1 + 0x142c) = _DAT_01cc5130;
  *(uint *)(param_1 + 0x144c) = _DAT_01cc5134;
  *(uint *)(param_1 + 0x146c) = _DAT_01cc5138;
  return;
}
