// Name: core_game.cpp_drawHealthBar_FUN_004d7fa0
// Address: 004d7fa0
// Address Range: [[004d7fa0, 004d8039]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawHealthBar_FUN_004d7fa0(int x1,int y1,int x2,int y2,float fill_percent)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_game_cpp_drawHealthBar_FUN_004d7fa0(int x1,int y1,int x2,int y2,float fill_percent)

{
  int color;
  int iVar1;
  
  color = 2;
  if (fill_percent < (float)0.59999999999999998) {
    color = 0xfb;
  }
  if (fill_percent < (float)0.34999999999999998) {
    color = 1;
  }
  engine_2d_c_fillRectWithBorder_FUN_00403200(x1,y1,x2,y2,0,0);
  iVar1 = (int)ROUND(ROUND((float)((x2 - x1) + 1) * fill_percent));
  if (iVar1 < 1) {
    return;
  }
  engine_2d_c_fillRectColor_FUN_00403170(x1,y1,x1 + iVar1,y2,color);
  return;
}
