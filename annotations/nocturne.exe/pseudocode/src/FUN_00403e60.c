// Name: FUN_00403e60
// Address: 00403e60
// Address Range: [[00403e60, 00403eef]]
// Convention: unknown
// Signature: void FUN_00403e60(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403e60(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = _DAT_01c00c70;
  if (param_1 < _DAT_01c00c58) {
    param_1 = _DAT_01c00c58;
  }
  if (_DAT_01c00c60 < param_3) {
    param_3 = _DAT_01c00c60;
  }
  if (param_1 <= param_3) {
    if (param_2 < _DAT_01c00c5c) {
      param_2 = _DAT_01c00c5c;
    }
    if (_DAT_01c00c64 < param_4) {
      param_4 = _DAT_01c00c64;
    }
    _DAT_01c00c70 = param_5;
    if (param_2 <= param_4) {
      for (; param_2 <= param_4; param_2 = param_2 + 1) {
        FUN_00403bd0(param_1,param_2,param_3);
      }
    }
  }
  _DAT_01c00c70 = uVar1;
  return;
}
