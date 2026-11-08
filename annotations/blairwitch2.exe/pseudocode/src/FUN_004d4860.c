// Name: FUN_004d4860
// Address: 004d4860
// Address Range: [[004d4860, 004d487d]]
// Convention: unknown
// Signature: void FUN_004d4860(int param_1,int param_2)

#include "nocturne.h"

void FUN_004d4860(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x281c) != 0) {
    return;
  }
  *(uint *)(param_2 + 0x30) = 100;
  *(uint *)(param_2 + 4) = 0;
  return;
}
