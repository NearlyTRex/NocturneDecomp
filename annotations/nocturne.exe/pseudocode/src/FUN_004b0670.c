// Name: FUN_004b0670
// Address: 004b0670
// Address Range: [[004b0670, 004b06a3]]
// Convention: unknown
// Signature: void FUN_004b0670(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_004b0670(uint param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  iVar1 = FUN_004b0580(param_1,param_2 + 0x20,param_3,param_4,param_5);
  *(uint *)(iVar1 + 0x2c) = *(uint *)(param_2 + 0x2c);
  *(int *)(iVar1 + 0x2a00) = param_2;
  return;
}
