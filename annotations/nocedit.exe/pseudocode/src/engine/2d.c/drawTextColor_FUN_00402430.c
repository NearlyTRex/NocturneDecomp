// Name: engine_2d.c_drawTextColor_FUN_00402430
// Address: 00402430
// Address Range: [[00402430, 00402491]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextColor_FUN_00402430(char *text,int x_pos,int y_pos)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextColor_FUN_00402430(char *text,int x_pos,int y_pos)

{
  if (g_TextWrapEnabled != 0) {
    engine_2d_c_drawTextWrappedColor_FUN_00401eb0
              (text,x_pos,y_pos,g_ClipRight,g_ClipBottom,g_CurrentTextColor);
    return;
  }
  engine_2d_c_drawTextMultilineColor_FUN_00401f40
            (text,x_pos,y_pos,g_ClipRight,g_ClipBottom,g_CurrentTextColor);
  return;
}
