// Name: shape_edittool.cpp_CEdCheck_handleInput_FUN_004774b0
// Address: 004774b0
// Address Range: [[004774b0, 004775a3]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdCheck_handleInput_FUN_004774b0(CEdCheck *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdCheck_handleInput_FUN_004774b0(CEdCheck *this_ptr)

{
  byte uVar1;
  int iVar2;
  
  uVar1 = g_BIT_INTEGER32_01bd1d94.bytes[0];
  if ((((this_ptr->interactive_flag == 0) && (this_ptr->x_position <= g_INT_01bd1d8c)) &&
      (this_ptr->y_position <= g_INT_01bd1d90)) &&
     ((g_INT_01bd1d8c < this_ptr->total_width && (g_INT_01bd1d90 < this_ptr->right_boundary)))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if ((CEdCheck *)g_PTR_01bcde24 == this_ptr) {
    this_ptr->border_style_flag = iVar2;
    if (((uVar1 & 1) == 0) &&
       (g_PTR_01bcde24 = (byte *)((uint)g_PTR_01bcde24 ^ (uint)this_ptr), iVar2 != 0)) {
      this_ptr->border_style_flag = 0;
      if (this_ptr->checkbox_mode == CHECKBOX_MODE_TRI_STATE) {
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
  if (((g_PTR_01bcde24 == (byte *)0x0) && ((g_BIT_INTEGER32_01bd1d94.bytes[0] & 1) != 0)) &&
     (iVar2 != 0)) {
    this_ptr->border_style_flag = 1;
    g_PTR_01bcde24 = (byte *)this_ptr;
    return 0;
  }
  return 0;
}
