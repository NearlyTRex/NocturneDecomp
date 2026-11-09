// Name: shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00485b00
// Address: 00485b00
// Address Range: [[00485b00, 00485ebb]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00485b00(CEdScrollBar *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00485b00(CEdScrollBar *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_00485ec0(this_ptr);
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004859e0(this_ptr);
  if (this_ptr != _DAT_01c5bb78) {
    if (_DAT_01c5bb78 != (CEdScrollBar *)0x0) {
      return;
    }
    if ((DAT_01c5fae4 & 1) == 0) {
      return;
    }
    if (_DAT_01c5fadc < *(int *)(this_ptr + 0x14)) {
      return;
    }
    if (_DAT_01c5fae0 < *(int *)(this_ptr + 0x18)) {
      return;
    }
    if (*(int *)(this_ptr + 0x1c) <= _DAT_01c5fadc) {
      return;
    }
    if (*(int *)(this_ptr + 0x20) <= _DAT_01c5fae0) {
      return;
    }
    _DAT_01c5bb88 = _DAT_01c5fadc;
    _DAT_01c5bb8c = _DAT_01c5fae0;
    _DAT_01c5bb90 = *(uint *)this_ptr;
    _DAT_01c5bb78 = this_ptr;
    _DAT_01c5bb94 = *(int *)(this_ptr + 0x2c);
    iVar1 = _DAT_01c5fae0;
    if (*(int *)(this_ptr + 0x10) != 0) {
      iVar1 = _DAT_01c5fadc;
    }
    if (iVar1 < *(int *)(this_ptr + 0x24)) {
      _DAT_01c5bb7c = 1;
      *(int *)this_ptr = *(int *)this_ptr - *(int *)(this_ptr + 0xc);
    }
    else if (iVar1 < *(int *)(this_ptr + 0x28)) {
      if (iVar1 < *(int *)(this_ptr + 0x2c)) {
        _DAT_01c5bb7c = 3;
        *(int *)this_ptr = *(int *)this_ptr - *(int *)(this_ptr + 8);
      }
      else if (iVar1 < *(int *)(this_ptr + 0x30)) {
        _DAT_01c5bb7c = 0;
      }
      else {
        _DAT_01c5bb7c = 4;
        *(int *)this_ptr = *(int *)this_ptr + *(int *)(this_ptr + 8);
      }
    }
    else {
      _DAT_01c5bb7c = 2;
      *(int *)this_ptr = *(int *)this_ptr + *(int *)(this_ptr + 0xc);
    }
    _DAT_01c5bb80 = wincore_winrun_cpp_FUN_005806a0();
    _DAT_01c5bb84 = 0x48000;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00485b00(this_ptr);
    return;
  }
  if ((DAT_01c5fae4 & 1) == 0) {
    _DAT_01c5bb78 = (CEdScrollBar *)0x0;
    return;
  }
  if (_DAT_01c5bb7c != 0) {
    iVar1 = wincore_winrun_cpp_FUN_005806a0();
    _DAT_01c5bb80 = iVar1 - _DAT_01c5bb80;
    if (_DAT_01c5bb80 < 0) {
      _DAT_01c5bb80 = 0;
    }
    _DAT_01c5bb84 = _DAT_01c5bb84 - _DAT_01c5bb80;
    _DAT_01c5bb80 = iVar1;
    if (_DAT_01c5bb84 < 1) {
      _DAT_01c5bb84 = 0x9999;
      iVar1 = _DAT_01c5fae0;
      if (*(int *)(this_ptr + 0x10) != 0) {
        iVar1 = _DAT_01c5fadc;
      }
      switch(_DAT_01c5bb7c) {
      case 1:
        *(int *)this_ptr = *(int *)this_ptr - *(int *)(this_ptr + 0xc);
        break;
      case 2:
        *(int *)this_ptr = *(int *)this_ptr + *(int *)(this_ptr + 0xc);
        break;
      case 3:
        if (iVar1 < *(int *)(this_ptr + 0x2c)) {
          *(int *)this_ptr = *(int *)this_ptr - *(int *)(this_ptr + 8);
        }
        else {
          DAT_01c5fae4 = DAT_01c5fae4 & 0xfe;
          _DAT_01c5bb78 = (CEdScrollBar *)0x0;
        }
        break;
      case 4:
        if (*(int *)(this_ptr + 0x30) < iVar1) {
          *(int *)this_ptr = *(int *)this_ptr + *(int *)(this_ptr + 8);
        }
        else {
          DAT_01c5fae4 = DAT_01c5fae4 & 0xfe;
          _DAT_01c5bb78 = (CEdScrollBar *)0x0;
        }
      }
    }
    wincore_winrun_cpp_setCursorPosition_FUN_005809d0(_DAT_01c5bb88,_DAT_01c5bb8c);
    goto LAB_00485bc3;
  }
  if (*(int *)(this_ptr + 0x10) == 0) {
    iVar3 = (*(int *)(this_ptr + 0x24) + _DAT_01c5bb8c) - _DAT_01c5bb94;
    iVar1 = _DAT_01c5fae0;
    if (_DAT_01c5fae0 < iVar3) {
      iVar1 = iVar3;
    }
    iVar3 = (*(int *)(this_ptr + 0x28) + _DAT_01c5bb8c) -
            ((_DAT_01c5bb94 + *(int *)(this_ptr + 0x30)) - *(int *)(this_ptr + 0x2c));
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    iVar2 = iVar1 - _DAT_01c5bb8c;
    iVar3 = _DAT_01c5bb88;
  }
  else {
    iVar1 = (*(int *)(this_ptr + 0x24) + _DAT_01c5bb88) - _DAT_01c5bb94;
    iVar3 = _DAT_01c5fadc;
    if (_DAT_01c5fadc < iVar1) {
      iVar3 = iVar1;
    }
    iVar1 = (*(int *)(this_ptr + 0x28) + _DAT_01c5bb88) -
            ((*(int *)(this_ptr + 0x30) + _DAT_01c5bb94) - *(int *)(this_ptr + 0x2c));
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar2 = iVar3 - _DAT_01c5bb88;
    iVar1 = _DAT_01c5bb8c;
  }
  iVar2 = iVar2 + _DAT_01c5bb94;
  wincore_winrun_cpp_setCursorPosition_FUN_005809d0(iVar3,iVar1);
  if ((*(int *)(this_ptr + 8) < *(int *)(this_ptr + 4)) && (0 < *(int *)(this_ptr + 4))) {
    if (iVar2 == _DAT_01c5bb94) {
      *(uint *)this_ptr = _DAT_01c5bb90;
      goto LAB_00485bc3;
    }
    if (*(int *)(this_ptr + 0x24) < iVar2) {
      if (iVar2 + (*(int *)(this_ptr + 0x30) - *(int *)(this_ptr + 0x2c)) <
          *(int *)(this_ptr + 0x28)) {
        *(int *)this_ptr =
             ((iVar2 - *(int *)(this_ptr + 0x24)) *
             (*(int *)(this_ptr + 4) - *(int *)(this_ptr + 8))) /
             ((*(int *)(this_ptr + 0x28) - *(int *)(this_ptr + 0x24)) -
             (*(int *)(this_ptr + 0x30) - *(int *)(this_ptr + 0x2c)));
      }
      else {
        *(int *)this_ptr = *(int *)(this_ptr + 4) - *(int *)(this_ptr + 8);
      }
      goto LAB_00485bc3;
    }
  }
  *(uint *)this_ptr = 0;
LAB_00485bc3:
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_00485ec0(this_ptr);
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004859e0(this_ptr);
  return;
}
