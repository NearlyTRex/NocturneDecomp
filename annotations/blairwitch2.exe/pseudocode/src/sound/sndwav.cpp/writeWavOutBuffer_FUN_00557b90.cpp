// Name: sound_sndwav.cpp_writeWavOutBuffer_FUN_00557b90
// Address: 00557b90
// Address Range: [[00557b90, 00557d08]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_00557b90(int buffer_index)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_00557b90(int buffer_index)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  int iVar4;
  int iVar6;
  int iVar7;
  LPVOID local_34 [8];
  int local_14;
  int iVar5;
  
  iVar7 = buffer_index * 4;
  if ((*(int *)(iVar7 + 0x264b0d4) == 0) || (*(LPWAVEHDR *)(iVar7 + 0x264b094) == (LPWAVEHDR)0x0)) {
    return 0;
  }
  MVar2 = waveOutUnprepareHeader((HWAVEOUT)g_INT_0264b070,*(LPWAVEHDR *)(iVar7 + 0x264b094),0x20);
  if (MVar2 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005549c0("waveOutUnprepareHeader failed!");
    return 0;
  }
  iVar3 = (int)((g_INT_0264b0f4 + (g_INT_0264b0f4 >> 0x1f) * -8) -
               (uint)((g_INT_0264b0f4 >> 0x1f) << 2 < 0)) >> 3;
  iVar6 = 0;
  local_14 = iVar7;
  if (0 < g_INT_0264b0f8 * 4) {
    iVar7 = *(int *)(iVar7 + 0x264b0d4);
    iVar5 = 0;
    do {
      iVar4 = iVar5 + 4;
      iVar1 = iVar7 + iVar6;
      iVar6 = iVar6 + iVar3;
      *(int *)((int)local_34 + iVar5) = iVar1;
      iVar5 = iVar4;
    } while (iVar4 < g_INT_0264b0f8 * 4);
  }
  sound_sndmain_cpp_pollAndMixSfx_FUN_005541f0
            (local_34,g_INT_0264b0f4,g_INT_0264b0f8,g_INT_0264b0fc,g_INT_0264b100,
             iVar3 * g_INT_0264b0f8);
  *(int *)(*(int *)(local_14 + 0x264b094) + 4) =
       ((int)((g_INT_0264b0f4 + (g_INT_0264b0f4 >> 0x1f) * -8) -
             (uint)((g_INT_0264b0f4 >> 0x1f) << 2 < 0)) >> 3) * g_INT_0264b100 * g_INT_0264b0f8;
  MVar2 = waveOutPrepareHeader((HWAVEOUT)g_INT_0264b070,*(LPWAVEHDR *)(local_14 + 0x264b094),0x20);
  if (MVar2 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005549c0("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar2 = waveOutWrite((HWAVEOUT)g_INT_0264b070,*(LPWAVEHDR *)(local_14 + 0x264b094),0x20);
  if (MVar2 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005549c0("waveOutWrite failed!");
    return 0;
  }
  return 1;
}
