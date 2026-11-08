// Name: FUN_0049ac10
// Address: 0049ac10
// Address Range: [[0049ac10, 0049ac89]]
// Convention: unknown
// Signature: void FUN_0049ac10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049ac10(int param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = *(float *)(0x01D2130C + 0x314);
  *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x8c) + fVar1;
  *(float *)(param_1 + 0x90) = *(float *)(param_1 + 0x90) + fVar1;
  FUN_00509f30(param_1);
  iVar2 = *(int *)(param_1 + 0x40) - _DAT_01c5fad0 / 6;
  *(int *)(param_1 + 0x40) = iVar2;
  if (-1 < iVar2) {
    return;
  }
  *(uint *)(param_1 + 0x40) = 0;
  *(uint *)(param_1 + 0x24) = 0;
  return;
}
