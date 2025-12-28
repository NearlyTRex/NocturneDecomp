// Name: engine_console.cpp_CConsole_render_FUN_00441b00
// Address: 00441b00
// Address Range: [[00441b00, 00441c2f]]
// Convention: __cdecl
// Signature: void engine_console.cpp_CConsole_render_FUN_00441b00(CConsole * this_ptr)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_render_FUN_00441b00(CConsole *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  CConsole *pCVar3;
  int iVar4;
  int y1;
  CConsole *pCVar5;
  int iVar6;
  int local_18;
  char local_14 [4];
  
  local_14[1] = 0;
  iVar6 = 0;
  if (0 < this_ptr->console_height) {
    local_18 = 0;
    pCVar3 = this_ptr;
    do {
      iVar2 = 0;
      pCVar5 = pCVar3;
      if (0 < this_ptr->console_width) {
        iVar4 = 0;
        iVar1 = local_18;
        do {
          local_14[0] = pCVar3->console_buffer[0];
          if (local_14[0] != '\0') {
            engine_2d_c_drawString_FUN_00402080
                      (local_14,this_ptr->screen_x + iVar4,iVar1 + this_ptr->screen_y,0xf8);
          }
          pCVar3 = (CConsole *)((int)&pCVar3->file_logging_enabled + 1);
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 7;
        } while (iVar2 < this_ptr->console_width);
      }
      pCVar3 = (CConsole *)(pCVar5->console_buffer + 0x4c);
      local_18 = local_18 + 0xb;
      iVar6 = iVar6 + 1;
    } while (iVar6 < this_ptr->console_height);
  }
  iVar2 = this_ptr->screen_x;
  iVar1 = this_ptr->screen_y;
  iVar4 = this_ptr->console_height;
  iVar6 = iVar2 + this_ptr->console_width * 7;
  y1 = iVar1 + -1;
  g_ActiveRenderColor = 0xf8;
  engine_2d_c_drawLine_FUN_004011b0(iVar2,y1,iVar6,y1);
  iVar1 = iVar1 + iVar4 * 0xb + 1;
  engine_2d_c_drawLine_FUN_004011b0(iVar2,iVar1,iVar6,iVar1);
  engine_2d_c_drawLine_FUN_004011b0(iVar2 + -1,y1,iVar2 + -1,iVar1);
  engine_2d_c_drawLine_FUN_004011b0(iVar6 + 1,y1,iVar6 + 1,iVar1);
  return;
}
