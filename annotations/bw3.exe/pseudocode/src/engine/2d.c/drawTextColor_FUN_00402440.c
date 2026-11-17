// Name: engine_2d.c_drawTextColor_FUN_00402440
// Address: 00402440
// Address Range: [[00402440, 004024a1]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextColor_FUN_00402440(char *text,int x,int y)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextColor_FUN_00402440(char *text,int x,int y)

{
  if (g_INT_005f076c != 0) {
    engine_2d_c_drawTextWrappedColor_FUN_00401ec0
              (text,x,y,g_INT_01c6b5b0,g_INT_01c6b5b4,g_INT_005f0770);
    return;
  }
  engine_2d_c_drawTextMultilineColor_FUN_00401f50
            (text,x,y,g_INT_01c6b5b0,g_INT_01c6b5b4,g_INT_005f0770);
  return;
}
