// Name: FUN_0040b690
// Address: 0040b690
// Address Range: [[0040b690, 0040b72d]]
// Convention: unknown
// Signature: void FUN_0040b690(float *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040b690(float *param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_007bc038 == 1) {
    iVar1 = FUN_005b8100(DAT_007bc034,"%f,%f,%f,%f",param_1,param_1 + 1,param_1 + 2,param_1 + 3
                        );
    if (iVar1 != 4) {
      FUN_0040b380();
    }
  }
  else {
    FUN_005b8010(DAT_007bc034,"%s%g,%g,%g,%g",&DAT_00609590,(double)*param_1,(double)param_1[1]
                 ,(double)param_1[2],(double)param_1[3]);
  }
  FUN_0040b400("Quaternion",param_2);
  return;
}
