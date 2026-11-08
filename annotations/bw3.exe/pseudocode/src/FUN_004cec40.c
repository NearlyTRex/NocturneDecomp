// Name: FUN_004cec40
// Address: 004cec40
// Address Range: [[004cec40, 004cec6c]]
// Convention: unknown
// Signature: void FUN_004cec40(undefined4 param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void FUN_004cec40(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 2) {
    return;
  }
  uVar1 = FUN_004cebf0(param_1);
  FUN_004cdff0(uVar1,param_2,param_3);
  return;
}
