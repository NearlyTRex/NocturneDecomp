// Name: engine_mini3d.cpp_FUN_005124f0
// Address: 005124f0
// Address Range: [[005124f0, 00512667]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_005124f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_005124f0(void)

{
  float fVar1;
  
  if (_DAT_01d24ffc != 0) {
    _DAT_01d2adbc = *_DAT_01d2257c * _DAT_01d22534;
    _DAT_01d2adc0 = _DAT_01d2257c[1] * _DAT_01d22538;
    _DAT_01d2adcc = _DAT_01d2257c[3] * _DAT_01d22534;
    _DAT_01d2add0 = _DAT_01d2257c[4] * _DAT_01d22538;
    _DAT_01d2addc = _DAT_01d2257c[6] * _DAT_01d22534;
    _DAT_01d2ade0 = _DAT_01d2257c[7] * _DAT_01d22538;
    _DAT_01d2adc4 = _DAT_01d2257c[2];
    fVar1 = -_DAT_01d2257c[9];
    _DAT_01d2add4 = _DAT_01d2257c[5];
    _DAT_01d2ade4 = _DAT_01d2257c[8];
    _DAT_01d2adc8 = 0;
    _DAT_01d2add8 = 0;
    _DAT_01d2ade8 = 0;
    _DAT_01d2adec =
         (fVar1 * _DAT_01d2adbc - _DAT_01d2257c[10] * _DAT_01d2adcc) -
         _DAT_01d2257c[0xb] * _DAT_01d2addc;
    _DAT_01d2adf8 = 0x3f800000;
    _DAT_01d2adf0 =
         (fVar1 * _DAT_01d2adc0 - _DAT_01d2257c[10] * _DAT_01d2add0) -
         _DAT_01d2257c[0xb] * _DAT_01d2ade0;
    _DAT_01d2adf4 =
         (fVar1 * _DAT_01d2adc4 - _DAT_01d2257c[10] * _DAT_01d2add4) -
         _DAT_01d2257c[0xb] * _DAT_01d2ade4;
    if ((_DAT_02c83454 != (code *)0x0) && (_DAT_01c50948 != 0)) {
      (*_DAT_02c83454)(&DAT_01d2adbc,_DAT_01d2252c,_DAT_01d22530);
      _DAT_01d24ffc = 0;
      return;
    }
    _DAT_01d24ffc = 0;
  }
  return;
}
