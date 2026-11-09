// Name: core_game.cpp_FUN_004ba280
// Address: 004ba280
// Address Range: [[004ba280, 004ba2d2]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004ba280(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004ba280(int param_1,int param_2)

{
  if (param_2 == *(int *)(param_1 + 0x268)) {
    return;
  }
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x268) = 0;
    core_set_cpp_CDemonSet_setCameraView_FUN_00534890(g_CDemonSetPtr,_DAT_01d22c6c);
    return;
  }
  _DAT_01d22c6c = *(int *)&g_CDemonSetPtr->field_0x15aeb8;
  *(int *)(param_1 + 0x268) = param_2;
  return;
}
