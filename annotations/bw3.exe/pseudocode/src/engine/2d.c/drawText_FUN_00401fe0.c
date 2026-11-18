// Name: engine_2d.c_drawText_FUN_00401fe0
// Address: 00401fe0
// Address Range: [[00401fe0, 00402033]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawText_FUN_00401fe0(char *text,int x,int y)

#include "nocturne.h"

void __cdecl engine_2d_c_drawText_FUN_00401fe0(char *text,int x,int y)

{
  if (g_TextWrapEnabled != 0) {
    engine_2d_c_drawTextWrapped_FUN_00401c70(text,x,y,g_INT_01c6b5b0,g_INT_01c6b5b4);
    return;
  }
  engine_2d_c_drawTextMultiline_FUN_00401d00(text,x,y,g_INT_01c6b5b0,g_INT_01c6b5b4);
  return;
}
