// Name: core_game.cpp_drawHealthBar_FUN_004cc210
// Address: 004cc210
// Address Range: [[004cc210, 004cc2a9]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawHealthBar_FUN_004cc210(int x1,int y1,int x2,int y2,float fill_percent)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_drawHealthBar_FUN_004cc210(int x1,int y1,int x2,int y2,float fill_percent)

{
  int color;
  float10 fVar1;
  
  color = 2;
  if (fill_percent < (float)_DAT_005e138c) {
    color = 0xfb;
  }
  if (fill_percent < (float)_DAT_005e1394) {
    color = 1;
  }
  engine_2d_c_fillRectWithBorder_FUN_00403250(x1,y1,x2,y2,0,0);
  fVar1 = (float10)((x2 - x1) + 1) * (float10)fill_percent;
  round();
  if ((int)ROUND(fVar1) < 1) {
    return;
  }
  engine_2d_c_fillRectColor_FUN_004031c0(x1,y1,x1 + (int)ROUND(fVar1),y2,color);
  return;
}
