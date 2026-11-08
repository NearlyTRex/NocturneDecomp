// Name: FUN_0056ee20
// Address: 0056ee20
// Address Range: [[0056ee20, 0056ee96]]
// Convention: unknown
// Signature: void FUN_0056ee20(int param_1,float param_2)

#include "nocturne.h"

void FUN_0056ee20(int param_1,float param_2)

{
  float fVar1;
  
  if ((*(int *)(param_1 + 0x174) == 7) && (*(float *)(param_1 + 0x370) <= 0.0)) {
    fVar1 = *(float *)(param_1 + 0x2f8) - param_2;
    *(float *)(param_1 + 0x2f8) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(param_1 + 0x2f8) = 0;
    }
    FUN_00441ff0(PTR_DAT_005f1690,"%s received %g damage, hitpoints %g\n",param_1,(double)param_2,
                 (double)*(float *)(param_1 + 0x2f8));
    *(uint *)(param_1 + 0x370) = 0x3f800000;
  }
  return;
}
