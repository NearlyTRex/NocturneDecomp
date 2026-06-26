// Name: shape_edittool.cpp_CEdCheck_handleInput_FUN_004a6d20
// Address: 004a6d20
// MANUAL RECONSTRUCTION
// Address Range: [[004a6d20, 004a6e13]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdCheck_handleInput_FUN_004a6d20(CEdCheck *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdCheck_handleInput_FUN_004a6d20(CEdCheck *this_ptr)

{
  byte uVar1;
  int iVar2;
  
  uVar1 = g_MouseButtonFlags.bytes[0];
  if ((((this_ptr->interactive_flag == 0) && (this_ptr->x_position <= g_MouseX)) &&
      (this_ptr->y_position <= g_MouseY)) &&
     ((g_MouseX < this_ptr->total_width && (g_MouseY < this_ptr->right_boundary)))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (g_ActiveControl == this_ptr) {
    this_ptr->border_style_flag = iVar2;
    if (((uVar1 & 1) == 0) &&
       (g_ActiveControl = (void *)((uintptr_t)g_ActiveControl ^ (uintptr_t)this_ptr), iVar2 != 0)) {
      this_ptr->border_style_flag = 0;
      if (this_ptr->checkbox_mode == 1) {
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
  if (((g_ActiveControl == (void *)0x0) && ((g_MouseButtonFlags.bytes[0] & 1) != 0)) && (iVar2 != 0)
     ) {
    this_ptr->border_style_flag = 1;
    g_ActiveControl = this_ptr;
    return 0;
  }
  return 0;
}
