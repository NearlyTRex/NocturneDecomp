// Name: core_game.cpp_FUN_004ba490
// Address: 004ba490
// Address Range: [[004ba490, 004ba53c]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004ba490(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004ba490(void)

{
  SPlayerInput *dest;
  int value;
  ulong count;
  
  count = 0x34;
  value = 0;
  dest = core_netgame_cpp_CNetGame_getMyControls_FUN_00507f10(g_CNetGamePtr);
  memset(dest,value,count);
  memset(&DAT_01d21fa0,0,600);
  _DAT_01d221fc = g_CDemonSetPtr->selected_camera_index;
  if ((*(int *)&g_CFieldNotesPtr->field_0x40 == 0) && (DAT_007dffb4 == 0)) {
    _DAT_01d221f8 = *(int *)&g_CFieldNotesPtr->field_0x40;
    wincore_winrun_cpp_setCursorPosition_FUN_005809d0(DAT_005fba18 / 2,DAT_005fba1c / 2);
  }
  if (*(int *)&g_CFieldNotesPtr->field_0x40 != 0) {
    _DAT_01d22b48 = 0xffffffff;
  }
  if (DAT_007dffb4 == 0) {
    return;
  }
  _DAT_01d22b48 = 0xffffffff;
  return;
}
