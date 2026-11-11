// Name: core_fldnotes.cpp_STextView_ensureSpace_FUN_004a30a0
// Address: 004a30a0
// Address Range: [[004a30a0, 004a30f1]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_fldnotes_cpp_STextView_ensureSpace_FUN_004a30a0(STextView *this_ptr,int param_2,int param_3)

#include "nocturne.h"

uint __cdecl core_fldnotes_cpp_STextView_ensureSpace_FUN_004a30a0(STextView *this_ptr,int param_2,int param_3)

{
  while( true ) {
    if ((this_ptr->margin_top < this_ptr->cursor_y) &&
       (this_ptr->margin_bottom < this_ptr->cursor_y + param_3)) {
      return 0;
    }
    if ((this_ptr->cursor_x == this_ptr->margin_left) ||
       (this_ptr->cursor_x + param_2 <= this_ptr->margin_right)) break;
    core_fldnotes_cpp_STextView_newLine_FUN_004a2bf0(this_ptr);
  }
  return 1;
}
