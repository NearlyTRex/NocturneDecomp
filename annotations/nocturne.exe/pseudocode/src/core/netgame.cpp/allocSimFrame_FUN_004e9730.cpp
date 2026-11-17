// Name: core_netgame.cpp_allocSimFrame_FUN_004e9730
// Address: 004e9730
// Address Range: [[004e9730, 004e97db]]
// Convention: __cdecl
// Signature: SSimFrame * __cdecl core_netgame_cpp_allocSimFrame_FUN_004e9730(int sequence_number)

#include "nocturne.h"

SSimFrame * __cdecl core_netgame_cpp_allocSimFrame_FUN_004e9730(int sequence_number)

{
  int iVar1;
  int iVar2;
  SSimFrame *dest;
  
  iVar2 = 0;
  if (0 < g_INT_01d09c00) {
    iVar1 = 0;
    do {
      if (sequence_number ==
          *(int *)((int)g_SSimFrame_ARRAY_01d09c04[0].player_input + iVar1 + -0xc)) {
        if (-1 < iVar2) {
          return (SSimFrame *)((int)g_SSimFrame_ARRAY_01d09c04[0].player_input + iVar1 + -0xc);
        }
        break;
      }
      iVar1 = iVar1 + 100;
      iVar2 = iVar2 + 1;
    } while (iVar1 < g_INT_01d09c00 * 100);
  }
  if (0x1ff < g_INT_01d09c00) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 299;
    core_main_c_displayErrorAndQuit_FUN_004c8440("allocSimFrame - sim history list full");
  }
  dest = g_SSimFrame_ARRAY_01d09c04 + g_INT_01d09c00;
  g_INT_01d09c00 = g_INT_01d09c00 + 1;
  memset(dest,0,100);
  dest->sequence_number = sequence_number;
  return dest;
}
