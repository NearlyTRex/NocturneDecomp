// Name: FUN_004769a0
// Address: 004769a0
// Address Range: [[004769a0, 00476a41]]
// Convention: unknown
// Signature: void FUN_004769a0(int param_1,float *param_2)

#include "nocturne.h"

void FUN_004769a0(int param_1,float *param_2)

{
  int *unaff_ESI;
  byte bVar1;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  int aiStackY_1004 [1016];
  int local_1c;
  int local_18;
  int local_14;
  double local_10;
  
  bVar1 = 0;
  local_10 = (double)FUN_005b84d0((double)((*param_2 - *(float *)(param_1 + 0x10)) /
                                          *(float *)(param_1 + 0x28)));
  fVar2 = ((float10)param_2[1] - (float10)*(float *)(param_1 + 0x14)) /
          (float10)*(float *)(param_1 + 0x2c);
  fVar3 = (float10)local_10;
  FUN_005b7ff0();
  local_1c = (int)ROUND(fVar3);
  dVar4 = (double)FUN_005b84d0((double)fVar2);
  fVar2 = ((float10)param_2[2] - (float10)*(float *)(param_1 + 0x18)) /
          (float10)*(float *)(param_1 + 0x30);
  fVar3 = (float10)dVar4;
  local_10 = dVar4;
  FUN_005b7ff0();
  local_18 = (int)ROUND(fVar3);
  dVar4 = (double)FUN_005b84d0((double)fVar2);
  fVar2 = (float10)dVar4;
  local_10 = dVar4;
  FUN_005b7ff0();
  local_14 = (int)ROUND(fVar2);
  *unaff_ESI = local_1c;
  unaff_ESI[(uint)bVar1 * -2 + 1] = *(int *)((int)&stack0xffffffe8 + (uint)bVar1 * -8);
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(int *)((int)&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  return;
}
