// Name: sound_snddx.cpp_CDirectSoundDevice_allocateSample_FUN_00555ce0
// Address: 00555ce0
// Address Range: [[00555ce0, 00555fac]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSample_FUN_00555ce0(CDirectSoundDevice *this_ptr,CSampleInfo *sample_info)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSample_FUN_00555ce0(CDirectSoundDevice *this_ptr,CSampleInfo *sample_info)

{
  IDirectSoundBuffer *pIVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char acStack_1c8 [400];
  DSBUFFERDESC DStack_38;
  tWAVEFORMATEX tStack_24;
  
  if (g_IDirectSound_PTR_0264a5c4 != (IDirectSound *)0x0) {
    iVar5 = 1;
    iVar3 = 0x18;
    pIVar1 = g_IDirectSoundBuffer_PTR_ARRAY_0264a5f4[6];
    while (pIVar1 != (IDirectSoundBuffer *)0x0) {
      iVar5 = iVar5 + 1;
      if (0x617 < iVar3 + 0x18) break;
      pIVar1 = *(IDirectSoundBuffer **)((int)g_IDirectSoundBuffer_PTR_ARRAY_0264a5f4 + iVar3 + 0x18)
      ;
      iVar3 = iVar3 + 0x18;
    }
    if (iVar5 < 0x41) {
      memset(&tStack_24,0,0x12);
      memset(&DStack_38,0,0x14);
      DStack_38.dwSize = 0x14;
      DStack_38.dwFlags = 0xa0;
      if (g_INT_0264ac0c != 0) {
        DStack_38.dwFlags = 0xa8;
      }
      if (g_IDirectSound3DListener_PTR_0264a5d0 == (IDirectSound3DListener *)0x0) {
        DStack_38.dwFlags = DStack_38.dwFlags | 0x40;
      }
      else {
        DStack_38.dwFlags = DStack_38.dwFlags | 0x10;
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
        DStack_38.dwBufferBytes = (sample_info->sample_count * sample_info->num_channels) / 2;
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
        DStack_38.dwBufferBytes = sample_info->sample_count * uVar2;
      }
      DStack_38.lpwfxFormat = &tStack_24;
      uVar2 = (*g_IDirectSound_PTR_0264a5c4->vtable->CreateSoundBuffer)
                        (g_IDirectSound_PTR_0264a5c4,&DStack_38,
                         g_IDirectSoundBuffer_PTR_ARRAY_0264a5f4 + iVar5 * 6,(LPUNKNOWN)0x0);
      if (uVar2 == 0) {
        if (g_IDirectSoundBuffer_PTR_ARRAY_0264a5f4[iVar5 * 6] != (IDirectSoundBuffer *)0x0) {
          iVar3 = sample_info->bit_depth * 0x100 * sample_info->num_channels;
          iVar4 = iVar3 >> 0x1f;
          g_IDirectSoundBuffer_PTR_ARRAY_0264a5f4[iVar5 * 6 + 2] =
               (IDirectSoundBuffer *)((int)((iVar3 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3);
          g_IDirectSoundBuffer_PTR_ARRAY_0264a5f4[iVar5 * 6 + 4] = (IDirectSoundBuffer *)0x0;
          g_IDirectSoundBuffer_PTR_ARRAY_0264a5f4[iVar5 * 6 + 3] =
               (IDirectSoundBuffer *)DStack_38.dwBufferBytes;
          return iVar5;
        }
      }
      else {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar2);
        _sprintf(acStack_1c8,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005549c0(acStack_1c8);
      }
      sound_sndmain_cpp_logSoundError_FUN_005549c0("DirectSoundDevice::allocateSample - access failed\n");
      return 0;
    }
  }
  return 0;
}
