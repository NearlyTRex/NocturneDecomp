// Name: FUN_004673a0
// Address: 004673a0
// Address Range: [[004673a0, 004673d7]]
// Convention: unknown
// Signature: void FUN_004673a0(int param_1)

#include "nocturne.h"

void FUN_004673a0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0056445f(*(uint *)(param_1 + 0x50),&DAT_0059c8c0);
  FUN_00564486(uVar1);
  *(uint *)(param_1 + 0x50) = 0;
  *(uint *)(param_1 + 0x48) = 0;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x48);
  return;
}
