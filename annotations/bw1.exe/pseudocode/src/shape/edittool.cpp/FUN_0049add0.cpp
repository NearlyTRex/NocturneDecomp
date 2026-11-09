// Name: shape_edittool.cpp_FUN_0049add0
// Address: 0049add0
// Address Range: [[0049add0, 0049b058]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_FUN_0049add0(CPickList *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_FUN_0049add0(CPickList *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  shape_edittool_cpp_FUN_0049be50(this_ptr);
  if (*(int *)&this_ptr->field_0x188 != 0) {
    iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_0049c100
                      (this_ptr,*(int *)&this_ptr->field_0x194);
    if (iVar1 != 0) {
      return *(int *)&this_ptr->field_0x194;
    }
    *(uint *)&this_ptr->field_0x188 = 0;
  }
  if (_DAT_02c9be70 != 0) {
    return -1;
  }
  iVar1 = (**(code **)(*(int *)&this_ptr->field_0xc + 0x18))(this_ptr);
  if (iVar1 < 0) {
    return -1;
  }
  shape_edittool_cpp_FUN_0049be50(this_ptr);
  if (*(int *)&this_ptr->field_0x58 != 0) {
    return -2;
  }
  if (*(int *)&this_ptr->field_0x1f0 == 1) {
    *(uint *)&this_ptr->field_0x1bc = *(uint *)&this_ptr->field_0x198;
    *(uint *)&this_ptr->field_0x1c0 = *(uint *)this_ptr;
    *(uint *)&this_ptr->field_0x1c4 = *(uint *)&this_ptr->field_0x1a0;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_0049cf60((CEdScrollBar *)&this_ptr->field_0x1bc)
    ;
    iVar1 = *(int *)&this_ptr->field_0x1bc;
  }
  else {
    if (*(int *)&this_ptr->field_0x1f0 != 2) goto LAB_0049ae97;
    *(int *)&this_ptr->field_0x1bc = *(int *)&this_ptr->field_0x198 / *(int *)&this_ptr->field_0x1a0
    ;
    *(int *)&this_ptr->field_0x1c0 =
         (*(int *)this_ptr + *(int *)&this_ptr->field_0x1a0 + -1) / *(int *)&this_ptr->field_0x1a0;
    *(uint *)&this_ptr->field_0x1c4 = *(uint *)&this_ptr->field_0x1a8;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_0049cf60((CEdScrollBar *)&this_ptr->field_0x1bc)
    ;
    iVar1 = *(int *)&this_ptr->field_0x1bc * *(int *)&this_ptr->field_0x1a0;
  }
  *(int *)&this_ptr->field_0x198 = iVar1;
LAB_0049ae97:
  iVar1 = *(int *)&this_ptr->field_0x1a0 * *(int *)&this_ptr->field_0x1a8 +
          *(int *)&this_ptr->field_0x198;
  if (iVar1 <= *(int *)&this_ptr->field_0x194) {
    *(int *)&this_ptr->field_0x194 = iVar1 + -1;
  }
  if (*(int *)&this_ptr->field_0x194 < *(int *)&this_ptr->field_0x198) {
    *(int *)&this_ptr->field_0x194 = *(int *)&this_ptr->field_0x198;
  }
  if (this_ptr->field_0x5c != '\0') {
    iVar1 = shape_edittool_cpp_CEdButton_wasClicked_FUN_0049d8a0
                      ((CEdButton *)&this_ptr->field_0x1f4);
    if (iVar1 != 0) {
      *(uint *)&this_ptr->field_0x188 = 1;
    }
    if (&this_ptr->field_0x1f4 == _DAT_01c3f5d0) {
      *(uint *)&this_ptr->field_0x3bc = 0;
    }
  }
  if (this_ptr->field_0xc0 != '\0') {
    iVar1 = shape_edittool_cpp_CEdButton_wasClicked_FUN_0049d8a0
                      ((CEdButton *)&this_ptr->field_0x2d8);
    if (iVar1 != 0) {
      return -1;
    }
    if (&this_ptr->field_0x2d8 == _DAT_01c3f5d0) {
      *(uint *)&this_ptr->field_0x3bc = 1;
    }
  }
  iVar1 = _DAT_01c3f5cc;
  if ((((DAT_01c43544 & 1) != 0) && (_DAT_01c3f5d0 == (byte *)0x0)) &&
     (iVar1 = shape_edittool_cpp_FUN_0049bfb0(this_ptr,_DAT_01c4353c,_DAT_01c43540), -1 < iVar1)) {
    *(uint *)&this_ptr->field_0x3bc = 0xffffffff;
    DAT_01c43544 = DAT_01c43544 & 0xfe;
    *(int *)&this_ptr->field_0x194 = iVar1;
    iVar2 = wincore_winrun_cpp_FUN_005b2420();
    iVar3 = iVar2 - _DAT_01c3f5c8;
    _DAT_01c3f5c8 = iVar2;
    if (((0 < iVar3) && ((double)iVar3 < _DAT_005dc690)) &&
       (_DAT_01c3f5cc == *(int *)&this_ptr->field_0x194)) {
      *(uint *)&this_ptr->field_0x188 = 1;
    }
  }
  _DAT_01c3f5cc = iVar1;
  return -2;
}
