// Name: sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0
// Address: 005a6df0
// Address Range: [[005a6df0, 005a6efa]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0(CSfxSlot * this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0(CSfxSlot *this_ptr)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  CSfxSlot *pCVar3;
  int extraout_EDX;
  int iVar4;
  double dVar5;
  ulonglong local_20;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x8f5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  iVar1 = g_AudioChannelCount;
  if (g_AudioChannelCount < 2) {
    this_ptr->channel_target_buffer_offsets[0] = 0;
  }
  else if (((this_ptr->options).flags & 1) == 0) {
    local_20 = (double)g_AudioSampleRate * (1 / 1116.4000000000001);
    iVar2 = 99999;
    pCVar3 = this_ptr;
    if (0 < g_AudioChannelCount) {
      do {
        dVar5 = crt_math_c_round_FUN_005fe6b0
                          ((double)(pCVar3->distance_to_speakers[0] * (float)local_20));
        iVar4 = (int)ROUND(dVar5);
        local_20 = (double)CONCAT44 /* combine 2-byte values */(iVar4,0x5a6eb0);
        *(int *)(extraout_EDX + 0xc0) = iVar4;
        if (iVar4 < iVar2) {
          iVar2 = iVar4;
        }
        pCVar3 = (CSfxSlot *)(extraout_EDX + 4);
      } while (extraout_ECX + 1 < iVar1);
    }
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        iVar4 = iVar4 + 1;
        this_ptr->channel_target_buffer_offsets[0] =
             this_ptr->channel_target_buffer_offsets[0] - iVar2;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar4 < iVar1);
      g_AudioChannelCount = iVar1;
      return;
    }
  }
  else {
    iVar2 = 0;
    if (0 < g_AudioChannelCount) {
      do {
        iVar2 = iVar2 + 1;
        this_ptr->channel_target_buffer_offsets[0] = 0;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar2 < g_AudioChannelCount);
    }
  }
  g_AudioChannelCount = iVar1;
  return;
}
