// Name: FUN_004a0f60
// Address: 004a0f60
// Address Range: [[004a0f60, 004a0fa4]]
// Convention: unknown
// Signature: undefined4 FUN_004a0f60(int param_1)

#include "nocturne.h"

uint FUN_004a0f60(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x6c8) == 6) {
    return 0;
  }
  uVar1 = FUN_0040cf60(0x43160000,0x43480000);
  return uVar1;
}
