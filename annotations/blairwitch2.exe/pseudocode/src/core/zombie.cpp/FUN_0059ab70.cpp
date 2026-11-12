// Name: core_zombie.cpp_FUN_0059ab70
// Address: 0059ab70
// Address Range: [[0059ab70, 0059abaf]]
// Convention: unknown
// Signature: void core_zombie_cpp_FUN_0059ab70(int *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_zombie_cpp_FUN_0059ab70(int *param_1,int *param_2)

{
  _DAT_026677e0 = param_2;
  if (param_2 != (int *)0x0) {
    _DAT_026677e0 = param_1;
    _DAT_026677e8 = _DAT_01c2a384;
  }
  (**(code **)(*param_1 + 0x14))(param_1,param_2);
  core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004b8250(g_CGamePtr);
  return;
}
