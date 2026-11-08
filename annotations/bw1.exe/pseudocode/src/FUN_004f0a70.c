// Name: FUN_004f0a70
// Address: 004f0a70
// Address Range: [[004f0a70, 004f0a8d]]
// Convention: unknown
// Signature: void FUN_004f0a70(int param_1,int param_2)

#include "nocturne.h"

void FUN_004f0a70(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x27b0) != 0) {
    return;
  }
  *(uint *)(param_2 + 0x30) = 100;
  *(uint *)(param_2 + 4) = 0;
  return;
}
