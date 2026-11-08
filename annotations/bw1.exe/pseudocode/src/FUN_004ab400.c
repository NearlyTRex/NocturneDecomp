// Name: FUN_004ab400
// Address: 004ab400
// Address Range: [[004ab400, 004ab40e]]
// Convention: unknown
// Signature: void FUN_004ab400(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004ab400(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2d4) = param_2;
  return;
}
