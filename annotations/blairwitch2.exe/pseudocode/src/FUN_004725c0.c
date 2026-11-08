// Name: FUN_004725c0
// Address: 004725c0
// Address Range: [[004725c0, 004725f7]]
// Convention: unknown
// Signature: void FUN_004725c0(int param_1)

#include "nocturne.h"

void FUN_004725c0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_005b7fa7(*(uint *)(param_1 + 0x50),&DAT_005f5b30);
  FUN_005b7fce(uVar1);
  *(uint *)(param_1 + 0x50) = 0;
  *(uint *)(param_1 + 0x48) = 0;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x48);
  return;
}
