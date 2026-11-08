// Name: FUN_00509530
// Address: 00509530
// Address Range: [[00509530, 00509559]]
// Convention: unknown
// Signature: void FUN_00509530(int param_1,int param_2)

#include "nocturne.h"

void FUN_00509530(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x206ac) != 0) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x24fc) = 1;
    }
    FUN_0042e300(param_1,param_2);
  }
  return;
}
