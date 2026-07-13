// Name: FUN_0041ebe0
// Address: 0041ebe0
// Address Range: [[0041ebe0, 0041ec55]]
// Convention: unknown
// Signature: undefined4 * FUN_0041ebe0(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * FUN_0041ebe0(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  float10 fVar4;
  
  fVar4 = (float10)*(float *)(param_1 + 0x308);
  uVar1 = FUN_00563a30();
  iVar2 = FUN_00454530(uVar1);
  puVar3 = (uint *)((int)ROUND(fVar4) * 0x18 + *(int *)(iVar2 + 0x350));
  *param_2 = *puVar3;
  param_2[1] = puVar3[1];
  param_2[2] = puVar3[2];
  param_2[3] = puVar3[3];
  param_2[4] = puVar3[4];
  param_2[5] = puVar3[5];
  return param_2;
}
