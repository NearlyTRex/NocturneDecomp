// Name: core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004ba490
// Address: 004ba490
// Address Range: [[004ba490, 004ba53c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004ba490(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004ba490(CGame *this_ptr)

{
  SPlayerInput *dest;
  int value;
  ulong count;
  
  count = 0x34;
  value = 0;
  dest = core_netgame_cpp_CNetGame_getMyControls_FUN_00507f10(g_CNetGamePtr);
  memset(dest,value,count);
  memset(g_PrevKeyboardState,0,600);
  g_INT_01d221fc = g_CDemonSetPtr->selected_camera_index;
  if ((g_CFieldNotesPtr->is_displayed == 0) && (g_CPuzzle_PTR_007dffb4 == (CPuzzle *)0x0)) {
    g_InputResetFlag = g_CFieldNotesPtr->is_displayed;
    wincore_winrun_cpp_setCursorPosition_FUN_005809d0(g_INT_005fba18 / 2,g_INT_005fba1c / 2);
  }
  if (g_CFieldNotesPtr->is_displayed != 0) {
    g_INT_01d22b48 = -1;
  }
  if (g_CPuzzle_PTR_007dffb4 == (CPuzzle *)0x0) {
    return;
  }
  g_INT_01d22b48 = -1;
  return;
}
