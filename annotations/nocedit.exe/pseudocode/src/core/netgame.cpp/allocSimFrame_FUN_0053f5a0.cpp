// Name: core_netgame.cpp_allocSimFrame_FUN_0053f5a0
// Address: 0053f5a0
// Address Range: [[0053f5a0, 0053f64b]]
// Convention: __cdecl
// Signature: SSimFrame * __cdecl core_netgame_cpp_allocSimFrame_FUN_0053f5a0(int sequence_number)

#include "nocturne.h"

SSimFrame * __cdecl core_netgame_cpp_allocSimFrame_FUN_0053f5a0(int sequence_number)

{
  int iVar1;
  int iVar2;
  SSimFrame *dest;
  
  iVar2 = 0;
  if (0 < g_SimFrameCount) {
    iVar1 = 0;
    do {
      if (sequence_number == *(int *)((int)g_SimFrameHistory[0].player_input + iVar1 + -0xc)) {
        if (-1 < iVar2) {
          return (SSimFrame *)((int)g_SimFrameHistory[0].player_input + iVar1 + -0xc);
        }
        break;
      }
      iVar1 = iVar1 + 100;
      iVar2 = iVar2 + 1;
    } while (iVar1 < g_SimFrameCount * 100);
  }
  if (0x1ff < g_SimFrameCount) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 299;
    core_main_c_displayErrorAndQuit_FUN_00506f10("allocSimFrame - sim history list full");
  }
  dest = g_SimFrameHistory + g_SimFrameCount;
  g_SimFrameCount = g_SimFrameCount + 1;
  memset(dest,0,100);
  dest->sequence_number = sequence_number;
  return dest;
}
