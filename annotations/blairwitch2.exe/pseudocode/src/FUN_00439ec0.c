// Name: FUN_00439ec0
// Address: 00439ec0
// Address Range: [[00439ec0, 00439ece]]
// Convention: unknown
// Signature: void FUN_00439ec0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00439ec0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x430) = param_2;
  return;
}
