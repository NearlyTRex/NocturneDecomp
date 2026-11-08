// Name: FUN_0040b1c0
// Address: 0040b1c0
// Address Range: [[0040b1c0, 0040b250]]
// Convention: unknown
// Signature: void FUN_0040b1c0(float *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040b1c0(float *param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_007c3038 == 1) {
    iVar1 = FUN_005c04b0();
    if (iVar1 != 3) {
      FUN_0040b090();
    }
  }
  else {
    FUN_005c03c0(DAT_007c3034,"%s%g,%g,%g",&DAT_006106c0,(double)*param_1,(double)param_1[1],
                 (double)param_1[2]);
  }
  FUN_0040b110("3D vector",param_2);
  return;
}
