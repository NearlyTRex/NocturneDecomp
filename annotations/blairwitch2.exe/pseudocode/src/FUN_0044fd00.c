// Name: FUN_0044fd00
// Address: 0044fd00
// Address Range: [[0044fd00, 0044fd1a]]
// Convention: unknown
// Signature: void FUN_0044fd00(int param_1)

#include "nocturne.h"

void FUN_0044fd00(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0044fba0(param_1 + 0x78);
  *(uint *)(param_1 + 0x178) = uVar1;
  return;
}
