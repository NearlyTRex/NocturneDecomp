// Name: FUN_0059c380
// Address: 0059c380
// Address Range: [[0059c380, 0059c3b1]]
// Convention: unknown
// Signature: void FUN_0059c380(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_0059c380(uint param_1,uint param_2,int param_3,uint param_4)

{
  if (param_3 == 0) {
    FUN_005b7790(param_4,"%s:OFF (%i)",param_2,0);
    return;
  }
  FUN_005b7790(param_4,"%s:ON (%i)",param_2,param_3);
  return;
}
