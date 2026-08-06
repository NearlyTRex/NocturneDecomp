// Name: sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_00524630
// Address: 00524630
// Address Range: [[00524630, 00524794]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelVolumes_FUN_00524630(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelVolumes_FUN_00524630(CSfxSlot *this_ptr)

{
  float fVar1;
  int iVar2;
  CSfxSlot *pCVar3;
  float local_30;
  float local_20;
  
  if (_DAT_02dc84bc < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 2327;
    core_main_c_displayErrorAndQuit_FUN_004c8440("SfxSlot::kill - must be locked!");
  }
  iVar2 = (this_ptr->sample->sample_info).bit_depth;
  fVar1 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380((this_ptr->options).channel_index);
  fVar1 = (fVar1 * (this_ptr->options).current_volume) / (float)(1 << ((char)iVar2 - 1U & 0x1f));
  if (((this_ptr->options).flags & 1) == 0) {
    iVar2 = 0;
    pCVar3 = this_ptr;
    if (0 < DAT_005bea68) {
      do {
        local_30 = pCVar3->distance_to_speakers[0];
        if (pCVar3->distance_to_speakers[0] < this_ptr->min_distance) {
          local_30 = this_ptr->min_distance;
        }
        if (this_ptr->max_distance < local_30) {
          local_30 = this_ptr->max_distance;
        }
        if (this_ptr->reference_distance * (float)0.050000000000000003 < local_30) {
          local_20 = this_ptr->reference_distance / local_30;
        }
        else {
          local_20 = 20.0;
        }
        iVar2 = iVar2 + 1;
        pCVar3->channel_volumes[0] = fVar1 * local_20;
        pCVar3 = (CSfxSlot *)&(pCVar3->options).position;
      } while (iVar2 < DAT_005bea68);
    }
  }
  else {
    iVar2 = 0;
    if (0 < DAT_005bea68) {
      do {
        iVar2 = iVar2 + 1;
        this_ptr->channel_volumes[0] = fVar1;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar2 < DAT_005bea68);
    }
  }
  return;
}
