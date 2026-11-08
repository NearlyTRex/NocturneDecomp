// Name: FUN_0053fad0
// Address: 0053fad0
// Address Range: [[0053fad0, 0053fb0f]]
// Convention: unknown
// Signature: undefined4 FUN_0053fad0(int param_1)

#include "nocturne.h"

uint FUN_0053fad0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x6c8) == 6) {
    return 0;
  }
  uVar1 = FUN_0040cf60(0x43160000,0x43480000);
  return uVar1;
}
