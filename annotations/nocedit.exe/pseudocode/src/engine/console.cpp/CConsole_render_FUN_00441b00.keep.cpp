// Name: engine_console.cpp_CConsole_render_FUN_00441b00
// Address: 00441b00
// MANUAL RECONSTRUCTION
// Address Range: [[00441b00, 00441c2f]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_CConsole_render_FUN_00441b00(CConsole *this_ptr)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_render_FUN_00441b00(CConsole *this_ptr)

{
  int x2;
  int x1;
  int iVar4;
  int iVar2;
  int iVar3;
  int iVar5;
  int y1;
  char *row_ptr;
  int local_20;
  int local_18;
  char local_14 [4];
  int iVar1;
  
  local_14[1] = '\0';
  local_20 = 0;
  if (0 < this_ptr->console_height) {
    row_ptr = this_ptr->console_buffer;
    local_18 = 0;
    do {
      iVar3 = 0;
      if (0 < this_ptr->console_width) {
        iVar5 = 0;
        do {
          local_14[0] = row_ptr[iVar3];
          if (local_14[0] != '\0') {
            engine_2d_c_drawString_FUN_00402080
                      (local_14,this_ptr->screen_x + iVar5,local_18 + this_ptr->screen_y,0xf8);
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 7;
        } while (iVar3 < this_ptr->console_width);
      }
      row_ptr = row_ptr + 80;
      local_18 = local_18 + 0xb;
      local_20 = local_20 + 1;
    } while (local_20 < this_ptr->console_height);
  }
  x1 = this_ptr->screen_x;
  iVar4 = this_ptr->screen_y;
  iVar1 = this_ptr->console_height;
  x2 = x1 + this_ptr->console_width * 7;
  y1 = iVar4 + -1;
  g_ActiveRenderColor = 0xf8;
  engine_2d_c_drawLine_FUN_004011b0(x1,y1,x2,y1);
  iVar2 = iVar4 + iVar1 * 0xb + 1;
  engine_2d_c_drawLine_FUN_004011b0(x1,iVar2,x2,iVar2);
  engine_2d_c_drawLine_FUN_004011b0(x1 + -1,y1,x1 + -1,iVar2);
  engine_2d_c_drawLine_FUN_004011b0(x2 + 1,y1,x2 + 1,iVar2);
  return;
}
