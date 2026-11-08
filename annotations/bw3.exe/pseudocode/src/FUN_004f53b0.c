// Name: FUN_004f53b0
// Address: 004f53b0
// Address Range: [[004f53b0, 004f53e2]]
// Convention: unknown
// Signature: void FUN_004f53b0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004f53b0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_004f5130(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_0046b580(DAT_005f2afc,param_1 + 0xe8);
  return;
}
