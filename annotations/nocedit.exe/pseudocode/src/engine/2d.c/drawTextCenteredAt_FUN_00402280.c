// Name: engine_2d.c_drawTextCenteredAt_FUN_00402280
// Address: 00402280
// Address Range: [[00402280, 004022b4]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextCenteredAt_FUN_00402280(char *text,int x_pos,int y_pos)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextCenteredAt_FUN_00402280(char *text,int x_pos,int y_pos)

{
  int iVar1;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(text);
  engine_2d_c_drawText_FUN_00401fd0(text,x_pos - (iVar1 + -1) / 2,y_pos);
  return;
}
