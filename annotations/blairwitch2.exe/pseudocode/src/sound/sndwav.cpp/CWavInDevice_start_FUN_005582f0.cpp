// Name: sound_sndwav.cpp_CWavInDevice_start_FUN_005582f0
// Address: 005582f0
// Address Range: [[005582f0, 005583d1]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_start_FUN_005582f0(CWavInDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavInDevice_start_FUN_005582f0(CWavInDevice *this_ptr)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  int buffer_index;
  
  buffer_index = 0;
  if (0 < g_INT_0264b260) {
    iVar3 = 0;
    do {
      memset(*(void **)((int)g_LPWAVEHDR_ARRAY_0264b15c + iVar3),0,0x20);
      **(uint **)((int)g_LPWAVEHDR_ARRAY_0264b15c + iVar3) =
           *(uint *)((int)g_INT_ARRAY_0264b1fc + iVar3);
      *(int *)(*(int *)((int)g_LPWAVEHDR_ARRAY_0264b15c + iVar3) + 0xc) = buffer_index;
      *(int *)(*(int *)((int)g_LPWAVEHDR_ARRAY_0264b15c + iVar3) + 4) =
           ((int)((g_INT_0264b24c + (g_INT_0264b24c >> 0x1f) * -8) -
                 (uint)((g_INT_0264b24c >> 0x1f) << 2 < 0)) >> 3) * g_INT_0264b25c * g_INT_0264b250;
      iVar1 = sound_sndwav_cpp_writeWavInBuffer_FUN_00558190(buffer_index);
      if (iVar1 == 0) {
        (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
        return 0;
      }
      buffer_index = buffer_index + 1;
      iVar3 = iVar3 + 4;
    } while (buffer_index < g_INT_0264b260);
  }
  g_INT_0264b274 = g_INT_0264b260 + -1;
  g_INT_0264b278 = g_INT_0264b25c;
  MVar2 = waveInStart((HWAVEIN)g_INT_0264b108);
  if (MVar2 == 0) {
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_005549c0("waveInStart failed!");
  (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  return 0;
}
