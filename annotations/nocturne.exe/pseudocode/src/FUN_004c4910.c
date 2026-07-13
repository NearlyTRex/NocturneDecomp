// Name: FUN_004c4910
// Address: 004c4910
// Address Range: [[004c4910, 004c4966]]
// Convention: unknown
// Signature: void FUN_004c4910(int param_1)

#include "nocturne.h"

void FUN_004c4910(int param_1)

{
  uint uVar1;
  
  FUN_0051dcd0(param_1 + 0x150);
  FUN_0051e0a0(param_1 + 0x150);
  *(uint *)(param_1 + 0xbd24) = 0;
  FUN_004796b0(param_1);
  uVar1 = FUN_0040dda0(0,0x41f00000);
  *(uint *)(param_1 + 0xbca0) = uVar1;
  return;
}
