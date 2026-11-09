// Name: engine_2d.c_drawText_FUN_00401fe0
// Address: 00401fe0
// Address Range: [[00401fe0, 00402033]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawText_FUN_00401fe0(char *text,int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_drawText_FUN_00401fe0(char *text,int x,int y)

{
  if (DAT_0060936c != 0) {
    engine_2d_c_drawTextWrapped_FUN_00401c70(text,x,y,_DAT_01c35e50,_DAT_01c35e54);
    return;
  }
  engine_2d_c_drawTextMultiline_FUN_00401d00(text,x,y,_DAT_01c35e50,_DAT_01c35e54);
  return;
}
