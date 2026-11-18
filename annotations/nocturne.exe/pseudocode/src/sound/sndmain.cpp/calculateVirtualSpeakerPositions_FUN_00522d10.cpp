// Name: sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_00522d10
// Address: 00522d10
// Address Range: [[00522d10, 00522dfb]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_00522d10(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_00522d10(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  
  dVar3 = g_DOUBLE_02dc78f0;
  dVar2 = g_DOUBLE_02dc78e8;
  dVar1 = g_DOUBLE_02dc78e0;
  if (g_AudioChannelCount == 2) {
    dVar1 = g_Cached3DDistanceFactorInverse * 0.5;
    g_VirtualSpeakerXPositions[0] = g_DOUBLE_02dc78e0 - g_DOUBLE_02dc7910 * dVar1;
    g_VirtualSpeakerYPositions[0] = g_DOUBLE_02dc78e8 - g_DOUBLE_02dc7918 * dVar1;
    g_VirtualSpeakerZPositions[0] = g_DOUBLE_02dc78f0 - g_DOUBLE_02dc7920 * dVar1;
    g_VirtualSpeakerXPositions[1] = g_DOUBLE_02dc78e0 + g_DOUBLE_02dc7910 * dVar1;
    g_VirtualSpeakerYPositions[1] = g_DOUBLE_02dc78e8 + g_DOUBLE_02dc7918 * dVar1;
    g_VirtualSpeakerZPositions[1] = g_DOUBLE_02dc78f0 + g_DOUBLE_02dc7920 * dVar1;
    return;
  }
  if (0 < g_AudioChannelCount) {
    iVar4 = 0;
    do {
      iVar5 = iVar4 + 8;
      *(double *)((int)g_VirtualSpeakerXPositions + iVar4) = dVar1;
      *(double *)((int)g_VirtualSpeakerYPositions + iVar4) = dVar2;
      *(double *)((int)g_VirtualSpeakerZPositions + iVar4) = dVar3;
      iVar4 = iVar5;
    } while (iVar5 < g_AudioChannelCount * 8);
  }
  return;
}
