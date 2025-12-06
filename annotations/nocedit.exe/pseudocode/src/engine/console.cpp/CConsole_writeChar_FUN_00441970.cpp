// Name: engine_console.cpp_CConsole_writeChar_FUN_00441970
// Address: 00441970
// Address Range: [[00441970, 00441a38]]
// Convention: __cdecl
// Signature: void engine_console.cpp_CConsole_writeChar_FUN_00441970(CConsole * this_ptr, char character)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_writeChar_FUN_00441970(CConsole *this_ptr,char character)

{
  int iVar1;
  int iVar2;
  
  if (character == '\n') {
    this_ptr->currentColumn = 0;
    iVar2 = this_ptr->currentRow + 1;
    iVar1 = this_ptr->consoleHeight + -1;
    this_ptr->currentRow = iVar2;
    if (iVar1 < iVar2) {
LAB_00441a05:
      this_ptr->currentRow = iVar1;
      engine_console_cpp_CConsole_scrollUp_FUN_00441a80(this_ptr);
      return;
    }
  }
  else {
    if (character == '\0') {
      this_ptr->consoleBuffer[this_ptr->currentColumn + this_ptr->currentRow * 0x50] = '\0';
      return;
    }
    this_ptr->consoleBuffer[this_ptr->currentColumn + this_ptr->currentRow * 0x50] = character;
    iVar1 = this_ptr->currentColumn + 1;
    this_ptr->currentColumn = iVar1;
    if (this_ptr->consoleWidth + -1 < iVar1) {
      this_ptr->currentColumn = 0;
      iVar2 = this_ptr->currentRow + 1;
      iVar1 = this_ptr->consoleHeight + -1;
      this_ptr->currentRow = iVar2;
      if (iVar1 < iVar2) goto LAB_00441a05;
    }
  }
  return;
}
