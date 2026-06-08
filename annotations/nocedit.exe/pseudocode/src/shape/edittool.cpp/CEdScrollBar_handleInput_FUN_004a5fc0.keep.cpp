// Name: shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
// Address: 004a5fc0
// MANUAL RECONSTRUCTION
// Address Range: [[004a5fc0, 004a637b]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(CEdScrollBar *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(CEdScrollBar *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380(this_ptr);
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004a5ea0(this_ptr);
  if (this_ptr != g_ActiveControl) {
    if (g_ActiveControl != (void *)0x0) {
      return;
    }
    if ((g_MouseButtonFlags.bytes[0] & 1) == 0) {
      return;
    }
    if (g_MouseX < this_ptr->bounds_left) {
      return;
    }
    if (g_MouseY < this_ptr->bounds_top) {
      return;
    }
    if (this_ptr->bounds_right <= g_MouseX) {
      return;
    }
    if (this_ptr->bounds_bottom <= g_MouseY) {
      return;
    }
    g_DragStartMouseX = g_MouseX;
    g_DragStartMouseY = g_MouseY;
    g_DragStartScrollPos = this_ptr->scroll_position;
    g_ActiveControl = this_ptr;
    g_DragStartThumbPos = this_ptr->thumb_start;
    iVar1 = g_MouseY;
    if (this_ptr->orientation != 0) {
      iVar1 = g_MouseX;
    }
    if (iVar1 < this_ptr->track_start) {
      g_ScrollAction = 1;
      this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->scroll_increment;
    }
    else if (iVar1 < this_ptr->track_end) {
      if (iVar1 < this_ptr->thumb_start) {
        g_ScrollAction = 3;
        this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->max_value;
      }
      else if (iVar1 < this_ptr->thumb_end) {
        g_ScrollAction = 0;
      }
      else {
        g_ScrollAction = 4;
        this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->max_value;
      }
    }
    else {
      g_ScrollAction = 2;
      this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->scroll_increment;
    }
    g_ScrollTimer = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    g_ScrollDelay = 0x48000;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(this_ptr);
    return;
  }
  if ((g_MouseButtonFlags.bytes[0] & 1) == 0) {
    g_ActiveControl = (void *)0x0;
    return;
  }
  if (g_ScrollAction != 0) {
    iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    iVar3 = iVar1 - g_ScrollTimer;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    g_ScrollDelay = g_ScrollDelay - iVar3;
    g_ScrollTimer = iVar1;
    if (g_ScrollDelay < 1) {
      g_ScrollDelay = 0x9999;
      iVar1 = g_MouseY;
      if (this_ptr->orientation != 0) {
        iVar1 = g_MouseX;
      }
      switch(g_ScrollAction) {
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
          g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfe;
          g_ActiveControl = (void *)0x0;
        }
        break;
      case 4:
        if (this_ptr->thumb_end < iVar1) {
          this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->max_value;
        }
        else {
          g_MouseButtonFlags.bytes[0] = g_MouseButtonFlags.bytes[0] & 0xfe;
          g_ActiveControl = (void *)0x0;
        }
      }
    }
#if NOCTURNE_AUTHENTIC_UI_CURSOR_WARP
    wincore_winrun_cpp_setCursorPosition_FUN_005f30d0(g_DragStartMouseX,g_DragStartMouseY);
#endif
    goto LAB_004a6083;
  }
  if (this_ptr->orientation == 0) {
    iVar3 = (this_ptr->track_start + g_DragStartMouseY) - g_DragStartThumbPos;
    iVar1 = g_MouseY;
    if (g_MouseY < iVar3) {
      iVar1 = iVar3;
    }
    iVar3 = (this_ptr->track_end + g_DragStartMouseY) -
            ((g_DragStartThumbPos + this_ptr->thumb_end) - this_ptr->thumb_start);
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    iVar2 = iVar1 - g_DragStartMouseY;
    iVar3 = g_DragStartMouseX;
  }
  else {
    iVar1 = (this_ptr->track_start + g_DragStartMouseX) - g_DragStartThumbPos;
    iVar3 = g_MouseX;
    if (g_MouseX < iVar1) {
      iVar3 = iVar1;
    }
    iVar1 = (this_ptr->track_end + g_DragStartMouseX) -
            ((this_ptr->thumb_end + g_DragStartThumbPos) - this_ptr->thumb_start);
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar2 = iVar3 - g_DragStartMouseX;
    iVar1 = g_DragStartMouseY;
  }
  iVar2 = iVar2 + g_DragStartThumbPos;
#if NOCTURNE_AUTHENTIC_UI_CURSOR_WARP
  wincore_winrun_cpp_setCursorPosition_FUN_005f30d0(iVar3,iVar1);
#else
  (void)iVar3;
  (void)iVar1;
#endif
  if ((this_ptr->max_value < this_ptr->current_value) && (0 < this_ptr->current_value)) {
    if (iVar2 == g_DragStartThumbPos) {
      this_ptr->scroll_position = g_DragStartScrollPos;
      goto LAB_004a6083;
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
      goto LAB_004a6083;
    }
  }
  this_ptr->scroll_position = 0;
LAB_004a6083:
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380(this_ptr);
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004a5ea0(this_ptr);
  return;
}
