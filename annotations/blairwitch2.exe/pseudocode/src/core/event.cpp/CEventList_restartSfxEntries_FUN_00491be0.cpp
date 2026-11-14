// Name: core_event.cpp_CEventList_restartSfxEntries_FUN_00491be0
// Address: 00491be0
// Address Range: [[00491be0, 00491c69]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_restartSfxEntries_FUN_00491be0(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_restartSfxEntries_FUN_00491be0(CEventList *this_ptr)

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
      sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005503e0(pSVar3->playback_position,1);
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_005503a0(1);
      uVar1 = sound_sndmain_cpp_startSfx_FUN_005506b0(filename);
      iVar2 = iVar2 + 1;
      pSVar3->sfx_handle = uVar1;
      sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
      filename = filename + 0x120;
    } while (iVar2 < (this_ptr->sfx_handles).count);
  }
  core_event_cpp_CEventList_updateSfxEntries_FUN_00491a90(this_ptr);
  return;
}
