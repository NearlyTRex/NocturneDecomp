// Name: core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004b8250
// Address: 004b8250
// Address Range: [[004b8250, 004b82d2]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004b8250(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004b8250(CGame *this_ptr)

{
  SPlayerInput *dest;
  int value;
  ulong count;
  
  count = 0x34;
  value = 0;
  dest = core_netgame_cpp_CNetGame_getMyControls_FUN_0050f430(g_CNetGamePtr);
  memset(dest,value,count);
  memset(&DAT_01cb7528,0,600);
  _DAT_01cb7784 = g_CDemonSetPtr->selected_camera_index;
  if ((*(int *)&g_CFieldNotesPtr->field_0x40 == 0) && (_DAT_026677e0 == 0)) {
    _DAT_01cb7780 = *(int *)&g_CFieldNotesPtr->field_0x40;
    wincore_winrun_cpp_setCursorPosition_FUN_0058ed10(DAT_006141b8 / 2,DAT_006141bc / 2);
    return;
  }
  return;
}
