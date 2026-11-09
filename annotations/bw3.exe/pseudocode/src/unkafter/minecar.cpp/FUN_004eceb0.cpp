// Name: unkafter_minecar.cpp_FUN_004eceb0
// Address: 004eceb0
// Address Range: [[004eceb0, 004eceeb]]
// Convention: unknown
// Signature: void unkafter_minecar_cpp_FUN_004eceb0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_minecar_cpp_FUN_004eceb0(float *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = _DAT_01d76cfc;
  fVar1 = _DAT_01d76c94;
  *(float *)(_DAT_01d76cfc + 0x24) = _DAT_01d76c90 - *param_1;
  fVar2 = _DAT_01d76c98;
  *(float *)(iVar3 + 0x28) = fVar1 - param_1[1];
  *(float *)(iVar3 + 0x2c) = fVar2 - param_1[2];
  _DAT_01d7977c = 1;
  return;
}
