// Name: sound_sndwav.cpp_CWavInDevice_poll_FUN_0057b1e0
// Address: 0057b1e0
// Address Range: [[0057b1e0, 0057b36f]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_poll_FUN_0057b1e0(CWavInDevice *this_ptr,short *output_buffer,int num_samples)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavInDevice_poll_FUN_0057b1e0(CWavInDevice *this_ptr,short *output_buffer,int num_samples)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = g_INT_02c82a20 *
          ((int)((g_INT_02c82a1c + (g_INT_02c82a1c >> 0x1f) * -8) -
                (uint)((g_INT_02c82a1c >> 0x1f) << 2 < 0)) >> 3);
  iVar4 = 0;
  bVar5 = g_INT_02c82a1c == 0x10;
  while( true ) {
    if (g_INT_ARRAY_02c829cc[g_INT_02c82a44] == 0) {
      return -1;
    }
    iVar1 = ((g_INT_02c82a2c - g_INT_02c82a48) * g_INT_02c82a3c) / g_INT_02c82a24;
    if (num_samples < iVar1) {
      iVar1 = num_samples;
    }
    if (0 < iVar1) {
      sound_sndmain_cpp_resampleAndConvertAudio_FUN_005747f0
                (g_INT_02c82a1c,g_INT_02c82a20,g_INT_02c82a24,(uint)bVar5,
                 (short *)(g_INT_02c82a48 * iVar3 + g_INT_ARRAY_02c829cc[g_INT_02c82a44]),
                 g_INT_02c82a34,g_INT_02c82a38,g_INT_02c82a3c,g_INT_02c82a40,output_buffer,iVar1);
      output_buffer = (short *)((int)output_buffer + iVar3 * iVar1);
      num_samples = num_samples - iVar1;
      g_INT_02c82a48 = g_INT_02c82a48 + (g_INT_02c82a24 * iVar1) / g_INT_02c82a3c;
      iVar4 = iVar4 + iVar1;
    }
    if (num_samples < 1) {
      return iVar4;
    }
    iVar1 = g_INT_02c82a44 + 1;
    if (g_INT_02c82a30 <= iVar1) {
      iVar1 = 0;
    }
    iVar2 = *(int *)(iVar1 * 4 + 0x2c8292c);
    if (iVar2 == 0) {
      return -1;
    }
    if ((*(byte *)(iVar2 + 0x10) & 1) == 0) {
      return iVar4;
    }
    iVar2 = sound_sndwav_cpp_writeWavInBuffer_FUN_0057abc0(iVar1);
    if (iVar2 == 0) break;
    g_INT_02c82a48 = 0;
    g_INT_02c82a44 = iVar1;
  }
  sound_sndmain_cpp_logSoundError_FUN_005773f0("WavInDevice::poll - queueWavInBuffer failed");
  return -1;
}
