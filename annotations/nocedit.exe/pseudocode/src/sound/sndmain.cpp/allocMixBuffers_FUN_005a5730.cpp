// Name: sound_sndmain.cpp_allocMixBuffers_FUN_005a5730
// Address: 005a5730
// Address Range: [[005a5730, 005a58fe]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_allocMixBuffers_FUN_005a5730(int requested_size,int num_buffers)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_allocMixBuffers_FUN_005a5730(int requested_size,int num_buffers)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar1;
  
  g_MixBufferSize = 1;
  g_NumMixBuffers = num_buffers;
  if (1 < requested_size) {
    do {
      g_MixBufferSize = g_MixBufferSize * 2;
    } while (g_MixBufferSize < requested_size);
  }
  iVar1 = g_MixBufferSize * 4;
  g_MixBufferReadIndex = 0;
  g_MixBufferWriteIndex = 0;
  g_PrimaryMixBuffer =
       shape_memdbg_cpp_debugRealloc_FUN_0050f540
                 (g_PrimaryMixBuffer,num_buffers * iVar1 * g_AudioChannelCount,
                  "..\\sound\\sndmain.cpp",0x4a2);
  g_SecondaryMixBuffer =
       shape_memdbg_cpp_debugRealloc_FUN_0050f540
                 (g_SecondaryMixBuffer,g_AudioChannelCount * iVar1 * 2,"..\\sound\\sndmain.cpp",
                  0x4a3);
  g_TertiaryMixBuffer =
       shape_memdbg_cpp_debugRealloc_FUN_0050f540
                 (g_TertiaryMixBuffer,iVar1 * g_AudioChannelCount,"..\\sound\\sndmain.cpp",0x4a4
                 );
  if (((g_PrimaryMixBuffer == (float *)0x0) || (g_SecondaryMixBuffer == (float *)0x0)) ||
     (g_TertiaryMixBuffer == (float *)0x0)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x4aa;
    core_main_c_displayErrorAndQuit_FUN_00506f10("allocMixBuffers - out of memory");
  }
  iVar4 = 0;
  if (0 < g_AudioChannelCount) {
    iVar3 = 0;
    iVar5 = g_MixBufferSize * 4;
    iVar2 = 0;
    iVar6 = iVar3;
    do {
      *(float **)((int)g_ChannelPrimaryBuffers + iVar2) =
           g_PrimaryMixBuffer + g_MixBufferSize * iVar4 * g_NumMixBuffers;
      *(int *)((int)g_ChannelTertiaryBuffers + iVar2) = (int)g_TertiaryMixBuffer + iVar3;
      pfVar1 = g_SecondaryMixBuffer;
      *(int *)((int)g_ChannelSecondaryBuffersA + iVar2) = (int)g_SecondaryMixBuffer + iVar6;
      *(int *)((int)g_ChannelSecondaryBuffersB + iVar2) = (int)pfVar1 + iVar5;
      iVar5 = iVar5 + g_MixBufferSize * 8;
      iVar6 = iVar6 + g_MixBufferSize * 8;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + g_MixBufferSize * 4;
      iVar2 = iVar2 + 4;
    } while (iVar4 < g_AudioChannelCount);
  }
  return;
}
