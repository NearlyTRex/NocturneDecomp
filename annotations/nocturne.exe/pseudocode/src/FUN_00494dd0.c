// Name: FUN_00494dd0
// Address: 00494dd0
// Address Range: [[00494dd0, 00494e2b]]
// Convention: unknown
// Signature: void FUN_00494dd0(int param_1,float param_2,float param_3)

#include "nocturne.h"

void FUN_00494dd0(int param_1,float param_2,float param_3)

{
  float fVar1;
  double dVar2;
  float10 fVar3;
  
  fVar1 = param_2 * param_3 + *(float *)(param_1 + 0x484);
  *(float *)(param_1 + 0x484) = fVar1;
  dVar2 = (double)FUN_005648c0((double)fVar1);
  fVar3 = (float10)dVar2;
  FUN_00563a30();
  *(float *)(param_1 + 0x484) = *(float *)(param_1 + 0x484) - (float)(int)ROUND(fVar3);
  return;
}
