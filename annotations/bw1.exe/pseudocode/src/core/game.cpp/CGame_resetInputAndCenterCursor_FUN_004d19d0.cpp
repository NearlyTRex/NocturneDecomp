// Name: core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004d19d0
// Address: 004d19d0
// Address Range: [[004d19d0, 004d1a7c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004d19d0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004d19d0(CGame *this_ptr)

{
  SPlayerInput *dest;
  int value;
  ulong count;
  
  count = 0x30;
  value = 0;
  dest = core_netgame_cpp_CNetGame_getMyControls_FUN_00530660(g_CNetGamePtr);
  memset(dest,value,count);
  memset(g_PrevKeyboardState,0,600);
  g_INT_01cd01f4 = g_CDemonSetPtr->selected_camera_index;
  if ((g_CFieldNotesPtr->is_displayed == 0) && (g_CPuzzle_PTR_007c3978 == (CPuzzle *)0x0)) {
    g_InputResetFlag = g_CFieldNotesPtr->is_displayed;
    wincore_winrun_cpp_setCursorPosition_FUN_005b2750(g_INT_0061b498 / 2,g_INT_0061b49c / 2);
  }
  if (g_CFieldNotesPtr->is_displayed != 0) {
    g_INT_01cd0b40 = -1;
  }
  if (g_CPuzzle_PTR_007c3978 == (CPuzzle *)0x0) {
    return;
  }
  g_INT_01cd0b40 = -1;
  return;
}
