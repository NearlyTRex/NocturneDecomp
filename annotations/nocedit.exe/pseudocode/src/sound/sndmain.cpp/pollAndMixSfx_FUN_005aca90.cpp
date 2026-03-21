// Name: sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90
// Address: 005aca90
// Address Range: [[004423e5, 00442438] [005aca90, 005acda2]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_005aca90(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_005aca90(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)

{
  int *piVar1;
  SMixBuffer mix_buffer;
  int iVar2;
  int iVar3;
  CSfxSlot *this_ptr;
  CSfxSlot *pCVar4;
  int iVar5;
  int iVar6;
  ulong count;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint local_6c [4];
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  int local_4c;
  int local_48;
  int local_44 [9];
  int local_20;
  CSfxSlot *local_1c;
  CSfxSlot *local_18;
  float local_14;
  
  bVar9 = 0;
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x16ce;
    core_main_c_displayErrorAndQuit_FUN_00506f10("pollSfx - must be locked!");
  }
  if (0 < num_channels) {
    iVar2 = 0;
    do {
      if (*(int *)((int)g_ChannelPrimaryBuffers + iVar2) == 0) {
        return;
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < num_channels * 4);
  }
  if (((bits_per_sample == g_AudioBitsPerSample) && (num_channels == g_AudioChannelCount)) &&
     (samples_per_sec == g_AudioSampleRate)) {
    sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_005a5530();
    iVar2 = 0;
    if (0 < num_channels) {
      do {
        iVar2 = iVar2 + 1;
        local_44[iVar2] = (int)*channel_buffers;
        channel_buffers = channel_buffers + 1;
      } while (iVar2 < num_channels);
    }
    local_20 = num_channels << 2;
    local_18 = (CSfxSlot *)&g_SfxLastSlot;
    local_1c = (CSfxSlot *)&g_SfxLastSlot;
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
        iVar2 = 0;
        count = g_MixBufferSize * 4;
        if (0 < g_AudioChannelCount) {
          iVar3 = 0;
          do {
            memmove
                      (*(void **)((int)g_ChannelPrimaryBuffers + iVar3),
                       (void *)(g_MixBufferSize * 4 +
                               (int)*(void **)((int)g_ChannelPrimaryBuffers + iVar3)),
                       (g_NumMixBuffers + -1) * count);
            piVar1 = (int *)((int)g_ChannelPrimaryBuffers + iVar3);
            iVar3 = iVar3 + 4;
            iVar2 = iVar2 + 1;
            memset
                      ((void *)((g_NumMixBuffers + -1) * g_MixBufferSize * 4 + *piVar1),0,count);
          } while (iVar2 < g_AudioChannelCount);
        }
        local_4c = g_MixBufferSize;
        local_48 = g_AudioChannelCount;
        local_44[0] = g_AudioSampleRate;
        if (0 < g_AudioChannelCount) {
          iVar2 = 0;
          do {
            iVar3 = iVar2 + 4;
            *(uint *)((int)local_6c + iVar2) =
                 *(uint *)((int)g_ChannelPrimaryBuffers + iVar2);
            iVar2 = iVar3;
          } while (iVar3 < g_AudioChannelCount * 4);
        }
        pCVar4 = local_1c;
        local_14 = (float)g_MixBufferSize / (float)g_AudioSampleRate;
        this_ptr = g_SfxSlots;
        do {
          sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr,local_14);
          this_ptr = this_ptr + 1;
        } while (this_ptr != pCVar4);
        pCVar4 = g_SfxSlots;
        do {
          puVar7 = local_6c;
          puVar8 = (uint *)&stack0xffffff68;
          uVar10 = local_6c[0];
          uVar11 = local_6c[1];
          uVar12 = local_6c[2];
          uVar13 = local_6c[3];
          uVar14 = uStack_5c;
          uVar15 = uStack_58;
          uVar16 = uStack_54;
          uVar17 = uStack_50;
          iVar3 = local_4c;
          iVar5 = local_48;
          iVar6 = local_44[0];
          for (iVar2 = local_44[0]; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          }
          mix_buffer.channel_buffers[1] = (float *)uVar11;
          mix_buffer.channel_buffers[0] = (float *)uVar10;
          mix_buffer.channel_buffers[2] = (float *)uVar12;
          mix_buffer.channel_buffers[3] = (float *)uVar13;
          mix_buffer.channel_buffers[4] = (float *)uVar14;
          mix_buffer.channel_buffers[5] = (float *)uVar15;
          mix_buffer.channel_buffers[6] = (float *)uVar16;
          mix_buffer.channel_buffers[7] = (float *)uVar17;
          mix_buffer.num_output_samples = iVar3;
          mix_buffer.num_channels = iVar5;
          mix_buffer.output_sample_rate = iVar6;
          sound_sndmain_cpp_CSfxSlot_mix_FUN_005a75e0(pCVar4,mix_buffer);
          pCVar4 = pCVar4 + 1;
        } while (pCVar4 != local_18);
        g_MixBufferReadIndex = g_MixBufferSize;
        g_MixBufferCount = g_MixBufferCount + 1;
        g_MixBufferWriteIndex = 0;
      }
      iVar2 = local_20;
      iVar3 = g_MixBufferReadIndex;
      if (samples_per_block < g_MixBufferReadIndex) {
        iVar3 = samples_per_block;
      }
      if (0 < num_channels) {
        iVar5 = 0;
        do {
          sound_sndmain_cpp_convertMixBufToOutput_FUN_005a5b80
                    ((float *)(g_MixBufferWriteIndex * 4 +
                              *(int *)((int)g_ChannelPrimaryBuffers + iVar5)),
                     *(ushort **)((int)local_44 + iVar5 + 4),bits_per_sample,iVar3,block_align);
          iVar6 = iVar5 + 4;
          *(int *)((int)local_44 + iVar5 + 4) =
               *(int *)((int)local_44 + iVar5 + 4) + block_align * iVar3;
          iVar5 = iVar6;
        } while (iVar6 < iVar2);
      }
      g_MixBufferReadIndex = g_MixBufferReadIndex - iVar3;
      g_MixBufferWriteIndex = g_MixBufferWriteIndex + iVar3;
    }
  }
  return;
}
