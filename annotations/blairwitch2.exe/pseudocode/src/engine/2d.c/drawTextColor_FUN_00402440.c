// Name: engine_2d.c_drawTextColor_FUN_00402440
// Address: 00402440
// Address Range: [[00402440, 004024a1]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextColor_FUN_00402440(char *text,int x,int y)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextColor_FUN_00402440(char *text,int x,int y)

{
  if (g_INT_0060936c != 0) {
    engine_2d_c_drawTextWrappedColor_FUN_00401ec0
              (text,x,y,g_INT_01c35e50,g_INT_01c35e54,g_INT_00609370);
    return;
  }
  engine_2d_c_drawTextMultilineColor_FUN_00401f50
            (text,x,y,g_INT_01c35e50,g_INT_01c35e54,g_INT_00609370);
  return;
}
