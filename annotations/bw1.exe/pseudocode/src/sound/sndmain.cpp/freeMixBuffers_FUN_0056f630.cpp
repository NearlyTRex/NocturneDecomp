// Name: sound_sndmain.cpp_freeMixBuffers_FUN_0056f630
// Address: 0056f630
// Address Range: [[0056f630, 0056f6c8]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_freeMixBuffers_FUN_0056f630(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_freeMixBuffers_FUN_0056f630(void)

{
  int iVar1;
  int iVar2;
  
  if (g_PrimaryMixBuffer != (float *)0x0) {
    debugFree(g_PrimaryMixBuffer);
    g_PrimaryMixBuffer = (float *)0x0;
  }
  if (g_SecondaryMixBuffer != (float *)0x0) {
    debugFree(g_SecondaryMixBuffer);
    g_SecondaryMixBuffer = (float *)0x0;
  }
  if (g_TertiaryMixBuffer != (float *)0x0) {
    debugFree(g_TertiaryMixBuffer);
    g_TertiaryMixBuffer = (float *)0x0;
  }
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)((int)g_ChannelTertiaryBuffers + iVar2) = 0;
    *(uint *)((int)g_ChannelSecondaryBuffersA + iVar2) = 0;
    *(uint *)((int)g_ChannelSecondaryBuffersB + iVar2) = 0;
    *(uint *)((int)g_ChannelPrimaryBuffers + iVar2) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x20);
  g_NumMixBuffers = 0;
  g_MixBufferReadIndex = 0;
  g_MixBufferWriteIndex = 0;
  g_MixBufferSize = 0;
  return;
}
