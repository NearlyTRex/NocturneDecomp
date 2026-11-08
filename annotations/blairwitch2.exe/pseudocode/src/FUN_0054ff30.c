// Name: FUN_0054ff30
// Address: 0054ff30
// Address Range: [[0054ff30, 00550006]]
// Convention: unknown
// Signature: undefined8 FUN_0054ff30(undefined4 param_1,double param_2,undefined4 param_3)

#include "nocturne.h"

ulonglong FUN_0054ff30(uint param_1,double param_2,uint param_3)

{
  ulonglong uVar1;
  double dVar2;
  int iVar3;
  
  param_2 = (double)FUN_0054fdc0(param_1,param_2._0_4_,param_2._4_4_,param_3,2);
  iVar3 = FUN_00550010(param_1);
  if (iVar3 == 0) {
    if (param_2 < 0.0) {
      param_2 = 0.0;
    }
    else if (1.0 < param_2) {
      param_2 = 1.0;
    }
  }
  else {
    dVar2 = (double)FUN_005b84d0(param_2);
    param_2 = param_2 - dVar2;
  }
  uVar1 = FUN_0054fdc0(param_1,param_2._0_4_,param_2._4_4_,2,param_3);
  return uVar1;
}
