// Name: FUN_00483970
// Address: 00483970
// Address Range: [[00483970, 00483bf8]]
// Convention: unknown
// Signature: int FUN_00483970(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00483970(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_004849f0(param_1);
  if (param_1[0x62] != 0) {
    iVar1 = FUN_00484ca0(param_1,param_1[0x65]);
    if (iVar1 != 0) {
      return param_1[0x65];
    }
    param_1[0x62] = 0;
  }
  if (_DAT_02d21b80 != 0) {
    return -1;
  }
  iVar1 = (**(code **)(param_1[3] + 0x18))(param_1);
  if (iVar1 < 0) {
    return -1;
  }
  FUN_004849f0(param_1);
  if (param_1[0x16] != 0) {
    return -2;
  }
  if (param_1[0x7c] == 1) {
    param_1[0x6f] = param_1[0x66];
    param_1[0x70] = *param_1;
    param_1[0x71] = param_1[0x68];
    FUN_00485b00(param_1 + 0x6f);
    iVar1 = param_1[0x6f];
  }
  else {
    if (param_1[0x7c] != 2) goto LAB_00483a37;
    param_1[0x6f] = param_1[0x66] / param_1[0x68];
    param_1[0x70] = (*param_1 + param_1[0x68] + -1) / param_1[0x68];
    param_1[0x71] = param_1[0x6a];
    FUN_00485b00(param_1 + 0x6f);
    iVar1 = param_1[0x6f] * param_1[0x68];
  }
  param_1[0x66] = iVar1;
LAB_00483a37:
  iVar1 = param_1[0x68] * param_1[0x6a] + param_1[0x66];
  if (iVar1 <= param_1[0x65]) {
    param_1[0x65] = iVar1 + -1;
  }
  if (param_1[0x65] < param_1[0x66]) {
    param_1[0x65] = param_1[0x66];
  }
  if ((char)param_1[0x17] != '\0') {
    iVar1 = FUN_00486440(param_1 + 0x7d);
    if (iVar1 != 0) {
      param_1[0x62] = 1;
    }
    if (param_1 + 0x7d == _DAT_01c5bb78) {
      param_1[0xef] = 0;
    }
  }
  if ((char)param_1[0x30] != '\0') {
    iVar1 = FUN_00486440(param_1 + 0xb6);
    if (iVar1 != 0) {
      return -1;
    }
    if (param_1 + 0xb6 == _DAT_01c5bb78) {
      param_1[0xef] = 1;
    }
  }
  iVar1 = _DAT_01c5bb74;
  if ((((DAT_01c5fae4 & 1) != 0) && (_DAT_01c5bb78 == (int *)0x0)) &&
     (iVar1 = FUN_00484b50(param_1,_DAT_01c5fadc,_DAT_01c5fae0), -1 < iVar1)) {
    param_1[0xef] = -1;
    DAT_01c5fae4 = DAT_01c5fae4 & 0xfe;
    param_1[0x65] = iVar1;
    iVar2 = FUN_005806a0();
    iVar3 = iVar2 - _DAT_01c5bb70;
    _DAT_01c5bb70 = iVar2;
    if (((0 < iVar3) && ((double)iVar3 < _DAT_005bd74d)) && (_DAT_01c5bb74 == param_1[0x65])) {
      param_1[0x62] = 1;
    }
  }
  _DAT_01c5bb74 = iVar1;
  return -2;
}
