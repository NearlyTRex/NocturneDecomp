// Name: shape_edittool.cpp_CPickList_handleDialogInput_FUN_00482770
// Address: 00482770
// Address Range: [[00482770, 004829f6]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_handleDialogInput_FUN_00482770(CPickList *this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CPickList_handleDialogInput_FUN_00482770(CPickList *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_004837f0(this_ptr);
  if (this_ptr->confirmed_flag != 0) {
    iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00483aa0
                      (this_ptr,this_ptr->current_index);
    if (iVar1 != 0) {
      return this_ptr->current_index;
    }
    this_ptr->confirmed_flag = 0;
  }
  iVar1 = (*(((this_ptr->base).vtable._up)->_up).handleInput)(this_ptr);
  if (iVar1 < 0) {
    return -1;
  }
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_004837f0(this_ptr);
  if (this_ptr->state_flag != 0) {
    return -2;
  }
  if (this_ptr->scroll_mode == 1) {
    (this_ptr->scrollbar).scroll_position = this_ptr->scroll_top;
    (this_ptr->scrollbar).item_count = (this_ptr->base).item_count;
    (this_ptr->scrollbar).page_size = this_ptr->rows_per_column;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00484900(&this_ptr->scrollbar);
    iVar1 = (this_ptr->scrollbar).scroll_position;
  }
  else {
    if (this_ptr->scroll_mode != 2) goto LAB_00482820;
    (this_ptr->scrollbar).scroll_position = this_ptr->scroll_top / this_ptr->rows_per_column;
    (this_ptr->scrollbar).item_count =
         ((this_ptr->base).item_count + this_ptr->rows_per_column + -1) / this_ptr->rows_per_column;
    (this_ptr->scrollbar).page_size = this_ptr->column_count;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00484900(&this_ptr->scrollbar);
    iVar1 = (this_ptr->scrollbar).scroll_position * this_ptr->rows_per_column;
  }
  this_ptr->scroll_top = iVar1;
LAB_00482820:
  iVar1 = this_ptr->rows_per_column * this_ptr->column_count + this_ptr->scroll_top;
  if (iVar1 <= this_ptr->current_index) {
    this_ptr->current_index = iVar1 + -1;
  }
  if (this_ptr->current_index < this_ptr->scroll_top) {
    this_ptr->current_index = this_ptr->scroll_top;
  }
  if (this_ptr->ok_button_text[0] != '\0') {
    iVar1 = shape_edittool_cpp_CEdButton_wasClicked_FUN_00485240(&this_ptr->ok_button);
    if (iVar1 != 0) {
      this_ptr->confirmed_flag = 1;
    }
    if (&this_ptr->ok_button == (CEdButton *)g_PTR_01c26410) {
      this_ptr->selection_state = 0;
    }
  }
  if (this_ptr->cancel_button_text[0] != '\0') {
    iVar1 = shape_edittool_cpp_CEdButton_wasClicked_FUN_00485240(&this_ptr->cancel_button);
    if (iVar1 != 0) {
      return -1;
    }
    if (&this_ptr->cancel_button == (CEdButton *)g_PTR_01c26410) {
      this_ptr->selection_state = 1;
    }
  }
  iVar1 = g_INT_01c2640c;
  if ((((g_BIT_INTEGER32_01c2a384.bytes[0] & 1) != 0) && (g_PTR_01c26410 == (byte *)0x0)) &&
     (iVar1 = shape_edittool_cpp_CPickList_getItemAtMousePosition_FUN_00483950
                        (this_ptr,g_INT_01c2a37c,g_INT_01c2a380), -1 < iVar1)) {
    this_ptr->selection_state = -1;
    g_BIT_INTEGER32_01c2a384.bytes[0] = g_BIT_INTEGER32_01c2a384.bytes[0] & 0xfe;
    this_ptr->current_index = iVar1;
    iVar2 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
    iVar3 = iVar2 - g_INT_01c26408;
    g_INT_01c26408 = iVar2;
    if (((0 < iVar3) && ((double)iVar3 < 294912)) &&
       (g_INT_01c2640c == this_ptr->current_index)) {
      this_ptr->confirmed_flag = 1;
    }
  }
  g_INT_01c2640c = iVar1;
  return -2;
}
