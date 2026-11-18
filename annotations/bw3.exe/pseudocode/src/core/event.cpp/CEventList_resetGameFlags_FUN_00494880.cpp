// Name: core_event.cpp_CEventList_resetGameFlags_FUN_00494880
// Address: 00494880
// Address Range: [[00494880, 004948d2]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_resetGameFlags_FUN_00494880(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_resetGameFlags_FUN_00494880(CEventList *this_ptr)

{
  CGame *pCVar1;
  
  pCVar1 = g_CGamePtr;
  (this_ptr->game_flags).count = 0;
  if (pCVar1->puzzle_difficulty_mode == 1) {
    core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_004948e0(this_ptr,"puzzleModeHard",1)
    ;
  }
  if (g_CGamePtr->combat_difficulty_mode != 1) {
    return;
  }
  core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_004948e0(this_ptr,"combatModeHard",1);
  return;
}
