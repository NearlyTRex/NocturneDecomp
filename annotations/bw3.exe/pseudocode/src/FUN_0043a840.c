// Name: FUN_0043a840
// Address: 0043a840
// Address Range: [[0043a840, 0043a888]]
// Convention: unknown
// Signature: void FUN_0043a840(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0043a840(uint param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_005fba40 == 0) {
    FUN_005163b0(param_2,param_1);
    return;
  }
  iVar1 = FUN_00439da0(param_1,param_2);
  if ((iVar1 == 0) && (2 < DAT_007e3e88)) {
    FUN_00515e80(&DAT_007e3e8c,DAT_007e3e88);
    return;
  }
  return;
}
