// Name: FUN_0059bd80
// Address: 0059bd80
// Address Range: [[0059bd80, 0059bdcc]]
// Convention: unknown
// Signature: void FUN_0059bd80(int param_1,int param_2)

#include "nocturne.h"

void FUN_0059bd80(int param_1,int param_2)

{
  FUN_00409680(param_1,param_2);
  if ((*(int *)(param_1 + 0x174) == 5) && (*(int *)(param_1 + 0x2f4) == *(int *)(param_2 + 8))) {
    *(uint *)(param_1 + 0x2f0) = 1;
  }
  *(uint *)(param_2 + 0x50) = 0;
  *(uint *)(param_2 + 0x48) = 0x3f800000;
  *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x44);
  return;
}
