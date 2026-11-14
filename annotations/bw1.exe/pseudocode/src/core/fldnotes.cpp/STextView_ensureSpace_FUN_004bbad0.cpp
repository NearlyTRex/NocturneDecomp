// Name: core_fldnotes.cpp_STextView_ensureSpace_FUN_004bbad0
// Address: 004bbad0
// Address Range: [[004bbad0, 004bbb21]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_STextView_ensureSpace_FUN_004bbad0(STextView *this_ptr,int width,int height)

#include "nocturne.h"

int __cdecl core_fldnotes_cpp_STextView_ensureSpace_FUN_004bbad0(STextView *this_ptr,int width,int height)

{
  while( true ) {
    if ((this_ptr->margin_top < this_ptr->cursor_y) &&
       (this_ptr->margin_bottom < this_ptr->cursor_y + height)) {
      return 0;
    }
    if ((this_ptr->cursor_x == this_ptr->margin_left) ||
       (this_ptr->cursor_x + width <= this_ptr->margin_right)) break;
    core_fldnotes_cpp_STextView_newLine_FUN_004bb630(this_ptr);
  }
  return 1;
}
