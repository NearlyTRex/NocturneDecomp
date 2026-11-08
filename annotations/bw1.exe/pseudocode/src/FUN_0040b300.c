// Name: FUN_0040b300
// Address: 0040b300
// Address Range: [[0040b300, 0040b39a]]
// Convention: unknown
// Signature: void FUN_0040b300(float *param_1)

#include "nocturne.h"

void FUN_0040b300(float *param_1)

{
  int iVar1;
  
  if (DAT_007c3038 == 1) {
    iVar1 = FUN_005c04b0();
    if (iVar1 != 4) {
      FUN_0040b090();
    }
  }
  else {
    FUN_005c03c0(DAT_007c3034,"%s%d,%g,%g,%g",&DAT_006106c0,param_1[3],(double)*param_1,
                 (double)param_1[1],(double)param_1[2]);
  }
  FUN_0040b110();
  return;
}
