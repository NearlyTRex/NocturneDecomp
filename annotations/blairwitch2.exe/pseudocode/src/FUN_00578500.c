// Name: FUN_00578500
// Address: 00578500
// Address Range: [[00578500, 0057854c]]
// Convention: unknown
// Signature: void FUN_00578500(int param_1,int param_2)

#include "nocturne.h"

void FUN_00578500(int param_1,int param_2)

{
  FUN_00409830(param_1,param_2);
  if ((*(int *)(param_1 + 0x2d0) == 5) && (*(int *)(param_1 + 0x450) == *(int *)(param_2 + 8))) {
    *(uint *)(param_1 + 0x44c) = 1;
  }
  *(uint *)(param_2 + 0x50) = 0;
  *(uint *)(param_2 + 0x48) = 0x3f800000;
  *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x44);
  return;
}
