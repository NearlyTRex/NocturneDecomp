// Name: FUN_00530390
// Address: 00530390
// Address Range: [[00530390, 005303a9]]
// Convention: unknown
// Signature: void FUN_00530390(int param_1,int param_2)

#include "nocturne.h"

void FUN_00530390(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 4)) {
    return;
  }
  *(uint *)(param_1 + 4) = 0;
  *(byte *)(param_1 + 0x50) = 0;
  return;
}
