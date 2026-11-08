// Name: FUN_00442f00
// Address: 00442f00
// Address Range: [[00442f00, 00443013]]
// Convention: unknown
// Signature: void FUN_00442f00(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00442f00(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  uint auStack_ffc [1021];
  
  bVar3 = 0;
  FUN_004ea3b0();
  iVar1 = param_2 * 0xc + param_1;
  param_1 = param_2 * 4 + param_1;
  puVar2 = (uint *)(iVar1 + 0x11f0 + (uint)bVar3 * -8);
  *(uint *)(iVar1 + 0x11ec) = auStack_ffc[0x3fa];
  *puVar2 = auStack_ffc[(uint)bVar3 * -2 + 0x3fb];
  puVar2[(uint)bVar3 * -2 + 1] = auStack_ffc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x3fc];
  *(uint *)(param_1 + 0x124c) = _DAT_01c38b9c;
  *(uint *)(param_1 + 0x126c) = _DAT_01c38ba0;
  *(uint *)(param_1 + 0x128c) = _DAT_01c38ba4;
  *(uint *)(param_1 + 0x12ac) = _DAT_01c38ba8;
  *(uint *)(param_1 + 0x12cc) = _DAT_01c38bac;
  *(uint *)(param_1 + 0x12ec) = _DAT_01c38bb0;
  *(uint *)(param_1 + 0x130c) = _DAT_01c38bb4;
  *(uint *)(param_1 + 0x132c) = _DAT_01c38bb8;
  *(uint *)(param_1 + 0x134c) = _DAT_01c38bbc;
  *(uint *)(param_1 + 0x136c) = _DAT_01d04fb8;
  *(uint *)(param_1 + 0x138c) = _DAT_01d04fbc;
  *(uint *)(param_1 + 0x13ac) = _DAT_01d04fc0;
  *(uint *)(param_1 + 0x13cc) = _DAT_01d04fc4;
  *(uint *)(param_1 + 0x13ec) = _DAT_01d04fc8;
  *(uint *)(param_1 + 0x140c) = _DAT_01d04fcc;
  *(uint *)(param_1 + 0x142c) = _DAT_01d04fd0;
  *(uint *)(param_1 + 0x144c) = _DAT_01d04fd4;
  *(uint *)(param_1 + 0x146c) = _DAT_01d04fd8;
  return;
}
