// Name: shape_edittool.cpp_CEdScrollBar_handleInput_FUN_0049cf60
// Address: 0049cf60
// Address Range: [[0049cf60, 0049d31b]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_handleInput_FUN_0049cf60(CEdScrollBar *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_handleInput_FUN_0049cf60(CEdScrollBar *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_0049d320(this_ptr);
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_0049ce40(this_ptr);
  if (this_ptr != (CEdScrollBar *)g_PTR_01c3f5d0) {
    if (g_PTR_01c3f5d0 != (byte *)0x0) {
      return;
    }
    if ((g_BIT_INTEGER32_01c43544.bytes[0] & 1) == 0) {
      return;
    }
    if (g_INT_01c4353c < this_ptr->bounds_left) {
      return;
    }
    if (g_INT_01c43540 < this_ptr->bounds_top) {
      return;
    }
    if (this_ptr->bounds_right <= g_INT_01c4353c) {
      return;
    }
    if (this_ptr->bounds_bottom <= g_INT_01c43540) {
      return;
    }
    g_INT_01c3f5e0 = g_INT_01c4353c;
    g_INT_01c3f5e4 = g_INT_01c43540;
    g_INT_01c3f5e8 = this_ptr->scroll_position;
    g_PTR_01c3f5d0 = (byte *)this_ptr;
    g_INT_01c3f5ec = this_ptr->thumb_start;
    iVar1 = g_INT_01c43540;
    if (this_ptr->orientation != 0) {
      iVar1 = g_INT_01c4353c;
    }
    if (iVar1 < this_ptr->track_start) {
      g_INT_01c3f5d4 = 1;
      this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->scroll_increment;
    }
    else if (iVar1 < this_ptr->track_end) {
      if (iVar1 < this_ptr->thumb_start) {
        g_INT_01c3f5d4 = 3;
        this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->page_size;
      }
      else if (iVar1 < this_ptr->thumb_end) {
        g_INT_01c3f5d4 = 0;
      }
      else {
        g_INT_01c3f5d4 = 4;
        this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->page_size;
      }
    }
    else {
      g_INT_01c3f5d4 = 2;
      this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->scroll_increment;
    }
    g_INT_01c3f5d8 = wincore_winrun_cpp_getTime_FUN_005b2420();
    g_INT_01c3f5dc = 0x48000;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_0049cf60(this_ptr);
    return;
  }
  if ((g_BIT_INTEGER32_01c43544.bytes[0] & 1) == 0) {
    g_PTR_01c3f5d0 = (byte *)0x0;
    return;
  }
  if (g_INT_01c3f5d4 != 0) {
    iVar1 = wincore_winrun_cpp_getTime_FUN_005b2420();
    iVar3 = iVar1 - g_INT_01c3f5d8;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    g_INT_01c3f5dc = g_INT_01c3f5dc - iVar3;
    g_INT_01c3f5d8 = iVar1;
    if (g_INT_01c3f5dc < 1) {
      g_INT_01c3f5dc = 0x9999;
      iVar1 = g_INT_01c43540;
      if (this_ptr->orientation != 0) {
        iVar1 = g_INT_01c4353c;
      }
      switch(g_INT_01c3f5d4) {
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
          g_BIT_INTEGER32_01c43544.bytes[0] = g_BIT_INTEGER32_01c43544.bytes[0] & 0xfe;
          g_PTR_01c3f5d0 = (byte *)0x0;
        }
        break;
      case 4:
        if (this_ptr->thumb_end < iVar1) {
          this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->page_size;
        }
        else {
          g_BIT_INTEGER32_01c43544.bytes[0] = g_BIT_INTEGER32_01c43544.bytes[0] & 0xfe;
          g_PTR_01c3f5d0 = (byte *)0x0;
        }
      }
    }
    wincore_winrun_cpp_setCursorPosition_FUN_005b2750(g_INT_01c3f5e0,g_INT_01c3f5e4);
    goto LAB_0049d023;
  }
  if (this_ptr->orientation == 0) {
    iVar3 = (this_ptr->track_start + g_INT_01c3f5e4) - g_INT_01c3f5ec;
    iVar1 = g_INT_01c43540;
    if (g_INT_01c43540 < iVar3) {
      iVar1 = iVar3;
    }
    iVar3 = (this_ptr->track_end + g_INT_01c3f5e4) -
            ((g_INT_01c3f5ec + this_ptr->thumb_end) - this_ptr->thumb_start);
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    iVar2 = iVar1 - g_INT_01c3f5e4;
    iVar3 = g_INT_01c3f5e0;
  }
  else {
    iVar1 = (this_ptr->track_start + g_INT_01c3f5e0) - g_INT_01c3f5ec;
    iVar3 = g_INT_01c4353c;
    if (g_INT_01c4353c < iVar1) {
      iVar3 = iVar1;
    }
    iVar1 = (this_ptr->track_end + g_INT_01c3f5e0) -
            ((this_ptr->thumb_end + g_INT_01c3f5ec) - this_ptr->thumb_start);
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar2 = iVar3 - g_INT_01c3f5e0;
    iVar1 = g_INT_01c3f5e4;
  }
  iVar2 = iVar2 + g_INT_01c3f5ec;
  wincore_winrun_cpp_setCursorPosition_FUN_005b2750(iVar3,iVar1);
  if ((this_ptr->page_size < this_ptr->item_count) && (0 < this_ptr->item_count)) {
    if (iVar2 == g_INT_01c3f5ec) {
      this_ptr->scroll_position = g_INT_01c3f5e8;
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
