// Name: engine_2d.c_drawTextCenteredAt_FUN_00402280
// Address: 00402280
// Address Range: [[00402280, 004022b4]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextCenteredAt_FUN_00402280(char * text, int center_x, int y_pos)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextCenteredAt_FUN_00402280(char *text,int center_x,int y_pos)

{
  int iVar1;
  int unaff_EBX;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(text);
  engine_2d_c_drawText_FUN_00401fd0((char *)center_x,y_pos - (iVar1 + -1) / 2,unaff_EBX);
  return;
}
