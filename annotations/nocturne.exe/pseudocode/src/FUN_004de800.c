// Name: FUN_004de800
// Address: 004de800
// Address Range: [[004de800, 004de820]]
// Convention: unknown
// Signature: void FUN_004de800(int param_1)

#include "nocturne.h"

void FUN_004de800(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00452590(param_1 + 8);
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + -8) = 0;
  return;
}
