// Name: sound_sndwav.cpp_writeWavOutBuffer_FUN_0052c130
// Address: 0052c130
// Address Range: [[0052c130, 0052c28d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_0052c130(int buffer_index)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_0052c130(int buffer_index)

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
  
  if ((g_WaveOutBuffers[buffer_index] == (LPVOID)0x0) ||
     (g_LPWAVEHDR_ARRAY_02dc93a8[buffer_index] == (LPWAVEHDR)0x0)) {
    return 0;
  }
  MVar3 = waveOutUnprepareHeader(g_WaveOutHandle,g_LPWAVEHDR_ARRAY_02dc93a8[buffer_index],0x20);
  if (MVar3 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_00529980("waveOutUnprepareHeader failed!");
    return 0;
  }
  iVar4 = (int)((g_INT_02dc9428 + (g_INT_02dc9428 >> 0x1f) * -8) -
               (uint)((g_INT_02dc9428 >> 0x1f) << 2 < 0)) >> 3;
  iVar7 = 0;
  local_14 = buffer_index * 4;
  if (0 < g_INT_02dc9430 * 4) {
    pvVar2 = g_WaveOutBuffers[buffer_index];
    iVar6 = 0;
    do {
      iVar5 = iVar6 + 4;
      iVar1 = (int)pvVar2 + iVar7;
      iVar7 = iVar7 + iVar4;
      *(int *)((int)local_34 + iVar6) = iVar1;
      iVar6 = iVar5;
    } while (iVar5 < g_INT_02dc9430 * 4);
  }
  sound_sndmain_cpp_pollAndMixSfx_FUN_005294f0
            (local_34,g_INT_02dc9428,g_INT_02dc9430,g_INT_02dc942c,g_INT_02dc9434,
             iVar4 * g_INT_02dc9430);
  *(int *)(*(int *)((int)g_LPWAVEHDR_ARRAY_02dc93a8 + local_14) + 4) = g_INT_02dc9438;
  MVar3 = waveOutPrepareHeader
                    (g_WaveOutHandle,*(LPWAVEHDR *)((int)g_LPWAVEHDR_ARRAY_02dc93a8 + local_14),0x20
                    );
  if (MVar3 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_00529980("waveOutPrepareHeader failed!");
    return 0;
  }
  MVar3 = waveOutWrite(g_WaveOutHandle,*(LPWAVEHDR *)((int)g_LPWAVEHDR_ARRAY_02dc93a8 + local_14),
                       0x20);
  if (MVar3 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_00529980("waveOutWrite failed!");
    return 0;
  }
  return 1;
}
