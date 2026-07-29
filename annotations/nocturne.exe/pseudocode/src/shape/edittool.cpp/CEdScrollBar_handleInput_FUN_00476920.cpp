// Name: shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00476920
// Address: 00476920
// Address Range: [[00476920, 00476cdb]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00476920(CEdScrollBar *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00476920(CEdScrollBar *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_00476ce0(this_ptr);
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_00476800(this_ptr);
  if (this_ptr != _DAT_01bcde24) {
    if (_DAT_01bcde24 != (CEdScrollBar *)0x0) {
      return;
    }
    if ((DAT_01bd1d94 & 1) == 0) {
      return;
    }
    if (_DAT_01bd1d8c < this_ptr->bounds_left) {
      return;
    }
    if (_DAT_01bd1d90 < this_ptr->bounds_top) {
      return;
    }
    if (this_ptr->bounds_right <= _DAT_01bd1d8c) {
      return;
    }
    if (this_ptr->bounds_bottom <= _DAT_01bd1d90) {
      return;
    }
    _DAT_01bcde34 = _DAT_01bd1d8c;
    _DAT_01bcde38 = _DAT_01bd1d90;
    _DAT_01bcde3c = this_ptr->scroll_position;
    _DAT_01bcde24 = this_ptr;
    _DAT_01bcde40 = this_ptr->thumb_start;
    iVar1 = _DAT_01bd1d90;
    if (this_ptr->orientation != 0) {
      iVar1 = _DAT_01bd1d8c;
    }
    if (iVar1 < this_ptr->track_start) {
      _DAT_01bcde28 = 1;
      this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->scroll_increment;
    }
    else if (iVar1 < this_ptr->track_end) {
      if (iVar1 < this_ptr->thumb_start) {
        _DAT_01bcde28 = 3;
        this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->max_value;
      }
      else if (iVar1 < this_ptr->thumb_end) {
        _DAT_01bcde28 = 0;
      }
      else {
        _DAT_01bcde28 = 4;
        this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->max_value;
      }
    }
    else {
      _DAT_01bcde28 = 2;
      this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->scroll_increment;
    }
    _DAT_01bcde2c = wincore_winrun_cpp_getTime_FUN_00558a30();
    _DAT_01bcde30 = 0x48000;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00476920(this_ptr);
    return;
  }
  if ((DAT_01bd1d94 & 1) == 0) {
    _DAT_01bcde24 = (CEdScrollBar *)0x0;
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
      if (this_ptr->orientation != 0) {
        iVar1 = _DAT_01bd1d8c;
      }
      switch(_DAT_01bcde28) {
      case 1:
        this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->scroll_increment;
        break;
      case 2:
        this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->scroll_increment;
        break;
      case 3:
        if (iVar1 < this_ptr->thumb_start) {
          this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->max_value;
        }
        else {
          DAT_01bd1d94 = DAT_01bd1d94 & 0xfe;
          _DAT_01bcde24 = (CEdScrollBar *)0x0;
        }
        break;
      case 4:
        if (this_ptr->thumb_end < iVar1) {
          this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->max_value;
        }
        else {
          DAT_01bd1d94 = DAT_01bd1d94 & 0xfe;
          _DAT_01bcde24 = (CEdScrollBar *)0x0;
        }
      }
    }
    wincore_winrun_cpp_setCursorPosition_FUN_00558d60(_DAT_01bcde34,_DAT_01bcde38);
    goto LAB_004769e3;
  }
  if (this_ptr->orientation == 0) {
    iVar3 = (this_ptr->track_start + _DAT_01bcde38) - _DAT_01bcde40;
    iVar1 = _DAT_01bd1d90;
    if (_DAT_01bd1d90 < iVar3) {
      iVar1 = iVar3;
    }
    iVar3 = (this_ptr->track_end + _DAT_01bcde38) -
            ((_DAT_01bcde40 + this_ptr->thumb_end) - this_ptr->thumb_start);
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    iVar2 = iVar1 - _DAT_01bcde38;
    iVar3 = _DAT_01bcde34;
  }
  else {
    iVar1 = (this_ptr->track_start + _DAT_01bcde34) - _DAT_01bcde40;
    iVar3 = _DAT_01bd1d8c;
    if (_DAT_01bd1d8c < iVar1) {
      iVar3 = iVar1;
    }
    iVar1 = (this_ptr->track_end + _DAT_01bcde34) -
            ((this_ptr->thumb_end + _DAT_01bcde40) - this_ptr->thumb_start);
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar2 = iVar3 - _DAT_01bcde34;
    iVar1 = _DAT_01bcde38;
  }
  iVar2 = iVar2 + _DAT_01bcde40;
  wincore_winrun_cpp_setCursorPosition_FUN_00558d60(iVar3,iVar1);
  if ((this_ptr->max_value < this_ptr->current_value) && (0 < this_ptr->current_value)) {
    if (iVar2 == _DAT_01bcde40) {
      this_ptr->scroll_position = _DAT_01bcde3c;
      goto LAB_004769e3;
    }
    if (this_ptr->track_start < iVar2) {
      iVar1 = this_ptr->thumb_end - this_ptr->thumb_start;
      if (iVar2 + iVar1 < this_ptr->track_end) {
        this_ptr->scroll_position =
             ((iVar2 - this_ptr->track_start) * (this_ptr->current_value - this_ptr->max_value)) /
             ((this_ptr->track_end - this_ptr->track_start) - iVar1);
      }
      else {
        this_ptr->scroll_position = this_ptr->current_value - this_ptr->max_value;
      }
      goto LAB_004769e3;
    }
  }
  this_ptr->scroll_position = 0;
LAB_004769e3:
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_00476ce0(this_ptr);
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_00476800(this_ptr);
  return;
}
