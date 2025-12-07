// Name: sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0
// Address: 005a6df0
// Address Range: [[005a6df0, 005a6efa]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0(CSfxSlot * this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0(CSfxSlot *this_ptr)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CSfxSlot *pCVar7;
  double dVar8;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x8f5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  iVar4 = g_AudioChannelCount;
  if (g_AudioChannelCount < 2) {
    this_ptr->channel_target_buffer_offsets[0] = 0;
  }
  else if (((this_ptr->options).flags & 1) == 0) {
    dVar2 = 1 / 1116.4000000000001;
    dVar3 = (double)g_AudioSampleRate;
    iVar6 = 99999;
    iVar5 = 0;
    pCVar7 = this_ptr;
    if (0 < g_AudioChannelCount) {
      do {
        dVar8 = crt_math_c_round_FUN_005fe6b0
                          ((double)(pCVar7->distance_to_speakers[0] * (float)(dVar3 * dVar2)));
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
      g_AudioChannelCount = iVar4;
      return;
    }
  }
  else {
    iVar6 = 0;
    if (0 < g_AudioChannelCount) {
      do {
        iVar6 = iVar6 + 1;
        this_ptr->channel_target_buffer_offsets[0] = 0;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar6 < g_AudioChannelCount);
    }
  }
  g_AudioChannelCount = iVar4;
  return;
}
