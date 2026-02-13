// Name: core_event.cpp_CEventList_updateSfxEntries_FUN_004b0db0
// Address: 004b0db0
// Address Range: [[004b0db0, 004b0ef5]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_updateSfxEntries_FUN_004b0db0(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_updateSfxEntries_FUN_004b0db0(CEventList *this_ptr)

{
  char cVar1;
  int iVar2;
  SSfxEntry *dest;
  char *pcVar3;
  char *pcVar4;
  double dVar5;
  uint in_stack_fffffe90;
  int local_20;
  int local_1c;
  SSfxEntry *local_18;
  int local_14;
  
  local_14 = 0;
  if (0 < (this_ptr->sfx_handles).count) {
    dest = (this_ptr->sfx_handles).entries;
    local_18 = (this_ptr->sfx_handles).entries + 1;
    do {
      dVar5 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(1,in_stack_fffffe90);
      local_20 = SUB84(dVar5,0);
      *(int *)&dest->playback_position = local_20;
      local_1c = (int)((ulonglong)dVar5 >> 0x20);
      *(int *)((int)&dest->playback_position + 4) = local_1c;
      if (0.0 <= dest->playback_position) {
        sound_sndmain_cpp_CSfxSample_init_FUN_005a8480((CSfxSample *)&stack0xfffffe90);
        iVar2 = sound_sndmain_cpp_getSfxSampleInfo_FUN_005a96e0
                          (dest->sfx_handle,(CSfxSample *)&stack0xfffffe90);
        if (iVar2 == 0) goto LAB_004b0e30;
        pcVar4 = dest->sound_filename;
        pcVar3 = &stack0xfffffe90;
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
LAB_004b0e30:
        iVar2 = (this_ptr->sfx_handles).count + -1;
        (this_ptr->sfx_handles).count = iVar2;
        memmove(dest,local_18,(iVar2 - local_14) * 0x120);
      }
    } while (local_14 < (this_ptr->sfx_handles).count);
  }
  return;
}
