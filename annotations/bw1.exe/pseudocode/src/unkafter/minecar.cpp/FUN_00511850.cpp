// Name: unkafter_minecar.cpp_FUN_00511850
// Address: 00511850
// Address Range: [[00511850, 00511970]]
// Convention: unknown
// Signature: void unkafter_minecar_cpp_FUN_00511850(float param_1,float param_2,float param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_minecar_cpp_FUN_00511850(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  if (_DAT_01d25f14 == 0) {
    param_1 = param_1 * _DAT_01d22544;
    param_2 = param_2 * _DAT_01d22544;
    param_3 = param_3 * _DAT_01d22544;
    param_4 = param_4 * _DAT_01d22544;
  }
  _DAT_01d224dc = (param_3 - param_1) * _DAT_005e8b6f;
  fVar1 = (param_4 - param_2) * _DAT_005e8b6f;
  _DAT_01d224cc = param_1;
  _DAT_01d224d0 = param_2;
  _DAT_01d224e4 = param_1 + _DAT_01d224dc;
  _DAT_01d224e8 = param_2 + fVar1;
  _DAT_01d224d4 = param_3;
  _DAT_01d224dc = _DAT_01d224dc + _DAT_005e8b73;
  _DAT_01d224e0 = -fVar1 + 1.0;
  _DAT_01d224d8 = param_4;
  if (((_DAT_01d25f14 == 0) && (_DAT_02c83444 != (code *)0x0)) && (_DAT_01c50948 != 0)) {
    (*_DAT_02c83444)(param_1,param_2,param_3,param_4,_DAT_01d2253c,_DAT_01d22540);
  }
  engine_mini3d_cpp_FUN_00514120();
  _DAT_01d24ffc = 1;
  return;
}
