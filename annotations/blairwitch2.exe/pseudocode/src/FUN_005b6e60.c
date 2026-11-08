// Name: FUN_005b6e60
// Address: 005b6e60
// Address Range: [[005b6e60, 005b6e7e]]
// Convention: unknown
// Signature: void FUN_005b6e60(undefined4 param_1)

#include "nocturne.h"

void FUN_005b6e60(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005b7f5f(param_1,2,&DAT_006013c0);
  *(uint *)(iVar1 + 0xc28) = 1;
  return;
}
