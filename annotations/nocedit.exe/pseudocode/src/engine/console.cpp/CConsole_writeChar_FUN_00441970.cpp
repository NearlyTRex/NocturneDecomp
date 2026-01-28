// Name: engine_console.cpp_CConsole_writeChar_FUN_00441970
// Address: 00441970
// Address Range: [[00441970, 00441a38]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_CConsole_writeChar_FUN_00441970(CConsole *this_ptr,char character)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_writeChar_FUN_00441970(CConsole *this_ptr,char character)

{
  int iVar1;
  int iVar2;
  
  if (character == '\n') {
    this_ptr->current_column = 0;
    iVar2 = this_ptr->current_row + 1;
    iVar1 = this_ptr->console_height + -1;
    this_ptr->current_row = iVar2;
    if (iVar1 < iVar2) {
LAB_00441a05:
      this_ptr->current_row = iVar1;
      engine_console_cpp_CConsole_scrollUp_FUN_00441a80(this_ptr);
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
      if (iVar1 < iVar2) goto LAB_00441a05;
    }
  }
  return;
}
