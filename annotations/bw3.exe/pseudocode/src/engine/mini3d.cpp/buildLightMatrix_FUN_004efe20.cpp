// Name: engine_mini3d.cpp_buildLightMatrix_FUN_004efe20
// Address: 004efe20
// Address Range: [[004efe20, 004f0167]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_buildLightMatrix_FUN_004efe20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_buildLightMatrix_FUN_004efe20(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (_DAT_01d76d00 != 0) {
    _DAT_01d7f4f8 =
         _DAT_01d76cfc[2] * _DAT_01d76c84 +
         *_DAT_01d76cfc * _DAT_01d76c6c + _DAT_01d76cfc[1] * _DAT_01d76c78;
    _DAT_01d7f4fc =
         _DAT_01d76cfc[2] * _DAT_01d76c88 +
         *_DAT_01d76cfc * _DAT_01d76c70 + _DAT_01d76cfc[1] * _DAT_01d76c7c;
    _DAT_01d7f500 =
         _DAT_01d76cfc[2] * _DAT_01d76c8c +
         *_DAT_01d76cfc * _DAT_01d76c74 + _DAT_01d76cfc[1] * _DAT_01d76c80;
    _DAT_01d7f508 =
         _DAT_01d76cfc[5] * _DAT_01d76c84 +
         _DAT_01d76cfc[4] * _DAT_01d76c78 + _DAT_01d76cfc[3] * _DAT_01d76c6c;
    _DAT_01d7f50c =
         _DAT_01d76cfc[5] * _DAT_01d76c88 +
         _DAT_01d76cfc[4] * _DAT_01d76c7c + _DAT_01d76cfc[3] * _DAT_01d76c70;
    _DAT_01d7f504 = 0;
    _DAT_01d7f510 =
         _DAT_01d76cfc[5] * _DAT_01d76c8c +
         _DAT_01d76cfc[4] * _DAT_01d76c80 + _DAT_01d76cfc[3] * _DAT_01d76c74;
    fVar2 = -_DAT_01d76cfc[9];
    _DAT_01d7f514 = 0;
    _DAT_01d7f524 = 0;
    _DAT_01d7f518 =
         _DAT_01d76cfc[8] * _DAT_01d76c84 +
         _DAT_01d76cfc[7] * _DAT_01d76c78 + _DAT_01d76cfc[6] * _DAT_01d76c6c;
    _DAT_01d7f51c =
         _DAT_01d76cfc[8] * _DAT_01d76c88 +
         _DAT_01d76cfc[7] * _DAT_01d76c7c + _DAT_01d76cfc[6] * _DAT_01d76c70;
    fVar1 = (fVar2 * *_DAT_01d76cfc - _DAT_01d76cfc[10] * _DAT_01d76cfc[3]) -
            _DAT_01d76cfc[0xb] * _DAT_01d76cfc[6];
    _DAT_01d7f520 =
         _DAT_01d76cfc[8] * _DAT_01d76c8c +
         _DAT_01d76cfc[7] * _DAT_01d76c80 + _DAT_01d76cfc[6] * _DAT_01d76c74;
    fVar3 = (fVar2 * _DAT_01d76cfc[1] - _DAT_01d76cfc[10] * _DAT_01d76cfc[4]) -
            _DAT_01d76cfc[0xb] * _DAT_01d76cfc[7];
    fVar2 = (fVar2 * _DAT_01d76cfc[2] - _DAT_01d76cfc[10] * _DAT_01d76cfc[5]) -
            _DAT_01d76cfc[0xb] * _DAT_01d76cfc[8];
    _DAT_01d7f534 = 0x3f800000;
    _DAT_01d7f528 =
         _DAT_01d76c90 + fVar2 * _DAT_01d76c84 + fVar3 * _DAT_01d76c78 + fVar1 * _DAT_01d76c6c;
    _DAT_01d7f52c =
         _DAT_01d76c94 + fVar2 * _DAT_01d76c88 + fVar3 * _DAT_01d76c7c + fVar1 * _DAT_01d76c70;
    _DAT_01d7f530 =
         _DAT_01d76c98 + fVar2 * _DAT_01d76c8c + fVar3 * _DAT_01d76c80 + fVar1 * _DAT_01d76c74;
    return;
  }
  _DAT_01d7f4fc = (float)_DAT_01d76d00;
  _DAT_01d7f500 = (float)_DAT_01d76d00;
  _DAT_01d7f504 = _DAT_01d76d00;
  _DAT_01d7f508 = (float)_DAT_01d76d00;
  _DAT_01d7f510 = (float)_DAT_01d76d00;
  _DAT_01d7f514 = _DAT_01d76d00;
  _DAT_01d7f518 = (float)_DAT_01d76d00;
  _DAT_01d7f51c = (float)_DAT_01d76d00;
  _DAT_01d7f524 = _DAT_01d76d00;
  _DAT_01d7f4f8 = 1.0;
  _DAT_01d7f50c = 1.0;
  _DAT_01d7f520 = 1.0;
  _DAT_01d7f534 = 0x3f800000;
  _DAT_01d7f528 = _DAT_01d76c90 - _DAT_01d76cfc[9];
  _DAT_01d7f52c = _DAT_01d76c94 - _DAT_01d76cfc[10];
  _DAT_01d7f530 = _DAT_01d76c98 - _DAT_01d76cfc[0xb];
  return;
}
