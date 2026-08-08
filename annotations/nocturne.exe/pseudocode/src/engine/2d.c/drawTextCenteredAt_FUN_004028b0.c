// Name: engine_2d.c_drawTextCenteredAt_FUN_004028b0
// Address: 004028b0
// Address Range: [[004028b0, 004028e4]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextCenteredAt_FUN_004028b0(char *text,int x,int y)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextCenteredAt_FUN_004028b0(char *text,int x,int y)

{
  int iVar1;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_00401ed0(text);
  engine_2d_c_drawText_FUN_00402600(text,x - (iVar1 + -1) / 2,y);
  return;
}
