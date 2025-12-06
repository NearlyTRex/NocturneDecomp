// Name: shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004a5240
// Address: 004a5240
// Address Range: [[004a5240, 004a539b]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004a5240(CPickList * this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_validateScrollBounds_FUN_004a5240(CPickList *this_ptr)

{
  int iVar1;
  
  iVar1 = (this_ptr->base_strlist).item_count;
  if (iVar1 <= this_ptr->current_index) {
    this_ptr->current_index = iVar1 + -1;
  }
  if (this_ptr->current_index < 0) {
    this_ptr->current_index = 0;
  }
  while (this_ptr->scroll_top < 0) {
    this_ptr->scroll_top = this_ptr->scroll_top + this_ptr->vertical_page_size;
  }
  while ((this_ptr->base_strlist).item_count <= this_ptr->scroll_top) {
    this_ptr->scroll_top = this_ptr->scroll_top - this_ptr->vertical_page_size;
  }
  if (this_ptr->scroll_top < 0) {
    this_ptr->scroll_top = 0;
  }
  if (this_ptr->current_index < (this_ptr->base_strlist).item_count) {
    while (iVar1 = this_ptr->scroll_top, this_ptr->current_index < iVar1) {
      if (this_ptr->column_count == 1) {
        this_ptr->scroll_top = iVar1 + -1;
      }
      else {
        this_ptr->scroll_top = iVar1 - this_ptr->vertical_page_size;
      }
      if (this_ptr->scroll_top < 0) {
        this_ptr->scroll_top = 0;
      }
    }
    while (this_ptr->scroll_top + this_ptr->page_size <= this_ptr->current_index) {
      if (this_ptr->column_count == 1) {
        this_ptr->scroll_top = this_ptr->scroll_top + 1;
      }
      else {
        this_ptr->scroll_top = this_ptr->scroll_top + this_ptr->vertical_page_size;
      }
    }
  }
  if ((this_ptr->column_count == 1) &&
     (iVar1 = (this_ptr->base_strlist).item_count - this_ptr->vertical_page_size,
     iVar1 < this_ptr->scroll_top)) {
    this_ptr->scroll_top = iVar1;
  }
  if (this_ptr->scroll_top < 0) {
    this_ptr->scroll_top = 0;
    return;
  }
  return;
}
