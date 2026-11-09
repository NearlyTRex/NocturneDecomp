// Name: core_game.cpp_drawHealthBar_FUN_004cc210
// Address: 004cc210
// Address Range: [[004cc210, 004cc2a9]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawHealthBar_FUN_004cc210(int param_1,int param_2,int param_3,int param_4,float param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_drawHealthBar_FUN_004cc210(int param_1,int param_2,int param_3,int param_4,float param_5)

{
  int color;
  float10 fVar1;
  
  color = 2;
  if (param_5 < (float)_DAT_005e138c) {
    color = 0xfb;
  }
  if (param_5 < (float)_DAT_005e1394) {
    color = 1;
  }
  engine_2d_c_fillRectWithBorder_FUN_00403250(param_1,param_2,param_3,param_4,0,0);
  fVar1 = (float10)((param_3 - param_1) + 1) * (float10)param_5;
  round();
  if ((int)ROUND(fVar1) < 1) {
    return;
  }
  engine_2d_c_fillRectColor_FUN_004031c0(param_1,param_2,param_1 + (int)ROUND(fVar1),param_4,color);
  return;
}
