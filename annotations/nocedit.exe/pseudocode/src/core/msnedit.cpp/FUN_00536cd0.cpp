// Name: core_msnedit.cpp_FUN_00536cd0
// Address: 00536cd0
// Address Range: [[00536cd0, 00536e11]]
// Convention: __cdecl
// Signature: int __cdecl core_msnedit_cpp_FUN_00536cd0(char *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

int __cdecl
core_msnedit_cpp_FUN_00536cd0(char *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int y1;
  bool bVar1;
  int iVar2;
  int y1_00;
  uint uVar3;
  int x1;
  uint local_1c;
  
  iVar2 = engine_2d_c_getStringWidth_FUN_004018a0(param_1);
  iVar2 = param_2 + iVar2;
  y1 = param_3 + 0xb;
  if (param_5 == 0) {
    local_1c = -1;
  }
  else {
    local_1c = 7;
  }
  bVar1 = false;
  if ((((g_ActiveButton == (CEdButton *)0x0) && (param_2 < g_MouseX)) && (g_MouseX < iVar2)) &&
     ((param_3 <= g_MouseY && (g_MouseY < y1)))) {
    bVar1 = true;
    local_1c = 1;
  }
  engine_2d_c_drawText_FUN_00401fd0(param_1,param_2,param_3);
  if (-1 < local_1c) {
    y1_00 = param_3 + -2;
    x1 = param_2 + -2;
    g_ActiveRenderColor = local_1c;
    engine_2d_c_drawLine_FUN_004011b0(x1,y1_00,iVar2,y1_00);
    engine_2d_c_drawLine_FUN_004011b0(x1,y1,iVar2,y1);
    engine_2d_c_drawLine_FUN_004011b0(x1,y1_00,x1,y1);
    engine_2d_c_drawLine_FUN_004011b0(iVar2,y1_00,iVar2,y1);
  }
  uVar3 = g_MouseButtonFlags & 1;
  if (((param_4 == 0) && (0.0 < FLOAT_02f7c630)) && (FLOAT_02f7c630 < (float)0.29999999999999999)) {
    uVar3 = 0;
  }
  if ((bVar1) && (uVar3 != 0)) {
    if (param_4 != 0) {
      g_MouseButtonFlags = 0;
    }
    return 1;
  }
  return 0;
}
