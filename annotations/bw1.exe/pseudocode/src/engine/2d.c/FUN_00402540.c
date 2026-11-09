// Name: engine_2d.c_FUN_00402540
// Address: 00402540
// Address Range: [[00402540, 0040256b]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_FUN_00402540(char *text,int x,int y)

#include "nocturne.h"

void __cdecl engine_2d_c_FUN_00402540(char *text,int x,int y)

{
  int iVar1;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_004018b0(text);
  engine_2d_c_drawTextColor_FUN_00402440(text,(x - iVar1) + 2,y);
  return;
}
