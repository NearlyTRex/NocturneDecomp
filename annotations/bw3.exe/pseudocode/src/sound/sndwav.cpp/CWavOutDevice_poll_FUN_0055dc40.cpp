// Name: sound_sndwav.cpp_CWavOutDevice_poll_FUN_0055dc40
// Address: 0055dc40
// Address Range: [[0055dc40, 0055dcb8]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_poll_FUN_0055dc40(CWavOutDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavOutDevice_poll_FUN_0055dc40(CWavOutDevice *this_ptr)

{
  int iVar1;
  int iVar2;
  int buffer_index;
  
  buffer_index = 0;
  if (0 < g_INT_02cf5500) {
    iVar2 = 0;
    do {
      if ((*(int *)((int)g_LPWAVEHDR_ARRAY_02cf5490 + iVar2) == 0) ||
         (*(int *)((int)g_LPVOID_ARRAY_02cf54d0 + iVar2) == 0)) {
        sound_sndmain_cpp_logSoundError_FUN_0055a560("WavOutDevice::poll - NULL pointer??");
        return 0;
      }
      if (((*(byte *)(*(int *)((int)g_LPWAVEHDR_ARRAY_02cf5490 + iVar2) + 0x10) & 1) != 0) &&
         (iVar1 = sound_sndwav_cpp_writeWavOutBuffer_FUN_0055d6f0(buffer_index), iVar1 == 0)) {
        sound_sndmain_cpp_logSoundError_FUN_0055a560("WavOutDevice::poll - sendWavOutBuffer failed");
        return 0;
      }
      buffer_index = buffer_index + 1;
      iVar2 = iVar2 + 4;
    } while (buffer_index < g_INT_02cf5500);
  }
  return 1;
}
