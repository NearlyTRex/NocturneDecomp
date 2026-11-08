// Name: FUN_004591b0
// Address: 004591b0
// Address Range: [[004591b0, 004591ee]]
// Convention: unknown
// Signature: void FUN_004591b0(int param_1)

#include "nocturne.h"

void FUN_004591b0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_00408890(param_1);
  iVar2 = 0x01D81080;
  *(uint *)(param_1 + 0xf8) = 0;
  uVar1 = *(uint *)(iVar2 + 0x1008);
  *(uint *)(param_1 + 0x184) = 0;
  *(uint *)(param_1 + 0x1f0) = 1;
  *(uint *)(param_1 + 0xfc) = uVar1;
  return;
}
