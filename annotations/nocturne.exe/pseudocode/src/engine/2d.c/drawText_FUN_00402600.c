// Name: engine_2d.c_drawText_FUN_00402600
// Address: 00402600
// Address Range: [[00402600, 00402653]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawText_FUN_00402600(char *text,int x,int y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_drawText_FUN_00402600(char *text,int x,int y)

{
  if (DAT_005acaa4 != 0) {
    engine_2d_c_drawTextWrapped_FUN_00402290(text,x,y,_DAT_01c00c60,_DAT_01c00c64);
    return;
  }
  engine_2d_c_drawTextMultiline_FUN_00402320(text,x,y,_DAT_01c00c60,_DAT_01c00c64);
  return;
}
