// Name: sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0
// Address: 005a6df0
// MANUAL RECONSTRUCTION
// Address Range: [[005a6df0, 005a6efa]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0(CSfxSlot *this_ptr)

{
  int iVar4;
  int iVar5;
  int iVar2;
  int iVar3;
  double dVar2;
  double dVar3;
  int iVar1;

  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x8f5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  if (g_AudioChannelCount < 2) {
    this_ptr->channel_target_buffer_offsets[0] = 0;
  }
  else if (((this_ptr->options).flags & 1) == 0) {
    dVar2 = g_Cached3DDistanceFactor / 1116.4000000000001;
    dVar3 = (double)g_AudioSampleRate;
    iVar3 = 99999;
    iVar4 = 0;
    if (0 < g_AudioChannelCount) {
      do {
        iVar1 = (int)ROUND(ROUND(this_ptr->distance_to_speakers[iVar4] * (float)(dVar3 * dVar2)));
        this_ptr->channel_target_buffer_offsets[iVar4] = iVar1;
        if (iVar1 < iVar3) {
          iVar3 = iVar1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < g_AudioChannelCount);
    }
    iVar2 = 0;
    if (0 < g_AudioChannelCount) {
      do {
        this_ptr->channel_target_buffer_offsets[iVar2] =
             this_ptr->channel_target_buffer_offsets[iVar2] - iVar3;
        iVar2 = iVar2 + 1;
      } while (iVar2 < g_AudioChannelCount);
      return;
    }
  }
  else {
    iVar5 = 0;
    if (0 < g_AudioChannelCount) {
      do {
        this_ptr->channel_target_buffer_offsets[iVar5] = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < g_AudioChannelCount);
    }
  }
  return;
}
