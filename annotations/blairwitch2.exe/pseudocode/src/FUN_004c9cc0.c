// Name: FUN_004c9cc0
// Address: 004c9cc0
// Address Range: [[004c9cc0, 004c9cf3]]
// Convention: unknown
// Signature: void FUN_004c9cc0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_004c9cc0(uint param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  iVar1 = FUN_004c9bd0(param_1,param_2 + 0x20,param_3,param_4,param_5);
  *(uint *)(iVar1 + 0x2c) = *(uint *)(param_2 + 0x2c);
  *(int *)(iVar1 + 0x2b64) = param_2;
  return;
}
