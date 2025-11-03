// Name: core_event.cpp_CEventList_FUN_004b0460
// Address: 004b0460
// Address Range: [[004b0460, 004b046e]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_FUN_004b0460(CEventList * this_ptr)
// Cross-references:
//   core_event.cpp_CEventList_ctor_FUN_004aaa50 (004aaa50) at 004aaa5f [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e13f8 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 (004e1cb0) at 004e1fb3 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0 (00538ba0) at 00538d2e [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_FUN_004b0460(CEventList *this_ptr)

{
  this_ptr->game_flag_count = 0;
  return;
}


// Assembly code:
// 004b0460: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_event.cpp_CEventList_FUN_004b0460
//   XREF to: Stack[0x4] (READ)
// 004b0464: MOV dword ptr [EAX + 0x1908],0x0
// 004b046e: RET
