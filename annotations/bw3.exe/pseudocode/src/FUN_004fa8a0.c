// Name: FUN_004fa8a0
// Address: 004fa8a0
// Address Range: [[004fa8a0, 004fa8be]]
// Convention: unknown
// Signature: void FUN_004fa8a0(undefined4 param_1)

#include "nocturne.h"

void FUN_004fa8a0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005a30d7(param_1,2,&DAT_005e2c20);
  *(uint *)(iVar1 + 0xc28) = 1;
  return;
}
