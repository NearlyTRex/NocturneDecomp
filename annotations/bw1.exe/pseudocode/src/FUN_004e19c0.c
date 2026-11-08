// Name: FUN_004e19c0
// Address: 004e19c0
// Address Range: [[004e19c0, 004e1a02]]
// Convention: unknown
// Signature: void FUN_004e19c0(int param_1)

#include "nocturne.h"

void FUN_004e19c0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x180) == 0) {
    iVar1 = FUN_004a6c30(0x01C51D80,param_1 + 0x184);
    if (iVar1 != 0) {
      FUN_004e34b0(param_1,param_1 + 0x20);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x104) = 1;
  }
  return;
}
