// Name: core_event.cpp_CEventList_FUN_004b0db0
// Address: 004b0db0
// Address Range: [[004b0db0, 004b0ef5]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_FUN_004b0db0(CEventList * this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_FUN_004b0db0(CEventList *this_ptr)

{
  char cVar1;
  int iVar2;
  int *dest;
  char *pcVar3;
  int *piVar4;
  double dVar5;
  uint in_stack_fffffe90;
  uint local_20;
  uint local_1c;
  char *local_18;
  int local_14;
  
  local_14 = 0;
  if (0 < this_ptr[1].event_count) {
    dest = this_ptr[1].event_list;
    local_18 = this_ptr[1].unk1 + 0xbc;
    do {
      dVar5 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(1,in_stack_fffffe90);
      local_20 = SUB84(dVar5,0);
      dest[0x46] = local_20;
      local_1c = (uint)((ulonglong)dVar5 >> 0x20);
      dest[0x47] = local_1c;
      if (0.0 <= *(double *)(dest + 0x46)) {
        sound_sndmain_cpp_CSfxSample_init_FUN_005a8480((CSfxSample *)&stack0xfffffe90);
        iVar2 = sound_sndmain_cpp_getSfxSampleInfo_FUN_005a96e0
                          (*dest,(CSfxSample *)&stack0xfffffe90);
        if (iVar2 == 0) goto LAB_004b0e30;
        piVar4 = dest + 6;
        pcVar3 = &stack0xfffffe90;
        do {
          cVar1 = *pcVar3;
          *(char *)piVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar3[1];
          pcVar3 = pcVar3 + 2;
          *(char *)((int)piVar4 + 1) = cVar1;
          piVar4 = (int *)((int)piVar4 + 2);
        } while (cVar1 != '\0');
        dest = dest + 0x48;
        local_18 = local_18 + 0x120;
        local_14 = local_14 + 1;
      }
      else {
LAB_004b0e30:
        iVar2 = this_ptr[1].event_count + -1;
        this_ptr[1].event_count = iVar2;
        crt_string_c_memmove_FUN_005fe5e0(dest,local_18,(iVar2 - local_14) * 0x120);
      }
    } while (local_14 < this_ptr[1].event_count);
  }
  return;
}
