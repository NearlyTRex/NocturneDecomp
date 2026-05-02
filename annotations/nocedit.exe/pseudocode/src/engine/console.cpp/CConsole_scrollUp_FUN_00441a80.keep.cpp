// Name: engine_console.cpp_CConsole_scrollUp_FUN_00441a80
// Address: 00441a80
// MANUAL RECONSTRUCTION
// Address Range: [[00441a80, 00441afa]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_CConsole_scrollUp_FUN_00441a80(CConsole *this_ptr)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_scrollUp_FUN_00441a80(CConsole *this_ptr)

{
  int iVar1;
  char *pcVar4;
  char *pcVar5;
  int iVar6;

  iVar6 = 0;
  pcVar5 = this_ptr->console_buffer;
  pcVar4 = this_ptr->console_buffer;
  while (pcVar5 = pcVar5 + GAME_CONSOLE_ROW_STRIDE, iVar1 = this_ptr->console_height + -1,
        iVar6 < iVar1) {
    iVar6 = iVar6 + 1;
    memcpy(pcVar4, pcVar5, this_ptr->console_width);
    pcVar4 = pcVar4 + GAME_CONSOLE_ROW_STRIDE;
  }
  memset
            (this_ptr->console_buffer + iVar1 * 0x50,0,this_ptr->console_width);
  return;
}
