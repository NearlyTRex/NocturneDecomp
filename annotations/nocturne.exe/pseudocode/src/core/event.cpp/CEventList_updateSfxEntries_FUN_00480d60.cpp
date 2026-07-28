// Name: core_event.cpp_CEventList_updateSfxEntries_FUN_00480d60
// Address: 00480d60
// Address Range: [[00480d60, 00480ea5]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_updateSfxEntries_FUN_00480d60(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_updateSfxEntries_FUN_00480d60(CEventList *this_ptr)

{
  char cVar1;
  int iVar2;
  SSfxEntry *dest;
  char *pcVar3;
  char *pcVar4;
  double dVar5;
  char local_148 [296];
  ulonglong local_20;
  SSfxEntry *local_18;
  int local_14;
  
  local_14 = 0;
  if (0 < (this_ptr->sfx_handles).count) {
    dest = (this_ptr->sfx_handles).entries;
    local_18 = (this_ptr->sfx_handles).entries + 1;
    do {
      dVar5 = (double)sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00526d10(dest->sfx_handle,1);
      dest->playback_position = dVar5;
      local_20 = dVar5;
      if (0.0 <= dest->playback_position) {
        sound_sndmain_cpp_CSfxSample_init_FUN_00525b70((CSfxSample *)local_148);
        iVar2 = sound_sndmain_cpp_getSfxSampleInfo_FUN_00526cd0
                          (dest->sfx_handle,(CSfxSample *)local_148);
        if (iVar2 == 0) goto LAB_00480de0;
        pcVar4 = dest->sound_filename;
        pcVar3 = local_148;
        do {
          cVar1 = *pcVar3;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar3[1];
          pcVar3 = pcVar3 + 2;
          pcVar4[1] = cVar1;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
        dest = dest + 1;
        local_18 = local_18 + 1;
        local_14 = local_14 + 1;
      }
      else {
LAB_00480de0:
        iVar2 = (this_ptr->sfx_handles).count + -1;
        (this_ptr->sfx_handles).count = iVar2;
        memmove(dest,local_18,(iVar2 - local_14) * 0x120);
      }
    } while (local_14 < (this_ptr->sfx_handles).count);
  }
  return;
}
