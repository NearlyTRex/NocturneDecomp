// Name: engine_console.cpp_CConsole_writeChar_FUN_0043ad30
// Address: 0043ad30
// Address Range: [[0043ad30, 0043adf8]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_CConsole_writeChar_FUN_0043ad30(CConsole *this_ptr,char character)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_writeChar_FUN_0043ad30(CConsole *this_ptr,char character)

{
  int iVar1;
  int iVar2;
  
  if (character == '\n') {
    this_ptr->current_column = 0;
    iVar2 = this_ptr->current_row + 1;
    iVar1 = this_ptr->console_height + -1;
    this_ptr->current_row = iVar2;
    if (iVar1 < iVar2) {
LAB_0043adc5:
      this_ptr->current_row = iVar1;
      engine_console_cpp_CConsole_scrollUp_FUN_0043ae40(this_ptr);
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
      if (iVar1 < iVar2) goto LAB_0043adc5;
    }
  }
  return;
}
