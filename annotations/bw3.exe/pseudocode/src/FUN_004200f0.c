// Name: FUN_004200f0
// Address: 004200f0
// Address Range: [[004200f0, 004200fe]]
// Convention: unknown
// Signature: void FUN_004200f0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004200f0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x318) = param_2;
  return;
}
