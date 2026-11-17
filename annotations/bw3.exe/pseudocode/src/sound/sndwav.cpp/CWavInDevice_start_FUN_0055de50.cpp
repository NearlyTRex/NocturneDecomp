// Name: sound_sndwav.cpp_CWavInDevice_start_FUN_0055de50
// Address: 0055de50
// Address Range: [[0055de50, 0055df31]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_start_FUN_0055de50(CWavInDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavInDevice_start_FUN_0055de50(CWavInDevice *this_ptr)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  int buffer_index;
  
  buffer_index = 0;
  if (0 < g_INT_02cf565c) {
    iVar3 = 0;
    do {
      memset(*(void **)((int)g_LPWAVEHDR_ARRAY_02cf5558 + iVar3),0,0x20);
      **(uint **)((int)g_LPWAVEHDR_ARRAY_02cf5558 + iVar3) =
           *(uint *)((int)g_INT_ARRAY_02cf55f8 + iVar3);
      *(int *)(*(int *)((int)g_LPWAVEHDR_ARRAY_02cf5558 + iVar3) + 0xc) = buffer_index;
      *(int *)(*(int *)((int)g_LPWAVEHDR_ARRAY_02cf5558 + iVar3) + 4) =
           ((int)((g_INT_02cf5648 + (g_INT_02cf5648 >> 0x1f) * -8) -
                 (uint)((g_INT_02cf5648 >> 0x1f) << 2 < 0)) >> 3) * g_INT_02cf5658 * g_INT_02cf564c;
      iVar1 = sound_sndwav_cpp_writeWavInBuffer_FUN_0055dcf0(buffer_index);
      if (iVar1 == 0) {
        (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
        return 0;
      }
      buffer_index = buffer_index + 1;
      iVar3 = iVar3 + 4;
    } while (buffer_index < g_INT_02cf565c);
  }
  g_INT_02cf5670 = g_INT_02cf565c + -1;
  g_INT_02cf5674 = g_INT_02cf5658;
  MVar2 = waveInStart((HWAVEIN)g_INT_02cf5504);
  if (MVar2 == 0) {
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_0055a560("waveInStart failed!");
  (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  return 0;
}
