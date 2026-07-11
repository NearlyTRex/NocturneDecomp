// Name: FUN_0040c450
// Address: 0040c450
// Address Range: [[0040c450, 0040c4e0]]
// Convention: unknown
// Signature: void FUN_0040c450(float *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040c450(float *param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_00763e88 == 1) {
    iVar1 = FUN_00563350();
    if (iVar1 != 3) {
      FUN_0040c320();
    }
  }
  else {
    FUN_005644f0(DAT_00763e84,"%s%g,%g,%g",&DAT_005acc90,(double)*param_1,
                 (double)param_1[1],(double)param_1[2]);
  }
  FUN_0040c3a0("3D vector",param_2);
  return;
}
