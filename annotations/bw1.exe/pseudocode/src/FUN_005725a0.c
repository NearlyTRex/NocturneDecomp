// Name: FUN_005725a0
// Address: 005725a0
// Address Range: [[005725a0, 00572676]]
// Convention: unknown
// Signature: undefined8 FUN_005725a0(undefined4 param_1,double param_2,undefined4 param_3)

#include "nocturne.h"

ulonglong FUN_005725a0(uint param_1,double param_2,uint param_3)

{
  ulonglong uVar1;
  double dVar2;
  int iVar3;
  
  param_2 = (double)FUN_00572430(param_1,param_2._0_4_,param_2._4_4_,param_3,2);
  iVar3 = FUN_00572680(param_1);
  if (iVar3 == 0) {
    if (param_2 < 0.0) {
      param_2 = 0.0;
    }
    else if (1.0 < param_2) {
      param_2 = 1.0;
    }
  }
  else {
    dVar2 = (double)FUN_005c0880(param_2);
    param_2 = param_2 - dVar2;
  }
  uVar1 = FUN_00572430(param_1,param_2._0_4_,param_2._4_4_,2,param_3);
  return uVar1;
}
