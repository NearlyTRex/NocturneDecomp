// Name: sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0
// Address: 005a6df0
// Address Range: [[005a6df0, 005a6efa]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0(CSfxSlot * this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0(CSfxSlot *this_ptr)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  CSfxSlot *pCVar5;
  int extraout_EDX;
  int iVar6;
  double dVar7;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x8f5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  iVar3 = g_AudioChannelCount;
  if (g_AudioChannelCount < 2) {
    this_ptr->channel_target_buffer_offsets[0] = 0;
  }
  else if (((this_ptr->options).flags & 1) == 0) {
    dVar1 = 1 / 1116.4000000000001;
    dVar2 = (double)g_AudioSampleRate;
    iVar4 = 99999;
    pCVar5 = this_ptr;
    if (0 < g_AudioChannelCount) {
      do {
        dVar7 = crt_math_c_round_FUN_005fe6b0
                          ((double)(pCVar5->distance_to_speakers[0] * (float)(dVar2 * dVar1)));
        iVar6 = (int)ROUND(dVar7);
        *(int *)(extraout_EDX + 0xc0) = iVar6;
        if (iVar6 < iVar4) {
          iVar4 = iVar6;
        }
        pCVar5 = (CSfxSlot *)(extraout_EDX + 4);
      } while (extraout_ECX + 1 < iVar3);
    }
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        iVar6 = iVar6 + 1;
        this_ptr->channel_target_buffer_offsets[0] =
             this_ptr->channel_target_buffer_offsets[0] - iVar4;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar6 < iVar3);
      g_AudioChannelCount = iVar3;
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
  g_AudioChannelCount = iVar3;
  return;
}
