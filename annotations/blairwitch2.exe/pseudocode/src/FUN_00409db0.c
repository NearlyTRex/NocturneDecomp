// Name: FUN_00409db0
// Address: 00409db0
// Address Range: [[00409db0, 00409de4]]
// Convention: unknown
// Signature: void FUN_00409db0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00409db0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_004a79a0(param_1);
  if (iVar1 != 0) {
    return;
  }
  FUN_004c9cc0(0x01CB8284,param_1,param_2,param_3,0);
  return;
}
