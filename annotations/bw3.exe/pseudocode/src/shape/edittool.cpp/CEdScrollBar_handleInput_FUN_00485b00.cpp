// Name: shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00485b00
// Address: 00485b00
// Address Range: [[00485b00, 00485ebb]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00485b00(CEdScrollBar *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00485b00(CEdScrollBar *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_00485ec0(this_ptr);
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004859e0(this_ptr);
  if (this_ptr != (CEdScrollBar *)g_PTR_01c5bb78) {
    if (g_PTR_01c5bb78 != (byte *)0x0) {
      return;
    }
    if ((g_BIT_INTEGER32_01c5fae4.bytes[0] & 1) == 0) {
      return;
    }
    if (g_INT_01c5fadc < this_ptr->bounds_left) {
      return;
    }
    if (g_INT_01c5fae0 < this_ptr->bounds_top) {
      return;
    }
    if (this_ptr->bounds_right <= g_INT_01c5fadc) {
      return;
    }
    if (this_ptr->bounds_bottom <= g_INT_01c5fae0) {
      return;
    }
    g_INT_01c5bb88 = g_INT_01c5fadc;
    g_INT_01c5bb8c = g_INT_01c5fae0;
    g_INT_01c5bb90 = this_ptr->scroll_position;
    g_PTR_01c5bb78 = (byte *)this_ptr;
    g_INT_01c5bb94 = this_ptr->thumb_start;
    iVar1 = g_INT_01c5fae0;
    if (this_ptr->orientation != 0) {
      iVar1 = g_INT_01c5fadc;
    }
    if (iVar1 < this_ptr->track_start) {
      g_INT_01c5bb7c = 1;
      this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->scroll_increment;
    }
    else if (iVar1 < this_ptr->track_end) {
      if (iVar1 < this_ptr->thumb_start) {
        g_INT_01c5bb7c = 3;
        this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->page_size;
      }
      else if (iVar1 < this_ptr->thumb_end) {
        g_INT_01c5bb7c = 0;
      }
      else {
        g_INT_01c5bb7c = 4;
        this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->page_size;
      }
    }
    else {
      g_INT_01c5bb7c = 2;
      this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->scroll_increment;
    }
    g_INT_01c5bb80 = wincore_winrun_cpp_getTime_FUN_005806a0();
    g_INT_01c5bb84 = 0x48000;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00485b00(this_ptr);
    return;
  }
  if ((g_BIT_INTEGER32_01c5fae4.bytes[0] & 1) == 0) {
    g_PTR_01c5bb78 = (byte *)0x0;
    return;
  }
  if (g_INT_01c5bb7c != 0) {
    iVar1 = wincore_winrun_cpp_getTime_FUN_005806a0();
    iVar3 = iVar1 - g_INT_01c5bb80;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    g_INT_01c5bb84 = g_INT_01c5bb84 - iVar3;
    g_INT_01c5bb80 = iVar1;
    if (g_INT_01c5bb84 < 1) {
      g_INT_01c5bb84 = 0x9999;
      iVar1 = g_INT_01c5fae0;
      if (this_ptr->orientation != 0) {
        iVar1 = g_INT_01c5fadc;
      }
      switch(g_INT_01c5bb7c) {
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
          g_BIT_INTEGER32_01c5fae4.bytes[0] = g_BIT_INTEGER32_01c5fae4.bytes[0] & 0xfe;
          g_PTR_01c5bb78 = (byte *)0x0;
        }
        break;
      case 4:
        if (this_ptr->thumb_end < iVar1) {
          this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->page_size;
        }
        else {
          g_BIT_INTEGER32_01c5fae4.bytes[0] = g_BIT_INTEGER32_01c5fae4.bytes[0] & 0xfe;
          g_PTR_01c5bb78 = (byte *)0x0;
        }
      }
    }
    wincore_winrun_cpp_setCursorPosition_FUN_005809d0(g_INT_01c5bb88,g_INT_01c5bb8c);
    goto LAB_00485bc3;
  }
  if (this_ptr->orientation == 0) {
    iVar3 = (this_ptr->track_start + g_INT_01c5bb8c) - g_INT_01c5bb94;
    iVar1 = g_INT_01c5fae0;
    if (g_INT_01c5fae0 < iVar3) {
      iVar1 = iVar3;
    }
    iVar3 = (this_ptr->track_end + g_INT_01c5bb8c) -
            ((g_INT_01c5bb94 + this_ptr->thumb_end) - this_ptr->thumb_start);
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    iVar2 = iVar1 - g_INT_01c5bb8c;
    iVar3 = g_INT_01c5bb88;
  }
  else {
    iVar1 = (this_ptr->track_start + g_INT_01c5bb88) - g_INT_01c5bb94;
    iVar3 = g_INT_01c5fadc;
    if (g_INT_01c5fadc < iVar1) {
      iVar3 = iVar1;
    }
    iVar1 = (this_ptr->track_end + g_INT_01c5bb88) -
            ((this_ptr->thumb_end + g_INT_01c5bb94) - this_ptr->thumb_start);
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar2 = iVar3 - g_INT_01c5bb88;
    iVar1 = g_INT_01c5bb8c;
  }
  iVar2 = iVar2 + g_INT_01c5bb94;
  wincore_winrun_cpp_setCursorPosition_FUN_005809d0(iVar3,iVar1);
  if ((this_ptr->page_size < this_ptr->item_count) && (0 < this_ptr->item_count)) {
    if (iVar2 == g_INT_01c5bb94) {
      this_ptr->scroll_position = g_INT_01c5bb90;
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
