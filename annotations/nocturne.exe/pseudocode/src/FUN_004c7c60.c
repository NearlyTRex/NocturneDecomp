// Name: FUN_004c7c60
// Address: 004c7c60
// Address Range: [[004c7c60, 004c7c9f]]
// Convention: unknown
// Signature: undefined4 FUN_004c7c60(int param_1)

#include "nocturne.h"

uint FUN_004c7c60(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x564) == 6) {
    return 0;
  }
  uVar1 = FUN_0040dda0(0x43160000,0x43480000);
  return uVar1;
}
