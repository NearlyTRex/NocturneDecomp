// Name: sound_sndwav.cpp_getWavInBufferSizeBytes_FUN_005b0c90
// Address: 005b0c90
// Address Range: [[005b0c90, 005b0cb3]]
// Convention: __cdecl
// Signature: int sound_sndwav.cpp_getWavInBufferSizeBytes_FUN_005b0c90(void)
// Globals:
//   int g_WaveInBitsPerSample
//   int g_WaveInChannels
//   int g_WaveInBufferSizeSamples

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_getWavInBufferSizeBytes_FUN_005b0c90(void)

{
  return ((int)((g_WaveInBitsPerSample + (g_WaveInBitsPerSample >> 0x1f) * -8) -
               (uint)((g_WaveInBitsPerSample >> 0x1f) << 2 < 0)) >> 3) * g_WaveInBufferSizeSamples *
         g_WaveInChannels;
}


// Assembly code:
// 005b0c90: MOV ECX,dword ptr [0x03f6af10]
//   Label: sound_sndwav.cpp_getWavInBufferSizeBytes_FUN_005b0c90
//   XREF to: 03f6af10 (READ)
// 005b0c96: MOV EDX,ECX
// 005b0c98: MOV EAX,ECX
// 005b0c9a: SAR EDX,0x1f
// 005b0c9d: SHL EDX,0x3
// 005b0ca0: SBB EAX,EDX
// 005b0ca2: SAR EAX,0x3
// 005b0ca5: IMUL EAX,dword ptr [0x03f6af20]
//   XREF to: 03f6af20 (READ)
// 005b0cac: IMUL EAX,dword ptr [0x03f6af14]
//   XREF to: 03f6af14 (READ)
// 005b0cb3: RET
