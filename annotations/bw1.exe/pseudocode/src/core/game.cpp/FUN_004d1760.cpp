// Name: core_game.cpp_FUN_004d1760
// Address: 004d1760
// Address Range: [[004d1760, 004d17b2]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004d1760(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004d1760(int param_1,int param_2)

{
  if (param_2 == *(int *)(param_1 + 0x25c)) {
    return;
  }
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x25c) = 0;
    core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0(g_CDemonSetPtr,_DAT_01cd0c64);
    return;
  }
  _DAT_01cd0c64 = g_CDemonSetPtr->selected_camera_index;
  *(int *)(param_1 + 0x25c) = param_2;
  return;
}
