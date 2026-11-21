// Name: sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_00570d50
// Address: 00570d50
// Address Range: [[00570d50, 00570e86]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelVolumes_FUN_00570d50(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelVolumes_FUN_00570d50(CSfxSlot *this_ptr)

{
  float fVar1;
  int iVar2;
  CSfxSlot *pCVar3;
  float local_20;
  float local_14;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 2712;
    core_main_c_displayErrorAndQuit_FUN_005030e0("SfxSlot::kill - must be locked!");
  }
  fVar1 = sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0((this_ptr->options).channel_index);
  fVar1 = fVar1 * (this_ptr->options).current_volume;
  if (((this_ptr->options).flags & 1) == 0) {
    iVar2 = 0;
    pCVar3 = this_ptr;
    if (0 < g_AudioChannelCount) {
      do {
        local_14 = pCVar3->distance_to_speakers[0];
        if (pCVar3->distance_to_speakers[0] < this_ptr->min_distance) {
          local_14 = this_ptr->min_distance;
        }
        if (this_ptr->max_distance < local_14) {
          local_14 = this_ptr->max_distance;
        }
        if (this_ptr->reference_distance * 0.05f < local_14) {
          local_20 = this_ptr->reference_distance / local_14;
        }
        else {
          local_20 = 20.0;
        }
        iVar2 = iVar2 + 1;
        pCVar3->channel_volumes[0] = fVar1 * local_20;
        pCVar3 = (CSfxSlot *)&(pCVar3->options).position;
      } while (iVar2 < g_AudioChannelCount);
    }
  }
  else {
    iVar2 = 0;
    if (0 < g_AudioChannelCount) {
      do {
        iVar2 = iVar2 + 1;
        this_ptr->channel_volumes[0] = fVar1;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar2 < g_AudioChannelCount);
    }
  }
  return;
}
