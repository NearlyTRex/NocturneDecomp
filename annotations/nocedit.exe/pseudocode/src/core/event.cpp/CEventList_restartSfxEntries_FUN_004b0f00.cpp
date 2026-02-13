// Name: core_event.cpp_CEventList_restartSfxEntries_FUN_004b0f00
// Address: 004b0f00
// Address Range: [[004b0f00, 004b0f89]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_restartSfxEntries_FUN_004b0f00(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_restartSfxEntries_FUN_004b0f00(CEventList *this_ptr)

{
  uint uVar1;
  int iVar2;
  SSfxEntry *pSVar3;
  char *filename;
  
  iVar2 = 0;
  if (0 < (this_ptr->sfx_handles).count) {
    filename = (this_ptr->sfx_handles).entries[0].sound_filename;
    do {
      pSVar3 = (this_ptr->sfx_handles).entries + iVar2;
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0(pSVar3->playback_position,1);
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(1);
      uVar1 = sound_sndmain_cpp_startSfx_FUN_005a8e90(filename);
      iVar2 = iVar2 + 1;
      pSVar3->sfx_handle = uVar1;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      filename = filename + 0x120;
    } while (iVar2 < (this_ptr->sfx_handles).count);
  }
  core_event_cpp_CEventList_updateSfxEntries_FUN_004b0db0(this_ptr);
  return;
}
