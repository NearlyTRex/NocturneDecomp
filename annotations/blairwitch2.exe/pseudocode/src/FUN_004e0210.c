// Name: FUN_004e0210
// Address: 004e0210
// Address Range: [[004e0210, 004e0235]]
// Convention: unknown
// Signature: undefined4 FUN_004e0210(int param_1)

#include "nocturne.h"

uint FUN_004e0210(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044fd20(param_1 + 0x2b4);
  if (*(int *)(iVar1 + 0x110) < 1) {
    return 0;
  }
  return 1;
}
