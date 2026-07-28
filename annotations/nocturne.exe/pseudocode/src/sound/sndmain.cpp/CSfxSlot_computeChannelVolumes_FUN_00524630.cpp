// Name: sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_00524630
// Address: 00524630
// Address Range: [[00524630, 00524794]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelVolumes_FUN_00524630(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelVolumes_FUN_00524630(CSfxSlot *this_ptr)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  CSfxSlot *pCVar4;
  float local_30;
  float local_20;
  
  if (_DAT_02dc84bc < 1) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0x917;
    core_main_c_FUN_004c8440("SfxSlot::kill - must be locked!");
  }
  uVar1 = *(uint *)(this_ptr->playback_state + 0x104);
  fVar2 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380((this_ptr->options).channel_index);
  fVar2 = (fVar2 * (this_ptr->options).current_volume) / (float)(1 << ((char)uVar1 - 1U & 0x1f));
  if (((this_ptr->options).flags & 1) == 0) {
    iVar3 = 0;
    pCVar4 = this_ptr;
    if (0 < DAT_005bea68) {
      do {
        local_30 = pCVar4->effective_frequency;
        if (pCVar4->effective_frequency < this_ptr->reference_distance) {
          local_30 = this_ptr->reference_distance;
        }
        if (this_ptr->min_distance < local_30) {
          local_30 = this_ptr->min_distance;
        }
        if ((float)this_ptr->channel_current_buffer_offsets[7] * (float)0.050000000000000003 < local_30)
        {
          local_20 = (float)this_ptr->channel_current_buffer_offsets[7] / local_30;
        }
        else {
          local_20 = 20.0;
        }
        iVar3 = iVar3 + 1;
        pCVar4->distance_to_speakers[7] = fVar2 * local_20;
        pCVar4 = (CSfxSlot *)&(pCVar4->options).position;
      } while (iVar3 < DAT_005bea68);
    }
  }
  else {
    iVar3 = 0;
    if (0 < DAT_005bea68) {
      do {
        iVar3 = iVar3 + 1;
        this_ptr->distance_to_speakers[7] = fVar2;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar3 < DAT_005bea68);
    }
  }
  return;
}
