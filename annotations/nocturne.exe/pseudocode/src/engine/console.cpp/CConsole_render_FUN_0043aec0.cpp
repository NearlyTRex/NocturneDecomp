// Name: engine_console.cpp_CConsole_render_FUN_0043aec0
// Address: 0043aec0
// Address Range: [[0043aec0, 0043afef]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_CConsole_render_FUN_0043aec0(CConsole *this_ptr)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_render_FUN_0043aec0(CConsole *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CConsole *pCVar4;
  int iVar5;
  int y1;
  CConsole *local_24;
  int local_20;
  int local_18;
  char local_14 [4];
  
  local_14[1] = 0;
  local_20 = 0;
  if (0 < this_ptr->console_height) {
    local_24 = this_ptr;
    local_18 = 0;
    do {
      iVar3 = 0;
      if (0 < this_ptr->console_width) {
        iVar5 = 0;
        pCVar4 = local_24;
        do {
          local_14[0] = pCVar4->console_buffer[0];
          if (local_14[0] != '\0') {
            engine_2d_c_drawString_FUN_004026b0
                      (local_14,this_ptr->screen_x + iVar5,local_18 + this_ptr->screen_y,0xf8);
          }
          pCVar4 = (CConsole *)((int)&pCVar4->file_logging_enabled + 1);
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 7;
        } while (iVar3 < this_ptr->console_width);
      }
      local_24 = (CConsole *)(local_24->console_buffer + 0x4c);
      local_18 = local_18 + 0xb;
      local_20 = local_20 + 1;
    } while (local_20 < this_ptr->console_height);
  }
  iVar5 = this_ptr->screen_x;
  iVar2 = this_ptr->screen_y;
  iVar1 = this_ptr->console_height;
  iVar3 = iVar5 + this_ptr->console_width * 7;
  y1 = iVar2 + -1;
  g_ActiveRenderColor = 0xf8;
  engine_2d_c_drawLine_FUN_004015a0(iVar5,y1,iVar3,y1);
  iVar2 = iVar2 + iVar1 * 0xb + 1;
  engine_2d_c_drawLine_FUN_004015a0(iVar5,iVar2,iVar3,iVar2);
  engine_2d_c_drawLine_FUN_004015a0(iVar5 + -1,y1,iVar5 + -1,iVar2);
  engine_2d_c_drawLine_FUN_004015a0(iVar3 + 1,y1,iVar3 + 1,iVar2);
  return;
}
