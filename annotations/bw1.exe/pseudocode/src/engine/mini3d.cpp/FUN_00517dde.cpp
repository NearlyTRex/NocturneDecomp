// Name: engine_mini3d.cpp_FUN_00517dde
// Address: 00517dde
// Address Range: [[00517dde, 00517eb2]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_00517dde(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_00517dde(uint param_1)

{
  float fVar1;
  
  _DAT_01d25f38 = (float)(param_1 >> 0x10 & 0xff) * _DAT_005e903b;
  _DAT_01d25f3c = (float)(param_1 >> 8 & 0xff) * _DAT_005e903b;
  _DAT_01d25f40 = (float)(param_1 & 0xff) * _DAT_005e903b;
  fVar1 = (float)(param_1 >> 0x18) * _DAT_005e903b;
  if (_DAT_01d224c0 != fVar1) {
    _DAT_01d224c0 = fVar1;
    if ((_DAT_02c83448 != (code *)0x0) && (_DAT_01c50948 != 0)) {
      (*_DAT_02c83448)(_DAT_01d22548,_DAT_01d2254c,_DAT_01d22550,fVar1);
      _DAT_01d25f44 = param_1;
      return;
    }
  }
  _DAT_01d25f44 = param_1;
  return;
}
