// Name: sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_00524520
// Address: 00524520
// Address Range: [[00524520, 00524627]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_00524520(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_00524520(CSfxSlot *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CSfxSlot *pCVar5;
  double dVar6;
  ulonglong local_20;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 2280;
    core_main_c_displayErrorAndQuit_FUN_004c8440("SfxSlot::kill - must be locked!");
  }
  iVar2 = g_AudioChannelCount;
  if (g_AudioChannelCount < 2) {
    this_ptr->channel_target_buffer_offsets[0] = 0;
  }
  else if (((this_ptr->options).flags & 1) == 0) {
    local_20 = (double)g_AudioSampleRate * (g_Cached3DDistanceFactor / 1116.4000000000001);
    iVar4 = 99999;
    iVar3 = 0;
    pCVar5 = this_ptr;
    if (0 < g_AudioChannelCount) {
      do {
        dVar6 = round
                          ((double)(pCVar5->distance_to_speakers[0] * (float)local_20));
        iVar1 = (int)ROUND(dVar6);
        local_20 = __BITCAST_DOUBLE(CONCAT44(iVar1,0x5245dd));
        pCVar5->channel_target_buffer_offsets[0] = iVar1;
        if (iVar1 < iVar4) {
          iVar4 = iVar1;
        }
        iVar3 = iVar3 + 1;
        pCVar5 = (CSfxSlot *)&(pCVar5->options).position;
      } while (iVar3 < iVar2);
    }
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        iVar3 = iVar3 + 1;
        this_ptr->channel_target_buffer_offsets[0] =
             this_ptr->channel_target_buffer_offsets[0] - iVar4;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar3 < iVar2);
      g_AudioChannelCount = iVar2;
      return;
    }
  }
  else {
    iVar4 = 0;
    if (0 < g_AudioChannelCount) {
      do {
        iVar4 = iVar4 + 1;
        this_ptr->channel_target_buffer_offsets[0] = 0;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar4 < g_AudioChannelCount);
    }
  }
  g_AudioChannelCount = iVar2;
  return;
}
