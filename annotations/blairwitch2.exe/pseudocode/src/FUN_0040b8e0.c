// Name: FUN_0040b8e0
// Address: 0040b8e0
// Address Range: [[0040b8e0, 0040b956]]
// Convention: unknown
// Signature: void FUN_0040b8e0(float *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040b8e0(float *param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_007bc038 == 1) {
    iVar1 = FUN_005b8100(DAT_007bc034,&DAT_005cab3e,param_1);
    if (iVar1 != 1) {
      FUN_0040b380("Floating point value",param_2);
    }
  }
  else {
    FUN_005b8010(DAT_007bc034,&DAT_005cab41,&DAT_00609590,(double)*param_1);
  }
  FUN_0040b400("Floating point value",param_2);
  return;
}
