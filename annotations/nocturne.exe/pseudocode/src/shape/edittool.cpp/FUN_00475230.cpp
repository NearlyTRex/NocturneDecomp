// Name: shape_edittool.cpp_FUN_00475230
// Address: 00475230
// Address Range: [[00475230, 0047546e]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_FUN_00475230(CPickList *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_FUN_00475230(CPickList *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_00475db0(this_ptr);
  if (this_ptr->confirmed_flag != 0) {
    iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_00476040
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
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_00475db0(this_ptr);
  if (this_ptr->state_flag != 0) {
    return -2;
  }
  if (this_ptr->dialog_result == 1) {
    (this_ptr->scrollbar).scroll_position = this_ptr->scroll_top;
    (this_ptr->scrollbar).current_value = (this_ptr->base).item_count;
    (this_ptr->scrollbar).max_value = this_ptr->vertical_page_size;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00476920(&this_ptr->scrollbar);
    iVar1 = (this_ptr->scrollbar).scroll_position;
  }
  else {
    if (this_ptr->dialog_result != 2) goto LAB_004752e0;
    (this_ptr->scrollbar).scroll_position = this_ptr->scroll_top / this_ptr->vertical_page_size;
    (this_ptr->scrollbar).current_value =
         ((this_ptr->base).item_count + this_ptr->vertical_page_size + -1) /
         this_ptr->vertical_page_size;
    (this_ptr->scrollbar).max_value = this_ptr->column_count;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00476920(&this_ptr->scrollbar);
    iVar1 = (this_ptr->scrollbar).scroll_position * this_ptr->vertical_page_size;
  }
  this_ptr->scroll_top = iVar1;
LAB_004752e0:
  iVar1 = this_ptr->vertical_page_size * this_ptr->column_count + this_ptr->scroll_top;
  if (iVar1 <= this_ptr->current_index) {
    this_ptr->current_index = iVar1 + -1;
  }
  if (this_ptr->current_index < this_ptr->scroll_top) {
    this_ptr->current_index = this_ptr->scroll_top;
  }
  iVar1 = _DAT_01bd1d8c;
  if (_DAT_01bd1d8c < g_ClipLeft) {
    iVar1 = g_ClipLeft;
  }
  if (g_ClipRight < iVar1) {
    iVar1 = g_ClipRight;
  }
  iVar2 = _DAT_01bd1d90;
  if (_DAT_01bd1d90 < g_ClipTop) {
    iVar2 = g_ClipTop;
  }
  if (g_ClipBottom < iVar2) {
    iVar2 = g_ClipBottom;
  }
  wincore_winrun_cpp_setCursorPosition_FUN_00558d60(iVar1,iVar2);
  iVar1 = _DAT_01bcde20;
  if (((DAT_01bd1d94 & 1) != 0) &&
     (iVar1 = shape_edittool_cpp_CPickList_getItemAtMousePosition_FUN_00475f10
                        (this_ptr,_DAT_01bd1d8c,_DAT_01bd1d90), -1 < iVar1)) {
    DAT_01bd1d94 = DAT_01bd1d94 & 0xfe;
    this_ptr->current_index = iVar1;
    iVar2 = wincore_winrun_cpp_getTime_FUN_00558a30();
    iVar3 = iVar2 - _DAT_01bcde1c;
    _DAT_01bcde1c = iVar2;
    if ((0 < iVar3) &&
       (((double)iVar3 < 294912 && (_DAT_01bcde20 == this_ptr->current_index)))) {
      this_ptr->confirmed_flag = 1;
    }
  }
  _DAT_01bcde20 = iVar1;
  return -2;
}
