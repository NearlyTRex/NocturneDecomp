// Name: sound_snddx.cpp_fillStreamBuffer_FUN_005adff0
// Address: 005adff0
// Address Range: [[005adff0, 005ae1b6]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_fillStreamBuffer_FUN_005adff0(void)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_fillStreamBuffer_FUN_005adff0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  LPVOID pvVar5;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  LPVOID in_stack_00000008;
  LPVOID in_stack_0000000c;
  DWORD in_stack_00000010;
  DWORD in_stack_00000014;
  char acStack_334 [4];
  uint uStack_330;
  char acStack_18c [4];
  char acStack_188 [360];
  LPVOID local_20;
  LPVOID local_1c;
  DWORD local_18;
  DWORD local_14;
  
  if (g_DirectSoundSecondaryBuffer != (IDirectSoundBuffer *)0x0) {
    uVar1 = (*g_DirectSoundSecondaryBuffer->vtable->Lock)
                      (g_DirectSoundSecondaryBuffer,g_StreamCurrentBlock * g_StreamBlockSizeBytes,
                       g_StreamBlockSizeBytes,&local_1c,&local_18,&local_20,&local_14,0);
    if (uVar1 != 0) {
      pcVar4 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar1);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xfffffcc8,"DirectSux: Unable to %s.  (%s)",
                 "Lock secondary buffer",pcVar4);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_334);
      return 0;
    }
    if ((in_stack_00000004 == 0) && (in_stack_0000000c == (LPVOID)g_StreamBlockSizeBytes)) {
      iVar2 = (int)((g_StreamBitsPerSample + (g_StreamBitsPerSample >> 0x1f) * -8) -
                   (uint)((g_StreamBitsPerSample >> 0x1f) << 2 < 0)) >> 3;
      iVar3 = 0;
      pvVar5 = in_stack_00000008;
      if (0 < g_StreamChannelCount * 4) {
        do {
          *(LPVOID *)((int)&local_1c + iVar3) = pvVar5;
          iVar3 = iVar3 + 4;
          pvVar5 = (LPVOID)((int)pvVar5 + iVar2);
        } while (iVar3 < g_StreamChannelCount * 4);
      }
      sound_sndmain_cpp_pollAndMixSfx_FUN_005aca90
                (&local_1c,g_StreamBitsPerSample,g_StreamChannelCount,g_StreamSampleRate,
                 g_StreamSamplesPerBlock,iVar2 * g_StreamChannelCount);
      g_StreamCurrentBlock = g_StreamCurrentBlock + 1;
      if (g_StreamBlockCount <= g_StreamCurrentBlock) {
        g_StreamCurrentBlock = 0;
      }
      uVar1 = (*g_DirectSoundSecondaryBuffer->vtable->Unlock)
                        (g_DirectSoundSecondaryBuffer,in_stack_0000000c,in_stack_00000010,
                         in_stack_00000008,in_stack_00000014);
      if (uVar1 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar1);
        uStack_330 = 0x5ae197;
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_18c,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_188);
        return 0;
      }
      return 1;
    }
  }
  return 0;
}
