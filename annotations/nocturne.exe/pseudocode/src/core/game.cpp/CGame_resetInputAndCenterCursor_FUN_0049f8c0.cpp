// Name: core_game.cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0
// Address: 0049f8c0
// Address Range: [[0049f8c0, 0049f92e]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0(CGame *this_ptr)

{
  SPlayerInput *dest;
  int value;
  ulong count;
  
  count = 0x2c;
  value = 0;
  dest = core_netgame_cpp_CNetGame_getMyControls_FUN_004eda40(g_CNetGame_PTR_005bdee0);
  memset(dest,value,count);
  memset(&DAT_01c781c0,0,600);
  _DAT_01c78418 = 0;
  wincore_winrun_cpp_setCursorPosition_FUN_00558d60(g_WindowWidth / 2,g_WindowHeight / 2);
  _DAT_01c7841c = g_CDemonSet_PTR_005be368->selected_camera_index;
  return;
}
