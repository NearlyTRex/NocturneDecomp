// Name: sound_snddx.cpp_CDirectSoundDevice_start_FUN_005ae340
// Address: 005ae340
// Address Range: [[005ae340, 005ae4a1]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_start_FUN_005ae340(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_start_FUN_005ae340(CDirectSoundDevice *this_ptr)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  double local_338;
  char acStack_330 [400];
  char acStack_1a0 [400];
  
  if (g_DirectSoundSecondaryBuffer == (IDirectSoundBuffer *)0x0) {
    local_338 = 0.05;
  }
  else {
    g_StreamBlockSizeBytes =
         ((int)((g_StreamBitsPerSample + (g_StreamBitsPerSample >> 0x1f) * -8) -
               (uint)((g_StreamBitsPerSample >> 0x1f) << 2 < 0)) >> 3) * g_StreamSamplesPerBlock *
         g_StreamChannelCount;
    local_338 = ((double)g_StreamSamplesPerBlock / (double)g_StreamSampleRate) * 0.5;
    iVar4 = 0;
    g_StreamCurrentBlock = 0;
    if (0 < g_StreamBlockCount) {
      do {
        iVar1 = sound_snddx_cpp_fillStreamBuffer_FUN_005adff0();
        if (iVar1 == 0) goto LAB_005ae43b;
        iVar4 = iVar4 + 1;
      } while (iVar4 < g_StreamBlockCount);
    }
  }
  iVar4 = sound_sndmain_cpp_startSoundThread_FUN_005abc00(local_338);
  if (iVar4 != 0) {
    if (g_DirectSoundSecondaryBuffer == (IDirectSoundBuffer *)0x0) {
      return 1;
    }
    uVar2 = (*g_DirectSoundSecondaryBuffer->vtable->SetCurrentPosition)
                      (g_DirectSoundSecondaryBuffer,0);
    if (uVar2 == 0) {
      uVar2 = (*g_DirectSoundSecondaryBuffer->vtable->Play)(g_DirectSoundSecondaryBuffer,0,0,1);
      if (uVar2 == 0) {
        return 1;
      }
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
      _sprintf
                (acStack_330,"DirectSux: Unable to %s.  (%s)","Play the secondary buffer",
                 pcVar3);
      pcVar3 = acStack_330;
    }
    else {
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
      _sprintf
                (acStack_1a0,"DirectSux: Unable to %s.  (%s)","Position secondary buffer to 0",
                 pcVar3);
      pcVar3 = acStack_1a0;
    }
    sound_sndmain_cpp_logSoundError_FUN_005adba0(pcVar3);
  }
LAB_005ae43b:
  (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  return 0;
}
