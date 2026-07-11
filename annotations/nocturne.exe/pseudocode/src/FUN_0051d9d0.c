// Name: FUN_0051d9d0
// Address: 0051d9d0
// Address Range: [[0051d9d0, 0051da4b]]
// Convention: unknown
// Signature: void FUN_0051d9d0(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_0051d9d0(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  
  if (param_2 < 0) {
    uVar1 = FUN_0051e020(param_1,param_1 + 0x2238);
    param_2 = FUN_0051a700(uVar1);
  }
  FUN_0051dad0(param_1,param_2);
  if (param_4 == 0) {
    if (((int)param_3 < 0) || ((param_3 & 0x100) == 0)) {
      FUN_0051db70(param_1,param_2);
    }
  }
  else {
    FUN_0051db20(param_1,param_2);
  }
  FUN_0051dbc0(param_1,param_3,param_5);
  return;
}
