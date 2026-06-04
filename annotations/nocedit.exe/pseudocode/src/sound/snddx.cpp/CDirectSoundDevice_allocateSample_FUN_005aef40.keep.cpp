// Name: sound_snddx.cpp_CDirectSoundDevice_allocateSample_FUN_005aef40
// Address: 005aef40
// MANUAL RECONSTRUCTION
// Address Range: [[005aef40, 005af14b]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSample_FUN_005aef40(CDirectSoundDevice *this_ptr,int bits_per_sample,int channel_count,int sample_rate,int sample_count)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSample_FUN_005aef40(CDirectSoundDevice *this_ptr,int bits_per_sample,int channel_count,int sample_rate,int sample_count)

{
  IDirectSoundBuffer *this_ptr_00;
  int iVar2;
  uint error_code;
  char *pcVar3;
  int iVar4;
  char acStack_1c8 [400];
  DSBUFFERDESC local_38;
  tWAVEFORMATEX local_24;
  IDirectSoundBuffer *pIVar1;
  
  if (g_DirectSound != (IDirectSound *)0x0) {
    iVar4 = 1;
    pIVar1 = g_DirectSoundSampleBuffers[1];
    while (pIVar1 != (IDirectSoundBuffer *)0x0) {
      iVar4 = iVar4 + 1;
      if (0x18 < iVar4) break;
      pIVar1 = g_DirectSoundSampleBuffers[iVar4];
    }
    if (iVar4 < 0x19) {
      memset(&local_24,0,0x12);
      local_24.wFormatTag = 1;
      local_24.nChannels = (WORD)channel_count;
      local_24.nSamplesPerSec = sample_rate;
      iVar2 = bits_per_sample / 8;
      local_24.nBlockAlign = (short)iVar2 * local_24.nChannels;
      local_24.nAvgBytesPerSec = sample_rate * (uint)local_24.nBlockAlign;
      local_24.wBitsPerSample = (WORD)bits_per_sample;
      memset(&local_38,0,0x14);
      local_38.lpwfxFormat = &local_24;
      local_38.dwBufferBytes = channel_count * sample_count * iVar2;
      local_38.dwSize = 0x14;
      local_38.dwFlags = 0xb0;
      error_code = (*g_DirectSound->vtable->CreateSoundBuffer)
                             (g_DirectSound,&local_38,g_DirectSoundSampleBuffers + iVar4,
                              (LPUNKNOWN)0x0);
      if (error_code == 0) {
        if (g_DirectSoundSampleBuffers[iVar4] != (IDirectSoundBuffer *)0x0) {
          g_DirectSoundBufferMetadata[iVar4].pvLockedAudio1 = (LPVOID)0x0;
          g_DirectSoundBufferMetadata[iVar4].dwBytesPerSample = channel_count * iVar2;
          return iVar4;
        }
      }
      else {
        pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(error_code);
        _sprintf(acStack_1c8,"DirectSux: Unable to %s.  (%s)","Create secondary buffer"
                   ,pcVar3);
        sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_1c8);
      }
      sound_sndmain_cpp_logSoundError_FUN_005adba0("DirectSoundDevice::allocateSample - access failed\n");
      this_ptr_00 = g_DirectSoundSampleBuffers[iVar4];
      if (this_ptr_00 != (IDirectSoundBuffer *)0x0) {
        (*this_ptr_00->vtable->Release)((IUnknown *)this_ptr_00);
        g_DirectSoundSampleBuffers[iVar4] = (IDirectSoundBuffer *)0x0;
      }
      g_DirectSoundBufferMetadata[iVar4].dwBytesPerSample = 0;
      return 0;
    }
  }
  return 0;
}
