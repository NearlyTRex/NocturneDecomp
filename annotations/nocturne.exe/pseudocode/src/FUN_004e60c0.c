// Name: FUN_004e60c0
// Address: 004e60c0
// Address Range: [[004e60c0, 004e6152]]
// Convention: unknown
// Signature: void FUN_004e60c0(int param_1,double param_2,int param_3,int param_4)

#include "nocturne.h"

void FUN_004e60c0(int param_1,double param_2,int param_3,int param_4)

{
  float *pfVar1;
  float10 fVar2;
  
  pfVar1 = (float *)(param_3 * 4 + param_4);
  if (param_1 == 0) {
    pfVar1[0x240] = 1.0;
    *pfVar1 = 1.0;
  }
  else {
    if (param_1 % 2 != 1) {
      fVar2 = (float10)param_2;
      FUN_00565ad6(param_1 / 2);
      *pfVar1 = 1.0;
      pfVar1[0x240] = (float)fVar2;
      return;
    }
    fVar2 = (float10)param_2;
    FUN_00565ad6((param_1 + 1) / 2);
    pfVar1[0x240] = 1.0;
    *pfVar1 = (float)fVar2;
  }
  return;
}
