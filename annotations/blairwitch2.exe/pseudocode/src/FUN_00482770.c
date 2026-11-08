// Name: FUN_00482770
// Address: 00482770
// Address Range: [[00482770, 004829f6]]
// Convention: unknown
// Signature: int FUN_00482770(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00482770(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_004837f0(param_1);
  if (param_1[0x62] != 0) {
    iVar1 = FUN_00483aa0(param_1,param_1[0x65]);
    if (iVar1 != 0) {
      return param_1[0x65];
    }
    param_1[0x62] = 0;
  }
  iVar1 = (**(code **)(param_1[3] + 0x18))(param_1);
  if (iVar1 < 0) {
    return -1;
  }
  FUN_004837f0(param_1);
  if (param_1[0x16] != 0) {
    return -2;
  }
  if (param_1[0x7c] == 1) {
    param_1[0x6f] = param_1[0x66];
    param_1[0x70] = *param_1;
    param_1[0x71] = param_1[0x68];
    FUN_00484900(param_1 + 0x6f);
    iVar1 = param_1[0x6f];
  }
  else {
    if (param_1[0x7c] != 2) goto LAB_00482820;
    param_1[0x6f] = param_1[0x66] / param_1[0x68];
    param_1[0x70] = (*param_1 + param_1[0x68] + -1) / param_1[0x68];
    param_1[0x71] = param_1[0x6a];
    FUN_00484900(param_1 + 0x6f);
    iVar1 = param_1[0x6f] * param_1[0x68];
  }
  param_1[0x66] = iVar1;
LAB_00482820:
  iVar1 = param_1[0x68] * param_1[0x6a] + param_1[0x66];
  if (iVar1 <= param_1[0x65]) {
    param_1[0x65] = iVar1 + -1;
  }
  if (param_1[0x65] < param_1[0x66]) {
    param_1[0x65] = param_1[0x66];
  }
  if ((char)param_1[0x17] != '\0') {
    iVar1 = FUN_00485240(param_1 + 0x7d);
    if (iVar1 != 0) {
      param_1[0x62] = 1;
    }
    if (param_1 + 0x7d == _DAT_01c26410) {
      param_1[0xef] = 0;
    }
  }
  if ((char)param_1[0x30] != '\0') {
    iVar1 = FUN_00485240(param_1 + 0xb6);
    if (iVar1 != 0) {
      return -1;
    }
    if (param_1 + 0xb6 == _DAT_01c26410) {
      param_1[0xef] = 1;
    }
  }
  iVar1 = _DAT_01c2640c;
  if ((((DAT_01c2a384 & 1) != 0) && (_DAT_01c26410 == (int *)0x0)) &&
     (iVar1 = FUN_00483950(param_1,_DAT_01c2a37c,_DAT_01c2a380), -1 < iVar1)) {
    param_1[0xef] = -1;
    DAT_01c2a384 = DAT_01c2a384 & 0xfe;
    param_1[0x65] = iVar1;
    iVar2 = FUN_0058e9e0();
    iVar3 = iVar2 - _DAT_01c26408;
    _DAT_01c26408 = iVar2;
    if (((0 < iVar3) && ((double)iVar3 < _DAT_005d28f7)) && (_DAT_01c2640c == param_1[0x65])) {
      param_1[0x62] = 1;
    }
  }
  _DAT_01c2640c = iVar1;
  return -2;
}
