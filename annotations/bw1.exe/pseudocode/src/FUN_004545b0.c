// Name: FUN_004545b0
// Address: 004545b0
// Address Range: [[004545b0, 004546c3]]
// Convention: unknown
// Signature: void FUN_004545b0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004545b0(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  uint auStack_ffc [1021];
  
  bVar3 = 0;
  FUN_00509050();
  iVar1 = param_2 * 0xc + param_1;
  param_1 = param_2 * 4 + param_1;
  puVar2 = (uint *)(iVar1 + 0x11f0 + (uint)bVar3 * -8);
  *(uint *)(iVar1 + 0x11ec) = auStack_ffc[0x3fa];
  *puVar2 = auStack_ffc[(uint)bVar3 * -2 + 0x3fb];
  puVar2[(uint)bVar3 * -2 + 1] = auStack_ffc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x3fc];
  *(uint *)(param_1 + 0x124c) = _DAT_01c51d5c;
  *(uint *)(param_1 + 0x126c) = _DAT_01c51d60;
  *(uint *)(param_1 + 0x128c) = _DAT_01c51d64;
  *(uint *)(param_1 + 0x12ac) = _DAT_01c51d68;
  *(uint *)(param_1 + 0x12cc) = _DAT_01c51d6c;
  *(uint *)(param_1 + 0x12ec) = _DAT_01c51d70;
  *(uint *)(param_1 + 0x130c) = _DAT_01c51d74;
  *(uint *)(param_1 + 0x132c) = _DAT_01c51d78;
  *(uint *)(param_1 + 0x134c) = _DAT_01c51d7c;
  *(uint *)(param_1 + 0x136c) = _DAT_01d1dd18;
  *(uint *)(param_1 + 0x138c) = _DAT_01d1dd1c;
  *(uint *)(param_1 + 0x13ac) = _DAT_01d1dd20;
  *(uint *)(param_1 + 0x13cc) = _DAT_01d1dd24;
  *(uint *)(param_1 + 0x13ec) = _DAT_01d1dd28;
  *(uint *)(param_1 + 0x140c) = _DAT_01d1dd2c;
  *(uint *)(param_1 + 0x142c) = _DAT_01d1dd30;
  *(uint *)(param_1 + 0x144c) = _DAT_01d1dd34;
  *(uint *)(param_1 + 0x146c) = _DAT_01d1dd38;
  return;
}
