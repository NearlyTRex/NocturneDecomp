// Name: FUN_0040b3a0
// Address: 0040b3a0
// Address Range: [[0040b3a0, 0040b43d]]
// Convention: unknown
// Signature: void FUN_0040b3a0(float *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040b3a0(float *param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_007c3038 == 1) {
    iVar1 = FUN_005c04b0(DAT_007c3034,"%f,%f,%f,%f",param_1,param_1 + 1,param_1 + 2,param_1 + 3
                        );
    if (iVar1 != 4) {
      FUN_0040b090();
    }
  }
  else {
    FUN_005c03c0(DAT_007c3034,"%s%g,%g,%g,%g",&DAT_006106c0,(double)*param_1,(double)param_1[1]
                 ,(double)param_1[2],(double)param_1[3]);
  }
  FUN_0040b110("Quaternion",param_2);
  return;
}
