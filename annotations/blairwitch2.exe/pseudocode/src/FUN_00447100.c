// Name: FUN_00447100
// Address: 00447100
// Address Range: [[00447100, 0044713e]]
// Convention: unknown
// Signature: void FUN_00447100(int param_1)

#include "nocturne.h"

void FUN_00447100(int param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_00408a80(param_1);
  iVar2 = 0x01D182F0;
  *(uint *)(param_1 + 0xf8) = 0;
  uVar1 = *(uint *)(iVar2 + 0x1008);
  *(uint *)(param_1 + 0x2e0) = 0;
  *(uint *)(param_1 + 0x34c) = 1;
  *(uint *)(param_1 + 0xfc) = uVar1;
  return;
}
