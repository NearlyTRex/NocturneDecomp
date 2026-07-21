// Name: core_event.cpp_CEventList_updateSfxEntries_FUN_00480d60
// Address: 00480d60
// Address Range: [[00480d60, 00480ea5]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_updateSfxEntries_FUN_00480d60(int param_1)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_updateSfxEntries_FUN_00480d60(int param_1)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  ulonglong uVar6;
  char local_148 [296];
  ulonglong local_20;
  int local_18;
  int local_14;
  
  local_14 = 0;
  if (0 < *(int *)(param_1 + 0x3ac8)) {
    puVar2 = (uint *)(param_1 + 0x3acc);
    local_18 = param_1 + 0x3bec;
    do {
      uVar6 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00526d10(*puVar2,1);
      *(ulonglong *)(puVar2 + 0x46) = uVar6;
      local_20 = uVar6;
      if (0.0 <= *(double *)(puVar2 + 0x46)) {
        sound_sndmain_cpp_CSfxSample_init_FUN_00525b70(local_148);
        iVar3 = sound_sndmain_cpp_getSfxSampleInfo_FUN_00526cd0(*puVar2,local_148);
        if (iVar3 == 0) goto LAB_00480de0;
        pcVar5 = (char *)(puVar2 + 6);
        pcVar4 = local_148;
        do {
          cVar1 = *pcVar4;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        puVar2 = puVar2 + 0x48;
        local_18 = local_18 + 0x120;
        local_14 = local_14 + 1;
      }
      else {
LAB_00480de0:
        iVar3 = *(int *)(param_1 + 0x3ac8) + -1;
        *(int *)(param_1 + 0x3ac8) = iVar3;
        memmove(puVar2,local_18,(iVar3 - local_14) * 0x120);
      }
    } while (local_14 < *(int *)(param_1 + 0x3ac8));
  }
  return;
}
