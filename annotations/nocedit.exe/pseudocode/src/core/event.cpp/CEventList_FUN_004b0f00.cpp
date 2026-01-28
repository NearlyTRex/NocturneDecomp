// Name: core_event.cpp_CEventList_FUN_004b0f00
// Address: 004b0f00
// Address Range: [[004b0f00, 004b0f89]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_FUN_004b0f00(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_FUN_004b0f00(CEventList *this_ptr)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *filename;
  
  iVar3 = 0;
  if (0 < this_ptr[1].event_count) {
    filename = this_ptr[1].event_list + 6;
    do {
      iVar1 = iVar3 * 0x48;
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0
                (*(double *)(this_ptr[1].event_list + iVar1 + 0x46),1);
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(1);
      uVar2 = sound_sndmain_cpp_startSfx_FUN_005a8e90((char *)filename);
      iVar3 = iVar3 + 1;
      this_ptr[1].event_list[iVar1] = uVar2;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      filename = filename + 0x48;
    } while (iVar3 < this_ptr[1].event_count);
  }
  core_event_cpp_CEventList_FUN_004b0db0(this_ptr);
  return;
}
