// Name: engine_2d.c_FUN_00402600
// Address: 00402600
// Address Range: [[00402600, 00402634]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_FUN_00402600(char *text,int x,int y)

#include "nocturne.h"

void __cdecl engine_2d_c_FUN_00402600(char *text,int x,int y)

{
  int iVar1;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_004018b0(text);
  engine_2d_c_drawTextColor_FUN_00402440(text,x - (iVar1 + -1) / 2,y);
  return;
}
