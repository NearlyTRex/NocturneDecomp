// Name: core_event.cpp_CEventList_resetGameFlags_FUN_004910b0
// Address: 004910b0
// Address Range: [[004910b0, 00491102]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_resetGameFlags_FUN_004910b0(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_resetGameFlags_FUN_004910b0(CEventList *this_ptr)

{
  CGame *pCVar1;
  
  pCVar1 = g_CGamePtr;
  (this_ptr->game_flags).count = 0;
  if (pCVar1->puzzle_difficulty_mode == 1) {
    core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_00491110(this_ptr,"puzzleModeHard",1)
    ;
  }
  if (g_CGamePtr->combat_difficulty_mode != 1) {
    return;
  }
  core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_00491110(this_ptr,"combatModeHard",1);
  return;
}
