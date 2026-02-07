// Name: engine_2d.c_drawTextCenteredAtColor_FUN_004025f0
// Address: 004025f0
// Address Range: [[004025f0, 00402624]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawTextCenteredAtColor_FUN_004025f0(char *text,int x,int y)

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextCenteredAtColor_FUN_004025f0(char *text,int x,int y)

{
  int iVar1;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(text);
  engine_2d_c_drawTextColor_FUN_00402430(text,x - (iVar1 + -1) / 2,y);
  return;
}
