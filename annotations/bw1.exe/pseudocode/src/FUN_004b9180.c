// Name: FUN_004b9180
// Address: 004b9180
// Address Range: [[004b9180, 004b91cf]]
// Convention: unknown
// Signature: void FUN_004b9180(int param_1)

#include "nocturne.h"

void FUN_004b9180(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x2d4) = 1;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    FUN_004b59e0(0x01C57074,param_1 + 0x360,0,0x4000,0x4000,0,0xffff);
  } while (iVar1 < 5);
  *(uint *)(param_1 + 0x4f4) = 1;
  return;
}
