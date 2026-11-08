// Name: FUN_004a0fe0
// Address: 004a0fe0
// Address Range: [[004a0fe0, 004a1031]]
// Convention: unknown
// Signature: void FUN_004a0fe0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004a0fe0(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(int *)(0x01CCF390 + 0x1f0) == 0) {
    iVar1 = FUN_004a6c30(0x01C51D80,"Capture");
    if (iVar1 == 0) {
      FUN_00433f10(param_1,param_2,param_1 + 0xc1f4);
      return;
    }
  }
  FUN_00433f10(param_1,param_2,0);
  return;
}
