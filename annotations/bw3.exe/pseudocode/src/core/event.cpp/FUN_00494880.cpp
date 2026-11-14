// Name: core_event.cpp_FUN_00494880
// Address: 00494880
// Address Range: [[00494880, 004948d2]]
// Convention: unknown
// Signature: void core_event_cpp_FUN_00494880(int param_1)

#include "nocturne.h"

void core_event_cpp_FUN_00494880(int param_1)

{
  CGame *pCVar1;
  
  pCVar1 = g_CGamePtr;
  *(uint *)(param_1 + 0x1908) = 0;
  if (pCVar1->puzzle_difficulty_mode == 1) {
    core_event_cpp_FUN_004948e0(param_1,"puzzleModeHard",1);
  }
  if (g_CGamePtr->combat_difficulty_mode != 1) {
    return;
  }
  core_event_cpp_FUN_004948e0(param_1,"combatModeHard",1);
  return;
}
