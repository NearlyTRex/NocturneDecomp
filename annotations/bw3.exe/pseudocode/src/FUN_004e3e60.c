// Name: FUN_004e3e60
// Address: 004e3e60
// Address Range: [[004e3e60, 004e3eab]]
// Convention: unknown
// Signature: void FUN_004e3e60(int param_1,int param_2)

#include "nocturne.h"

void FUN_004e3e60(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x2d4) == 2) && (param_2 == 1)) {
    *(uint *)(param_1 + 0x594) = 0;
    FUN_00556be0(*(uint *)(param_1 + 0x5c4));
    *(uint *)(param_1 + 0x5c4) = 0;
  }
  FUN_0057b7f0(param_1,param_2);
  return;
}
