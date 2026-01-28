// Name: shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510
// Address: 0049d510
// Address Range: [[0049d510, 0049d57c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_deleteRange_FUN_0049d510 (CInputString *this_ptr,int start_pos,int end_pos)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CInputString_deleteRange_FUN_0049d510
          (CInputString *this_ptr,int start_pos,int end_pos)

{
  int iVar1;
  
  if (start_pos < 0) {
    start_pos = 0;
  }
  if (this_ptr->current_length < end_pos) {
    end_pos = this_ptr->current_length;
  }
  if (start_pos < end_pos) {
    crt_string_c_memmove_FUN_005fe5e0
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
