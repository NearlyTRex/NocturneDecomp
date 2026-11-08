// Name: FUN_0040b540
// Address: 0040b540
// Address Range: [[0040b540, 0040b5da]]
// Convention: unknown
// Signature: void FUN_0040b540(float *param_1)

#include "nocturne.h"

void FUN_0040b540(float *param_1)

{
  int iVar1;
  
  if (DAT_007df9b8 == 1) {
    iVar1 = FUN_005a3230();
    if (iVar1 != 4) {
      FUN_0040b2d0();
    }
  }
  else {
    FUN_005a3140(DAT_007df9b4,"%s%d,%g,%g,%g",&DAT_005f0990,param_1[3],(double)*param_1,
                 (double)param_1[1],(double)param_1[2]);
  }
  FUN_0040b350();
  return;
}
