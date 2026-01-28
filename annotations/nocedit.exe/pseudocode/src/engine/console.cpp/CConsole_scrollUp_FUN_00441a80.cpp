// Name: engine_console.cpp_CConsole_scrollUp_FUN_00441a80
// Address: 00441a80
// Address Range: [[00441a80, 00441afa]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_CConsole_scrollUp_FUN_00441a80(CConsole *this_ptr)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_scrollUp_FUN_00441a80(CConsole *this_ptr)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar6 = 0;
  pcVar5 = this_ptr->console_buffer;
  pcVar4 = this_ptr->console_buffer;
  while (pcVar5 = pcVar5 + GAME_CONSOLE_ROW_STRIDE, iVar1 = this_ptr->console_height + -1,
        iVar6 < iVar1) {
    uVar3 = this_ptr->console_width;
    iVar6 = iVar6 + 1;
    pcVar7 = pcVar5;
    pcVar8 = pcVar4;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(uint *)pcVar8 = *(uint *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    pcVar4 = pcVar4 + GAME_CONSOLE_ROW_STRIDE;
  }
  crt_memory_c_memset_FUN_005fde40
            (this_ptr->console_buffer + iVar1 * 0x50,0,this_ptr->console_width);
  return;
}
