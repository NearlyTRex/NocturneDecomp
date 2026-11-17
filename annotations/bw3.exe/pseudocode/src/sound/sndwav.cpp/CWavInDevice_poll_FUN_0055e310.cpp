// Name: sound_sndwav.cpp_CWavInDevice_poll_FUN_0055e310
// Address: 0055e310
// Address Range: [[0055e310, 0055e49f]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_poll_FUN_0055e310(CWavInDevice *this_ptr,short *output_buffer,int num_samples)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavInDevice_poll_FUN_0055e310(CWavInDevice *this_ptr,short *output_buffer,int num_samples)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = g_INT_02cf564c *
          ((int)((g_INT_02cf5648 + (g_INT_02cf5648 >> 0x1f) * -8) -
                (uint)((g_INT_02cf5648 >> 0x1f) << 2 < 0)) >> 3);
  iVar4 = 0;
  bVar5 = g_INT_02cf5648 == 0x10;
  while( true ) {
    if (g_INT_ARRAY_02cf55f8[g_INT_02cf5670] == 0) {
      return -1;
    }
    iVar1 = ((g_INT_02cf5658 - g_INT_02cf5674) * g_INT_02cf5668) / g_INT_02cf5650;
    if (num_samples < iVar1) {
      iVar1 = num_samples;
    }
    if (0 < iVar1) {
      sound_sndmain_cpp_resampleAndConvertAudio_FUN_00557950
                (g_INT_02cf5648,g_INT_02cf564c,g_INT_02cf5650,(uint)bVar5,
                 (short *)(g_INT_02cf5674 * iVar3 + g_INT_ARRAY_02cf55f8[g_INT_02cf5670]),
                 g_INT_02cf5660,g_INT_02cf5664,g_INT_02cf5668,g_INT_02cf566c,output_buffer,iVar1);
      output_buffer = (short *)((int)output_buffer + iVar3 * iVar1);
      num_samples = num_samples - iVar1;
      g_INT_02cf5674 = g_INT_02cf5674 + (g_INT_02cf5650 * iVar1) / g_INT_02cf5668;
      iVar4 = iVar4 + iVar1;
    }
    if (num_samples < 1) {
      return iVar4;
    }
    iVar1 = g_INT_02cf5670 + 1;
    if (g_INT_02cf565c <= iVar1) {
      iVar1 = 0;
    }
    if (g_LPWAVEHDR_ARRAY_02cf5558[iVar1] == (LPWAVEHDR)0x0) {
      return -1;
    }
    if ((g_LPWAVEHDR_ARRAY_02cf5558[iVar1]->dwFlags & 1) == 0) {
      return iVar4;
    }
    iVar2 = sound_sndwav_cpp_writeWavInBuffer_FUN_0055dcf0(iVar1);
    if (iVar2 == 0) break;
    g_INT_02cf5674 = 0;
    g_INT_02cf5670 = iVar1;
  }
  sound_sndmain_cpp_logSoundError_FUN_0055a560("WavInDevice::poll - queueWavInBuffer failed");
  return -1;
}
