// Name: shape_edittool.cpp_CEdButton_wasClicked_FUN_0049d8a0
// Address: 0049d8a0
// Address Range: [[0049d8a0, 0049d942]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdButton_wasClicked_FUN_0049d8a0(CEdButton *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_CEdButton_wasClicked_FUN_0049d8a0(CEdButton *this_ptr)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = DAT_01c43544;
  if ((((this_ptr->enabled == 0) && (this_ptr->left <= _DAT_01c4353c)) &&
      (this_ptr->top <= _DAT_01c43540)) &&
     ((_DAT_01c4353c < this_ptr->right && (_DAT_01c43540 < this_ptr->bottom)))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (_DAT_01c3f5d0 == this_ptr) {
    this_ptr->button_state = iVar2;
    if (((bVar1 & 1) == 0) &&
       (_DAT_01c3f5d0 = (CEdButton *)((uint)_DAT_01c3f5d0 ^ (uint)this_ptr), iVar2 != 0)) {
      this_ptr->button_state = 0;
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
    return iVar2;
  }
  if (((_DAT_01c3f5d0 == (CEdButton *)0x0) && ((DAT_01c43544 & 1) != 0)) && (iVar2 != 0)) {
    this_ptr->button_state = 1;
    _DAT_01c3f5d0 = this_ptr;
    return 0;
  }
  return 0;
}
