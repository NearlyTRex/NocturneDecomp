// Name: shape_edittool.cpp_CEdScrollBar_handleInput_FUN_0049cf60
// Address: 0049cf60
// Address Range: [[0049cf60, 0049d31b]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_handleInput_FUN_0049cf60(CEdScrollBar *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEdScrollBar_handleInput_FUN_0049cf60(CEdScrollBar *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_0049d320(this_ptr);
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_0049ce40(this_ptr);
  if (this_ptr != _DAT_01c3f5d0) {
    if (_DAT_01c3f5d0 != (CEdScrollBar *)0x0) {
      return;
    }
    if ((DAT_01c43544 & 1) == 0) {
      return;
    }
    if (_DAT_01c4353c < *(int *)(this_ptr + 0x14)) {
      return;
    }
    if (_DAT_01c43540 < *(int *)(this_ptr + 0x18)) {
      return;
    }
    if (*(int *)(this_ptr + 0x1c) <= _DAT_01c4353c) {
      return;
    }
    if (*(int *)(this_ptr + 0x20) <= _DAT_01c43540) {
      return;
    }
    _DAT_01c3f5e0 = _DAT_01c4353c;
    _DAT_01c3f5e4 = _DAT_01c43540;
    _DAT_01c3f5e8 = *(uint *)this_ptr;
    _DAT_01c3f5d0 = this_ptr;
    _DAT_01c3f5ec = *(int *)(this_ptr + 0x2c);
    iVar1 = _DAT_01c43540;
    if (*(int *)(this_ptr + 0x10) != 0) {
      iVar1 = _DAT_01c4353c;
    }
    if (iVar1 < *(int *)(this_ptr + 0x24)) {
      _DAT_01c3f5d4 = 1;
      *(int *)this_ptr = *(int *)this_ptr - *(int *)(this_ptr + 0xc);
    }
    else if (iVar1 < *(int *)(this_ptr + 0x28)) {
      if (iVar1 < *(int *)(this_ptr + 0x2c)) {
        _DAT_01c3f5d4 = 3;
        *(int *)this_ptr = *(int *)this_ptr - *(int *)(this_ptr + 8);
      }
      else if (iVar1 < *(int *)(this_ptr + 0x30)) {
        _DAT_01c3f5d4 = 0;
      }
      else {
        _DAT_01c3f5d4 = 4;
        *(int *)this_ptr = *(int *)this_ptr + *(int *)(this_ptr + 8);
      }
    }
    else {
      _DAT_01c3f5d4 = 2;
      *(int *)this_ptr = *(int *)this_ptr + *(int *)(this_ptr + 0xc);
    }
    _DAT_01c3f5d8 = wincore_winrun_cpp_FUN_005b2420();
    _DAT_01c3f5dc = 0x48000;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_0049cf60(this_ptr);
    return;
  }
  if ((DAT_01c43544 & 1) == 0) {
    _DAT_01c3f5d0 = (CEdScrollBar *)0x0;
    return;
  }
  if (_DAT_01c3f5d4 != 0) {
    iVar1 = wincore_winrun_cpp_FUN_005b2420();
    _DAT_01c3f5d8 = iVar1 - _DAT_01c3f5d8;
    if (_DAT_01c3f5d8 < 0) {
      _DAT_01c3f5d8 = 0;
    }
    _DAT_01c3f5dc = _DAT_01c3f5dc - _DAT_01c3f5d8;
    _DAT_01c3f5d8 = iVar1;
    if (_DAT_01c3f5dc < 1) {
      _DAT_01c3f5dc = 0x9999;
      iVar1 = _DAT_01c43540;
      if (*(int *)(this_ptr + 0x10) != 0) {
        iVar1 = _DAT_01c4353c;
      }
      switch(_DAT_01c3f5d4) {
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
          DAT_01c43544 = DAT_01c43544 & 0xfe;
          _DAT_01c3f5d0 = (CEdScrollBar *)0x0;
        }
        break;
      case 4:
        if (*(int *)(this_ptr + 0x30) < iVar1) {
          *(int *)this_ptr = *(int *)this_ptr + *(int *)(this_ptr + 8);
        }
        else {
          DAT_01c43544 = DAT_01c43544 & 0xfe;
          _DAT_01c3f5d0 = (CEdScrollBar *)0x0;
        }
      }
    }
    wincore_winrun_cpp_setCursorPosition_FUN_005b2750(_DAT_01c3f5e0,_DAT_01c3f5e4);
    goto LAB_0049d023;
  }
  if (*(int *)(this_ptr + 0x10) == 0) {
    iVar3 = (*(int *)(this_ptr + 0x24) + _DAT_01c3f5e4) - _DAT_01c3f5ec;
    iVar1 = _DAT_01c43540;
    if (_DAT_01c43540 < iVar3) {
      iVar1 = iVar3;
    }
    iVar3 = (*(int *)(this_ptr + 0x28) + _DAT_01c3f5e4) -
            ((_DAT_01c3f5ec + *(int *)(this_ptr + 0x30)) - *(int *)(this_ptr + 0x2c));
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    iVar2 = iVar1 - _DAT_01c3f5e4;
    iVar3 = _DAT_01c3f5e0;
  }
  else {
    iVar1 = (*(int *)(this_ptr + 0x24) + _DAT_01c3f5e0) - _DAT_01c3f5ec;
    iVar3 = _DAT_01c4353c;
    if (_DAT_01c4353c < iVar1) {
      iVar3 = iVar1;
    }
    iVar1 = (*(int *)(this_ptr + 0x28) + _DAT_01c3f5e0) -
            ((*(int *)(this_ptr + 0x30) + _DAT_01c3f5ec) - *(int *)(this_ptr + 0x2c));
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar2 = iVar3 - _DAT_01c3f5e0;
    iVar1 = _DAT_01c3f5e4;
  }
  iVar2 = iVar2 + _DAT_01c3f5ec;
  wincore_winrun_cpp_setCursorPosition_FUN_005b2750(iVar3,iVar1);
  if ((*(int *)(this_ptr + 8) < *(int *)(this_ptr + 4)) && (0 < *(int *)(this_ptr + 4))) {
    if (iVar2 == _DAT_01c3f5ec) {
      *(uint *)this_ptr = _DAT_01c3f5e8;
      goto LAB_0049d023;
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
      goto LAB_0049d023;
    }
  }
  *(uint *)this_ptr = 0;
LAB_0049d023:
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_0049d320(this_ptr);
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_0049ce40(this_ptr);
  return;
}
