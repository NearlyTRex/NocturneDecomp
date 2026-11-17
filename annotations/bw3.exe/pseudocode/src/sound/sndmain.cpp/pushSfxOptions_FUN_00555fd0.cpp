// Name: sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0
// Address: 00555fd0
// Address Range: [[00555fd0, 00556041]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0(void)

{
  int iVar1;
  CSfxOptions *pCVar2;
  CSfxOptions *pCVar3;
  byte bVar4;
  
  bVar4 = 0;
  g_INT_02ceb91c = g_INT_02ceb91c + 1;
  if (7 < g_INT_02ceb91c) {
    g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
    g_INT_01d71de4 = 0xe9b;
    core_main_c_displayErrorAndQuit_FUN_004e4330("pushSfxOptions - stack full");
  }
  pCVar2 = g_CSfxOptions_ARRAY_02ceb920 + g_INT_02ceb91c + -1;
  pCVar3 = g_CSfxOptions_ARRAY_02ceb920 + g_INT_02ceb91c;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->channel_index = pCVar2->channel_index;
    pCVar2 = (CSfxOptions *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar3 = (CSfxOptions *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return;
}
