// Name: FUN_00475230
// Address: 00475230
// Address Range: [[00475230, 0047546e]]
// Convention: unknown
// Signature: int FUN_00475230(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00475230(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00475db0(param_1);
  if (param_1[0x43] != 0) {
    iVar1 = FUN_00476040(param_1,param_1[0x46]);
    if (iVar1 != 0) {
      return param_1[0x46];
    }
    param_1[0x43] = 0;
  }
  iVar1 = (**(code **)(param_1[3] + 0x18))(param_1);
  if (iVar1 < 0) {
    return -1;
  }
  FUN_00475db0(param_1);
  if (param_1[0x1e] != 0) {
    return -2;
  }
  if (param_1[0x5b] == 1) {
    param_1[0x4e] = param_1[0x47];
    param_1[0x4f] = *param_1;
    param_1[0x50] = param_1[0x49];
    FUN_00476920(param_1 + 0x4e);
    iVar1 = param_1[0x4e];
  }
  else {
    if (param_1[0x5b] != 2) goto LAB_004752e0;
    param_1[0x4e] = param_1[0x47] / param_1[0x49];
    param_1[0x4f] = (*param_1 + param_1[0x49] + -1) / param_1[0x49];
    param_1[0x50] = param_1[0x4b];
    FUN_00476920(param_1 + 0x4e);
    iVar1 = param_1[0x4e] * param_1[0x49];
  }
  param_1[0x47] = iVar1;
LAB_004752e0:
  iVar1 = param_1[0x49] * param_1[0x4b] + param_1[0x47];
  if (iVar1 <= param_1[0x46]) {
    param_1[0x46] = iVar1 + -1;
  }
  if (param_1[0x46] < param_1[0x47]) {
    param_1[0x46] = param_1[0x47];
  }
  iVar1 = _DAT_01bd1d8c;
  if (_DAT_01bd1d8c < _DAT_01c00c58) {
    iVar1 = _DAT_01c00c58;
  }
  if (_DAT_01c00c60 < iVar1) {
    iVar1 = _DAT_01c00c60;
  }
  iVar2 = _DAT_01bd1d90;
  if (_DAT_01bd1d90 < _DAT_01c00c5c) {
    iVar2 = _DAT_01c00c5c;
  }
  if (_DAT_01c00c64 < iVar2) {
    iVar2 = _DAT_01c00c64;
  }
  FUN_00558d60(iVar1,iVar2);
  iVar1 = _DAT_01bcde20;
  if (((DAT_01bd1d94 & 1) != 0) &&
     (iVar1 = FUN_00475f10(param_1,_DAT_01bd1d8c,_DAT_01bd1d90), -1 < iVar1)) {
    DAT_01bd1d94 = DAT_01bd1d94 & 0xfe;
    param_1[0x46] = iVar1;
    iVar2 = FUN_00558a30();
    iVar3 = iVar2 - _DAT_01bcde1c;
    _DAT_01bcde1c = iVar2;
    if ((0 < iVar3) && (((double)iVar3 < _DAT_0057ee22 && (_DAT_01bcde20 == param_1[0x46])))) {
      param_1[0x43] = 1;
    }
  }
  _DAT_01bcde20 = iVar1;
  return -2;
}
