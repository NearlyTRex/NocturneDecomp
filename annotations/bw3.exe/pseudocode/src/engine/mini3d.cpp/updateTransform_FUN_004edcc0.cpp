// Name: engine_mini3d.cpp_updateTransform_FUN_004edcc0
// Address: 004edcc0
// Address Range: [[004edcc0, 004ede37]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_updateTransform_FUN_004edcc0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_updateTransform_FUN_004edcc0(void)

{
  float fVar1;
  
  if (_DAT_01d7977c != 0) {
    _DAT_01d7f53c = *_DAT_01d76cfc * _DAT_01d76cb4;
    _DAT_01d7f540 = _DAT_01d76cfc[1] * _DAT_01d76cb8;
    _DAT_01d7f54c = _DAT_01d76cfc[3] * _DAT_01d76cb4;
    _DAT_01d7f550 = _DAT_01d76cfc[4] * _DAT_01d76cb8;
    _DAT_01d7f55c = _DAT_01d76cfc[6] * _DAT_01d76cb4;
    _DAT_01d7f560 = _DAT_01d76cfc[7] * _DAT_01d76cb8;
    _DAT_01d7f544 = _DAT_01d76cfc[2];
    fVar1 = -_DAT_01d76cfc[9];
    _DAT_01d7f554 = _DAT_01d76cfc[5];
    _DAT_01d7f564 = _DAT_01d76cfc[8];
    _DAT_01d7f548 = 0;
    _DAT_01d7f558 = 0;
    _DAT_01d7f568 = 0;
    _DAT_01d7f56c =
         (fVar1 * _DAT_01d7f53c - _DAT_01d76cfc[10] * _DAT_01d7f54c) -
         _DAT_01d76cfc[0xb] * _DAT_01d7f55c;
    _DAT_01d7f578 = 0x3f800000;
    _DAT_01d7f570 =
         (fVar1 * _DAT_01d7f540 - _DAT_01d76cfc[10] * _DAT_01d7f550) -
         _DAT_01d76cfc[0xb] * _DAT_01d7f560;
    _DAT_01d7f574 =
         (fVar1 * _DAT_01d7f544 - _DAT_01d76cfc[10] * _DAT_01d7f554) -
         _DAT_01d76cfc[0xb] * _DAT_01d7f564;
    if ((_DAT_02cf60b0 != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
      (*_DAT_02cf60b0)(&DAT_01d7f53c,_DAT_01d76cac,_DAT_01d76cb0);
      _DAT_01d7977c = 0;
      return;
    }
    _DAT_01d7977c = 0;
  }
  return;
}
