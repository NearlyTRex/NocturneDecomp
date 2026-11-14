// Name: core_game.cpp_FUN_004ba220
// Address: 004ba220
// Address Range: [[004ba220, 004ba272]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004ba220(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004ba220(int param_1,int param_2)

{
  if (param_2 == *(int *)(param_1 + 0x264)) {
    return;
  }
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x264) = 0;
    core_set_cpp_CDemonSet_setCameraView_FUN_00534890(g_CDemonSetPtr,_DAT_01d22c6c);
    return;
  }
  _DAT_01d22c6c = g_CDemonSetPtr->selected_camera_index;
  *(int *)(param_1 + 0x264) = param_2;
  return;
}
