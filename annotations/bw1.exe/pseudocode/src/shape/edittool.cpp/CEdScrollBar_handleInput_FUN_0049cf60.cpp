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
    if (_DAT_01c4353c < this_ptr->bounds_left) {
      return;
    }
    if (_DAT_01c43540 < this_ptr->bounds_top) {
      return;
    }
    if (this_ptr->bounds_right <= _DAT_01c4353c) {
      return;
    }
    if (this_ptr->bounds_bottom <= _DAT_01c43540) {
      return;
    }
    _DAT_01c3f5e0 = _DAT_01c4353c;
    _DAT_01c3f5e4 = _DAT_01c43540;
    _DAT_01c3f5e8 = this_ptr->scroll_position;
    _DAT_01c3f5d0 = this_ptr;
    _DAT_01c3f5ec = this_ptr->thumb_start;
    iVar1 = _DAT_01c43540;
    if (this_ptr->orientation != 0) {
      iVar1 = _DAT_01c4353c;
    }
    if (iVar1 < this_ptr->track_start) {
      _DAT_01c3f5d4 = 1;
      this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->scroll_increment;
    }
    else if (iVar1 < this_ptr->track_end) {
      if (iVar1 < this_ptr->thumb_start) {
        _DAT_01c3f5d4 = 3;
        this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->page_size;
      }
      else if (iVar1 < this_ptr->thumb_end) {
        _DAT_01c3f5d4 = 0;
      }
      else {
        _DAT_01c3f5d4 = 4;
        this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->page_size;
      }
    }
    else {
      _DAT_01c3f5d4 = 2;
      this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->scroll_increment;
    }
    _DAT_01c3f5d8 = wincore_winrun_cpp_getTime_FUN_005b2420();
    _DAT_01c3f5dc = 0x48000;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_0049cf60(this_ptr);
    return;
  }
  if ((DAT_01c43544 & 1) == 0) {
    _DAT_01c3f5d0 = (CEdScrollBar *)0x0;
    return;
  }
  if (_DAT_01c3f5d4 != 0) {
    iVar1 = wincore_winrun_cpp_getTime_FUN_005b2420();
    _DAT_01c3f5d8 = iVar1 - _DAT_01c3f5d8;
    if (_DAT_01c3f5d8 < 0) {
      _DAT_01c3f5d8 = 0;
    }
    _DAT_01c3f5dc = _DAT_01c3f5dc - _DAT_01c3f5d8;
    _DAT_01c3f5d8 = iVar1;
    if (_DAT_01c3f5dc < 1) {
      _DAT_01c3f5dc = 0x9999;
      iVar1 = _DAT_01c43540;
      if (this_ptr->orientation != 0) {
        iVar1 = _DAT_01c4353c;
      }
      switch(_DAT_01c3f5d4) {
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
          DAT_01c43544 = DAT_01c43544 & 0xfe;
          _DAT_01c3f5d0 = (CEdScrollBar *)0x0;
        }
        break;
      case 4:
        if (this_ptr->thumb_end < iVar1) {
          this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->page_size;
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
  if (this_ptr->orientation == 0) {
    iVar3 = (this_ptr->track_start + _DAT_01c3f5e4) - _DAT_01c3f5ec;
    iVar1 = _DAT_01c43540;
    if (_DAT_01c43540 < iVar3) {
      iVar1 = iVar3;
    }
    iVar3 = (this_ptr->track_end + _DAT_01c3f5e4) -
            ((_DAT_01c3f5ec + this_ptr->thumb_end) - this_ptr->thumb_start);
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    iVar2 = iVar1 - _DAT_01c3f5e4;
    iVar3 = _DAT_01c3f5e0;
  }
  else {
    iVar1 = (this_ptr->track_start + _DAT_01c3f5e0) - _DAT_01c3f5ec;
    iVar3 = _DAT_01c4353c;
    if (_DAT_01c4353c < iVar1) {
      iVar3 = iVar1;
    }
    iVar1 = (this_ptr->track_end + _DAT_01c3f5e0) -
            ((this_ptr->thumb_end + _DAT_01c3f5ec) - this_ptr->thumb_start);
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar2 = iVar3 - _DAT_01c3f5e0;
    iVar1 = _DAT_01c3f5e4;
  }
  iVar2 = iVar2 + _DAT_01c3f5ec;
  wincore_winrun_cpp_setCursorPosition_FUN_005b2750(iVar3,iVar1);
  if ((this_ptr->page_size < this_ptr->item_count) && (0 < this_ptr->item_count)) {
    if (iVar2 == _DAT_01c3f5ec) {
      this_ptr->scroll_position = _DAT_01c3f5e8;
      goto LAB_0049d023;
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
      goto LAB_0049d023;
    }
  }
  this_ptr->scroll_position = 0;
LAB_0049d023:
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_0049d320(this_ptr);
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_0049ce40(this_ptr);
  return;
}
