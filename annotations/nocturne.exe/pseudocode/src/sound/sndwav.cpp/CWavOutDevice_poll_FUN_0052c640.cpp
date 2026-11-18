// Name: sound_sndwav.cpp_CWavOutDevice_poll_FUN_0052c640
// Address: 0052c640
// Address Range: [[0052c640, 0052c6b8]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_poll_FUN_0052c640(CWavOutDevice *this_ptr,short *output_buffer,int num_samples)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavOutDevice_poll_FUN_0052c640(CWavOutDevice *this_ptr,short *output_buffer,int num_samples)

{
  int iVar1;
  int iVar2;
  int buffer_index;
  
  buffer_index = 0;
  if (0 < g_WaveOutNumBuffers) {
    iVar2 = 0;
    do {
      if ((*(int *)((int)g_LPWAVEHDR_ARRAY_02dc93a8 + iVar2) == 0) ||
         (*(int *)((int)g_WaveOutBuffers + iVar2) == 0)) {
        sound_sndmain_cpp_logSoundError_FUN_00529980("WavOutDevice::poll - NULL pointer??");
        return 0;
      }
      if (((*(byte *)(*(int *)((int)g_LPWAVEHDR_ARRAY_02dc93a8 + iVar2) + 0x10) & 1) != 0) &&
         (iVar1 = sound_sndwav_cpp_writeWavOutBuffer_FUN_0052c130(buffer_index), iVar1 == 0)) {
        sound_sndmain_cpp_logSoundError_FUN_00529980("WavOutDevice::poll - sendBuffer failed");
        return 0;
      }
      buffer_index = buffer_index + 1;
      iVar2 = iVar2 + 4;
    } while (buffer_index < g_WaveOutNumBuffers);
  }
  return 1;
}
