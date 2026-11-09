// Name: core_event.cpp_CEventList_updateSfxEntries_FUN_004aa400
// Address: 004aa400
// Address Range: [[004aa400, 004aa545]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_updateSfxEntries_FUN_004aa400(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_updateSfxEntries_FUN_004aa400(CEventList *this_ptr)

{
  CEventList CVar1;
  CEventList *dest;
  int iVar2;
  CEventList *pCVar3;
  CEventList *pCVar4;
  double dVar5;
  CEventList local_170 [336];
  ulonglong local_20;
  CEventList *local_18;
  int local_14;
  
  local_14 = 0;
  if (0 < *(int *)(this_ptr + 0x3ac8)) {
    dest = this_ptr + 0x3acc;
    local_18 = this_ptr + 0x3bec;
    do {
      dVar5 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_00573660(*(uint *)dest,1);
      local_20._0_4_ = SUB84(__BITCAST_UINT64(dVar5),0);
      *(uint *)(dest + 0x118) = (uint)local_20;
      local_20._4_4_ = (uint)((ulonglong)dVar5 >> 0x20);
      *(uint *)(dest + 0x11c) = local_20._4_4_;
      local_20 = dVar5;
      if (0.0 <= *(double *)(dest + 0x118)) {
        sound_sndmain_cpp_CSfxSample_init_FUN_00572340((CSfxSample *)local_170);
        iVar2 = sound_sndmain_cpp_FUN_00573620(*(uint *)dest,(CSfxSample *)local_170);
        if (iVar2 == 0) goto LAB_004aa480;
        pCVar4 = dest + 0x18;
        pCVar3 = local_170;
        do {
          CVar1 = *pCVar3;
          *pCVar4 = CVar1;
          if (CVar1 == (CEventList)0x0) break;
          CVar1 = pCVar3[1];
          pCVar3 = pCVar3 + 2;
          pCVar4[1] = CVar1;
          pCVar4 = pCVar4 + 2;
        } while (CVar1 != (CEventList)0x0);
        dest = dest + 0x120;
        local_18 = local_18 + 0x120;
        local_14 = local_14 + 1;
      }
      else {
LAB_004aa480:
        iVar2 = *(int *)(this_ptr + 0x3ac8);
        *(int *)(this_ptr + 0x3ac8) = iVar2 + -1;
        memmove(dest,local_18,((iVar2 + -1) - local_14) * 0x120);
      }
    } while (local_14 < *(int *)(this_ptr + 0x3ac8));
  }
  return;
}
