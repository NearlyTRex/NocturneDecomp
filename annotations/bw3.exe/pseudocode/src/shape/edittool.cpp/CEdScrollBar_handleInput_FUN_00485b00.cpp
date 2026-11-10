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
    if (_DAT_01c5fadc < this_ptr->bounds_left) {
      return;
    }
    if (_DAT_01c5fae0 < this_ptr->bounds_top) {
      return;
    }
    if (this_ptr->bounds_right <= _DAT_01c5fadc) {
      return;
    }
    if (this_ptr->bounds_bottom <= _DAT_01c5fae0) {
      return;
    }
    _DAT_01c5bb88 = _DAT_01c5fadc;
    _DAT_01c5bb8c = _DAT_01c5fae0;
    _DAT_01c5bb90 = this_ptr->scroll_position;
    _DAT_01c5bb78 = this_ptr;
    _DAT_01c5bb94 = this_ptr->thumb_start;
    iVar1 = _DAT_01c5fae0;
    if (this_ptr->orientation != 0) {
      iVar1 = _DAT_01c5fadc;
    }
    if (iVar1 < this_ptr->track_start) {
      _DAT_01c5bb7c = 1;
      this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->scroll_increment;
    }
    else if (iVar1 < this_ptr->track_end) {
      if (iVar1 < this_ptr->thumb_start) {
        _DAT_01c5bb7c = 3;
        this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->page_size;
      }
      else if (iVar1 < this_ptr->thumb_end) {
        _DAT_01c5bb7c = 0;
      }
      else {
        _DAT_01c5bb7c = 4;
        this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->page_size;
      }
    }
    else {
      _DAT_01c5bb7c = 2;
      this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->scroll_increment;
    }
    _DAT_01c5bb80 = wincore_winrun_cpp_getTime_FUN_005806a0();
    _DAT_01c5bb84 = 0x48000;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00485b00(this_ptr);
    return;
  }
  if ((DAT_01c5fae4 & 1) == 0) {
    _DAT_01c5bb78 = (CEdScrollBar *)0x0;
    return;
  }
  if (_DAT_01c5bb7c != 0) {
    iVar1 = wincore_winrun_cpp_getTime_FUN_005806a0();
    _DAT_01c5bb80 = iVar1 - _DAT_01c5bb80;
    if (_DAT_01c5bb80 < 0) {
      _DAT_01c5bb80 = 0;
    }
    _DAT_01c5bb84 = _DAT_01c5bb84 - _DAT_01c5bb80;
    _DAT_01c5bb80 = iVar1;
    if (_DAT_01c5bb84 < 1) {
      _DAT_01c5bb84 = 0x9999;
      iVar1 = _DAT_01c5fae0;
      if (this_ptr->orientation != 0) {
        iVar1 = _DAT_01c5fadc;
      }
      switch(_DAT_01c5bb7c) {
      case 1:
        this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->scroll_increment;
        break;
      case 2:
        this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->scroll_increment;
        break;
      case 3:
        if (iVar1 < this_ptr->thumb_start) {
          this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->page_size;
        }
        else {
          DAT_01c5fae4 = DAT_01c5fae4 & 0xfe;
          _DAT_01c5bb78 = (CEdScrollBar *)0x0;
        }
        break;
      case 4:
        if (this_ptr->thumb_end < iVar1) {
          this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->page_size;
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
  if (this_ptr->orientation == 0) {
    iVar3 = (this_ptr->track_start + _DAT_01c5bb8c) - _DAT_01c5bb94;
    iVar1 = _DAT_01c5fae0;
    if (_DAT_01c5fae0 < iVar3) {
      iVar1 = iVar3;
    }
    iVar3 = (this_ptr->track_end + _DAT_01c5bb8c) -
            ((_DAT_01c5bb94 + this_ptr->thumb_end) - this_ptr->thumb_start);
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    iVar2 = iVar1 - _DAT_01c5bb8c;
    iVar3 = _DAT_01c5bb88;
  }
  else {
    iVar1 = (this_ptr->track_start + _DAT_01c5bb88) - _DAT_01c5bb94;
    iVar3 = _DAT_01c5fadc;
    if (_DAT_01c5fadc < iVar1) {
      iVar3 = iVar1;
    }
    iVar1 = (this_ptr->track_end + _DAT_01c5bb88) -
            ((this_ptr->thumb_end + _DAT_01c5bb94) - this_ptr->thumb_start);
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar2 = iVar3 - _DAT_01c5bb88;
    iVar1 = _DAT_01c5bb8c;
  }
  iVar2 = iVar2 + _DAT_01c5bb94;
  wincore_winrun_cpp_setCursorPosition_FUN_005809d0(iVar3,iVar1);
  if ((this_ptr->page_size < this_ptr->item_count) && (0 < this_ptr->item_count)) {
    if (iVar2 == _DAT_01c5bb94) {
      this_ptr->scroll_position = _DAT_01c5bb90;
      goto LAB_00485bc3;
    }
    if (this_ptr->track_start < iVar2) {
      iVar1 = this_ptr->thumb_end - this_ptr->thumb_start;
      if (iVar2 + iVar1 < this_ptr->track_end) {
        this_ptr->scroll_position =
             ((iVar2 - this_ptr->track_start) * (this_ptr->item_count - this_ptr->page_size)) /
             ((this_ptr->track_end - this_ptr->track_start) - iVar1);
      }
      else {
        this_ptr->scroll_position = this_ptr->item_count - this_ptr->page_size;
      }
      goto LAB_00485bc3;
    }
  }
  this_ptr->scroll_position = 0;
LAB_00485bc3:
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_00485ec0(this_ptr);
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004859e0(this_ptr);
  return;
}
