// Name: unkafter_minecar.cpp_FUN_005117e0
// Address: 005117e0
// Address Range: [[005117e0, 0051181b]]
// Convention: unknown
// Signature: void unkafter_minecar_cpp_FUN_005117e0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_minecar_cpp_FUN_005117e0(float *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = _DAT_01d2257c;
  fVar1 = _DAT_01d22514;
  *(float *)(_DAT_01d2257c + 0x24) = _DAT_01d22510 - *param_1;
  fVar2 = _DAT_01d22518;
  *(float *)(iVar3 + 0x28) = fVar1 - param_1[1];
  *(float *)(iVar3 + 0x2c) = fVar2 - param_1[2];
  _DAT_01d24ffc = 1;
  return;
}
