// Name: core_stranger.cpp_FUN_005c6660
// Address: 005c6660
// Address Range: [[005c6660, 005c669d]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_005c6660(void)

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_FUN_005c6660(uint param_1, uint
   param_2) */

void core_stranger_cpp_FUN_005c6660(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  *(int *)(in_stack_00000004 + 0x1fbd4) = in_stack_00000008;
  if ((in_stack_00000008 == 0) && (g_CGamePtr->auto_save_blocked != 0)) {
    g_CGamePtr->auto_save_blocked = 0;
    (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
    return;
  }
  return;
}
