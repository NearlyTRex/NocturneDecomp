// Name: engine_console.cpp_CConsole_writeChar_FUN_00445500
// Address: 00445500
// Address Range: [[00445500, 004455c8]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_CConsole_writeChar_FUN_00445500(CConsole *this_ptr,char character)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_writeChar_FUN_00445500(CConsole *this_ptr,char character)

{
  int iVar1;
  int iVar2;
  
  if (character == '\n') {
    this_ptr->current_column = 0;
    iVar2 = this_ptr->current_row + 1;
    iVar1 = this_ptr->console_height + -1;
    this_ptr->current_row = iVar2;
    if (iVar1 < iVar2) {
LAB_00445595:
      this_ptr->current_row = iVar1;
      engine_console_cpp_CConsole_scrollUp_FUN_00445610(this_ptr);
      return;
    }
  }
  else {
    if (character == '\0') {
      this_ptr->console_buffer[this_ptr->current_column + this_ptr->current_row * 0x50] = '\0';
      return;
    }
    this_ptr->console_buffer[this_ptr->current_column + this_ptr->current_row * 0x50] = character;
    iVar1 = this_ptr->current_column + 1;
    this_ptr->current_column = iVar1;
    if (this_ptr->console_width + -1 < iVar1) {
      this_ptr->current_column = 0;
      iVar2 = this_ptr->current_row + 1;
      iVar1 = this_ptr->console_height + -1;
      this_ptr->current_row = iVar2;
      if (iVar1 < iVar2) goto LAB_00445595;
    }
  }
  return;
}
