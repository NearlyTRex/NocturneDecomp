// Name: FUN_0040b5f0
// Address: 0040b5f0
// Address Range: [[0040b5f0, 0040b68a]]
// Convention: unknown
// Signature: void FUN_0040b5f0(float *param_1)

#include "nocturne.h"

void FUN_0040b5f0(float *param_1)

{
  int iVar1;
  
  if (DAT_007bc038 == 1) {
    iVar1 = FUN_005b8100();
    if (iVar1 != 4) {
      FUN_0040b380();
    }
  }
  else {
    FUN_005b8010(DAT_007bc034,"%s%d,%g,%g,%g",&DAT_00609590,param_1[3],(double)*param_1,
                 (double)param_1[1],(double)param_1[2]);
  }
  FUN_0040b400();
  return;
}
