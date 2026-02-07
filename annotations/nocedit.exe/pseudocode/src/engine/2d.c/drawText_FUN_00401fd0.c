// Name: engine_2d.c_drawText_FUN_00401fd0
// Address: 00401fd0
// Address Range: [[00401fd0, 00402023]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawText_FUN_00401fd0(char *text,int x,int y)

#include "nocturne.h"

void __cdecl engine_2d_c_drawText_FUN_00401fd0(char *text,int x,int y)

{
  if (g_TextWrapEnabled != 0) {
    engine_2d_c_drawTextWrapped_FUN_00401c60(text,x,y,g_ClipRight,g_ClipBottom);
    return;
  }
  engine_2d_c_drawTextMultiline_FUN_00401cf0(text,x,y,g_ClipRight,g_ClipBottom);
  return;
}
