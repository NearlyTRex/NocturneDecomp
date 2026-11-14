// Name: core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004d19d0
// Address: 004d19d0
// Address Range: [[004d19d0, 004d1a7c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004d19d0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004d19d0(CGame *this_ptr)

{
  SPlayerInput *dest;
  int value;
  ulong count;
  
  count = 0x30;
  value = 0;
  dest = core_netgame_cpp_CNetGame_getMyControls_FUN_00530660(g_CNetGamePtr);
  memset(dest,value,count);
  memset(&DAT_01ccff98,0,600);
  _DAT_01cd01f4 = g_CDemonSetPtr->selected_camera_index;
  if ((g_CFieldNotesPtr->is_displayed == 0) && (DAT_007c3978 == 0)) {
    _DAT_01cd01f0 = g_CFieldNotesPtr->is_displayed;
    wincore_winrun_cpp_setCursorPosition_FUN_005b2750(DAT_0061b498 / 2,DAT_0061b49c / 2);
  }
  if (g_CFieldNotesPtr->is_displayed != 0) {
    _DAT_01cd0b40 = 0xffffffff;
  }
  if (DAT_007c3978 == 0) {
    return;
  }
  _DAT_01cd0b40 = 0xffffffff;
  return;
}
