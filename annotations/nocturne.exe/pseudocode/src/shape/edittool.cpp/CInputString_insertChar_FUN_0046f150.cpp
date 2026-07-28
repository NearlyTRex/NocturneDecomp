// Name: shape_edittool.cpp_CInputString_insertChar_FUN_0046f150
// Address: 0046f150
// Address Range: [[0046f150, 0046f1d2]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_insertChar_FUN_0046f150(CInputString *this_ptr,char character,int advance_cursor)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_insertChar_FUN_0046f150(CInputString *this_ptr,char character,int advance_cursor)

{
  int iVar1;
  
  iVar1 = this_ptr->max_length + -1;
  if (this_ptr->cursor_position < iVar1) {
    if (this_ptr->current_length < iVar1) {
      this_ptr->current_length = this_ptr->current_length + 1;
    }
    iVar1 = this_ptr->cursor_position;
    memmove
              (this_ptr->string_data + iVar1 + 1,this_ptr->string_data + iVar1,
               this_ptr->current_length - iVar1);
    this_ptr->string_data[this_ptr->cursor_position] = character;
    if (advance_cursor != 0) {
      this_ptr->cursor_position = this_ptr->cursor_position + 1;
      this_ptr->string_data[this_ptr->current_length] = '\0';
      return;
    }
  }
  this_ptr->string_data[this_ptr->current_length] = '\0';
  return;
}
