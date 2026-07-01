// Name: sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_005a6f00
// Address: 005a6f00
// Address Range: [[005a6f00, 005a7067]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelVolumes_FUN_005a6f00(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelVolumes_FUN_005a6f00(CSfxSlot *this_ptr)

{
  float fVar2;
  float fVar1;
  int iVar3;
  int iVar2;
  CSfxSlot *pCVar3;
  float local_30;
  float local_20;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 2340;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  iVar3 = (this_ptr->sample->sample_info).bit_depth;
  fVar1 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90((this_ptr->options).channel_index);
  fVar2 = (fVar1 * (this_ptr->options).current_volume) / (float)(1 << ((char)iVar3 - 1U & 0x1f));
  if (((this_ptr->options).flags & 1) == 0) {
    iVar3 = 0;
    pCVar3 = this_ptr;
    if (0 < g_AudioChannelCount) {
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
        iVar3 = iVar3 + 1;
        pCVar3->channel_volumes[0] = fVar2 * local_20;
        pCVar3 = (CSfxSlot *)&(pCVar3->options).position;
      } while (iVar3 < g_AudioChannelCount);
    }
  }
  else {
    iVar2 = 0;
    if (0 < g_AudioChannelCount) {
      do {
        iVar2 = iVar2 + 1;
        this_ptr->channel_volumes[0] = fVar2;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar2 < g_AudioChannelCount);
    }
  }
  return;
}
