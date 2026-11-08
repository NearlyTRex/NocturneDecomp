// Name: FUN_00450700
// Address: 00450700
// Address Range: [[00450700, 00450813]]
// Convention: unknown
// Signature: void FUN_00450700(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00450700(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  uint auStack_ffc [1021];
  
  bVar3 = 0;
  FUN_004e6a90();
  iVar1 = param_2 * 0xc + param_1;
  param_1 = param_2 * 4 + param_1;
  puVar2 = (uint *)(iVar1 + 0x11f0 + (uint)bVar3 * -8);
  *(uint *)(iVar1 + 0x11ec) = auStack_ffc[0x3fa];
  *puVar2 = auStack_ffc[(uint)bVar3 * -2 + 0x3fb];
  puVar2[(uint)bVar3 * -2 + 1] = auStack_ffc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x3fc];
  *(uint *)(param_1 + 0x124c) = _DAT_01c6e2fc;
  *(uint *)(param_1 + 0x126c) = _DAT_01c6e300;
  *(uint *)(param_1 + 0x128c) = _DAT_01c6e304;
  *(uint *)(param_1 + 0x12ac) = _DAT_01c6e308;
  *(uint *)(param_1 + 0x12cc) = _DAT_01c6e30c;
  *(uint *)(param_1 + 0x12ec) = _DAT_01c6e310;
  *(uint *)(param_1 + 0x130c) = _DAT_01c6e314;
  *(uint *)(param_1 + 0x132c) = _DAT_01c6e318;
  *(uint *)(param_1 + 0x134c) = _DAT_01c6e31c;
  *(uint *)(param_1 + 0x136c) = _DAT_01d72644;
  *(uint *)(param_1 + 0x138c) = _DAT_01d72648;
  *(uint *)(param_1 + 0x13ac) = _DAT_01d7264c;
  *(uint *)(param_1 + 0x13cc) = _DAT_01d72650;
  *(uint *)(param_1 + 0x13ec) = _DAT_01d72654;
  *(uint *)(param_1 + 0x140c) = _DAT_01d72658;
  *(uint *)(param_1 + 0x142c) = _DAT_01d7265c;
  *(uint *)(param_1 + 0x144c) = _DAT_01d72660;
  *(uint *)(param_1 + 0x146c) = _DAT_01d72664;
  return;
}
