// Name: sound_snddx.cpp_fillStreamBuffer_FUN_005adff0
// Address: 005adff0
// Address Range: [[005adff0, 005ae1b6]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_fillStreamBuffer_FUN_005adff0(void)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_fillStreamBuffer_FUN_005adff0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint error_code;
  char *pcVar1;
  char *pcVar4;
  LPVOID pvVar5;
  char acStack_360 [400];
  char acStack_1d0 [400];
  LPVOID apvStack_40 [8];
  LPVOID local_20;
  LPVOID local_1c;
  DWORD local_18;
  DWORD local_14;
  
  if (g_DirectSoundSecondaryBuffer != (IDirectSoundBuffer *)0x0) {
    uVar1 = (*g_DirectSoundSecondaryBuffer->vtable->Lock)
                      (g_DirectSoundSecondaryBuffer,g_StreamCurrentBlock * g_StreamBlockSizeBytes,
                       g_StreamBlockSizeBytes,&local_1c,&local_18,&local_20,&local_14,0);
    if (uVar1 != 0) {
      pcVar1 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar1);
      _sprintf(acStack_360,"DirectSux: Unable to %s.  (%s)","Lock secondary buffer",
                 pcVar1);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_360);
      return 0;
    }
    if ((local_20 == (LPVOID)0x0) && (local_18 == g_StreamBlockSizeBytes)) {
      iVar2 = (int)((g_StreamBitsPerSample + (g_StreamBitsPerSample >> 0x1f) * -8) -
                   (uint)((g_StreamBitsPerSample >> 0x1f) << 2 < 0)) >> 3;
      iVar3 = 0;
      pvVar5 = local_1c;
      if (0 < g_StreamChannelCount * 4) {
        do {
          *(LPVOID *)((int)apvStack_40 + iVar3) = pvVar5;
          iVar3 = iVar3 + 4;
          pvVar5 = (LPVOID)((int)pvVar5 + iVar2);
        } while (iVar3 < g_StreamChannelCount * 4);
      }
      sound_sndmain_cpp_pollAndMixSfx_FUN_005aca90
                (apvStack_40,g_StreamBitsPerSample,g_StreamChannelCount,g_StreamSampleRate,
                 g_StreamSamplesPerBlock,iVar2 * g_StreamChannelCount);
      g_StreamCurrentBlock = g_StreamCurrentBlock + 1;
      if (g_StreamBlockCount <= g_StreamCurrentBlock) {
        g_StreamCurrentBlock = 0;
      }
      error_code = (*g_DirectSoundSecondaryBuffer->vtable->Unlock)
                             (g_DirectSoundSecondaryBuffer,local_1c,local_18,local_20,local_14);
      if (error_code != 0) {
        pcVar4 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(error_code);
        _sprintf(acStack_1d0,"DirectSux: Unable to %s.  (%s)","Unlock secondary buffer"
                   ,pcVar4);
        sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_1d0);
        return 0;
      }
      return 1;
    }
  }
  return 0;
}
