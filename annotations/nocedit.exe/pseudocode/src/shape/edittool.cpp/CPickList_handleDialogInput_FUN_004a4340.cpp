// Name: shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340
// Address: 004a4340
// Address Range: [[004a4340, 004a45c6]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340(CPickList * this_ptr)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CPickList_handleDialogInput_FUN_004a4340(CPickList *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_004a5240(this_ptr);
  if (this_ptr->confirmed_flag != 0) {
    iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_004a54e0
                      (this_ptr,this_ptr->current_index);
    if (iVar1 != 0) {
      return this_ptr->current_index;
    }
    this_ptr->confirmed_flag = 0;
  }
  iVar1 = (*((this_ptr->base_strlist).vtable)->handleInput)(&this_ptr->base_strlist);
  if (iVar1 < 0) {
    return -1;
  }
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_004a5240(this_ptr);
  if (this_ptr->state_flag != 0) {
    return -2;
  }
  if (this_ptr->dialog_result == 1) {
    (this_ptr->scrollbar).scroll_position = this_ptr->scroll_top;
    (this_ptr->scrollbar).current_value = (this_ptr->base_strlist).item_count;
    (this_ptr->scrollbar).max_value = this_ptr->vertical_page_size;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(&this_ptr->scrollbar);
    iVar1 = (this_ptr->scrollbar).scroll_position;
  }
  else {
    if (this_ptr->dialog_result != 2) goto LAB_004a43f0;
    (this_ptr->scrollbar).scroll_position = this_ptr->scroll_top / this_ptr->vertical_page_size;
    (this_ptr->scrollbar).current_value =
         ((this_ptr->base_strlist).item_count + this_ptr->vertical_page_size + -1) /
         this_ptr->vertical_page_size;
    (this_ptr->scrollbar).max_value = this_ptr->column_count;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(&this_ptr->scrollbar);
    iVar1 = (this_ptr->scrollbar).scroll_position * this_ptr->vertical_page_size;
  }
  this_ptr->scroll_top = iVar1;
LAB_004a43f0:
  iVar1 = this_ptr->vertical_page_size * this_ptr->column_count + this_ptr->scroll_top;
  if (iVar1 <= this_ptr->current_index) {
    this_ptr->current_index = iVar1 + -1;
  }
  if (this_ptr->current_index < this_ptr->scroll_top) {
    this_ptr->current_index = this_ptr->scroll_top;
  }
  if (this_ptr->ok_button_text[0] != '\0') {
    iVar1 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(&this_ptr->ok_button);
    if (iVar1 != 0) {
      this_ptr->confirmed_flag = 1;
    }
    if (&this_ptr->ok_button == g_ActiveButton) {
      this_ptr->selection_state = 0;
    }
  }
  if (this_ptr->cancel_button_text[0] != '\0') {
    iVar1 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(&this_ptr->cancel_button);
    if (iVar1 != 0) {
      return -1;
    }
    if (&this_ptr->cancel_button == g_ActiveButton) {
      this_ptr->selection_state = 1;
    }
  }
  iVar1 = g_LastClickItemIndex;
  if (((((byte)g_MouseButtonFlags & 1) != 0) && (g_ActiveButton == (CEdButton *)0x0)) &&
     (iVar1 = shape_edittool_cpp_CPickList_getItemAtMousePosition_FUN_004a53a0
                        (this_ptr,g_MouseX,g_MouseY), -1 < iVar1)) {
    this_ptr->selection_state = -1;
    g_MouseButtonFlags._0_1_ = (byte)g_MouseButtonFlags & 0xfe;
    this_ptr->current_index = iVar1;
    iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    iVar3 = iVar2 - g_LastClickTimestamp;
    g_LastClickTimestamp = iVar2;
    if (((0 < iVar3) && ((double)iVar3 < 294912)) &&
       (g_LastClickItemIndex == this_ptr->current_index)) {
      this_ptr->confirmed_flag = 1;
    }
  }
  g_LastClickItemIndex = iVar1;
  return -2;
}
