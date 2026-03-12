// Name: core_msnedit.cpp_drawClickableButton_FUN_00536cd0
// Address: 00536cd0
// Address Range: [[00536cd0, 00536e11]]
// Convention: __cdecl
// Signature: int __cdecl core_msnedit_cpp_drawClickableButton_FUN_00536cd0(char *text,int x,int y,int consume_click,int highlighted)

#include "nocturne.h"

int __cdecl core_msnedit_cpp_drawClickableButton_FUN_00536cd0(char *text,int x,int y,int consume_click,int highlighted)

{
  int x2;
  int iVar2;
  int y1_00;
  uint uVar3;
  int x1;
  uint local_1c;
  int y1;
  bool bVar1;
  
  iVar2 = engine_2d_c_getStringWidth_FUN_004018a0(text);
  x2 = x + iVar2;
  y1 = y + 0xb;
  if (highlighted == 0) {
    local_1c = -1;
  }
  else {
    local_1c = 7;
  }
  bVar1 = false;
  if ((((g_ActiveControl == (void *)0x0) && (x < g_MouseX)) && (g_MouseX < x2)) &&
     ((y <= g_MouseY && (g_MouseY < y1)))) {
    bVar1 = true;
    local_1c = 1;
  }
  engine_2d_c_drawText_FUN_00401fd0(text,x,y);
  if (-1 < local_1c) {
    y1_00 = y + -2;
    x1 = x + -2;
    g_ActiveRenderColor = local_1c;
    engine_2d_c_drawLine_FUN_004011b0(x1,y1_00,x2,y1_00);
    engine_2d_c_drawLine_FUN_004011b0(x1,y1,x2,y1);
    engine_2d_c_drawLine_FUN_004011b0(x1,y1_00,x1,y1);
    engine_2d_c_drawLine_FUN_004011b0(x2,y1_00,x2,y1);
  }
  uVar3 = g_MouseButtonFlags.dword & 1;
  if (((consume_click == 0) && (0.0 < FLOAT_02f7c630)) && (FLOAT_02f7c630 < (float)0.29999999999999999))
  {
    uVar3 = 0;
  }
  if ((bVar1) && (uVar3 != 0)) {
    if (consume_click != 0) {
      g_MouseButtonFlags.dword = 0;
    }
    return 1;
  }
  return 0;
}
