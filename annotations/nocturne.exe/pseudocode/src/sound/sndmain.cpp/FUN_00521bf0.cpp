// Name: sound_sndmain.cpp_FUN_00521bf0
// Address: 00521bf0
// Address Range: [[00521bf0, 00521c4f]]
// Convention: unknown
// Signature: int sound_sndmain_cpp_FUN_00521bf0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sound_sndmain_cpp_FUN_00521bf0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_02dc84bc < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 502;
    core_main_c_displayErrorAndQuit_FUN_004c8440("SfxSlot::kill - must be locked!");
  }
  iVar3 = 0;
  iVar2 = 0;
  iVar1 = g_CSfxSlot_ARRAY_02dbd374[0].playback_state;
  while( true ) {
    if (iVar1 == 0) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    if (0x47ff < iVar2 + 0x120) break;
    iVar1 = *(int *)((int)g_CSfxSlot_ARRAY_02dbd374[1].distance_to_speakers + iVar2 + -0xc);
    iVar2 = iVar2 + 0x120;
  }
  return -1;
}
