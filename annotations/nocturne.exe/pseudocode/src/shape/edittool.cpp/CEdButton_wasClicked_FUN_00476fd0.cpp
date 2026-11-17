// Name: shape_edittool.cpp_CEdButton_wasClicked_FUN_00476fd0
// Address: 00476fd0
// Address Range: [[00476fd0, 00477072]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdButton_wasClicked_FUN_00476fd0(CEdButton *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdButton_wasClicked_FUN_00476fd0(CEdButton *this_ptr)

{
  byte uVar1;
  int iVar2;
  
  uVar1 = g_BIT_INTEGER32_01bd1d94.bytes[0];
  if ((((this_ptr->enabled == 0) && (this_ptr->shortcut_key <= g_INT_01bd1d8c)) &&
      (this_ptr->left <= g_INT_01bd1d90)) &&
     ((g_INT_01bd1d8c < this_ptr->top && (g_INT_01bd1d90 < this_ptr->right)))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if ((CEdButton *)g_PTR_01bcde24 == this_ptr) {
    this_ptr->bottom = iVar2;
    if (((uVar1 & 1) == 0) &&
       (g_PTR_01bcde24 = (byte *)((uint)g_PTR_01bcde24 ^ (uint)this_ptr), iVar2 != 0)) {
      this_ptr->bottom = 0;
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
    return iVar2;
  }
  if (((g_PTR_01bcde24 == (byte *)0x0) && ((g_BIT_INTEGER32_01bd1d94.bytes[0] & 1) != 0)) &&
     (iVar2 != 0)) {
    this_ptr->bottom = 1;
    g_PTR_01bcde24 = (byte *)this_ptr;
    return 0;
  }
  return 0;
}
