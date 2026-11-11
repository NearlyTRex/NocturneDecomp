// Name: core_event.cpp_FUN_004910b0
// Address: 004910b0
// Address Range: [[004910b0, 00491102]]
// Convention: unknown
// Signature: void core_event_cpp_FUN_004910b0(CEventList *param_1)

#include "nocturne.h"

void core_event_cpp_FUN_004910b0(CEventList *param_1)

{
  CGame *pCVar1;
  
  pCVar1 = g_CGamePtr;
  (param_1->game_flags).count = 0;
  if (pCVar1->puzzle_difficulty_mode == 1) {
    core_event_cpp_FUN_00491110(param_1,"puzzleModeHard",1);
  }
  if (g_CGamePtr->combat_difficulty_mode != 1) {
    return;
  }
  core_event_cpp_FUN_00491110(param_1,"combatModeHard",1);
  return;
}
