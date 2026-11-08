// Name: FUN_005919a0
// Address: 005919a0
// Address Range: [[005919a0, 005919e2]]
// Convention: unknown
// Signature: void FUN_005919a0(int param_1)

#include "nocturne.h"

void FUN_005919a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xd084) == 0) {
    iVar1 = FUN_0040cea0(0,100);
    if (iVar1 < 0x55) {
      FUN_004fc0d0(param_1 + 0x158,1,1);
      return;
    }
  }
  FUN_004fc0d0(param_1 + 0x158,2,1);
  return;
}
