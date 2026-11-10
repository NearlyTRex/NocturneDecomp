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
    if (_DAT_01c2a37c < this_ptr->bounds_left) {
      return;
    }
    if (_DAT_01c2a380 < this_ptr->bounds_top) {
      return;
    }
    if (this_ptr->bounds_right <= _DAT_01c2a37c) {
      return;
    }
    if (this_ptr->bounds_bottom <= _DAT_01c2a380) {
      return;
    }
    _DAT_01c26420 = _DAT_01c2a37c;
    _DAT_01c26424 = _DAT_01c2a380;
    _DAT_01c26428 = this_ptr->scroll_position;
    _DAT_01c26410 = this_ptr;
    _DAT_01c2642c = this_ptr->thumb_start;
    iVar1 = _DAT_01c2a380;
    if (this_ptr->orientation != 0) {
      iVar1 = _DAT_01c2a37c;
    }
    if (iVar1 < this_ptr->track_start) {
      _DAT_01c26414 = 1;
      this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->scroll_increment;
    }
    else if (iVar1 < this_ptr->track_end) {
      if (iVar1 < this_ptr->thumb_start) {
        _DAT_01c26414 = 3;
        this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->page_size;
      }
      else if (iVar1 < this_ptr->thumb_end) {
        _DAT_01c26414 = 0;
      }
      else {
        _DAT_01c26414 = 4;
        this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->page_size;
      }
    }
    else {
      _DAT_01c26414 = 2;
      this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->scroll_increment;
    }
    _DAT_01c26418 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
    _DAT_01c2641c = 0x48000;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00484900(this_ptr);
    return;
  }
  if ((DAT_01c2a384 & 1) == 0) {
    _DAT_01c26410 = (CEdScrollBar *)0x0;
    return;
  }
  if (_DAT_01c26414 != 0) {
    iVar1 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
    _DAT_01c26418 = iVar1 - _DAT_01c26418;
    if (_DAT_01c26418 < 0) {
      _DAT_01c26418 = 0;
    }
    _DAT_01c2641c = _DAT_01c2641c - _DAT_01c26418;
    _DAT_01c26418 = iVar1;
    if (_DAT_01c2641c < 1) {
      _DAT_01c2641c = 0x9999;
      iVar1 = _DAT_01c2a380;
      if (this_ptr->orientation != 0) {
        iVar1 = _DAT_01c2a37c;
      }
      switch(_DAT_01c26414) {
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
          DAT_01c2a384 = DAT_01c2a384 & 0xfe;
          _DAT_01c26410 = (CEdScrollBar *)0x0;
        }
        break;
      case 4:
        if (this_ptr->thumb_end < iVar1) {
          this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->page_size;
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
  if (this_ptr->orientation == 0) {
    iVar3 = (this_ptr->track_start + _DAT_01c26424) - _DAT_01c2642c;
    iVar1 = _DAT_01c2a380;
    if (_DAT_01c2a380 < iVar3) {
      iVar1 = iVar3;
    }
    iVar3 = (this_ptr->track_end + _DAT_01c26424) -
            ((_DAT_01c2642c + this_ptr->thumb_end) - this_ptr->thumb_start);
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    iVar2 = iVar1 - _DAT_01c26424;
    iVar3 = _DAT_01c26420;
  }
  else {
    iVar1 = (this_ptr->track_start + _DAT_01c26420) - _DAT_01c2642c;
    iVar3 = _DAT_01c2a37c;
    if (_DAT_01c2a37c < iVar1) {
      iVar3 = iVar1;
    }
    iVar1 = (this_ptr->track_end + _DAT_01c26420) -
            ((this_ptr->thumb_end + _DAT_01c2642c) - this_ptr->thumb_start);
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar2 = iVar3 - _DAT_01c26420;
    iVar1 = _DAT_01c26424;
  }
  iVar2 = iVar2 + _DAT_01c2642c;
  wincore_winrun_cpp_setCursorPosition_FUN_0058ed10(iVar3,iVar1);
  if ((this_ptr->page_size < this_ptr->item_count) && (0 < this_ptr->item_count)) {
    if (iVar2 == _DAT_01c2642c) {
      this_ptr->scroll_position = _DAT_01c26428;
      goto LAB_004849c3;
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
      goto LAB_004849c3;
    }
  }
  this_ptr->scroll_position = 0;
LAB_004849c3:
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_00484cc0(this_ptr);
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004847e0(this_ptr);
  return;
}
