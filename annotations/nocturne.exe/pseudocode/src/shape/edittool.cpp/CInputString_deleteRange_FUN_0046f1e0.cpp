// Name: shape_edittool.cpp_CInputString_deleteRange_FUN_0046f1e0
// Address: 0046f1e0
// Address Range: [[0046f1e0, 0046f24c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_deleteRange_FUN_0046f1e0(CInputString *this_ptr,int start_pos,int end_pos)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_deleteRange_FUN_0046f1e0(CInputString *this_ptr,int start_pos,int end_pos)

{
  int iVar1;
  
  if (start_pos < 0) {
    start_pos = 0;
  }
  if (this_ptr->current_length < end_pos) {
    end_pos = this_ptr->current_length;
  }
  if (start_pos < end_pos) {
    memmove
              (this_ptr->string_data + start_pos,this_ptr->string_data + end_pos,
               this_ptr->current_length - end_pos);
    iVar1 = this_ptr->current_length - (end_pos - start_pos);
    this_ptr->current_length = iVar1;
    if (iVar1 < this_ptr->cursor_position) {
      this_ptr->cursor_position = iVar1;
    }
    this_ptr->string_data[this_ptr->current_length] = '\0';
  }
  return;
}
