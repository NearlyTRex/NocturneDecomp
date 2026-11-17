// Name: core_netgame.cpp_allocSimFrame_FUN_0050b160
// Address: 0050b160
// Address Range: [[0050b160, 0050b20b]]
// Convention: __cdecl
// Signature: SSimFrame * __cdecl core_netgame_cpp_allocSimFrame_FUN_0050b160(int sequence_number)

#include "nocturne.h"

SSimFrame * __cdecl core_netgame_cpp_allocSimFrame_FUN_0050b160(int sequence_number)

{
  int iVar1;
  int iVar2;
  SSimFrame *dest;
  
  iVar2 = 0;
  if (0 < g_SimFrameCount) {
    iVar1 = 0;
    do {
      if (sequence_number ==
          *(int *)((int)g_SSimFrame_ARRAY_01d54644[0].player_input + iVar1 + -0xc)) {
        if (-1 < iVar2) {
          return (SSimFrame *)((int)g_SSimFrame_ARRAY_01d54644[0].player_input + iVar1 + -0xc);
        }
        break;
      }
      iVar1 = iVar1 + 0x74;
      iVar2 = iVar2 + 1;
    } while (iVar1 < g_SimFrameCount * 0x74);
  }
  if (0x1ff < g_SimFrameCount) {
    g_CHAR_PTR_01d046a0 = "..\\core\\netgame.cpp";
    g_INT_01d046a4 = 299;
    core_main_c_displayErrorAndQuit_FUN_004e4500("allocSimFrame - sim history list full");
  }
  dest = g_SSimFrame_ARRAY_01d54644 + g_SimFrameCount;
  g_SimFrameCount = g_SimFrameCount + 1;
  memset(dest,0,0x74);
  dest->sequence_number = sequence_number;
  return dest;
}
