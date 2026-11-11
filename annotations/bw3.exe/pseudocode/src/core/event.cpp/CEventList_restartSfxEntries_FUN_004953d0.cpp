// Name: core_event.cpp_CEventList_restartSfxEntries_FUN_004953d0
// Address: 004953d0
// Address Range: [[004953d0, 00495459]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_restartSfxEntries_FUN_004953d0(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_restartSfxEntries_FUN_004953d0(CEventList *this_ptr)

{
  uint uVar1;
  int iVar2;
  SSfxEntry *pSVar3;
  char *pcVar4;
  
  iVar2 = 0;
  if (0 < (this_ptr->sfx_handles).count) {
    pcVar4 = (this_ptr->sfx_handles).entries[0].sound_filename;
    do {
      pSVar3 = (this_ptr->sfx_handles).entries + iVar2;
      sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00555f60(pSVar3->playback_position,1);
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_00555f20(1);
      uVar1 = sound_sndmain_cpp_FUN_00556240(pcVar4);
      iVar2 = iVar2 + 1;
      pSVar3->sfx_handle = uVar1;
      sound_sndmain_cpp_popSfxOptions_FUN_00556050();
      pcVar4 = pcVar4 + 0x120;
    } while (iVar2 < (this_ptr->sfx_handles).count);
  }
  core_event_cpp_CEventList_updateSfxEntries_FUN_00495280(this_ptr);
  return;
}
