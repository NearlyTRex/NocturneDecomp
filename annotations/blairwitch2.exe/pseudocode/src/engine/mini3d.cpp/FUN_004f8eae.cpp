// Name: engine_mini3d.cpp_FUN_004f8eae
// Address: 004f8eae
// Address Range: [[004f8eae, 004f8f82]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f8eae(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f8eae(uint param_1)

{
  float fVar1;
  
  _DAT_01d0d2d8 = (float)(param_1 >> 0x10 & 0xff) * _DAT_005ddff4;
  _DAT_01d0d2dc = (float)(param_1 >> 8 & 0xff) * _DAT_005ddff4;
  _DAT_01d0d2e0 = (float)(param_1 & 0xff) * _DAT_005ddff4;
  fVar1 = (float)(param_1 >> 0x18) * _DAT_005ddff4;
  if (_DAT_01d09860 != fVar1) {
    _DAT_01d09860 = fVar1;
    if ((_DAT_0264bc78 != (code *)0x0) && (_DAT_01c37788 != 0)) {
      (*_DAT_0264bc78)(_DAT_01d098e4,_DAT_01d098e8,_DAT_01d098ec,fVar1);
      _DAT_01d0d2e4 = param_1;
      return;
    }
  }
  _DAT_01d0d2e4 = param_1;
  return;
}
