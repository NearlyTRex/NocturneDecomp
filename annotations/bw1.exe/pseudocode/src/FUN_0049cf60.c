// Name: FUN_0049cf60
// Address: 0049cf60
// Address Range: [[0049cf60, 0049d31b]]
// Convention: unknown
// Signature: void FUN_0049cf60(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049cf60(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0049d320(param_1);
  FUN_0049ce40(param_1);
  if (param_1 != _DAT_01c3f5d0) {
    if (_DAT_01c3f5d0 != (int *)0x0) {
      return;
    }
    if ((DAT_01c43544 & 1) == 0) {
      return;
    }
    if (_DAT_01c4353c < param_1[5]) {
      return;
    }
    if (_DAT_01c43540 < param_1[6]) {
      return;
    }
    if (param_1[7] <= _DAT_01c4353c) {
      return;
    }
    if (param_1[8] <= _DAT_01c43540) {
      return;
    }
    _DAT_01c3f5e0 = _DAT_01c4353c;
    _DAT_01c3f5e4 = _DAT_01c43540;
    _DAT_01c3f5e8 = *param_1;
    _DAT_01c3f5d0 = param_1;
    _DAT_01c3f5ec = param_1[0xb];
    iVar1 = _DAT_01c43540;
    if (param_1[4] != 0) {
      iVar1 = _DAT_01c4353c;
    }
    if (iVar1 < param_1[9]) {
      _DAT_01c3f5d4 = 1;
      *param_1 = *param_1 - param_1[3];
    }
    else if (iVar1 < param_1[10]) {
      if (iVar1 < param_1[0xb]) {
        _DAT_01c3f5d4 = 3;
        *param_1 = *param_1 - param_1[2];
      }
      else if (iVar1 < param_1[0xc]) {
        _DAT_01c3f5d4 = 0;
      }
      else {
        _DAT_01c3f5d4 = 4;
        *param_1 = *param_1 + param_1[2];
      }
    }
    else {
      _DAT_01c3f5d4 = 2;
      *param_1 = *param_1 + param_1[3];
    }
    _DAT_01c3f5d8 = FUN_005b2420();
    _DAT_01c3f5dc = 0x48000;
    FUN_0049cf60(param_1);
    return;
  }
  if ((DAT_01c43544 & 1) == 0) {
    _DAT_01c3f5d0 = (int *)0x0;
    return;
  }
  if (_DAT_01c3f5d4 != 0) {
    iVar1 = FUN_005b2420();
    _DAT_01c3f5d8 = iVar1 - _DAT_01c3f5d8;
    if (_DAT_01c3f5d8 < 0) {
      _DAT_01c3f5d8 = 0;
    }
    _DAT_01c3f5dc = _DAT_01c3f5dc - _DAT_01c3f5d8;
    _DAT_01c3f5d8 = iVar1;
    if (_DAT_01c3f5dc < 1) {
      _DAT_01c3f5dc = 0x9999;
      iVar1 = _DAT_01c43540;
      if (param_1[4] != 0) {
        iVar1 = _DAT_01c4353c;
      }
      switch(_DAT_01c3f5d4) {
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
          DAT_01c43544 = DAT_01c43544 & 0xfe;
          _DAT_01c3f5d0 = (int *)0x0;
        }
        break;
      case 4:
        if (param_1[0xc] < iVar1) {
          *param_1 = *param_1 + param_1[2];
        }
        else {
          DAT_01c43544 = DAT_01c43544 & 0xfe;
          _DAT_01c3f5d0 = (int *)0x0;
        }
      }
    }
    FUN_005b2750(_DAT_01c3f5e0,_DAT_01c3f5e4);
    goto LAB_0049d023;
  }
  if (param_1[4] == 0) {
    iVar3 = (param_1[9] + _DAT_01c3f5e4) - _DAT_01c3f5ec;
    iVar1 = _DAT_01c43540;
    if (_DAT_01c43540 < iVar3) {
      iVar1 = iVar3;
    }
    iVar3 = (param_1[10] + _DAT_01c3f5e4) - ((_DAT_01c3f5ec + param_1[0xc]) - param_1[0xb]);
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    iVar2 = iVar1 - _DAT_01c3f5e4;
    iVar3 = _DAT_01c3f5e0;
  }
  else {
    iVar1 = (param_1[9] + _DAT_01c3f5e0) - _DAT_01c3f5ec;
    iVar3 = _DAT_01c4353c;
    if (_DAT_01c4353c < iVar1) {
      iVar3 = iVar1;
    }
    iVar1 = (param_1[10] + _DAT_01c3f5e0) - ((param_1[0xc] + _DAT_01c3f5ec) - param_1[0xb]);
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar2 = iVar3 - _DAT_01c3f5e0;
    iVar1 = _DAT_01c3f5e4;
  }
  iVar2 = iVar2 + _DAT_01c3f5ec;
  FUN_005b2750(iVar3,iVar1);
  if ((param_1[2] < param_1[1]) && (0 < param_1[1])) {
    if (iVar2 == _DAT_01c3f5ec) {
      *param_1 = _DAT_01c3f5e8;
      goto LAB_0049d023;
    }
    if (param_1[9] < iVar2) {
      if (iVar2 + (param_1[0xc] - param_1[0xb]) < param_1[10]) {
        *param_1 = ((iVar2 - param_1[9]) * (param_1[1] - param_1[2])) /
                   ((param_1[10] - param_1[9]) - (param_1[0xc] - param_1[0xb]));
      }
      else {
        *param_1 = param_1[1] - param_1[2];
      }
      goto LAB_0049d023;
    }
  }
  *param_1 = 0;
LAB_0049d023:
  FUN_0049d320(param_1);
  FUN_0049ce40(param_1);
  return;
}
