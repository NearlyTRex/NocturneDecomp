// Name: sound_sndwav.cpp_CWavInDevice_start_FUN_0057ad20
// Address: 0057ad20
// Address Range: [[0057ad20, 0057ae01]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_start_FUN_0057ad20(CWavInDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavInDevice_start_FUN_0057ad20(CWavInDevice *this_ptr)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  int buffer_index;
  
  buffer_index = 0;
  if (0 < g_INT_02c82a30) {
    iVar3 = 0;
    do {
      memset(*(void **)(iVar3 + 0x2c8292c),0,0x20);
      **(uint **)(iVar3 + 0x2c8292c) = *(uint *)((int)g_INT_ARRAY_02c829cc + iVar3);
      *(int *)(*(int *)(iVar3 + 0x2c8292c) + 0xc) = buffer_index;
      *(int *)(*(int *)(iVar3 + 0x2c8292c) + 4) =
           ((int)((g_INT_02c82a1c + (g_INT_02c82a1c >> 0x1f) * -8) -
                 (uint)((g_INT_02c82a1c >> 0x1f) << 2 < 0)) >> 3) * g_INT_02c82a2c * g_INT_02c82a20;
      iVar1 = sound_sndwav_cpp_writeWavInBuffer_FUN_0057abc0(buffer_index);
      if (iVar1 == 0) {
        (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
        return 0;
      }
      buffer_index = buffer_index + 1;
      iVar3 = iVar3 + 4;
    } while (buffer_index < g_INT_02c82a30);
  }
  g_INT_02c82a44 = g_INT_02c82a30 + -1;
  g_INT_02c82a48 = g_INT_02c82a2c;
  MVar2 = waveInStart((HWAVEIN)g_INT_02c828d8);
  if (MVar2 == 0) {
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_005773f0("waveInStart failed!");
  (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  return 0;
}
