// Name: sound_snddx.cpp_CDirectSoundDevice_allocateSample_FUN_0055b880
// Address: 0055b880
// Address Range: [[0055b880, 0055bb42]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSample_FUN_0055b880(CDirectSoundDevice *this_ptr,CSampleInfo *sample_info)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSample_FUN_0055b880(CDirectSoundDevice *this_ptr,CSampleInfo *sample_info)

{
  IDirectSoundBuffer *pIVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char acStack_1d8 [400];
  DSBUFFERDESC DStack_48;
  tWAVEFORMATEX tStack_24;
  
  if (g_DirectSound != (IDirectSound *)0x0) {
    iVar5 = 1;
    iVar3 = 0x18;
    pIVar1 = g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[6];
    while (pIVar1 != (IDirectSoundBuffer *)0x0) {
      iVar5 = iVar5 + 1;
      if (0x617 < iVar3 + 0x18) break;
      pIVar1 = *(IDirectSoundBuffer **)((int)g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4 + iVar3 + 0x18)
      ;
      iVar3 = iVar3 + 0x18;
    }
    if (iVar5 < 0x41) {
      memset(&tStack_24,0,0x12);
      memset(&DStack_48,0,0x24);
      DStack_48.dwSize = 0x24;
      if (g_DirectSound3DListener == (IDirectSound3DListener *)0x0) {
        DStack_48.dwFlags = 0xe0;
      }
      else {
        DStack_48.dwFlags = 0xb0;
      }
      if (sample_info->streaming_flag == 2) {
        tStack_24.wFormatTag = 0x20;
        tStack_24.nChannels = (WORD)sample_info->num_channels;
        tStack_24.nSamplesPerSec = sample_info->sample_rate;
        iVar3 = (uint)tStack_24.nChannels * sample_info->bit_depth;
        iVar4 = iVar3 >> 0x1f;
        uVar2 = (int)((iVar3 + iVar4 * -0x10) - (uint)(iVar4 << 3 < 0)) >> 4;
        tStack_24.nBlockAlign = (WORD)uVar2;
        tStack_24.nAvgBytesPerSec = sample_info->sample_rate * (uVar2 & 0xffff);
        tStack_24.wBitsPerSample = 4;
        DStack_48.dwBufferBytes = (sample_info->sample_count * sample_info->num_channels) / 2;
      }
      else {
        tStack_24.wFormatTag = 1;
        tStack_24.nChannels = (WORD)sample_info->num_channels;
        tStack_24.nSamplesPerSec = sample_info->sample_rate;
        iVar3 = (uint)tStack_24.nChannels * sample_info->bit_depth;
        iVar4 = iVar3 >> 0x1f;
        uVar2 = (int)((iVar3 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3;
        tStack_24.nBlockAlign = (WORD)uVar2;
        uVar2 = uVar2 & 0xffff;
        tStack_24.nAvgBytesPerSec = sample_info->sample_rate * uVar2;
        tStack_24.wBitsPerSample = (WORD)sample_info->bit_depth;
        DStack_48.dwBufferBytes = sample_info->sample_count * uVar2;
      }
      DStack_48.lpwfxFormat = &tStack_24;
      uVar2 = (*g_DirectSound->vtable->CreateSoundBuffer)
                        (g_DirectSound,&DStack_48,
                         g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4 + iVar5 * 6,(LPUNKNOWN)0x0);
      if (uVar2 == 0) {
        if (g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[iVar5 * 6] != (IDirectSoundBuffer *)0x0) {
          iVar3 = sample_info->bit_depth * 0x100 * sample_info->num_channels;
          iVar4 = iVar3 >> 0x1f;
          g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[iVar5 * 6 + 2] =
               (IDirectSoundBuffer *)((int)((iVar3 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3);
          g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[iVar5 * 6 + 4] = (IDirectSoundBuffer *)0x0;
          g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[iVar5 * 6 + 3] =
               (IDirectSoundBuffer *)DStack_48.dwBufferBytes;
          return iVar5;
        }
      }
      else {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar2);
        _sprintf(acStack_1d8,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_1d8);
      }
      sound_sndmain_cpp_logSoundError_FUN_0055a560("DirectSoundDevice::allocateSample - access failed\n");
      return 0;
    }
  }
  return 0;
}
