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
  int iVar3;
  CEventList *pCVar4;
  
  iVar2 = 0;
  if (0 < *(int *)(this_ptr + 0x3ac8)) {
    pCVar4 = this_ptr + 0x3ae4;
    do {
      iVar3 = iVar2 * 0x120;
      sound_sndmain_cpp_FUN_00555fd0();
      sound_sndmain_cpp_FUN_00555f60(*(double *)(this_ptr + iVar3 + 0x3acc + 0x118),1);
      sound_sndmain_cpp_FUN_00555f20(1);
      uVar1 = sound_sndmain_cpp_FUN_00556240(pCVar4);
      iVar2 = iVar2 + 1;
      *(uint *)(this_ptr + iVar3 + 0x3acc) = uVar1;
      sound_sndmain_cpp_FUN_00556050();
      pCVar4 = pCVar4 + 0x120;
    } while (iVar2 < *(int *)(this_ptr + 0x3ac8));
  }
  core_event_cpp_CEventList_updateSfxEntries_FUN_00495280(this_ptr);
  return;
}
