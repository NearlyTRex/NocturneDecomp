// Name: sound_snddx.cpp_fillStreamBuffer_FUN_0055a820
// Address: 0055a820
// Address Range: [[0055a820, 0055a9e6]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_fillStreamBuffer_FUN_0055a820(void)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_fillStreamBuffer_FUN_0055a820(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  LPVOID pvVar4;
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
      sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar1);
      _sprintf(acStack_360,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_360);
      return 0;
    }
    if ((local_20 == (LPVOID)0x0) && (local_18 == g_StreamBlockSizeBytes)) {
      iVar2 = (int)((g_StreamBitsPerSample + (g_StreamBitsPerSample >> 0x1f) * -8) -
                   (uint)((g_StreamBitsPerSample >> 0x1f) << 2 < 0)) >> 3;
      iVar3 = 0;
      pvVar4 = local_1c;
      if (0 < g_StreamChannelCount * 4) {
        do {
          *(LPVOID *)((int)apvStack_40 + iVar3) = pvVar4;
          iVar3 = iVar3 + 4;
          pvVar4 = (LPVOID)((int)pvVar4 + iVar2);
        } while (iVar3 < g_StreamChannelCount * 4);
      }
      sound_sndmain_cpp_pollAndMixSfx_FUN_00559d90
                (apvStack_40,g_StreamBitsPerSample,g_StreamChannelCount,g_StreamSampleRate,
                 g_StreamSamplesPerBlock,iVar2 * g_StreamChannelCount);
      g_StreamCurrentBlock = g_StreamCurrentBlock + 1;
      if (g_StreamBlockCount <= g_StreamCurrentBlock) {
        g_StreamCurrentBlock = 0;
      }
      uVar1 = (*g_DirectSoundSecondaryBuffer->vtable->Unlock)
                        (g_DirectSoundSecondaryBuffer,local_1c,local_18,local_20,local_14);
      if (uVar1 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar1);
        _sprintf(acStack_1d0,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_1d0);
        return 0;
      }
      return 1;
    }
  }
  return 0;
}
