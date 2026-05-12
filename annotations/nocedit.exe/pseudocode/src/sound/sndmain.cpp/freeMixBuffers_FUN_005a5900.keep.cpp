// Name: sound_sndmain.cpp_freeMixBuffers_FUN_005a5900
// Address: 005a5900
// MANUAL RECONSTRUCTION
// Address Range: [[005a5900, 005a59b9]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_freeMixBuffers_FUN_005a5900(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_freeMixBuffers_FUN_005a5900(void)

{
  int iVar2;

  if (g_PrimaryMixBuffer != (float *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(g_PrimaryMixBuffer,"..\\sound\\sndmain.cpp",0x4bc);
    g_PrimaryMixBuffer = (float *)0x0;
  }
  if (g_SecondaryMixBuffer != (float *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(g_SecondaryMixBuffer,"..\\sound\\sndmain.cpp",0x4c0)
    ;
    g_SecondaryMixBuffer = (float *)0x0;
  }
  if (g_TertiaryMixBuffer != (float *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(g_TertiaryMixBuffer,"..\\sound\\sndmain.cpp",0x4c4);
    g_TertiaryMixBuffer = (float *)0x0;
  }
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    g_ChannelTertiaryBuffers[iVar2] = (float *)0x0;
    g_ChannelSecondaryBuffersA[iVar2] = (float *)0x0;
    g_ChannelSecondaryBuffersB[iVar2] = (float *)0x0;
    g_ChannelPrimaryBuffers[iVar2] = (float *)0x0;
  }
  g_NumMixBuffers = 0;
  g_MixBufferReadIndex = 0;
  g_MixBufferWriteIndex = 0;
  g_MixBufferSize = 0;
  return;
}
