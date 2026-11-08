// Name: FUN_0049add0
// Address: 0049add0
// Address Range: [[0049add0, 0049b058]]
// Convention: unknown
// Signature: int FUN_0049add0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0049add0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0049be50(param_1);
  if (param_1[0x62] != 0) {
    iVar1 = FUN_0049c100(param_1,param_1[0x65]);
    if (iVar1 != 0) {
      return param_1[0x65];
    }
    param_1[0x62] = 0;
  }
  if (_DAT_02c9be70 != 0) {
    return -1;
  }
  iVar1 = (**(code **)(param_1[3] + 0x18))(param_1);
  if (iVar1 < 0) {
    return -1;
  }
  FUN_0049be50(param_1);
  if (param_1[0x16] != 0) {
    return -2;
  }
  if (param_1[0x7c] == 1) {
    param_1[0x6f] = param_1[0x66];
    param_1[0x70] = *param_1;
    param_1[0x71] = param_1[0x68];
    FUN_0049cf60(param_1 + 0x6f);
    iVar1 = param_1[0x6f];
  }
  else {
    if (param_1[0x7c] != 2) goto LAB_0049ae97;
    param_1[0x6f] = param_1[0x66] / param_1[0x68];
    param_1[0x70] = (*param_1 + param_1[0x68] + -1) / param_1[0x68];
    param_1[0x71] = param_1[0x6a];
    FUN_0049cf60(param_1 + 0x6f);
    iVar1 = param_1[0x6f] * param_1[0x68];
  }
  param_1[0x66] = iVar1;
LAB_0049ae97:
  iVar1 = param_1[0x68] * param_1[0x6a] + param_1[0x66];
  if (iVar1 <= param_1[0x65]) {
    param_1[0x65] = iVar1 + -1;
  }
  if (param_1[0x65] < param_1[0x66]) {
    param_1[0x65] = param_1[0x66];
  }
  if ((char)param_1[0x17] != '\0') {
    iVar1 = FUN_0049d8a0(param_1 + 0x7d);
    if (iVar1 != 0) {
      param_1[0x62] = 1;
    }
    if (param_1 + 0x7d == _DAT_01c3f5d0) {
      param_1[0xef] = 0;
    }
  }
  if ((char)param_1[0x30] != '\0') {
    iVar1 = FUN_0049d8a0(param_1 + 0xb6);
    if (iVar1 != 0) {
      return -1;
    }
    if (param_1 + 0xb6 == _DAT_01c3f5d0) {
      param_1[0xef] = 1;
    }
  }
  iVar1 = _DAT_01c3f5cc;
  if ((((DAT_01c43544 & 1) != 0) && (_DAT_01c3f5d0 == (int *)0x0)) &&
     (iVar1 = FUN_0049bfb0(param_1,_DAT_01c4353c,_DAT_01c43540), -1 < iVar1)) {
    param_1[0xef] = -1;
    DAT_01c43544 = DAT_01c43544 & 0xfe;
    param_1[0x65] = iVar1;
    iVar2 = FUN_005b2420();
    iVar3 = iVar2 - _DAT_01c3f5c8;
    _DAT_01c3f5c8 = iVar2;
    if (((0 < iVar3) && ((double)iVar3 < _DAT_005dc690)) && (_DAT_01c3f5cc == param_1[0x65])) {
      param_1[0x62] = 1;
    }
  }
  _DAT_01c3f5cc = iVar1;
  return -2;
}
