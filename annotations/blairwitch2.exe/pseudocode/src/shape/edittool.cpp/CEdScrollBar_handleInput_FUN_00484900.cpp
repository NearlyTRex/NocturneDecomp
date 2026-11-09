// Name: shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00484900
// Address: 00484900
// Address Range: [[00484900, 00484cbb]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00484900(CEdScrollBar *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00484900(CEdScrollBar *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_00484cc0(this_ptr);
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004847e0(this_ptr);
  if (this_ptr != _DAT_01c26410) {
    if (_DAT_01c26410 != (CEdScrollBar *)0x0) {
      return;
    }
    if ((DAT_01c2a384 & 1) == 0) {
      return;
    }
    if (_DAT_01c2a37c < *(int *)(this_ptr + 0x14)) {
      return;
    }
    if (_DAT_01c2a380 < *(int *)(this_ptr + 0x18)) {
      return;
    }
    if (*(int *)(this_ptr + 0x1c) <= _DAT_01c2a37c) {
      return;
    }
    if (*(int *)(this_ptr + 0x20) <= _DAT_01c2a380) {
      return;
    }
    _DAT_01c26420 = _DAT_01c2a37c;
    _DAT_01c26424 = _DAT_01c2a380;
    _DAT_01c26428 = *(uint *)this_ptr;
    _DAT_01c26410 = this_ptr;
    _DAT_01c2642c = *(int *)(this_ptr + 0x2c);
    iVar1 = _DAT_01c2a380;
    if (*(int *)(this_ptr + 0x10) != 0) {
      iVar1 = _DAT_01c2a37c;
    }
    if (iVar1 < *(int *)(this_ptr + 0x24)) {
      _DAT_01c26414 = 1;
      *(int *)this_ptr = *(int *)this_ptr - *(int *)(this_ptr + 0xc);
    }
    else if (iVar1 < *(int *)(this_ptr + 0x28)) {
      if (iVar1 < *(int *)(this_ptr + 0x2c)) {
        _DAT_01c26414 = 3;
        *(int *)this_ptr = *(int *)this_ptr - *(int *)(this_ptr + 8);
      }
      else if (iVar1 < *(int *)(this_ptr + 0x30)) {
        _DAT_01c26414 = 0;
      }
      else {
        _DAT_01c26414 = 4;
        *(int *)this_ptr = *(int *)this_ptr + *(int *)(this_ptr + 8);
      }
    }
    else {
      _DAT_01c26414 = 2;
      *(int *)this_ptr = *(int *)this_ptr + *(int *)(this_ptr + 0xc);
    }
    _DAT_01c26418 = wincore_winrun_cpp_FUN_0058e9e0();
    _DAT_01c2641c = 0x48000;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00484900(this_ptr);
    return;
  }
  if ((DAT_01c2a384 & 1) == 0) {
    _DAT_01c26410 = (CEdScrollBar *)0x0;
    return;
  }
  if (_DAT_01c26414 != 0) {
    iVar1 = wincore_winrun_cpp_FUN_0058e9e0();
    _DAT_01c26418 = iVar1 - _DAT_01c26418;
    if (_DAT_01c26418 < 0) {
      _DAT_01c26418 = 0;
    }
    _DAT_01c2641c = _DAT_01c2641c - _DAT_01c26418;
    _DAT_01c26418 = iVar1;
    if (_DAT_01c2641c < 1) {
      _DAT_01c2641c = 0x9999;
      iVar1 = _DAT_01c2a380;
      if (*(int *)(this_ptr + 0x10) != 0) {
        iVar1 = _DAT_01c2a37c;
      }
      switch(_DAT_01c26414) {
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
          DAT_01c2a384 = DAT_01c2a384 & 0xfe;
          _DAT_01c26410 = (CEdScrollBar *)0x0;
        }
        break;
      case 4:
        if (*(int *)(this_ptr + 0x30) < iVar1) {
          *(int *)this_ptr = *(int *)this_ptr + *(int *)(this_ptr + 8);
        }
        else {
          DAT_01c2a384 = DAT_01c2a384 & 0xfe;
          _DAT_01c26410 = (CEdScrollBar *)0x0;
        }
      }
    }
    wincore_winrun_cpp_setCursorPosition_FUN_0058ed10(_DAT_01c26420,_DAT_01c26424);
    goto LAB_004849c3;
  }
  if (*(int *)(this_ptr + 0x10) == 0) {
    iVar3 = (*(int *)(this_ptr + 0x24) + _DAT_01c26424) - _DAT_01c2642c;
    iVar1 = _DAT_01c2a380;
    if (_DAT_01c2a380 < iVar3) {
      iVar1 = iVar3;
    }
    iVar3 = (*(int *)(this_ptr + 0x28) + _DAT_01c26424) -
            ((_DAT_01c2642c + *(int *)(this_ptr + 0x30)) - *(int *)(this_ptr + 0x2c));
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    iVar2 = iVar1 - _DAT_01c26424;
    iVar3 = _DAT_01c26420;
  }
  else {
    iVar1 = (*(int *)(this_ptr + 0x24) + _DAT_01c26420) - _DAT_01c2642c;
    iVar3 = _DAT_01c2a37c;
    if (_DAT_01c2a37c < iVar1) {
      iVar3 = iVar1;
    }
    iVar1 = (*(int *)(this_ptr + 0x28) + _DAT_01c26420) -
            ((*(int *)(this_ptr + 0x30) + _DAT_01c2642c) - *(int *)(this_ptr + 0x2c));
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar2 = iVar3 - _DAT_01c26420;
    iVar1 = _DAT_01c26424;
  }
  iVar2 = iVar2 + _DAT_01c2642c;
  wincore_winrun_cpp_setCursorPosition_FUN_0058ed10(iVar3,iVar1);
  if ((*(int *)(this_ptr + 8) < *(int *)(this_ptr + 4)) && (0 < *(int *)(this_ptr + 4))) {
    if (iVar2 == _DAT_01c2642c) {
      *(uint *)this_ptr = _DAT_01c26428;
      goto LAB_004849c3;
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
      goto LAB_004849c3;
    }
  }
  *(uint *)this_ptr = 0;
LAB_004849c3:
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_00484cc0(this_ptr);
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004847e0(this_ptr);
  return;
}
