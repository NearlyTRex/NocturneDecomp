// Name: core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004b8250
// Address: 004b8250
// Address Range: [[004b8250, 004b82d2]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004b8250(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004b8250(CGame *this_ptr)

{
  SPlayerInput *dest;
  int value;
  ulong count;
  
  count = 0x34;
  value = 0;
  dest = core_netgame_cpp_CNetGame_getMyControls_FUN_0050f430(g_CNetGamePtr);
  memset(dest,value,count);
  memset(g_PrevKeyboardState,0,600);
  g_StoredCameraValue = g_CDemonSetPtr->selected_camera_index;
  if ((g_CFieldNotesPtr->is_displayed == 0) && (g_INT_026677e0 == 0)) {
    g_InputResetFlag = g_CFieldNotesPtr->is_displayed;
    wincore_winrun_cpp_setCursorPosition_FUN_0058ed10(g_INT_006141b8 / 2,g_INT_006141bc / 2);
    return;
  }
  return;
}
