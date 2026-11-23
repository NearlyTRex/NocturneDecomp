// Name: core_netgame.cpp_allocSimFrame_FUN_00503c40
// Address: 00503c40
// Address Range: [[00503c40, 00503ceb]]
// Convention: __cdecl
// Signature: SSimFrame * __cdecl core_netgame_cpp_allocSimFrame_FUN_00503c40(int sequence_number)

#include "nocturne.h"

SSimFrame * __cdecl core_netgame_cpp_allocSimFrame_FUN_00503c40(int sequence_number)

{
  int iVar1;
  int iVar2;
  SSimFrame *dest;
  
  iVar2 = 0;
  if (0 < g_SimFrameCount) {
    iVar1 = 0;
    do {
      if (sequence_number ==
          *(int *)((int)g_SSimFrame_ARRAY_01dc5c84[0].player_input + iVar1 + -0xc)) {
        if (-1 < iVar2) {
          return (SSimFrame *)((int)g_SSimFrame_ARRAY_01dc5c84[0].player_input + iVar1 + -0xc);
        }
        break;
      }
      iVar1 = iVar1 + 0x74;
      iVar2 = iVar2 + 1;
    } while (iVar1 < g_SimFrameCount * 0x74);
  }
  if (0x1ff < g_SimFrameCount) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 299;
    core_main_c_displayErrorAndQuit_FUN_004e4330("allocSimFrame - sim history list full");
  }
  dest = g_SSimFrame_ARRAY_01dc5c84 + g_SimFrameCount;
  g_SimFrameCount = g_SimFrameCount + 1;
  memset(dest,0,0x74);
  dest->sequence_number = sequence_number;
  return dest;
}
