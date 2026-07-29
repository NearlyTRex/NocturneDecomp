// Name: engine_2d.c_FUN_004027f0
// Address: 004027f0
// Address Range: [[004027f0, 0040281b]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_FUN_004027f0(char *text,int x,int y)

#include "nocturne.h"

void __cdecl engine_2d_c_FUN_004027f0(char *text,int x,int y)

{
  int iVar1;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_00401ed0(text);
  engine_2d_c_drawText_FUN_00402600(text,(x - iVar1) + 2,y);
  return;
}
