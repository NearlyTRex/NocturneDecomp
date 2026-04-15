// Name: sound_sndmain.cpp_nextMixingBuffer_FUN_005a59c0
// Address: 005a59c0
// MANUAL RECONSTRUCTION
// Address Range: [[005a59c0, 005a5b70]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_005a59c0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_005a59c0(void)

{
  SMixBuffer mix_buffer;
  CSfxSlot *pCVar3;
  int iVar5;
  int bytes_per_buffer;
  int tail_bytes;
  float delta_time;

  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x4de;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  if (0 < g_MixBufferReadIndex) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x4e2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("nextMixingBuffer - shouldn't have any data pending!");
  }
  bytes_per_buffer = g_MixBufferSize * 4;
  tail_bytes = (g_NumMixBuffers - 1) * bytes_per_buffer;
  for (iVar5 = 0; iVar5 < g_AudioChannelCount; iVar5 = iVar5 + 1) {
    memmove(g_ChannelPrimaryBuffers[iVar5],
            (void *)((int)g_ChannelPrimaryBuffers[iVar5] + bytes_per_buffer),
            tail_bytes);
    memset((void *)((int)g_ChannelPrimaryBuffers[iVar5] + tail_bytes), 0, bytes_per_buffer);
  }
  mix_buffer.num_output_samples = g_MixBufferSize;
  mix_buffer.num_channels = g_AudioChannelCount;
  mix_buffer.output_sample_rate = g_AudioSampleRate;
  for (iVar5 = 0; iVar5 < g_AudioChannelCount; iVar5 = iVar5 + 1) {
    mix_buffer.channel_buffers[iVar5] = g_ChannelPrimaryBuffers[iVar5];
  }
  delta_time = (float)g_MixBufferSize / (float)g_AudioSampleRate;
  pCVar3 = g_SfxSlots;
  do {
    sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(pCVar3,delta_time);
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CSfxSlot *)&g_SfxLastSlot);
  pCVar3 = g_SfxSlots;
  do {
    sound_sndmain_cpp_CSfxSlot_mix_FUN_005a75e0(pCVar3,mix_buffer);
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CSfxSlot *)&g_SfxLastSlot);
  g_MixBufferReadIndex = g_MixBufferSize;
  g_MixBufferWriteIndex = 0;
  g_MixBufferCount = g_MixBufferCount + 1;
  return;
}
