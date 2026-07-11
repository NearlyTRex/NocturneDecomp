// Name: FUN_004e0050
// Address: 004e0050
// Address Range: [[004e0050, 004e006e]]
// Convention: unknown
// Signature: void FUN_004e0050(undefined4 param_1)

#include "nocturne.h"

void FUN_004e0050(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005644a7(param_1,2,&DAT_005a0ce0);
  *(uint *)(iVar1 + 0xc28) = 1;
  return;
}
