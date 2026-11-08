// Name: FUN_00585a10
// Address: 00585a10
// Address Range: [[00585a10, 00585adf]]
// Convention: unknown
// Signature: void FUN_00585a10(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00585a10(int param_1,float param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FUN_0042e1a0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  uVar1 = *(uint *)(0x01CCF390 + 0x294);
  iVar3 = FUN_00524770(param_1 + 0x158);
  bVar2 = false;
  switch(*(uint *)(iVar3 + 0x24)) {
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x24:
  case 0x26:
    bVar2 = true;
  }
  if ((*(int *)(param_1 + 0x1ff5c) == 7) || (bVar2)) {
    param_2 = param_2 * (float)_DAT_005f6711;
    FUN_00585b00(param_1,param_2);
    FUN_00585b00(param_1,param_2);
    FUN_00585b00(param_1,param_2);
  }
  FUN_00585b00(param_1,param_2);
  FUN_004d7f50(0x01CCF390,uVar1);
  return;
}
