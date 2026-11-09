// Name: engine_2d.c_drawTextColor_FUN_00402440
// Address: 00402440
// Address Range: [[00402440, 004024a1]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextColor_FUN_00402440(char *text,int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_drawTextColor_FUN_00402440(char *text,int x,int y)

{
  if (DAT_0061049c != 0) {
    engine_2d_c_drawTextWrappedColor_FUN_00401ec0(text,x,y,_DAT_01c4f010,_DAT_01c4f014,DAT_006104a0)
    ;
    return;
  }
  engine_2d_c_drawTextMultilineColor_FUN_00401f50(text,x,y,_DAT_01c4f010,_DAT_01c4f014,DAT_006104a0)
  ;
  return;
}
