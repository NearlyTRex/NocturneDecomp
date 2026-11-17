// Name: sound_sndmain.cpp_getActiveSfxCount_FUN_005513f0
// Address: 005513f0
// Address Range: [[005513f0, 0055144f]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getActiveSfxCount_FUN_005513f0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getActiveSfxCount_FUN_005513f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (g_INT_02cf341c < 1) {
    g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
    g_INT_01d71de4 = 0x24b;
    core_main_c_displayErrorAndQuit_FUN_004e4330("SfxSlot::kill - must be locked!");
  }
  iVar3 = 0;
  iVar2 = 0;
  iVar1 = g_CSfxSlot_ARRAY_02ce721c[0].playback_state;
  while( true ) {
    if (iVar1 == 0) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    if (0x46ff < iVar2 + 0x11c) break;
    iVar1 = *(int *)((int)g_CSfxSlot_ARRAY_02ce721c[1].distance_to_speakers + iVar2 + -0xc);
    iVar2 = iVar2 + 0x11c;
  }
  return -1;
}
