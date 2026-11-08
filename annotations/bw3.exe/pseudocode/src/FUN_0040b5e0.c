// Name: FUN_0040b5e0
// Address: 0040b5e0
// Address Range: [[0040b5e0, 0040b67d]]
// Convention: unknown
// Signature: void FUN_0040b5e0(float *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040b5e0(float *param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_007df9b8 == 1) {
    iVar1 = FUN_005a3230(DAT_007df9b4,"%f,%f,%f,%f",param_1,param_1 + 1,param_1 + 2,param_1 + 3
                        );
    if (iVar1 != 4) {
      FUN_0040b2d0();
    }
  }
  else {
    FUN_005a3140(DAT_007df9b4,"%s%g,%g,%g,%g",&DAT_005f0990,(double)*param_1,(double)param_1[1]
                 ,(double)param_1[2],(double)param_1[3]);
  }
  FUN_0040b350("Quaternion",param_2);
  return;
}
