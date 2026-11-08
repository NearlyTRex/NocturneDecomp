// Name: FUN_004cc9a0
// Address: 004cc9a0
// Address Range: [[004cc9a0, 004cc9b8]]
// Convention: unknown
// Signature: void FUN_004cc9a0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_004cc9a0(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0x9f0) = param_2;
  *(uint *)(param_1 + 0x9f4) = param_3;
  return;
}
