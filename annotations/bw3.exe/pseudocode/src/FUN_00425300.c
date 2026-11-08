// Name: FUN_00425300
// Address: 00425300
// Address Range: [[00425300, 00425355]]
// Convention: unknown
// Signature: void FUN_00425300(int param_1,int param_2)

#include "nocturne.h"

void FUN_00425300(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x2d4) == 2) && (param_2 == 1)) {
    FUN_00556be0(*(uint *)(param_1 + 0x5a4));
    *(uint *)(param_1 + 0x5a4) = 0;
    *(uint *)(param_1 + 0x59c) = 0;
    *(uint *)(param_1 + 0x5a0) = 0;
  }
  FUN_0057b7f0(param_1,param_2);
  return;
}
