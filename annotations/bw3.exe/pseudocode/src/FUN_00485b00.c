// Name: FUN_00485b00
// Address: 00485b00
// Address Range: [[00485b00, 00485ebb]]
// Convention: unknown
// Signature: void FUN_00485b00(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485b00(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00485ec0(param_1);
  FUN_004859e0(param_1);
  if (param_1 != _DAT_01c5bb78) {
    if (_DAT_01c5bb78 != (int *)0x0) {
      return;
    }
    if ((DAT_01c5fae4 & 1) == 0) {
      return;
    }
    if (_DAT_01c5fadc < param_1[5]) {
      return;
    }
    if (_DAT_01c5fae0 < param_1[6]) {
      return;
    }
    if (param_1[7] <= _DAT_01c5fadc) {
      return;
    }
    if (param_1[8] <= _DAT_01c5fae0) {
      return;
    }
    _DAT_01c5bb88 = _DAT_01c5fadc;
    _DAT_01c5bb8c = _DAT_01c5fae0;
    _DAT_01c5bb90 = *param_1;
    _DAT_01c5bb78 = param_1;
    _DAT_01c5bb94 = param_1[0xb];
    iVar1 = _DAT_01c5fae0;
    if (param_1[4] != 0) {
      iVar1 = _DAT_01c5fadc;
    }
    if (iVar1 < param_1[9]) {
      _DAT_01c5bb7c = 1;
      *param_1 = *param_1 - param_1[3];
    }
    else if (iVar1 < param_1[10]) {
      if (iVar1 < param_1[0xb]) {
        _DAT_01c5bb7c = 3;
        *param_1 = *param_1 - param_1[2];
      }
      else if (iVar1 < param_1[0xc]) {
        _DAT_01c5bb7c = 0;
      }
      else {
        _DAT_01c5bb7c = 4;
        *param_1 = *param_1 + param_1[2];
      }
    }
    else {
      _DAT_01c5bb7c = 2;
      *param_1 = *param_1 + param_1[3];
    }
    _DAT_01c5bb80 = FUN_005806a0();
    _DAT_01c5bb84 = 0x48000;
    FUN_00485b00(param_1);
    return;
  }
  if ((DAT_01c5fae4 & 1) == 0) {
    _DAT_01c5bb78 = (int *)0x0;
    return;
  }
  if (_DAT_01c5bb7c != 0) {
    iVar1 = FUN_005806a0();
    _DAT_01c5bb80 = iVar1 - _DAT_01c5bb80;
    if (_DAT_01c5bb80 < 0) {
      _DAT_01c5bb80 = 0;
    }
    _DAT_01c5bb84 = _DAT_01c5bb84 - _DAT_01c5bb80;
    _DAT_01c5bb80 = iVar1;
    if (_DAT_01c5bb84 < 1) {
      _DAT_01c5bb84 = 0x9999;
      iVar1 = _DAT_01c5fae0;
      if (param_1[4] != 0) {
        iVar1 = _DAT_01c5fadc;
      }
      switch(_DAT_01c5bb7c) {
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
          DAT_01c5fae4 = DAT_01c5fae4 & 0xfe;
          _DAT_01c5bb78 = (int *)0x0;
        }
        break;
      case 4:
        if (param_1[0xc] < iVar1) {
          *param_1 = *param_1 + param_1[2];
        }
        else {
          DAT_01c5fae4 = DAT_01c5fae4 & 0xfe;
          _DAT_01c5bb78 = (int *)0x0;
        }
      }
    }
    FUN_005809d0(_DAT_01c5bb88,_DAT_01c5bb8c);
    goto LAB_00485bc3;
  }
  if (param_1[4] == 0) {
    iVar3 = (param_1[9] + _DAT_01c5bb8c) - _DAT_01c5bb94;
    iVar1 = _DAT_01c5fae0;
    if (_DAT_01c5fae0 < iVar3) {
      iVar1 = iVar3;
    }
    iVar3 = (param_1[10] + _DAT_01c5bb8c) - ((_DAT_01c5bb94 + param_1[0xc]) - param_1[0xb]);
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    iVar2 = iVar1 - _DAT_01c5bb8c;
    iVar3 = _DAT_01c5bb88;
  }
  else {
    iVar1 = (param_1[9] + _DAT_01c5bb88) - _DAT_01c5bb94;
    iVar3 = _DAT_01c5fadc;
    if (_DAT_01c5fadc < iVar1) {
      iVar3 = iVar1;
    }
    iVar1 = (param_1[10] + _DAT_01c5bb88) - ((param_1[0xc] + _DAT_01c5bb94) - param_1[0xb]);
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar2 = iVar3 - _DAT_01c5bb88;
    iVar1 = _DAT_01c5bb8c;
  }
  iVar2 = iVar2 + _DAT_01c5bb94;
  FUN_005809d0(iVar3,iVar1);
  if ((param_1[2] < param_1[1]) && (0 < param_1[1])) {
    if (iVar2 == _DAT_01c5bb94) {
      *param_1 = _DAT_01c5bb90;
      goto LAB_00485bc3;
    }
    if (param_1[9] < iVar2) {
      if (iVar2 + (param_1[0xc] - param_1[0xb]) < param_1[10]) {
        *param_1 = ((iVar2 - param_1[9]) * (param_1[1] - param_1[2])) /
                   ((param_1[10] - param_1[9]) - (param_1[0xc] - param_1[0xb]));
      }
      else {
        *param_1 = param_1[1] - param_1[2];
      }
      goto LAB_00485bc3;
    }
  }
  *param_1 = 0;
LAB_00485bc3:
  FUN_00485ec0(param_1);
  FUN_004859e0(param_1);
  return;
}
