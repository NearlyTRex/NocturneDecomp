// Name: sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
// Address: 005a8c30
// Address Range: [[005a8c30, 005a8ca1]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30(void)

{
  int iVar1;
  CSfxOptions *pCVar2;
  CSfxOptions *pCVar3;
  byte bVar4;
  
  bVar4 = 0;
  g_SfxLastSlot = g_SfxLastSlot + 1;
  if (7 < g_SfxLastSlot) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xd20;
    core_main_c_displayErrorAndQuit_FUN_00506f10("pushSfxOptions - stack full");
  }
  pCVar2 = g_SfxOptions + g_SfxLastSlot + -1;
  pCVar3 = g_SfxOptions + g_SfxLastSlot;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->channel_index = pCVar2->channel_index;
    pCVar2 = (CSfxOptions *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar3 = (CSfxOptions *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return;
}
