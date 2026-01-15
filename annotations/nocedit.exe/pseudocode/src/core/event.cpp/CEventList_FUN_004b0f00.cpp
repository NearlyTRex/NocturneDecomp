// Name: core_event.cpp_CEventList_FUN_004b0f00
// Address: 004b0f00
// Address Range: [[004b0f00, 004b0f89]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_FUN_004b0f00(CEventList * this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_FUN_004b0f00(CEventList *this_ptr)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  CEvent *filename;
  
  iVar2 = 0;
  if (0 < this_ptr[1].event_count) {
    filename = this_ptr[1].event_list + 0x18;
    do {
      iVar3 = iVar2 * 0x120;
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0
                (*(double *)(this_ptr[1].event_list + iVar3 + 0x118),1);
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(1);
      uVar1 = sound_sndmain_cpp_startSfx_FUN_005a8e90((char *)filename);
      iVar2 = iVar2 + 1;
      *(uint *)(this_ptr[1].event_list + iVar3) = uVar1;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      filename = filename + 0x120;
    } while (iVar2 < this_ptr[1].event_count);
  }
  core_event_cpp_CEventList_FUN_004b0db0(this_ptr);
  return;
}
