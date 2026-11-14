// Name: shape_edittool.cpp_CPickList_handleDialogInput_FUN_0049add0
// Address: 0049add0
// Address Range: [[0049add0, 0049b058]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_handleDialogInput_FUN_0049add0(CPickList *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_CPickList_handleDialogInput_FUN_0049add0(CPickList *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_0049be50(this_ptr);
  if (this_ptr->confirmed_flag != 0) {
    iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_0049c100
                      (this_ptr,this_ptr->current_index);
    if (iVar1 != 0) {
      return this_ptr->current_index;
    }
    this_ptr->confirmed_flag = 0;
  }
  if (_DAT_02c9be70 != 0) {
    return -1;
  }
  iVar1 = (*(((this_ptr->base).vtable._up)->_up).handleInput)(this_ptr);
  if (iVar1 < 0) {
    return -1;
  }
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_0049be50(this_ptr);
  if (this_ptr->state_flag != 0) {
    return -2;
  }
  if (this_ptr->scroll_mode == 1) {
    (this_ptr->scrollbar).scroll_position = this_ptr->scroll_top;
    (this_ptr->scrollbar).item_count = (this_ptr->base).item_count;
    (this_ptr->scrollbar).page_size = this_ptr->rows_per_column;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_0049cf60(&this_ptr->scrollbar);
    iVar1 = (this_ptr->scrollbar).scroll_position;
  }
  else {
    if (this_ptr->scroll_mode != 2) goto LAB_0049ae97;
    (this_ptr->scrollbar).scroll_position = this_ptr->scroll_top / this_ptr->rows_per_column;
    (this_ptr->scrollbar).item_count =
         ((this_ptr->base).item_count + this_ptr->rows_per_column + -1) / this_ptr->rows_per_column;
    (this_ptr->scrollbar).page_size = this_ptr->column_count;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_0049cf60(&this_ptr->scrollbar);
    iVar1 = (this_ptr->scrollbar).scroll_position * this_ptr->rows_per_column;
  }
  this_ptr->scroll_top = iVar1;
LAB_0049ae97:
  iVar1 = this_ptr->rows_per_column * this_ptr->column_count + this_ptr->scroll_top;
  if (iVar1 <= this_ptr->current_index) {
    this_ptr->current_index = iVar1 + -1;
  }
  if (this_ptr->current_index < this_ptr->scroll_top) {
    this_ptr->current_index = this_ptr->scroll_top;
  }
  if (this_ptr->ok_button_text[0] != '\0') {
    iVar1 = shape_edittool_cpp_CEdButton_wasClicked_FUN_0049d8a0(&this_ptr->ok_button);
    if (iVar1 != 0) {
      this_ptr->confirmed_flag = 1;
    }
    if (&this_ptr->ok_button == (CEdButton *)_DAT_01c3f5d0) {
      this_ptr->selection_state = 0;
    }
  }
  if (this_ptr->cancel_button_text[0] != '\0') {
    iVar1 = shape_edittool_cpp_CEdButton_wasClicked_FUN_0049d8a0(&this_ptr->cancel_button);
    if (iVar1 != 0) {
      return -1;
    }
    if (&this_ptr->cancel_button == (CEdButton *)_DAT_01c3f5d0) {
      this_ptr->selection_state = 1;
    }
  }
  iVar1 = _DAT_01c3f5cc;
  if ((((DAT_01c43544 & 1) != 0) && (_DAT_01c3f5d0 == (byte *)0x0)) &&
     (iVar1 = shape_edittool_cpp_CPickList_getItemAtMousePosition_FUN_0049bfb0
                        (this_ptr,_DAT_01c4353c,_DAT_01c43540), -1 < iVar1)) {
    this_ptr->selection_state = -1;
    DAT_01c43544 = DAT_01c43544 & 0xfe;
    this_ptr->current_index = iVar1;
    iVar2 = wincore_winrun_cpp_getTime_FUN_005b2420();
    iVar3 = iVar2 - _DAT_01c3f5c8;
    _DAT_01c3f5c8 = iVar2;
    if (((0 < iVar3) && ((double)iVar3 < _DAT_005dc690)) &&
       (_DAT_01c3f5cc == this_ptr->current_index)) {
      this_ptr->confirmed_flag = 1;
    }
  }
  _DAT_01c3f5cc = iVar1;
  return -2;
}
