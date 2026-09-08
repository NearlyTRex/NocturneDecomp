// Name: engine_console.cpp_CConsole_render_FUN_00441b00
// Address: 00441b00
// MANUAL RECONSTRUCTION
// Address Range: [[00441b00, 00441c2f]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_CConsole_render_FUN_00441b00(CConsole *this_ptr)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_render_FUN_00441b00(CConsole *this_ptr)

{
  int iVar3;
  int iVar5;
  char *row_ptr;
  int local_20;
  int local_18;
  char local_14 [4];
  int cell_w;
  int cell_h;
#if NOCTURNE_AUTHENTIC_CONSOLE
  int x2;
  int x1;
  int iVar4;
  int iVar2;
  int y1;
  int iVar1;
#else
  int scale;
  int cols;
  int rows;
#endif

#if NOCTURNE_AUTHENTIC_CONSOLE
  cell_w = NOCTURNE_CONSOLE_CELL_W;
  cell_h = NOCTURNE_CONSOLE_CELL_H;
#else
  nocturne_console_layout(this_ptr->screen_x,this_ptr->screen_y,NOCTURNE_CONSOLE_MAX_COLS,
                          NOCTURNE_CONSOLE_MAX_ROWS,&scale,&cols,&rows);
  this_ptr->console_width = cols;
  this_ptr->console_height = rows;
  if (cols <= this_ptr->current_column) {
    this_ptr->current_column = 0;
    memset(nocturne_console_row(this_ptr->current_row),0,nocturne_console_stride());
  }
  nocturne_console_process_input(this_ptr->current_row,this_ptr->console_height);
  cell_w = NOCTURNE_CONSOLE_CELL_W * scale;
  cell_h = NOCTURNE_CONSOLE_CELL_H * scale;
#endif
  local_14[1] = '\0';
  local_20 = 0;
  if (0 < this_ptr->console_height) {
#if NOCTURNE_AUTHENTIC_CONSOLE
    row_ptr = this_ptr->console_buffer;
#else
    row_ptr = nocturne_console_row(
                  nocturne_console_view_top(this_ptr->current_row,this_ptr->console_height));
#endif
    local_18 = 0;
    do {
      iVar3 = 0;
      if (0 < this_ptr->console_width) {
        iVar5 = 0;
        do {
          local_14[0] = row_ptr[iVar3];
          if (local_14[0] != '\0') {
#if NOCTURNE_AUTHENTIC_CONSOLE
            engine_2d_c_drawString_FUN_00402080
                      (local_14,this_ptr->screen_x + iVar5,local_18 + this_ptr->screen_y,0xf8);
#else
            nocturne_console_draw_char((int)(uchar)local_14[0],this_ptr->screen_x + iVar5,
                                       local_18 + this_ptr->screen_y,0xf8,scale);
#endif
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + cell_w;
        } while (iVar3 < this_ptr->console_width);
      }
#if NOCTURNE_AUTHENTIC_CONSOLE
      row_ptr = row_ptr + GAME_CONSOLE_ROW_STRIDE;
#else
      row_ptr = row_ptr + nocturne_console_stride();
#endif
      local_18 = local_18 + cell_h;
      local_20 = local_20 + 1;
    } while (local_20 < this_ptr->console_height);
  }
#if NOCTURNE_AUTHENTIC_CONSOLE
  x1 = this_ptr->screen_x;
  iVar4 = this_ptr->screen_y;
  iVar1 = this_ptr->console_height;
  x2 = x1 + this_ptr->console_width * cell_w;
  y1 = iVar4 + -1;
  g_ActiveRenderColor = 0xf8;
  engine_2d_c_drawLine_FUN_004011b0(x1,y1,x2,y1);
  iVar2 = iVar4 + iVar1 * cell_h + 1;
  engine_2d_c_drawLine_FUN_004011b0(x1,iVar2,x2,iVar2);
  engine_2d_c_drawLine_FUN_004011b0(x1 + -1,y1,x1 + -1,iVar2);
  engine_2d_c_drawLine_FUN_004011b0(x2 + 1,y1,x2 + 1,iVar2);
#endif
  return;
}
