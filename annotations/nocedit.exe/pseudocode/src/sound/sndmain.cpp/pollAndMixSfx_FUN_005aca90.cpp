// Name: sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90
// Address: 005aca90
// Address Range: [[005aca90, 005acda2]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90(LPVOID * channel_buffers, int bits_per_sample, int num_channels, int samples_per_sec, int samples_per_block, int block_align)

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_pollAndMixSfx_FUN_005aca90
          (LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,
          int samples_per_block,int block_align)

{
  int *piVar1;
  SMixBuffer mix_buffer;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  CSfxSlot *this_ptr;
  CSfxSlot *pCVar6;
  int iVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  ulong count;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  int in_stack_0000001c;
  int in_stack_00000020;
  byte in_stack_ffffff70 [20];
  uint in_stack_ffffff84;
  float *in_stack_ffffff88;
  void *in_stack_ffffff8c;
  uint uVar12;
  CSfxSlot *pCVar13;
  float fVar14;
  int aiStack_3c [9];
  int local_18;
  CSfxSlot *local_14;
  
  bVar11 = 0;
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x16ce;
    in_stack_ffffff8c = (void *)0x5acd6b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("pollSfx - must be locked!");
  }
  if (0 < samples_per_sec) {
    iVar4 = 0;
    do {
      if (*(int *)((int)g_ChannelPrimaryBuffers + iVar4) == 0) {
        return;
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 < samples_per_sec * 4);
  }
  if (((num_channels == g_AudioBitsPerSample) && (samples_per_sec == g_AudioChannelCount)) &&
     (samples_per_block == g_AudioSampleRate)) {
    sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_005a5530();
    iVar4 = 0;
    if (0 < samples_per_block) {
      do {
        iVar4 = iVar4 + 1;
        aiStack_3c[iVar4] = *(int *)num_channels;
        num_channels = num_channels + 4;
      } while (iVar4 < samples_per_block);
    }
    local_18 = samples_per_block << 2;
    local_14 = (CSfxSlot *)&g_SfxLastSlot;
    for (; 0 < in_stack_0000001c; in_stack_0000001c = in_stack_0000001c - iVar5) {
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
        iVar4 = 0;
        count = g_MixBufferSize * 4;
        if (0 < g_AudioChannelCount) {
          iVar5 = 0;
          do {
            in_stack_ffffff8c = (void *)0x5acbca;
            crt_string_c_memmove_FUN_005fe5e0
                      (*(void **)((int)g_ChannelPrimaryBuffers + iVar5),
                       (void *)(g_MixBufferSize * 4 +
                               (int)*(void **)((int)g_ChannelPrimaryBuffers + iVar5)),
                       (g_NumMixBuffers + -1) * count);
            piVar1 = (int *)((int)g_ChannelPrimaryBuffers + iVar5);
            iVar5 = iVar5 + 4;
            iVar4 = iVar4 + 1;
            crt_memory_c_memset_FUN_005fde40
                      ((void *)((g_NumMixBuffers + -1) * g_MixBufferSize * 4 + *piVar1),0,count);
          } while (iVar4 < g_AudioChannelCount);
        }
        aiStack_3c[0] = g_AudioSampleRate;
        if (0 < g_AudioChannelCount) {
          iVar4 = 0;
          do {
            iVar5 = iVar4 + 4;
            *(uint *)(&stack0xffffff9c + iVar4) =
                 *(uint *)((int)g_ChannelPrimaryBuffers + iVar4);
            iVar4 = iVar5;
          } while (iVar5 < g_AudioChannelCount * 4);
        }
        pCVar6 = local_14;
        fVar3 = (float)g_MixBufferSize;
        fVar2 = (float)g_AudioSampleRate;
        this_ptr = g_SfxSlots;
        do {
          uVar12 = 0x5acc5f;
          pCVar13 = this_ptr;
          fVar14 = fVar3 / fVar2;
          sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr,fVar3 / fVar2);
          this_ptr = this_ptr + 1;
        } while (this_ptr != pCVar6);
        pCVar6 = g_SfxSlots;
        do {
          puVar9 = (uint *)&stack0xffffff9c;
          puVar10 = (uint *)&stack0xffffff70;
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          }
          mix_buffer.channel_buffers[5] = (float *)in_stack_ffffff84;
          mix_buffer.channel_buffers[0] = (float *)in_stack_ffffff70._0_4_;
          mix_buffer.channel_buffers[1] = (float *)in_stack_ffffff70._4_4_;
          mix_buffer.channel_buffers[2] = (float *)in_stack_ffffff70._8_4_;
          mix_buffer.channel_buffers[3] = (float *)in_stack_ffffff70._12_4_;
          mix_buffer.channel_buffers[4] = (float *)in_stack_ffffff70._16_4_;
          mix_buffer.channel_buffers[6] = in_stack_ffffff88;
          mix_buffer.channel_buffers[7] = in_stack_ffffff8c;
          mix_buffer.num_output_samples = uVar12;
          mix_buffer.num_channels = (int)pCVar13;
          mix_buffer.output_sample_rate = (int)fVar14;
          sound_sndmain_cpp_CSfxSlot_mix_FUN_005a75e0(pCVar6,mix_buffer);
          pCVar6 = pCVar6 + 1;
        } while (pCVar6 != (CSfxSlot *)&g_SfxLastSlot);
        g_MixBufferReadIndex = g_MixBufferSize;
        g_MixBufferCount = g_MixBufferCount + 1;
        g_MixBufferWriteIndex = 0;
      }
      iVar4 = local_18;
      iVar5 = g_MixBufferReadIndex;
      if (in_stack_0000001c < g_MixBufferReadIndex) {
        iVar5 = in_stack_0000001c;
      }
      if (0 < samples_per_block) {
        iVar7 = 0;
        do {
          in_stack_ffffff8c = *(void **)((int)aiStack_3c + iVar7 + 4);
          in_stack_ffffff88 =
               (float *)(g_MixBufferWriteIndex * 4 + *(int *)((int)g_ChannelPrimaryBuffers + iVar7))
          ;
          in_stack_ffffff84 = 0x5acd06;
          sound_sndmain_cpp_convertMixBufToOutput_FUN_005a5b80
                    (in_stack_ffffff88,in_stack_ffffff8c,samples_per_sec,iVar5,in_stack_00000020);
          iVar8 = iVar7 + 4;
          *(int *)((int)aiStack_3c + iVar7 + 8) =
               *(int *)((int)aiStack_3c + iVar7 + 8) + in_stack_00000020 * iVar5;
          iVar7 = iVar8;
        } while (iVar8 < iVar4);
      }
      g_MixBufferReadIndex = g_MixBufferReadIndex - iVar5;
      g_MixBufferWriteIndex = g_MixBufferWriteIndex + iVar5;
    }
  }
  return;
}
