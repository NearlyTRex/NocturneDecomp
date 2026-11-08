// Name: FUN_004d4810
// Address: 004d4810
// Address Range: [[004d4810, 004d4851]]
// Convention: unknown
// Signature: void FUN_004d4810(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004d4810(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_005105b0(param_1,param_2);
  iVar1 = FUN_0048e340(0x01C38BC0,param_1 + 0x24348);
  if (iVar1 == 0) {
    return;
  }
  FUN_00427360(param_1,0,0xbf800000,1);
  return;
}
