// Name: FUN_0040b550
// Address: 0040b550
// Address Range: [[0040b550, 0040b5e0]]
// Convention: unknown
// Signature: void FUN_0040b550(float *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040b550(float *param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_007bc038 == 1) {
    iVar1 = FUN_005b8100();
    if (iVar1 != 3) {
      FUN_0040b380();
    }
  }
  else {
    FUN_005b8010(DAT_007bc034,"%s%g,%g,%g",&DAT_00609590,(double)*param_1,(double)param_1[2],
                 (double)param_1[1]);
  }
  FUN_0040b400("Euler PBH orientation",param_2);
  return;
}
