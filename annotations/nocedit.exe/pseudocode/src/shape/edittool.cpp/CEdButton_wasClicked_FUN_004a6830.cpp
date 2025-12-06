// Name: shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
// Address: 004a6830
// Address Range: [[004a6830, 004a68d2]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830(CEdButton * this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(CEdButton *this_ptr)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = (byte)g_MouseButtonFlags;
  if ((((this_ptr->enabled == 0) && (this_ptr->left <= g_MouseX)) && (this_ptr->top <= g_MouseY)) &&
     ((g_MouseX < this_ptr->right && (g_MouseY < this_ptr->bottom)))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (g_ActiveButton == this_ptr) {
    this_ptr->button_state = iVar2;
    if (((bVar1 & 1) == 0) &&
       (g_ActiveButton = (CEdButton *)((uint)g_ActiveButton ^ (uint)this_ptr), iVar2 != 0)) {
      this_ptr->button_state = 0;
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
    return iVar2;
  }
  if (((g_ActiveButton == (CEdButton *)0x0) && (((byte)g_MouseButtonFlags & 1) != 0)) &&
     (iVar2 != 0)) {
    this_ptr->button_state = 1;
    g_ActiveButton = this_ptr;
    return 0;
  }
  return 0;
}
