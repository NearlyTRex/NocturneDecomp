// Name: FUN_00514650
// Address: 00514650
// Address Range: [[00514650, 00514997]]
// Convention: unknown
// Signature: void FUN_00514650(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00514650(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (_DAT_01d22580 != 0) {
    _DAT_01d2ad78 =
         _DAT_01d2257c[2] * _DAT_01d22504 +
         *_DAT_01d2257c * _DAT_01d224ec + _DAT_01d2257c[1] * _DAT_01d224f8;
    _DAT_01d2ad7c =
         _DAT_01d2257c[2] * _DAT_01d22508 +
         *_DAT_01d2257c * _DAT_01d224f0 + _DAT_01d2257c[1] * _DAT_01d224fc;
    _DAT_01d2ad80 =
         _DAT_01d2257c[2] * _DAT_01d2250c +
         *_DAT_01d2257c * _DAT_01d224f4 + _DAT_01d2257c[1] * _DAT_01d22500;
    _DAT_01d2ad88 =
         _DAT_01d2257c[5] * _DAT_01d22504 +
         _DAT_01d2257c[4] * _DAT_01d224f8 + _DAT_01d2257c[3] * _DAT_01d224ec;
    _DAT_01d2ad8c =
         _DAT_01d2257c[5] * _DAT_01d22508 +
         _DAT_01d2257c[4] * _DAT_01d224fc + _DAT_01d2257c[3] * _DAT_01d224f0;
    _DAT_01d2ad84 = 0;
    _DAT_01d2ad90 =
         _DAT_01d2257c[5] * _DAT_01d2250c +
         _DAT_01d2257c[4] * _DAT_01d22500 + _DAT_01d2257c[3] * _DAT_01d224f4;
    fVar2 = -_DAT_01d2257c[9];
    _DAT_01d2ad94 = 0;
    _DAT_01d2ada4 = 0;
    _DAT_01d2ad98 =
         _DAT_01d2257c[8] * _DAT_01d22504 +
         _DAT_01d2257c[7] * _DAT_01d224f8 + _DAT_01d2257c[6] * _DAT_01d224ec;
    _DAT_01d2ad9c =
         _DAT_01d2257c[8] * _DAT_01d22508 +
         _DAT_01d2257c[7] * _DAT_01d224fc + _DAT_01d2257c[6] * _DAT_01d224f0;
    fVar1 = (fVar2 * *_DAT_01d2257c - _DAT_01d2257c[10] * _DAT_01d2257c[3]) -
            _DAT_01d2257c[0xb] * _DAT_01d2257c[6];
    _DAT_01d2ada0 =
         _DAT_01d2257c[8] * _DAT_01d2250c +
         _DAT_01d2257c[7] * _DAT_01d22500 + _DAT_01d2257c[6] * _DAT_01d224f4;
    fVar3 = (fVar2 * _DAT_01d2257c[1] - _DAT_01d2257c[10] * _DAT_01d2257c[4]) -
            _DAT_01d2257c[0xb] * _DAT_01d2257c[7];
    fVar2 = (fVar2 * _DAT_01d2257c[2] - _DAT_01d2257c[10] * _DAT_01d2257c[5]) -
            _DAT_01d2257c[0xb] * _DAT_01d2257c[8];
    _DAT_01d2adb4 = 0x3f800000;
    _DAT_01d2ada8 =
         _DAT_01d22510 + fVar2 * _DAT_01d22504 + fVar3 * _DAT_01d224f8 + fVar1 * _DAT_01d224ec;
    _DAT_01d2adac =
         _DAT_01d22514 + fVar2 * _DAT_01d22508 + fVar3 * _DAT_01d224fc + fVar1 * _DAT_01d224f0;
    _DAT_01d2adb0 =
         _DAT_01d22518 + fVar2 * _DAT_01d2250c + fVar3 * _DAT_01d22500 + fVar1 * _DAT_01d224f4;
    return;
  }
  _DAT_01d2ad7c = (float)_DAT_01d22580;
  _DAT_01d2ad80 = (float)_DAT_01d22580;
  _DAT_01d2ad84 = _DAT_01d22580;
  _DAT_01d2ad88 = (float)_DAT_01d22580;
  _DAT_01d2ad90 = (float)_DAT_01d22580;
  _DAT_01d2ad94 = _DAT_01d22580;
  _DAT_01d2ad98 = (float)_DAT_01d22580;
  _DAT_01d2ad9c = (float)_DAT_01d22580;
  _DAT_01d2ada4 = _DAT_01d22580;
  _DAT_01d2ad78 = 1.0;
  _DAT_01d2ad8c = 1.0;
  _DAT_01d2ada0 = 1.0;
  _DAT_01d2adb4 = 0x3f800000;
  _DAT_01d2ada8 = _DAT_01d22510 - _DAT_01d2257c[9];
  _DAT_01d2adac = _DAT_01d22514 - _DAT_01d2257c[10];
  _DAT_01d2adb0 = _DAT_01d22518 - _DAT_01d2257c[0xb];
  return;
}
