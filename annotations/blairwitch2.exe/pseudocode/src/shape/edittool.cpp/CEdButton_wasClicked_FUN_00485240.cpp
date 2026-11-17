// Name: shape_edittool.cpp_CEdButton_wasClicked_FUN_00485240
// Address: 00485240
// Address Range: [[00485240, 004852e2]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdButton_wasClicked_FUN_00485240(CEdButton *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdButton_wasClicked_FUN_00485240(CEdButton *this_ptr)

{
  byte uVar1;
  int iVar2;
  
  uVar1 = g_BIT_INTEGER32_01c2a384.bytes[0];
  if ((((this_ptr->enabled == 0) && (this_ptr->left <= g_INT_01c2a37c)) &&
      (this_ptr->top <= g_INT_01c2a380)) &&
     ((g_INT_01c2a37c < this_ptr->right && (g_INT_01c2a380 < this_ptr->bottom)))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if ((CEdButton *)g_PTR_01c26410 == this_ptr) {
    this_ptr->button_state = iVar2;
    if (((uVar1 & 1) == 0) &&
       (g_PTR_01c26410 = (byte *)((uint)g_PTR_01c26410 ^ (uint)this_ptr), iVar2 != 0)) {
      this_ptr->button_state = 0;
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
    return iVar2;
  }
  if (((g_PTR_01c26410 == (byte *)0x0) && ((g_BIT_INTEGER32_01c2a384.bytes[0] & 1) != 0)) &&
     (iVar2 != 0)) {
    this_ptr->button_state = 1;
    g_PTR_01c26410 = (byte *)this_ptr;
    return 0;
  }
  return 0;
}
