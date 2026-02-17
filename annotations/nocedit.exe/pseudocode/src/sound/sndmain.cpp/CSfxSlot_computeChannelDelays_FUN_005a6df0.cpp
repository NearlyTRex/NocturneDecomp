// Name: sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0
// Address: 005a6df0
// Address Range: [[005a6df0, 005a6efa]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0(CSfxSlot *this_ptr)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  CSfxSlot *pCVar6;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x8f5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  if (g_AudioChannelCount < 2) {
    this_ptr->channel_target_buffer_offsets[0] = 0;
  }
  else if (((this_ptr->options).flags & 1) == 0) {
    dVar2 = DOUBLE_00681b30 / 1116.4000000000001;
    dVar3 = (double)g_AudioSampleRate;
    iVar5 = 99999;
    iVar4 = 0;
    pCVar6 = this_ptr;
    if (0 < g_AudioChannelCount) {
      do {
        iVar1 = (int)ROUND(ROUND(pCVar6->distance_to_speakers[0] * (float)(dVar3 * dVar2)));
        pCVar6->channel_target_buffer_offsets[0] = iVar1;
        if (iVar1 < iVar5) {
          iVar5 = iVar1;
        }
        iVar4 = iVar4 + 1;
        pCVar6 = (CSfxSlot *)&(pCVar6->options).position;
      } while (iVar4 < g_AudioChannelCount);
    }
    iVar4 = 0;
    if (0 < g_AudioChannelCount) {
      do {
        iVar4 = iVar4 + 1;
        this_ptr->channel_target_buffer_offsets[0] =
             this_ptr->channel_target_buffer_offsets[0] - iVar5;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar4 < g_AudioChannelCount);
      return;
    }
  }
  else {
    iVar5 = 0;
    if (0 < g_AudioChannelCount) {
      do {
        iVar5 = iVar5 + 1;
        this_ptr->channel_target_buffer_offsets[0] = 0;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar5 < g_AudioChannelCount);
    }
  }
  return;
}
