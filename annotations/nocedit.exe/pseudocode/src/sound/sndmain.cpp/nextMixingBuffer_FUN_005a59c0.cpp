// Name: sound_sndmain.cpp_nextMixingBuffer_FUN_005a59c0
// Address: 005a59c0
// Address Range: [[005a59c0, 005a5a59] [005a5b49, 005a5b70]]
// Convention: __cdecl
// Signature: undefined sound_sndmain.cpp_nextMixingBuffer_FUN_005a59c0()

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_005a59c0(void)

{
  SMixBuffer mix_buffer;
  float fVar1;
  float fVar2;
  int iVar3;
  CSfxSlot *pCVar4;
  BADSPACEBASE *in_ESP;
  ulong count;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  byte in_stack_ffffff98 [20];
  uint in_stack_ffffffac;
  uint in_stack_ffffffb0;
  void *in_stack_ffffffb4;
  uint uVar9;
  CSfxSlot *pCVar10;
  float fVar11;
  uint auStack_3c [8];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar8 = 0;
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
  iVar6 = 0;
  count = g_MixBufferSize * 4;
  if (0 < g_AudioChannelCount) {
    iVar3 = 0;
    do {
      in_stack_ffffffac = 0x5a5a38;
      crt_string_c_memmove_FUN_005fe5e0
                (*(void **)((int)g_ChannelPrimaryBuffers + iVar3),
                 (void *)(g_MixBufferSize * 4 +
                         (int)*(void **)((int)g_ChannelPrimaryBuffers + iVar3)),
                 (g_NumMixBuffers + -1) * count);
      in_stack_ffffffb4 =
           (void *)(*(int *)((int)g_ChannelPrimaryBuffers + iVar3) +
                   (g_NumMixBuffers + -1) * g_MixBufferSize * 4);
      iVar3 = iVar3 + 4;
      iVar6 = iVar6 + 1;
      in_stack_ffffffb0 = 0x5a5a66;
      crt_memory_c_memset_FUN_005fde40(in_stack_ffffffb4,0,count);
    } while (iVar6 < g_AudioChannelCount);
  }
  iStack_1c = g_MixBufferSize;
  iStack_18 = g_AudioChannelCount;
  iStack_14 = g_AudioSampleRate;
  if (0 < g_AudioChannelCount) {
    iVar6 = 0;
    do {
      iVar3 = iVar6 + 4;
      *(uint *)((int)auStack_3c + iVar6) =
           *(uint *)((int)g_ChannelPrimaryBuffers + iVar6);
      iVar6 = iVar3;
    } while (iVar3 < g_AudioChannelCount * 4);
  }
  fVar2 = (float)g_MixBufferSize;
  fVar1 = (float)g_AudioSampleRate;
  pCVar4 = g_SfxSlots;
  do {
    uVar9 = 0x5a5ae7;
    pCVar10 = pCVar4;
    fVar11 = fVar2 / fVar1;
    sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(pCVar4,fVar2 / fVar1);
    pCVar4 = pCVar4 + 1;
  } while (pCVar4 != (CSfxSlot *)&g_SfxLastSlot);
  pCVar4 = g_SfxSlots;
  do {
    puVar5 = auStack_3c;
    puVar7 = (uint *)&stack0xffffff98;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    mix_buffer.channel_buffers[5] = (float *)in_stack_ffffffac;
    mix_buffer.channel_buffers[0] = (float *)in_stack_ffffff98._0_4_;
    mix_buffer.channel_buffers[1] = (float *)in_stack_ffffff98._4_4_;
    mix_buffer.channel_buffers[2] = (float *)in_stack_ffffff98._8_4_;
    mix_buffer.channel_buffers[3] = (float *)in_stack_ffffff98._12_4_;
    mix_buffer.channel_buffers[4] = (float *)in_stack_ffffff98._16_4_;
    mix_buffer.channel_buffers[6] = (float *)in_stack_ffffffb0;
    mix_buffer.channel_buffers[7] = (float *)in_stack_ffffffb4;
    mix_buffer.num_output_samples = uVar9;
    mix_buffer.num_channels = (int)pCVar10;
    mix_buffer.output_sample_rate = (int)fVar11;
    sound_sndmain_cpp_CSfxSlot_mix_FUN_005a75e0(pCVar4,mix_buffer);
    pCVar4 = pCVar4 + 1;
  } while (pCVar4 != (CSfxSlot *)&g_SfxLastSlot);
  g_MixBufferReadIndex = g_MixBufferSize;
  g_MixBufferWriteIndex = 0;
  g_MixBufferCount = g_MixBufferCount + 1;
  return;
}
