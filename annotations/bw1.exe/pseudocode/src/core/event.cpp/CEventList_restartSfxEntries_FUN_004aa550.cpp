// Name: core_event.cpp_CEventList_restartSfxEntries_FUN_004aa550
// Address: 004aa550
// Address Range: [[004aa550, 004aa5d9]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_restartSfxEntries_FUN_004aa550(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_restartSfxEntries_FUN_004aa550(CEventList *this_ptr)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  CEventList *filename;
  
  iVar2 = 0;
  if (0 < *(int *)(this_ptr + 0x3ac8)) {
    filename = this_ptr + 0x3ae4;
    do {
      iVar3 = iVar2 * 0x120;
      sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
      sound_sndmain_cpp_FUN_00572a50(*(double *)(this_ptr + iVar3 + 0x3acc + 0x118),1);
      sound_sndmain_cpp_FUN_00572a10(1);
      uVar1 = sound_sndmain_cpp_startSfx_FUN_00572d20((char *)filename);
      iVar2 = iVar2 + 1;
      *(uint *)(this_ptr + iVar3 + 0x3acc) = uVar1;
      sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
      filename = filename + 0x120;
    } while (iVar2 < *(int *)(this_ptr + 0x3ac8));
  }
  core_event_cpp_CEventList_updateSfxEntries_FUN_004aa400(this_ptr);
  return;
}
