// Name: engine_2d.c_drawTextCenteredAtColor_FUN_00402c20
// Address: 00402c20
// Address Range: [[00402c20, 00402c54]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextCenteredAtColor_FUN_00402c20(char *text,int x,int y)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextCenteredAtColor_FUN_00402c20(char *text,int x,int y)

{
  int iVar1;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_00401ed0(text);
  engine_2d_c_drawTextColor_FUN_00402a60(text,x - (iVar1 + -1) / 2,y);
  return;
}
