// Name: FUN_0040c590
// Address: 0040c590
// Address Range: [[0040c590, 0040c62a]]
// Convention: unknown
// Signature: void FUN_0040c590(float *param_1)

#include "nocturne.h"

void FUN_0040c590(float *param_1)

{
  int iVar1;
  
  if (DAT_00763e88 == 1) {
    iVar1 = FUN_00563350();
    if (iVar1 != 4) {
      FUN_0040c320();
    }
  }
  else {
    FUN_005644f0(DAT_00763e84,"%s%d,%g,%g,%g",&DAT_005acc90,param_1[3],(double)*param_1,
                 (double)param_1[1],(double)param_1[2]);
  }
  FUN_0040c3a0();
  return;
}
