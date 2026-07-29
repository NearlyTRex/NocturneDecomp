// Name: core_game.cpp_drawHealthBar_FUN_0049aab0
// Address: 0049aab0
// Address Range: [[0049aab0, 0049ab49]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawHealthBar_FUN_0049aab0(int x1,int y1,int x2,int y2,float fill_percent)

#include "nocturne.h"

void __cdecl core_game_cpp_drawHealthBar_FUN_0049aab0(int x1,int y1,int x2,int y2,float fill_percent)

{
  int color;
  double dVar1;
  
  color = 2;
  if (fill_percent < (float)0.59999999999999998) {
    color = 0xfb;
  }
  if (fill_percent < (float)0.34999999999999998) {
    color = 1;
  }
  engine_2d_c_fillRectWithBorder_FUN_00403ef0(x1,y1,x2,y2,0,0);
  dVar1 = round((double)((float)((x2 - x1) + 1) * fill_percent));
  if ((int)ROUND(dVar1) < 1) {
    return;
  }
  engine_2d_c_fillRectColor_FUN_00403e60(x1,y1,x1 + (int)ROUND(dVar1),x2,color);
  return;
}
