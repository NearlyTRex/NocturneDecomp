// Name: shape_edittool.cpp_FUN_00483970
// Address: 00483970
// Address Range: [[00483970, 00483bf8]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_FUN_00483970(CPickList *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_FUN_00483970(CPickList *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  shape_edittool_cpp_FUN_004849f0(this_ptr);
  if (*(int *)&this_ptr->field_0x188 != 0) {
    iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00484ca0
                      (this_ptr,*(int *)&this_ptr->field_0x194);
    if (iVar1 != 0) {
      return *(int *)&this_ptr->field_0x194;
    }
    *(uint *)&this_ptr->field_0x188 = 0;
  }
  if (_DAT_02d21b80 != 0) {
    return -1;
  }
  iVar1 = (**(code **)(*(int *)&this_ptr->field_0xc + 0x18))(this_ptr);
  if (iVar1 < 0) {
    return -1;
  }
  shape_edittool_cpp_FUN_004849f0(this_ptr);
  if (*(int *)&this_ptr->field_0x58 != 0) {
    return -2;
  }
  if (*(int *)&this_ptr->field_0x1f0 == 1) {
    *(uint *)&this_ptr->field_0x1bc = *(uint *)&this_ptr->field_0x198;
    *(uint *)&this_ptr->field_0x1c0 = *(uint *)this_ptr;
    *(uint *)&this_ptr->field_0x1c4 = *(uint *)&this_ptr->field_0x1a0;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00485b00((CEdScrollBar *)&this_ptr->field_0x1bc)
    ;
    iVar1 = *(int *)&this_ptr->field_0x1bc;
  }
  else {
    if (*(int *)&this_ptr->field_0x1f0 != 2) goto LAB_00483a37;
    *(int *)&this_ptr->field_0x1bc = *(int *)&this_ptr->field_0x198 / *(int *)&this_ptr->field_0x1a0
    ;
    *(int *)&this_ptr->field_0x1c0 =
         (*(int *)this_ptr + *(int *)&this_ptr->field_0x1a0 + -1) / *(int *)&this_ptr->field_0x1a0;
    *(uint *)&this_ptr->field_0x1c4 = *(uint *)&this_ptr->field_0x1a8;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00485b00((CEdScrollBar *)&this_ptr->field_0x1bc)
    ;
    iVar1 = *(int *)&this_ptr->field_0x1bc * *(int *)&this_ptr->field_0x1a0;
  }
  *(int *)&this_ptr->field_0x198 = iVar1;
LAB_00483a37:
  iVar1 = *(int *)&this_ptr->field_0x1a0 * *(int *)&this_ptr->field_0x1a8 +
          *(int *)&this_ptr->field_0x198;
  if (iVar1 <= *(int *)&this_ptr->field_0x194) {
    *(int *)&this_ptr->field_0x194 = iVar1 + -1;
  }
  if (*(int *)&this_ptr->field_0x194 < *(int *)&this_ptr->field_0x198) {
    *(int *)&this_ptr->field_0x194 = *(int *)&this_ptr->field_0x198;
  }
  if (this_ptr->field_0x5c != '\0') {
    iVar1 = shape_edittool_cpp_CEdButton_wasClicked_FUN_00486440
                      ((CEdButton *)&this_ptr->field_0x1f4);
    if (iVar1 != 0) {
      *(uint *)&this_ptr->field_0x188 = 1;
    }
    if (&this_ptr->field_0x1f4 == _DAT_01c5bb78) {
      *(uint *)&this_ptr->field_0x3bc = 0;
    }
  }
  if (this_ptr->field_0xc0 != '\0') {
    iVar1 = shape_edittool_cpp_CEdButton_wasClicked_FUN_00486440
                      ((CEdButton *)&this_ptr->field_0x2d8);
    if (iVar1 != 0) {
      return -1;
    }
    if (&this_ptr->field_0x2d8 == _DAT_01c5bb78) {
      *(uint *)&this_ptr->field_0x3bc = 1;
    }
  }
  iVar1 = _DAT_01c5bb74;
  if ((((DAT_01c5fae4 & 1) != 0) && (_DAT_01c5bb78 == (byte *)0x0)) &&
     (iVar1 = shape_edittool_cpp_FUN_00484b50(this_ptr,_DAT_01c5fadc,_DAT_01c5fae0), -1 < iVar1)) {
    *(uint *)&this_ptr->field_0x3bc = 0xffffffff;
    DAT_01c5fae4 = DAT_01c5fae4 & 0xfe;
    *(int *)&this_ptr->field_0x194 = iVar1;
    iVar2 = wincore_winrun_cpp_FUN_005806a0();
    iVar3 = iVar2 - _DAT_01c5bb70;
    _DAT_01c5bb70 = iVar2;
    if (((0 < iVar3) && ((double)iVar3 < _DAT_005bd74d)) &&
       (_DAT_01c5bb74 == *(int *)&this_ptr->field_0x194)) {
      *(uint *)&this_ptr->field_0x188 = 1;
    }
  }
  _DAT_01c5bb74 = iVar1;
  return -2;
}
