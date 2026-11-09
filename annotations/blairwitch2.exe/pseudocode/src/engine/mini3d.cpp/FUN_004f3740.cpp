// Name: engine_mini3d.cpp_FUN_004f3740
// Address: 004f3740
// Address Range: [[004f3740, 004f38b7]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f3740(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f3740(void)

{
  float fVar1;
  
  if (_DAT_01d0c398 != 0) {
    _DAT_01d167ac = *_DAT_01d09918 * _DAT_01d098d4;
    _DAT_01d167b0 = _DAT_01d09918[1] * _DAT_01d098d8;
    _DAT_01d167bc = _DAT_01d09918[3] * _DAT_01d098d4;
    _DAT_01d167c0 = _DAT_01d09918[4] * _DAT_01d098d8;
    _DAT_01d167cc = _DAT_01d09918[6] * _DAT_01d098d4;
    _DAT_01d167d0 = _DAT_01d09918[7] * _DAT_01d098d8;
    _DAT_01d167b4 = _DAT_01d09918[2];
    fVar1 = -_DAT_01d09918[9];
    _DAT_01d167c4 = _DAT_01d09918[5];
    _DAT_01d167d4 = _DAT_01d09918[8];
    _DAT_01d167b8 = 0;
    _DAT_01d167c8 = 0;
    _DAT_01d167d8 = 0;
    _DAT_01d167dc =
         (fVar1 * _DAT_01d167ac - _DAT_01d09918[10] * _DAT_01d167bc) -
         _DAT_01d09918[0xb] * _DAT_01d167cc;
    _DAT_01d167e8 = 0x3f800000;
    _DAT_01d167e0 =
         (fVar1 * _DAT_01d167b0 - _DAT_01d09918[10] * _DAT_01d167c0) -
         _DAT_01d09918[0xb] * _DAT_01d167d0;
    _DAT_01d167e4 =
         (fVar1 * _DAT_01d167b4 - _DAT_01d09918[10] * _DAT_01d167c4) -
         _DAT_01d09918[0xb] * _DAT_01d167d4;
    if ((_DAT_0264bc84 != (code *)0x0) && (_DAT_01c37788 != 0)) {
      (*_DAT_0264bc84)(&DAT_01d167ac,_DAT_01d098cc,_DAT_01d098d0);
      _DAT_01d0c398 = 0;
      return;
    }
    _DAT_01d0c398 = 0;
  }
  return;
}
