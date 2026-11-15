// Name: sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_00570c40
// Address: 00570c40
// Address Range: [[00570c40, 00570d49]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_00570c40(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_00570c40(CSfxSlot *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CSfxSlot *pCVar7;
  double dVar8;
  
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0xa69;
    core_main_c_displayErrorAndQuit_FUN_005030e0("SfxSlot::kill - must be locked!");
  }
  iVar4 = DAT_006232ec;
  if (DAT_006232ec < 2) {
    this_ptr->channel_target_buffer_offsets[0] = 0;
  }
  else if (((this_ptr->options).flags & 1) == 0) {
    fVar2 = (1.0 / _DAT_00605af8) * DAT_00623304;
    fVar3 = (float)DAT_006232f0;
    iVar6 = 99999;
    iVar5 = 0;
    pCVar7 = this_ptr;
    if (0 < DAT_006232ec) {
      do {
        dVar8 = round
                          ((double)(pCVar7->distance_to_speakers[0] * fVar3 * fVar2));
        iVar1 = (int)ROUND(dVar8);
        pCVar7->channel_target_buffer_offsets[0] = iVar1;
        if (iVar1 < iVar6) {
          iVar6 = iVar1;
        }
        iVar5 = iVar5 + 1;
        pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
      } while (iVar5 < iVar4);
    }
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        iVar5 = iVar5 + 1;
        this_ptr->channel_target_buffer_offsets[0] =
             this_ptr->channel_target_buffer_offsets[0] - iVar6;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar5 < iVar4);
      DAT_006232ec = iVar4;
      return;
    }
  }
  else {
    iVar6 = 0;
    if (0 < DAT_006232ec) {
      do {
        iVar6 = iVar6 + 1;
        this_ptr->channel_target_buffer_offsets[0] = 0;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar6 < DAT_006232ec);
    }
  }
  DAT_006232ec = iVar4;
  return;
}
