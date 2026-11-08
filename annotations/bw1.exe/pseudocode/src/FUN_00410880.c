// Name: FUN_00410880
// Address: 00410880
// Address Range: [[00410880, 004108aa]]
// Convention: unknown
// Signature: void FUN_00410880(int param_1)

#include "nocturne.h"

void FUN_00410880(int param_1)

{
  uint uVar1;
  
  FUN_00408850(param_1);
  uVar1 = *(uint *)(0x01D2C900 + 0x1008);
  *(uint *)(param_1 + 0xf8) = 0;
  *(uint *)(param_1 + 0xfc) = uVar1;
  return;
}
