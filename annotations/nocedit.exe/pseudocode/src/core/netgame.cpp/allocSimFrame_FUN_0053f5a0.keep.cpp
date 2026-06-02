// Name: core_netgame.cpp_allocSimFrame_FUN_0053f5a0
// Address: 0053f5a0
// MANUAL RECONSTRUCTION
// Address Range: [[0053f5a0, 0053f64b]]
// Convention: __cdecl
// Signature: SSimFrame * __cdecl core_netgame_cpp_allocSimFrame_FUN_0053f5a0(int sequence_number)

#include "nocturne.h"

SSimFrame * __cdecl core_netgame_cpp_allocSimFrame_FUN_0053f5a0(int sequence_number)

{
  int iVar2;
  SSimFrame *dest;

  iVar2 = 0;
  if (0 < g_SimFrameCount) {
    do {
      if (sequence_number == g_SimFrameHistory[iVar2].sequence_number) {
        if (-1 < iVar2) {
          return &g_SimFrameHistory[iVar2];
        }
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < g_SimFrameCount);
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
