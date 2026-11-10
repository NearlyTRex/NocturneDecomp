// Name: core_health.cpp_FUN_004d20c0
// Address: 004d20c0
// Address Range: [[004d20c0, 004d2121]]
// Convention: unknown
// Signature: undefined4 core_health_cpp_FUN_004d20c0(int param_1,int param_2)

#include "nocturne.h"

uint core_health_cpp_FUN_004d20c0(int param_1,int param_2)

{
  CGame *this_ptr;
  
  if (0 < *(int *)(param_1 + 0x2d4)) {
    *(float *)(param_2 + 0x2538) = *(float *)(param_1 + 0x2d8) + *(float *)(param_2 + 0x2538);
    if (0x42c80000 < *(int *)(param_2 + 0x2538)) {
      *(uint *)(param_2 + 0x2538) = 0x42c80000;
    }
    this_ptr = g_CGamePtr;
    *(int *)(param_1 + 0x2d4) = *(int *)(param_1 + 0x2d4) + -1;
    core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004bd910(this_ptr);
  }
  return *(uint *)(param_1 + 0x2d4);
}
