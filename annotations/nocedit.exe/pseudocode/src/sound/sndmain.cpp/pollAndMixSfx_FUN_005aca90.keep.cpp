// Name: sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90
// Address: 005aca90
// MANUAL RECONSTRUCTION
// Address Range: [[004423e5, 00442438] [005aca90, 005acda2]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_005aca90(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_005aca90(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)

{
  SMixBuffer mix_buffer;
  CSfxSlot *this_ptr;
  int iVar5;
  int iVar3;
  int bytes_per_buffer;
  int tail_bytes;
  float delta_time;
  ushort *output_ptrs[8];

  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x16ce;
    core_main_c_displayErrorAndQuit_FUN_00506f10("pollSfx - must be locked!");
  }
  for (iVar5 = 0; iVar5 < num_channels; iVar5 = iVar5 + 1) {
    if (g_ChannelPrimaryBuffers[iVar5] == 0) {
      return;
    }
  }
  if ((bits_per_sample != g_AudioBitsPerSample) || (num_channels != g_AudioChannelCount) ||
      (samples_per_sec != g_AudioSampleRate)) {
    return;
  }
  sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_005a5530();
  for (iVar5 = 0; iVar5 < num_channels; iVar5 = iVar5 + 1) {
    output_ptrs[iVar5] = (ushort *)channel_buffers[iVar5];
  }
  for (; 0 < samples_per_block; samples_per_block = samples_per_block - iVar3) {
    if (g_MixBufferReadIndex < 1) {
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
      for (iVar5 = 0; iVar5 < 64; iVar5 = iVar5 + 1) {
        sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(&g_SfxSlots[iVar5],delta_time);
      }
      for (iVar5 = 0; iVar5 < 64; iVar5 = iVar5 + 1) {
        sound_sndmain_cpp_CSfxSlot_mix_FUN_005a75e0(&g_SfxSlots[iVar5],mix_buffer);
      }
      g_MixBufferReadIndex = g_MixBufferSize;
      g_MixBufferCount = g_MixBufferCount + 1;
      g_MixBufferWriteIndex = 0;
    }
    iVar3 = g_MixBufferReadIndex;
    if (samples_per_block < g_MixBufferReadIndex) {
      iVar3 = samples_per_block;
    }
    for (iVar5 = 0; iVar5 < num_channels; iVar5 = iVar5 + 1) {
      sound_sndmain_cpp_convertMixBufToOutput_FUN_005a5b80
                ((float *)(g_MixBufferWriteIndex * 4 + (int)g_ChannelPrimaryBuffers[iVar5]),
                 output_ptrs[iVar5],bits_per_sample,iVar3,block_align);
      output_ptrs[iVar5] = (ushort *)((char *)output_ptrs[iVar5] + block_align * iVar3);
    }
    g_MixBufferReadIndex = g_MixBufferReadIndex - iVar3;
    g_MixBufferWriteIndex = g_MixBufferWriteIndex + iVar3;
  }
  return;
}
