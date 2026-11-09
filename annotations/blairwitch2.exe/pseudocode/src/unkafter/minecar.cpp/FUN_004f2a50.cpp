// Name: unkafter_minecar.cpp_FUN_004f2a50
// Address: 004f2a50
// Address Range: [[004f2a50, 004f2a8b]]
// Convention: unknown
// Signature: void unkafter_minecar_cpp_FUN_004f2a50(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_minecar_cpp_FUN_004f2a50(float *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = _DAT_01d09918;
  fVar1 = _DAT_01d098b4;
  *(float *)(_DAT_01d09918 + 0x24) = _DAT_01d098b0 - *param_1;
  fVar2 = _DAT_01d098b8;
  *(float *)(iVar3 + 0x28) = fVar1 - param_1[1];
  *(float *)(iVar3 + 0x2c) = fVar2 - param_1[2];
  _DAT_01d0c398 = 1;
  return;
}
