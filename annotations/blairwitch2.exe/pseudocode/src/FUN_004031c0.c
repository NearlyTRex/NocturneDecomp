// Name: FUN_004031c0
// Address: 004031c0
// Address Range: [[004031c0, 0040324f]]
// Convention: unknown
// Signature: void FUN_004031c0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004031c0(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = _DAT_01c35e60;
  if (param_1 < _DAT_01c35e48) {
    param_1 = _DAT_01c35e48;
  }
  if (_DAT_01c35e50 < param_3) {
    param_3 = _DAT_01c35e50;
  }
  if (param_1 <= param_3) {
    if (param_2 < _DAT_01c35e4c) {
      param_2 = _DAT_01c35e4c;
    }
    if (_DAT_01c35e54 < param_4) {
      param_4 = _DAT_01c35e54;
    }
    _DAT_01c35e60 = param_5;
    if (param_2 <= param_4) {
      for (; param_2 <= param_4; param_2 = param_2 + 1) {
        FUN_00402f30(param_1,param_2,param_3);
      }
    }
  }
  _DAT_01c35e60 = uVar1;
  return;
}
