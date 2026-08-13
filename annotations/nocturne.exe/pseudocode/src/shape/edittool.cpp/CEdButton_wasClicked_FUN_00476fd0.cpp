// Name: shape_edittool.cpp_CEdButton_wasClicked_FUN_00476fd0
// Address: 00476fd0
// Address Range: [[00476fd0, 00477072]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEdButton_wasClicked_FUN_00476fd0(CEdButton *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_CEdButton_wasClicked_FUN_00476fd0(CEdButton *this_ptr)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = DAT_01bd1d94;
  if ((((this_ptr->enabled == 0) && (this_ptr->shortcut_key <= _DAT_01bd1d8c)) &&
      (this_ptr->left <= _DAT_01bd1d90)) &&
     ((_DAT_01bd1d8c < this_ptr->top && (_DAT_01bd1d90 < this_ptr->right)))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (_DAT_01bcde24 == this_ptr) {
    this_ptr->bottom = iVar2;
    if (((bVar1 & 1) == 0) &&
       (_DAT_01bcde24 = (CEdButton *)((uint)_DAT_01bcde24 ^ (uint)this_ptr), iVar2 != 0)) {
      this_ptr->bottom = 0;
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
    return iVar2;
  }
  if (((_DAT_01bcde24 == (CEdButton *)0x0) && ((DAT_01bd1d94 & 1) != 0)) && (iVar2 != 0)) {
    this_ptr->bottom = 1;
    _DAT_01bcde24 = this_ptr;
    return 0;
  }
  return 0;
}
