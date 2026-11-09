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
  if ((((*(int *)this_ptr == 0) && (*(int *)&this_ptr->field_0x8 <= _DAT_01c2a37c)) &&
      (*(int *)&this_ptr->field_0xc <= _DAT_01c2a380)) &&
     ((_DAT_01c2a37c < *(int *)&this_ptr->field_0x10 &&
      (_DAT_01c2a380 < *(int *)&this_ptr->field_0x14)))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (_DAT_01c26410 == this_ptr) {
    *(int *)&this_ptr->field_0x18 = iVar2;
    if (((bVar1 & 1) == 0) &&
       (_DAT_01c26410 = (CEdButton *)((uint)_DAT_01c26410 ^ (uint)this_ptr), iVar2 != 0)) {
      *(uint *)&this_ptr->field_0x18 = 0;
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
    return iVar2;
  }
  if (((_DAT_01c26410 == (CEdButton *)0x0) && ((DAT_01c2a384 & 1) != 0)) && (iVar2 != 0)) {
    *(uint *)&this_ptr->field_0x18 = 1;
    _DAT_01c26410 = this_ptr;
    return 0;
  }
  return 0;
}
