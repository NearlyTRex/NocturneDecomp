// Name: sound_sndwav.cpp_writeWavOutBuffer_FUN_0057a5c0
// Address: 0057a5c0
// Address Range: [[0057a5c0, 0057a738]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_0057a5c0(int buffer_index)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_0057a5c0(int buffer_index)

{
  int iVar1;
  LPVOID pvVar2;
  MMRESULT MVar3;
  int iVar4;
  int iVar5;
  int iVar7;
  LPVOID local_34 [8];
  int local_14;
  int iVar6;
  
  if ((g_LPVOID_ARRAY_02c828a4[buffer_index] == (LPVOID)0x0) ||
     (g_LPWAVEHDR_ARRAY_02c82864[buffer_index] == (LPWAVEHDR)0x0)) {
    return 0;
  }
  MVar3 = waveOutUnprepareHeader
                    ((HWAVEOUT)g_INT_02c82840,g_LPWAVEHDR_ARRAY_02c82864[buffer_index],0x20);
  if (MVar3 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005773f0("waveOutUnprepareHeader failed!");
    return 0;
  }
  iVar4 = (int)((g_INT_02c828c4 + (g_INT_02c828c4 >> 0x1f) * -8) -
               (uint)((g_INT_02c828c4 >> 0x1f) << 2 < 0)) >> 3;
  iVar7 = 0;
  local_14 = buffer_index * 4;
  if (0 < g_INT_02c828c8 * 4) {
    pvVar2 = g_LPVOID_ARRAY_02c828a4[buffer_index];
    iVar6 = 0;
    do {
      iVar5 = iVar6 + 4;
      iVar1 = (int)pvVar2 + iVar7;
      iVar7 = iVar7 + iVar4;
      *(int *)((int)local_34 + iVar6) = iVar1;
      iVar6 = iVar5;
    } while (iVar5 < g_INT_02c828c8 * 4);
  }
  sound_sndmain_cpp_pollAndMixSfx_FUN_00576c20
            (local_34,g_INT_02c828c4,g_INT_02c828c8,g_INT_02c828cc,g_INT_02c828d0,
             iVar4 * g_INT_02c828c8);
  *(int *)(*(int *)((int)g_LPWAVEHDR_ARRAY_02c82864 + local_14) + 4) =
       ((int)((g_INT_02c828c4 + (g_INT_02c828c4 >> 0x1f) * -8) -
             (uint)((g_INT_02c828c4 >> 0x1f) << 2 < 0)) >> 3) * g_INT_02c828d0 * g_INT_02c828c8;
  MVar3 = waveOutPrepareHeader
                    ((HWAVEOUT)g_INT_02c82840,
                     *(LPWAVEHDR *)((int)g_LPWAVEHDR_ARRAY_02c82864 + local_14),0x20);
  if (MVar3 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005773f0("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar3 = waveOutWrite((HWAVEOUT)g_INT_02c82840,
                       *(LPWAVEHDR *)((int)g_LPWAVEHDR_ARRAY_02c82864 + local_14),0x20);
  if (MVar3 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005773f0("waveOutWrite failed!");
    return 0;
  }
  return 1;
}
