// Name: engine_mini3d.cpp_buildLightMatrix_FUN_004f5900
// Address: 004f5900
// Address Range: [[004f5900, 004f5c47]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_buildLightMatrix_FUN_004f5900(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_buildLightMatrix_FUN_004f5900(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (_DAT_01d0991c != 0) {
    _DAT_01d12118 =
         _DAT_01d09918[2] * _DAT_01d098a4 +
         *_DAT_01d09918 * _DAT_01d0988c + _DAT_01d09918[1] * _DAT_01d09898;
    _DAT_01d1211c =
         _DAT_01d09918[2] * _DAT_01d098a8 +
         *_DAT_01d09918 * _DAT_01d09890 + _DAT_01d09918[1] * _DAT_01d0989c;
    _DAT_01d12120 =
         _DAT_01d09918[2] * _DAT_01d098ac +
         *_DAT_01d09918 * _DAT_01d09894 + _DAT_01d09918[1] * _DAT_01d098a0;
    _DAT_01d12128 =
         _DAT_01d09918[5] * _DAT_01d098a4 +
         _DAT_01d09918[4] * _DAT_01d09898 + _DAT_01d09918[3] * _DAT_01d0988c;
    _DAT_01d1212c =
         _DAT_01d09918[5] * _DAT_01d098a8 +
         _DAT_01d09918[4] * _DAT_01d0989c + _DAT_01d09918[3] * _DAT_01d09890;
    _DAT_01d12124 = 0;
    _DAT_01d12130 =
         _DAT_01d09918[5] * _DAT_01d098ac +
         _DAT_01d09918[4] * _DAT_01d098a0 + _DAT_01d09918[3] * _DAT_01d09894;
    fVar2 = -_DAT_01d09918[9];
    _DAT_01d12134 = 0;
    _DAT_01d12144 = 0;
    _DAT_01d12138 =
         _DAT_01d09918[8] * _DAT_01d098a4 +
         _DAT_01d09918[7] * _DAT_01d09898 + _DAT_01d09918[6] * _DAT_01d0988c;
    _DAT_01d1213c =
         _DAT_01d09918[8] * _DAT_01d098a8 +
         _DAT_01d09918[7] * _DAT_01d0989c + _DAT_01d09918[6] * _DAT_01d09890;
    fVar1 = (fVar2 * *_DAT_01d09918 - _DAT_01d09918[10] * _DAT_01d09918[3]) -
            _DAT_01d09918[0xb] * _DAT_01d09918[6];
    _DAT_01d12140 =
         _DAT_01d09918[8] * _DAT_01d098ac +
         _DAT_01d09918[7] * _DAT_01d098a0 + _DAT_01d09918[6] * _DAT_01d09894;
    fVar3 = (fVar2 * _DAT_01d09918[1] - _DAT_01d09918[10] * _DAT_01d09918[4]) -
            _DAT_01d09918[0xb] * _DAT_01d09918[7];
    fVar2 = (fVar2 * _DAT_01d09918[2] - _DAT_01d09918[10] * _DAT_01d09918[5]) -
            _DAT_01d09918[0xb] * _DAT_01d09918[8];
    _DAT_01d12154 = 0x3f800000;
    _DAT_01d12148 =
         _DAT_01d098b0 + fVar2 * _DAT_01d098a4 + fVar3 * _DAT_01d09898 + fVar1 * _DAT_01d0988c;
    _DAT_01d1214c =
         _DAT_01d098b4 + fVar2 * _DAT_01d098a8 + fVar3 * _DAT_01d0989c + fVar1 * _DAT_01d09890;
    _DAT_01d12150 =
         _DAT_01d098b8 + fVar2 * _DAT_01d098ac + fVar3 * _DAT_01d098a0 + fVar1 * _DAT_01d09894;
    return;
  }
  _DAT_01d1211c = (float)_DAT_01d0991c;
  _DAT_01d12120 = (float)_DAT_01d0991c;
  _DAT_01d12124 = _DAT_01d0991c;
  _DAT_01d12128 = (float)_DAT_01d0991c;
  _DAT_01d12130 = (float)_DAT_01d0991c;
  _DAT_01d12134 = _DAT_01d0991c;
  _DAT_01d12138 = (float)_DAT_01d0991c;
  _DAT_01d1213c = (float)_DAT_01d0991c;
  _DAT_01d12144 = _DAT_01d0991c;
  _DAT_01d12118 = 1.0;
  _DAT_01d1212c = 1.0;
  _DAT_01d12140 = 1.0;
  _DAT_01d12154 = 0x3f800000;
  _DAT_01d12148 = _DAT_01d098b0 - _DAT_01d09918[9];
  _DAT_01d1214c = _DAT_01d098b4 - _DAT_01d09918[10];
  _DAT_01d12150 = _DAT_01d098b8 - _DAT_01d09918[0xb];
  return;
}
