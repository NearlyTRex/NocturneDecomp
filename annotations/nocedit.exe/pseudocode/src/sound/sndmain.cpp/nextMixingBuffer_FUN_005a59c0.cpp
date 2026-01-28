// Name: sound_sndmain.cpp_nextMixingBuffer_FUN_005a59c0
// Address: 005a59c0
// Address Range: [[005a59c0, 005a5a59] [005a5b49, 005a5b70]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_005a59c0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_005a59c0(void)

{
  int *piVar1;
  SMixBuffer mix_buffer;
  int iVar2;
  CSfxSlot *pCVar3;
  ulong count;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  byte in_stack_ffffff94 [28];
  uint in_stack_ffffffb0;
  uint uVar8;
  CSfxSlot *pCVar9;
  float fVar10;
  uint auStack_40 [8];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar7 = 0;
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
  iVar5 = 0;
  count = g_MixBufferSize * 4;
  if (0 < g_AudioChannelCount) {
    iVar2 = 0;
    do {
      crt_string_c_memmove_FUN_005fe5e0
                (*(void **)((int)g_ChannelPrimaryBuffers + iVar2),
                 (void *)(g_MixBufferSize * 4 +
                         (int)*(void **)((int)g_ChannelPrimaryBuffers + iVar2)),
                 (g_NumMixBuffers + -1) * count);
      piVar1 = (int *)((int)g_ChannelPrimaryBuffers + iVar2);
      iVar2 = iVar2 + 4;
      iVar5 = iVar5 + 1;
      in_stack_ffffffb0 = 0x5a5a66;
      crt_memory_c_memset_FUN_005fde40
                ((void *)(*piVar1 + (g_NumMixBuffers + -1) * g_MixBufferSize * 4),0,count);
    } while (iVar5 < g_AudioChannelCount);
  }
  iStack_20 = g_MixBufferSize;
  iStack_1c = g_AudioChannelCount;
  iStack_18 = g_AudioSampleRate;
  if (0 < g_AudioChannelCount) {
    iVar5 = 0;
    do {
      iVar2 = iVar5 + 4;
      *(uint *)((int)auStack_40 + iVar5) =
           *(uint *)((int)g_ChannelPrimaryBuffers + iVar5);
      iVar5 = iVar2;
    } while (iVar2 < g_AudioChannelCount * 4);
  }
  fStack_14 = (float)g_MixBufferSize / (float)g_AudioSampleRate;
  pCVar3 = g_SfxSlots;
  do {
    uVar8 = 0x5a5ae7;
    pCVar9 = pCVar3;
    fVar10 = fStack_14;
    sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(pCVar3,fStack_14);
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CSfxSlot *)&g_SfxLastSlot);
  pCVar3 = g_SfxSlots;
  do {
    puVar4 = auStack_40;
    puVar6 = (uint *)&stack0xffffff94;
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    mix_buffer.channel_buffers[7] = (float *)in_stack_ffffffb0;
    mix_buffer.channel_buffers[0] = (float *)in_stack_ffffff94._0_4_;
    mix_buffer.channel_buffers[1] = (float *)in_stack_ffffff94._4_4_;
    mix_buffer.channel_buffers[2] = (float *)in_stack_ffffff94._8_4_;
    mix_buffer.channel_buffers[3] = (float *)in_stack_ffffff94._12_4_;
    mix_buffer.channel_buffers[4] = (float *)in_stack_ffffff94._16_4_;
    mix_buffer.channel_buffers[5] = (float *)in_stack_ffffff94._20_4_;
    mix_buffer.channel_buffers[6] = (float *)in_stack_ffffff94._24_4_;
    mix_buffer.num_output_samples = uVar8;
    mix_buffer.num_channels = (int)pCVar9;
    mix_buffer.output_sample_rate = (int)fVar10;
    sound_sndmain_cpp_CSfxSlot_mix_FUN_005a75e0(pCVar3,mix_buffer);
    pCVar3 = pCVar3 + 1;
  } while (pCVar3 != (CSfxSlot *)&g_SfxLastSlot);
  g_MixBufferReadIndex = g_MixBufferSize;
  g_MixBufferWriteIndex = 0;
  g_MixBufferCount = g_MixBufferCount + 1;
  return;
}
