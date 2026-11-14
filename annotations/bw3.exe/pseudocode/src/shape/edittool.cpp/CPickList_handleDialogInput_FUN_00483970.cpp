// Name: shape_edittool.cpp_CPickList_handleDialogInput_FUN_00483970
// Address: 00483970
// Address Range: [[00483970, 00483bf8]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_handleDialogInput_FUN_00483970(CPickList *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_CPickList_handleDialogInput_FUN_00483970(CPickList *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_004849f0(this_ptr);
  if (this_ptr->confirmed_flag != 0) {
    iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00484ca0
                      (this_ptr,this_ptr->current_index);
    if (iVar1 != 0) {
      return this_ptr->current_index;
    }
    this_ptr->confirmed_flag = 0;
  }
  if (_DAT_02d21b80 != 0) {
    return -1;
  }
  iVar1 = (*(((this_ptr->base).vtable._up)->_up).handleInput)(this_ptr);
  if (iVar1 < 0) {
    return -1;
  }
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_004849f0(this_ptr);
  if (this_ptr->state_flag != 0) {
    return -2;
  }
  if (this_ptr->scroll_mode == 1) {
    (this_ptr->scrollbar).scroll_position = this_ptr->scroll_top;
    (this_ptr->scrollbar).item_count = (this_ptr->base).item_count;
    (this_ptr->scrollbar).page_size = this_ptr->rows_per_column;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00485b00(&this_ptr->scrollbar);
    iVar1 = (this_ptr->scrollbar).scroll_position;
  }
  else {
    if (this_ptr->scroll_mode != 2) goto LAB_00483a37;
    (this_ptr->scrollbar).scroll_position = this_ptr->scroll_top / this_ptr->rows_per_column;
    (this_ptr->scrollbar).item_count =
         ((this_ptr->base).item_count + this_ptr->rows_per_column + -1) / this_ptr->rows_per_column;
    (this_ptr->scrollbar).page_size = this_ptr->column_count;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00485b00(&this_ptr->scrollbar);
    iVar1 = (this_ptr->scrollbar).scroll_position * this_ptr->rows_per_column;
  }
  this_ptr->scroll_top = iVar1;
LAB_00483a37:
  iVar1 = this_ptr->rows_per_column * this_ptr->column_count + this_ptr->scroll_top;
  if (iVar1 <= this_ptr->current_index) {
    this_ptr->current_index = iVar1 + -1;
  }
  if (this_ptr->current_index < this_ptr->scroll_top) {
    this_ptr->current_index = this_ptr->scroll_top;
  }
  if (this_ptr->ok_button_text[0] != '\0') {
    iVar1 = shape_edittool_cpp_CEdButton_wasClicked_FUN_00486440(&this_ptr->ok_button);
    if (iVar1 != 0) {
      this_ptr->confirmed_flag = 1;
    }
    if (&this_ptr->ok_button == (CEdButton *)_DAT_01c5bb78) {
      this_ptr->selection_state = 0;
    }
  }
  if (this_ptr->cancel_button_text[0] != '\0') {
    iVar1 = shape_edittool_cpp_CEdButton_wasClicked_FUN_00486440(&this_ptr->cancel_button);
    if (iVar1 != 0) {
      return -1;
    }
    if (&this_ptr->cancel_button == (CEdButton *)_DAT_01c5bb78) {
      this_ptr->selection_state = 1;
    }
  }
  iVar1 = _DAT_01c5bb74;
  if ((((DAT_01c5fae4 & 1) != 0) && (_DAT_01c5bb78 == (byte *)0x0)) &&
     (iVar1 = shape_edittool_cpp_CPickList_getItemAtMousePosition_FUN_00484b50
                        (this_ptr,_DAT_01c5fadc,_DAT_01c5fae0), -1 < iVar1)) {
    this_ptr->selection_state = -1;
    DAT_01c5fae4 = DAT_01c5fae4 & 0xfe;
    this_ptr->current_index = iVar1;
    iVar2 = wincore_winrun_cpp_getTime_FUN_005806a0();
    iVar3 = iVar2 - _DAT_01c5bb70;
    _DAT_01c5bb70 = iVar2;
    if (((0 < iVar3) && ((double)iVar3 < _DAT_005bd74d)) &&
       (_DAT_01c5bb74 == this_ptr->current_index)) {
      this_ptr->confirmed_flag = 1;
    }
  }
  _DAT_01c5bb74 = iVar1;
  return -2;
}
