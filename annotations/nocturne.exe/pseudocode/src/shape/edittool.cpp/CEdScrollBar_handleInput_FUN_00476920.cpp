// Name: shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00476920
// Address: 00476920
// Address Range: [[00476920, 00476cdb]]
// Convention: unknown
// Signature: void shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00476920(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00476920(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_00476ce0(param_1);
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_00476800(param_1);
  if (param_1 != _DAT_01bcde24) {
    if (_DAT_01bcde24 != (int *)0x0) {
      return;
    }
    if ((DAT_01bd1d94 & 1) == 0) {
      return;
    }
    if (_DAT_01bd1d8c < param_1[5]) {
      return;
    }
    if (_DAT_01bd1d90 < param_1[6]) {
      return;
    }
    if (param_1[7] <= _DAT_01bd1d8c) {
      return;
    }
    if (param_1[8] <= _DAT_01bd1d90) {
      return;
    }
    _DAT_01bcde34 = _DAT_01bd1d8c;
    _DAT_01bcde38 = _DAT_01bd1d90;
    _DAT_01bcde3c = *param_1;
    _DAT_01bcde24 = param_1;
    _DAT_01bcde40 = param_1[0xb];
    iVar1 = _DAT_01bd1d90;
    if (param_1[4] != 0) {
      iVar1 = _DAT_01bd1d8c;
    }
    if (iVar1 < param_1[9]) {
      _DAT_01bcde28 = 1;
      *param_1 = *param_1 - param_1[3];
    }
    else if (iVar1 < param_1[10]) {
      if (iVar1 < param_1[0xb]) {
        _DAT_01bcde28 = 3;
        *param_1 = *param_1 - param_1[2];
      }
      else if (iVar1 < param_1[0xc]) {
        _DAT_01bcde28 = 0;
      }
      else {
        _DAT_01bcde28 = 4;
        *param_1 = *param_1 + param_1[2];
      }
    }
    else {
      _DAT_01bcde28 = 2;
      *param_1 = *param_1 + param_1[3];
    }
    _DAT_01bcde2c = wincore_winrun_cpp_getTime_FUN_00558a30();
    _DAT_01bcde30 = 0x48000;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00476920(param_1);
    return;
  }
  if ((DAT_01bd1d94 & 1) == 0) {
    _DAT_01bcde24 = (int *)0x0;
    return;
  }
  if (_DAT_01bcde28 != 0) {
    iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
    _DAT_01bcde2c = iVar1 - _DAT_01bcde2c;
    if (_DAT_01bcde2c < 0) {
      _DAT_01bcde2c = 0;
    }
    _DAT_01bcde30 = _DAT_01bcde30 - _DAT_01bcde2c;
    _DAT_01bcde2c = iVar1;
    if (_DAT_01bcde30 < 1) {
      _DAT_01bcde30 = 0x9999;
      iVar1 = _DAT_01bd1d90;
      if (param_1[4] != 0) {
        iVar1 = _DAT_01bd1d8c;
      }
      switch(_DAT_01bcde28) {
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
          DAT_01bd1d94 = DAT_01bd1d94 & 0xfe;
          _DAT_01bcde24 = (int *)0x0;
        }
        break;
      case 4:
        if (param_1[0xc] < iVar1) {
          *param_1 = *param_1 + param_1[2];
        }
        else {
          DAT_01bd1d94 = DAT_01bd1d94 & 0xfe;
          _DAT_01bcde24 = (int *)0x0;
        }
      }
    }
    wincore_winrun_cpp_setCursorPosition_FUN_00558d60(_DAT_01bcde34,_DAT_01bcde38);
    goto LAB_004769e3;
  }
  if (param_1[4] == 0) {
    iVar3 = (param_1[9] + _DAT_01bcde38) - _DAT_01bcde40;
    iVar1 = _DAT_01bd1d90;
    if (_DAT_01bd1d90 < iVar3) {
      iVar1 = iVar3;
    }
    iVar3 = (param_1[10] + _DAT_01bcde38) - ((_DAT_01bcde40 + param_1[0xc]) - param_1[0xb]);
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    iVar2 = iVar1 - _DAT_01bcde38;
    iVar3 = _DAT_01bcde34;
  }
  else {
    iVar1 = (param_1[9] + _DAT_01bcde34) - _DAT_01bcde40;
    iVar3 = _DAT_01bd1d8c;
    if (_DAT_01bd1d8c < iVar1) {
      iVar3 = iVar1;
    }
    iVar1 = (param_1[10] + _DAT_01bcde34) - ((param_1[0xc] + _DAT_01bcde40) - param_1[0xb]);
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar2 = iVar3 - _DAT_01bcde34;
    iVar1 = _DAT_01bcde38;
  }
  iVar2 = iVar2 + _DAT_01bcde40;
  wincore_winrun_cpp_setCursorPosition_FUN_00558d60(iVar3,iVar1);
  if ((param_1[2] < param_1[1]) && (0 < param_1[1])) {
    if (iVar2 == _DAT_01bcde40) {
      *param_1 = _DAT_01bcde3c;
      goto LAB_004769e3;
    }
    if (param_1[9] < iVar2) {
      if (iVar2 + (param_1[0xc] - param_1[0xb]) < param_1[10]) {
        *param_1 = ((iVar2 - param_1[9]) * (param_1[1] - param_1[2])) /
                   ((param_1[10] - param_1[9]) - (param_1[0xc] - param_1[0xb]));
      }
      else {
        *param_1 = param_1[1] - param_1[2];
      }
      goto LAB_004769e3;
    }
  }
  *param_1 = 0;
LAB_004769e3:
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_00476ce0(param_1);
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_00476800(param_1);
  return;
}
