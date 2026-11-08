// Name: FUN_00489fc0
// Address: 00489fc0
// Address Range: [[00489fc0, 00489fe9]]
// Convention: unknown
// Signature: void FUN_00489fc0(int param_1,int param_2)

#include "nocturne.h"

void FUN_00489fc0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xcdd0) != 0) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x24fc) = 1;
    }
    FUN_0042e300(param_1,param_2);
  }
  return;
}
