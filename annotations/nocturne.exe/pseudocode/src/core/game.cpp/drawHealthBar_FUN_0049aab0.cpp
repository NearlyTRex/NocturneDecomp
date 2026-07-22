// Name: core_game.cpp_drawHealthBar_FUN_0049aab0
// Address: 0049aab0
// Address Range: [[0049aab0, 0049ab49]]
// Convention: unknown
// Signature: void core_game_cpp_drawHealthBar_FUN_0049aab0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,float param_5)

#include "nocturne.h"

void core_game_cpp_drawHealthBar_FUN_0049aab0(int param_1,uint param_2,int param_3,uint param_4,float param_5)

{
  uint uVar1;
  float10 fVar2;
  
  uVar1 = 2;
  if (param_5 < (float)0.59999999999999998) {
    uVar1 = 0xfb;
  }
  if (param_5 < (float)0.34999999999999998) {
    uVar1 = 1;
  }
  engine_2d_c_fillRectWithBorder_FUN_00403ef0(param_1,param_2,param_3,param_4,0,0);
  fVar2 = (float10)round
                             ((float10)((param_3 - param_1) + 1) * (float10)param_5);
  if ((int)ROUND(fVar2) < 1) {
    return;
  }
  engine_2d_c_fillRectColor_FUN_00403e60(param_1,param_2,param_1 + (int)ROUND(fVar2),param_3,uVar1);
  return;
}
