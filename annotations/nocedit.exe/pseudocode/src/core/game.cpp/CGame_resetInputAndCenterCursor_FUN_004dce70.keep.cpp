// Name: core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
// Address: 004dce70
// MANUAL RECONSTRUCTION
// Address Range: [[004dce70, 004dcede]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(CGame *this_ptr)

{
  SPlayerInput *dest;
  int value;
  ulong count;

  count = sizeof(SPlayerInput);
  value = 0;
  dest = core_netgame_cpp_CNetGame_getMyControls_FUN_005438c0(g_CNetGamePtr);
  memset(dest,value,count);
  memset(g_PrevKeyboardState,0,sizeof(g_PrevKeyboardState));
  g_InputResetFlag = 0;
#if NOCTURNE_AUTHENTIC_UI_CURSOR_WARP
  wincore_winrun_cpp_setCursorPosition_FUN_005f30d0(g_WindowWidth / 2,g_WindowHeight / 2);
#else
  if (g_ModalDialogActive == 0) {
    wincore_winrun_cpp_setCursorPosition_FUN_005f30d0(g_WindowWidth / 2,g_WindowHeight / 2);
  }
#endif
  g_StoredCameraValue = g_CDemonSetPtr->selected_camera_index;
  return;
}
