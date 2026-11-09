// Name: engine_mini3d.cpp_FUN_004f4e6e
// Address: 004f4e6e
// Address Range: [[004f4e6e, 004f4ef2]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f4e6e(float *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f4e6e(float *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  engine_mini3d_cpp_FUN_004f3740();
  iVar2 = _DAT_01d09918;
  fVar1 = param_2 / SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  *(float *)(_DAT_01d09918 + 0x30) = *param_1 * fVar1;
  *(float *)(iVar2 + 0x34) = param_1[1] * fVar1;
  pcVar3 = _DAT_0264bc7c;
  *(float *)(iVar2 + 0x38) = fVar1 * param_1[2];
  if ((pcVar3 != (code *)0x0) && (_DAT_01c37788 != 0)) {
    uStack_14 = *(uint *)(iVar2 + 0x30);
    uStack_10 = *(uint *)(iVar2 + 0x34);
    uStack_c = *(uint *)(iVar2 + 0x38);
    (*_DAT_0264bc7c)(&uStack_14,param_2);
    return;
  }
  return;
}
