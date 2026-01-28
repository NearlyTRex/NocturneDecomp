// Name: shape_edittool.cpp_CEdCheck_handleInput_FUN_004a6d20
// Address: 004a6d20
// Address Range: [[004a6d20, 004a6e13]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdCheck_handleInput_FUN_004a6d20(CEdCheck *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdCheck_handleInput_FUN_004a6d20(CEdCheck *this_ptr)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = (byte)g_MouseButtonFlags;
  if ((((this_ptr->interactive_flag == 0) && (this_ptr->x_position <= g_MouseX)) &&
      (this_ptr->y_position <= g_MouseY)) &&
     ((g_MouseX < this_ptr->total_width && (g_MouseY < this_ptr->right_boundary)))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if ((CEdCheck *)g_ActiveButton == this_ptr) {
    this_ptr->border_style_flag = iVar2;
    if (((bVar1 & 1) == 0) &&
       (g_ActiveButton = (CEdButton *)((uint)g_ActiveButton ^ (uint)this_ptr), iVar2 != 0)) {
      this_ptr->border_style_flag = 0;
      if (this_ptr->vtable == (void **)0x1) {
        iVar2 = this_ptr->checked_state + 1;
        this_ptr->checked_state = iVar2;
        if (2 < iVar2) {
          this_ptr->checked_state = 0;
          return 1;
        }
      }
      else {
        this_ptr->checked_state = (uint)(this_ptr->checked_state == 0);
      }
      return 1;
    }
    return 0;
  }
  if (((g_ActiveButton == (CEdButton *)0x0) && (((byte)g_MouseButtonFlags & 1) != 0)) &&
     (iVar2 != 0)) {
    this_ptr->border_style_flag = 1;
    g_ActiveButton = (CEdButton *)this_ptr;
    return 0;
  }
  return 0;
}
