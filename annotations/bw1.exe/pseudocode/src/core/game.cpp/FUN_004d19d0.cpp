// Name: core_game.cpp_FUN_004d19d0
// Address: 004d19d0
// Address Range: [[004d19d0, 004d1a7c]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004d19d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004d19d0(void)

{
  SPlayerInput *dest;
  int value;
  ulong count;
  
  count = 0x30;
  value = 0;
  dest = core_netgame_cpp_CNetGame_getMyControls_FUN_00530660(g_CNetGamePtr);
  memset(dest,value,count);
  memset(&DAT_01ccff98,0,600);
  _DAT_01cd01f4 = *(uint *)&g_CDemonSetPtr->field_0x15aeb8;
  if ((*(int *)&g_CFieldNotesPtr->field_0x40 == 0) && (DAT_007c3978 == 0)) {
    _DAT_01cd01f0 = *(int *)&g_CFieldNotesPtr->field_0x40;
    wincore_winrun_cpp_setCursorPosition_FUN_005b2750(DAT_0061b498 / 2,DAT_0061b49c / 2);
  }
  if (*(int *)&g_CFieldNotesPtr->field_0x40 != 0) {
    _DAT_01cd0b40 = 0xffffffff;
  }
  if (DAT_007c3978 == 0) {
    return;
  }
  _DAT_01cd0b40 = 0xffffffff;
  return;
}
