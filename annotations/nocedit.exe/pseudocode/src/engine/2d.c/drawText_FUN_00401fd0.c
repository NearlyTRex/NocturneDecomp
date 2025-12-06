// Name: engine_2d.c_drawText_FUN_00401fd0
// Address: 00401fd0
// Address Range: [[00401fd0, 00402023]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)

#include "nocturne.h"

void __cdecl engine_2d_c_drawText_FUN_00401fd0(char *text,int x_pos,int y_pos)

{
  if (g_TextWrapEnabled != 0) {
    engine_2d_c_drawTextWrapped_FUN_00401c60(text,x_pos,y_pos,g_ClipRight,g_ClipBottom);
    return;
  }
  engine_2d_c_drawTextMultiline_FUN_00401cf0(text,x_pos,y_pos,g_ClipRight);
  return;
}
