// Name: FUN_004a5aa0
// Address: 004a5aa0
// Address Range: [[004a5aa0, 004a5acc]]
// Convention: unknown
// Signature: void FUN_004a5aa0(int param_1)

#include "nocturne.h"

void FUN_004a5aa0(int param_1)

{
  uint uVar1;
  
  FUN_00408890(param_1);
  FUN_004a5ad0(*(uint *)(param_1 + 0x1a8));
  uVar1 = FUN_005a35cc();
  *(uint *)(param_1 + 0x294) = uVar1 & 1;
  return;
}
