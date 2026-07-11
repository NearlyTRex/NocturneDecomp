// Name: FUN_00525de0
// Address: 00525de0
// Address Range: [[00525de0, 00525eaf]]
// Convention: unknown
// Signature: undefined8 FUN_00525de0(int param_1,double param_2,undefined4 param_3)

#include "nocturne.h"

ulonglong FUN_00525de0(int param_1,double param_2,uint param_3)

{
  ulonglong uVar1;
  double dVar2;
  
  param_2 = (double)FUN_00525c70(param_1,param_2._0_4_,param_2._4_4_,param_3,2);
  if (*(int *)(param_1 + 0x124) == 0) {
    if (param_2 < 0.0) {
      param_2 = 0.0;
    }
    else if (1.0 < param_2) {
      param_2 = 1.0;
    }
  }
  else {
    dVar2 = (double)FUN_005648c0(param_2);
    param_2 = param_2 - dVar2;
  }
  uVar1 = FUN_00525c70(param_1,param_2._0_4_,param_2._4_4_,2,param_3);
  return uVar1;
}
