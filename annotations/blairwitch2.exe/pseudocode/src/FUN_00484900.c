// Name: FUN_00484900
// Address: 00484900
// Address Range: [[00484900, 00484cbb]]
// Convention: unknown
// Signature: void FUN_00484900(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484900(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00484cc0(param_1);
  FUN_004847e0(param_1);
  if (param_1 != _DAT_01c26410) {
    if (_DAT_01c26410 != (int *)0x0) {
      return;
    }
    if ((DAT_01c2a384 & 1) == 0) {
      return;
    }
    if (_DAT_01c2a37c < param_1[5]) {
      return;
    }
    if (_DAT_01c2a380 < param_1[6]) {
      return;
    }
    if (param_1[7] <= _DAT_01c2a37c) {
      return;
    }
    if (param_1[8] <= _DAT_01c2a380) {
      return;
    }
    _DAT_01c26420 = _DAT_01c2a37c;
    _DAT_01c26424 = _DAT_01c2a380;
    _DAT_01c26428 = *param_1;
    _DAT_01c26410 = param_1;
    _DAT_01c2642c = param_1[0xb];
    iVar1 = _DAT_01c2a380;
    if (param_1[4] != 0) {
      iVar1 = _DAT_01c2a37c;
    }
    if (iVar1 < param_1[9]) {
      _DAT_01c26414 = 1;
      *param_1 = *param_1 - param_1[3];
    }
    else if (iVar1 < param_1[10]) {
      if (iVar1 < param_1[0xb]) {
        _DAT_01c26414 = 3;
        *param_1 = *param_1 - param_1[2];
      }
      else if (iVar1 < param_1[0xc]) {
        _DAT_01c26414 = 0;
      }
      else {
        _DAT_01c26414 = 4;
        *param_1 = *param_1 + param_1[2];
      }
    }
    else {
      _DAT_01c26414 = 2;
      *param_1 = *param_1 + param_1[3];
    }
    _DAT_01c26418 = FUN_0058e9e0();
    _DAT_01c2641c = 0x48000;
    FUN_00484900(param_1);
    return;
  }
  if ((DAT_01c2a384 & 1) == 0) {
    _DAT_01c26410 = (int *)0x0;
    return;
  }
  if (_DAT_01c26414 != 0) {
    iVar1 = FUN_0058e9e0();
    _DAT_01c26418 = iVar1 - _DAT_01c26418;
    if (_DAT_01c26418 < 0) {
      _DAT_01c26418 = 0;
    }
    _DAT_01c2641c = _DAT_01c2641c - _DAT_01c26418;
    _DAT_01c26418 = iVar1;
    if (_DAT_01c2641c < 1) {
      _DAT_01c2641c = 0x9999;
      iVar1 = _DAT_01c2a380;
      if (param_1[4] != 0) {
        iVar1 = _DAT_01c2a37c;
      }
      switch(_DAT_01c26414) {
      case 1:
        *param_1 = *param_1 - param_1[3];
        break;
      case 2:
        *param_1 = *param_1 + param_1[3];
        break;
      case 3:
        if (iVar1 < param_1[0xb]) {
          *param_1 = *param_1 - param_1[2];
        }
        else {
          DAT_01c2a384 = DAT_01c2a384 & 0xfe;
          _DAT_01c26410 = (int *)0x0;
        }
        break;
      case 4:
        if (param_1[0xc] < iVar1) {
          *param_1 = *param_1 + param_1[2];
        }
        else {
          DAT_01c2a384 = DAT_01c2a384 & 0xfe;
          _DAT_01c26410 = (int *)0x0;
        }
      }
    }
    FUN_0058ed10(_DAT_01c26420,_DAT_01c26424);
    goto LAB_004849c3;
  }
  if (param_1[4] == 0) {
    iVar3 = (param_1[9] + _DAT_01c26424) - _DAT_01c2642c;
    iVar1 = _DAT_01c2a380;
    if (_DAT_01c2a380 < iVar3) {
      iVar1 = iVar3;
    }
    iVar3 = (param_1[10] + _DAT_01c26424) - ((_DAT_01c2642c + param_1[0xc]) - param_1[0xb]);
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    iVar2 = iVar1 - _DAT_01c26424;
    iVar3 = _DAT_01c26420;
  }
  else {
    iVar1 = (param_1[9] + _DAT_01c26420) - _DAT_01c2642c;
    iVar3 = _DAT_01c2a37c;
    if (_DAT_01c2a37c < iVar1) {
      iVar3 = iVar1;
    }
    iVar1 = (param_1[10] + _DAT_01c26420) - ((param_1[0xc] + _DAT_01c2642c) - param_1[0xb]);
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar2 = iVar3 - _DAT_01c26420;
    iVar1 = _DAT_01c26424;
  }
  iVar2 = iVar2 + _DAT_01c2642c;
  FUN_0058ed10(iVar3,iVar1);
  if ((param_1[2] < param_1[1]) && (0 < param_1[1])) {
    if (iVar2 == _DAT_01c2642c) {
      *param_1 = _DAT_01c26428;
      goto LAB_004849c3;
    }
    if (param_1[9] < iVar2) {
      if (iVar2 + (param_1[0xc] - param_1[0xb]) < param_1[10]) {
        *param_1 = ((iVar2 - param_1[9]) * (param_1[1] - param_1[2])) /
                   ((param_1[10] - param_1[9]) - (param_1[0xc] - param_1[0xb]));
      }
      else {
        *param_1 = param_1[1] - param_1[2];
      }
      goto LAB_004849c3;
    }
  }
  *param_1 = 0;
LAB_004849c3:
  FUN_00484cc0(param_1);
  FUN_004847e0(param_1);
  return;
}
