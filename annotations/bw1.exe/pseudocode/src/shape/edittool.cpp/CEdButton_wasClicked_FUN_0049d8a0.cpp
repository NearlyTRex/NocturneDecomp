// Name: shape_edittool.cpp_CEdButton_wasClicked_FUN_0049d8a0
// Address: 0049d8a0
// Address Range: [[0049d8a0, 0049d942]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdButton_wasClicked_FUN_0049d8a0(CEdButton *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdButton_wasClicked_FUN_0049d8a0(CEdButton *this_ptr)

{
  byte uVar1;
  int iVar2;
  
  uVar1 = g_MouseButtonFlags.bytes[0];
  if ((((this_ptr->enabled == 0) && (this_ptr->left <= g_MouseX)) && (this_ptr->top <= g_MouseY)) &&
     ((g_MouseX < this_ptr->right && (g_MouseY < this_ptr->bottom)))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if ((CEdButton *)g_ActiveControl == this_ptr) {
    this_ptr->button_state = iVar2;
    if (((uVar1 & 1) == 0) &&
       (g_ActiveControl = (byte *)((uint)g_ActiveControl ^ (uint)this_ptr), iVar2 != 0)) {
      this_ptr->button_state = 0;
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
    return iVar2;
  }
  if (((g_ActiveControl == (byte *)0x0) && ((g_MouseButtonFlags.bytes[0] & 1) != 0)) &&
     (iVar2 != 0)) {
    this_ptr->button_state = 1;
    g_ActiveControl = (byte *)this_ptr;
    return 0;
  }
  return 0;
}
