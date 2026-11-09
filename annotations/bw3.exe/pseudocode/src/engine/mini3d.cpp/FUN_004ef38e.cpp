// Name: engine_mini3d.cpp_FUN_004ef38e
// Address: 004ef38e
// Address Range: [[004ef38e, 004ef41b]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004ef38e(float *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004ef38e(float *param_1,float param_2)

{
  int iVar1;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  engine_mini3d_cpp_FUN_004edcc0();
  fStack_8 = param_2 / SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1])
  ;
  if ((_DAT_02cf60a8 != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
    fStack_14 = *param_1 * fStack_8;
    fStack_10 = param_1[1] * fStack_8;
    fStack_c = fStack_8 * param_1[2];
    (*_DAT_02cf60a8)(&fStack_14,param_2);
  }
  iVar1 = _DAT_01d76cfc;
  *(float *)(_DAT_01d76cfc + 0x30) = *param_1 * fStack_8;
  *(float *)(iVar1 + 0x34) = param_1[1] * fStack_8;
  *(float *)(iVar1 + 0x38) = fStack_8 * param_1[2];
  return;
}
