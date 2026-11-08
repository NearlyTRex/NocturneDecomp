// Name: FUN_005785b0
// Address: 005785b0
// Address Range: [[005785b0, 00578626]]
// Convention: unknown
// Signature: void FUN_005785b0(int param_1,float param_2)

#include "nocturne.h"

void FUN_005785b0(int param_1,float param_2)

{
  float fVar1;
  
  if ((*(int *)(param_1 + 0x2d0) == 7) && (*(float *)(param_1 + 0x4cc) <= 0.0)) {
    fVar1 = *(float *)(param_1 + 0x454) - param_2;
    *(float *)(param_1 + 0x454) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(param_1 + 0x454) = 0;
    }
    FUN_00436710(PTR_DAT_00609ed0,"%s received %g damage, hitpoints %g\n",param_1,(double)param_2,
                 (double)*(float *)(param_1 + 0x454));
    *(uint *)(param_1 + 0x4cc) = 0x3f800000;
  }
  return;
}
