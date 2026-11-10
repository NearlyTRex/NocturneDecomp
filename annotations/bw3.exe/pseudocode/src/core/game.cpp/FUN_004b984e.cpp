// Name: core_game.cpp_FUN_004b984e
// Address: 004b984e
// Address Range: [[004b984e, 004b98e4]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004b984e(int param_1,int param_2,float *param_3,float param_4,float param_5)

#include "nocturne.h"

void core_game_cpp_FUN_004b984e(int param_1,int param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  
  if ((&DAT_01c6cef0)[param_1] == '\0') {
    if ((((&DAT_01c6cef0)[param_2] != '\0') && (*param_3 < param_5)) &&
       (fVar1 = (g_CGamePtr->delta_time_float * param_5) / param_4 + *param_3, *param_3 = fVar1,
       param_5 < fVar1)) {
      *param_3 = param_5;
      return;
    }
  }
  else {
    fVar1 = -param_5;
    if ((fVar1 < *param_3) &&
       (fVar2 = *param_3 - (g_CGamePtr->delta_time_float * param_5) / param_4, *param_3 = fVar2,
       fVar2 < fVar1)) {
      *param_3 = fVar1;
      return;
    }
  }
  return;
}
