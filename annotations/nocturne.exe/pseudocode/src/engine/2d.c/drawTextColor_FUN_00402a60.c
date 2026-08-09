// Name: engine_2d.c_drawTextColor_FUN_00402a60
// Address: 00402a60
// Address Range: [[00402a60, 00402ac1]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextColor_FUN_00402a60(char *text,int x,int y)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextColor_FUN_00402a60(char *text,int x,int y)

{
  if (INT_005acaa4 != 0) {
    engine_2d_c_drawTextWrappedColor_FUN_004024e0(text,x,y,g_ClipRight,g_ClipBottom,INT_005acaa8);
    return;
  }
  engine_2d_c_drawTextMultilineColor_FUN_00402570(text,x,y,g_ClipRight,g_ClipBottom,INT_005acaa8);
  return;
}
