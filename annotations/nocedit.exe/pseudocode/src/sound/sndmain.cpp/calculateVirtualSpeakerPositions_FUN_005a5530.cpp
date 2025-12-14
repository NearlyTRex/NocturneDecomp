// Name: sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_005a5530
// Address: 005a5530
// Address Range: [[005a5530, 005a561b]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_005a5530(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_005a5530(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  
  dVar3 = g_Cached3DListenerPos.z;
  dVar2 = g_Cached3DListenerPos.y;
  dVar1 = g_Cached3DListenerPos.x;
  if (g_AudioChannelCount == 2) {
    dVar1 = 1 * 0.5;
    g_VirtualSpeakerXPositions[0] =
         g_Cached3DListenerPos.x - g_Cached3DListenerOrientFront.x * dVar1;
    g_VirtualSpeakerYPositions[0] =
         g_Cached3DListenerPos.y - g_Cached3DListenerOrientFront.y * dVar1;
    g_VirtualSpeakerZPositions[0] =
         g_Cached3DListenerPos.z - g_Cached3DListenerOrientFront.z * dVar1;
    g_VirtualSpeakerXPositions[1] =
         g_Cached3DListenerPos.x + g_Cached3DListenerOrientFront.x * dVar1;
    g_VirtualSpeakerYPositions[1] =
         g_Cached3DListenerPos.y + g_Cached3DListenerOrientFront.y * dVar1;
    g_VirtualSpeakerZPositions[1] =
         g_Cached3DListenerPos.z + g_Cached3DListenerOrientFront.z * dVar1;
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
