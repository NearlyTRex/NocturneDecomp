// Name: FUN_004c5990
// Address: 004c5990
// Address Range: [[004c5990, 004c59eb]]
// Convention: unknown
// Signature: void FUN_004c5990(int param_1,float param_2,float param_3)

#include "nocturne.h"

void FUN_004c5990(int param_1,float param_2,float param_3)

{
  float fVar1;
  double dVar2;
  float10 fVar3;
  
  fVar1 = param_2 * param_3 + *(float *)(param_1 + 0x48c);
  *(float *)(param_1 + 0x48c) = fVar1;
  dVar2 = (double)FUN_005c0880((double)fVar1);
  fVar3 = (float10)dVar2;
  FUN_005c03a0();
  *(float *)(param_1 + 0x48c) = *(float *)(param_1 + 0x48c) - (float)(int)ROUND(fVar3);
  return;
}
