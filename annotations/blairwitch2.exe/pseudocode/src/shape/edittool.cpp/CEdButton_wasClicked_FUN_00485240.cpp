// Name: shape_edittool.cpp_CEdButton_wasClicked_FUN_00485240
// Address: 00485240
// Address Range: [[00485240, 004852e2]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdButton_wasClicked_FUN_00485240(CEdButton *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_CEdButton_wasClicked_FUN_00485240(CEdButton *this_ptr)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = DAT_01c2a384;
  if ((((this_ptr->enabled == 0) && (this_ptr->left <= _DAT_01c2a37c)) &&
      (this_ptr->top <= _DAT_01c2a380)) &&
     ((_DAT_01c2a37c < this_ptr->right && (_DAT_01c2a380 < this_ptr->bottom)))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (_DAT_01c26410 == this_ptr) {
    this_ptr->button_state = iVar2;
    if (((bVar1 & 1) == 0) &&
       (_DAT_01c26410 = (CEdButton *)((uint)_DAT_01c26410 ^ (uint)this_ptr), iVar2 != 0)) {
      this_ptr->button_state = 0;
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
    return iVar2;
  }
  if (((_DAT_01c26410 == (CEdButton *)0x0) && ((DAT_01c2a384 & 1) != 0)) && (iVar2 != 0)) {
    this_ptr->button_state = 1;
    _DAT_01c26410 = this_ptr;
    return 0;
  }
  return 0;
}
