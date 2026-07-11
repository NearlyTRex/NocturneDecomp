// Name: FUN_0044cd90
// Address: 0044cd90
// Address Range: [[0044cd90, 0044cddc]]
// Convention: unknown
// Signature: void FUN_0044cd90(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044cd90(int param_1,float *param_2)

{
  int iVar1;
  int *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  float10 fVar2;
  float10 fVar3;
  
  if ((float *)(param_1 + 0x24) != param_2) {
    *(float *)(param_1 + 0x24) = *param_2;
    *(float *)(param_1 + 0x28) = param_2[1];
    *(float *)(param_1 + 0x2c) = param_2[2];
  }
  fVar2 = (float10)_DAT_0057c371;
  fVar3 = (float10)*param_2 * fVar2;
  iVar1 = FUN_00563a30();
  *extraout_ECX = (int)ROUND(fVar3);
  fVar3 = (float10)*(float *)(iVar1 + 4) * fVar2;
  iVar1 = FUN_00563a30();
  *(int *)(extraout_ECX_00 + 4) = (int)ROUND(fVar3);
  fVar2 = fVar2 * (float10)*(float *)(iVar1 + 8);
  FUN_00563a30();
  *(int *)(extraout_ECX_01 + 8) = (int)ROUND(fVar2);
  return;
}
