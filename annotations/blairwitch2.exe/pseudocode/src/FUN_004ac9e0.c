// Name: FUN_004ac9e0
// Address: 004ac9e0
// Address Range: [[004ac9e0, 004aca3b]]
// Convention: unknown
// Signature: void FUN_004ac9e0(int param_1,float param_2,float param_3)

#include "nocturne.h"

void FUN_004ac9e0(int param_1,float param_2,float param_3)

{
  float fVar1;
  double dVar2;
  float10 fVar3;
  
  fVar1 = param_2 * param_3 + *(float *)(param_1 + 0x5e8);
  *(float *)(param_1 + 0x5e8) = fVar1;
  dVar2 = (double)FUN_005b84d0((double)fVar1);
  fVar3 = (float10)dVar2;
  FUN_005b7ff0();
  *(float *)(param_1 + 0x5e8) = *(float *)(param_1 + 0x5e8) - (float)(int)ROUND(fVar3);
  return;
}
