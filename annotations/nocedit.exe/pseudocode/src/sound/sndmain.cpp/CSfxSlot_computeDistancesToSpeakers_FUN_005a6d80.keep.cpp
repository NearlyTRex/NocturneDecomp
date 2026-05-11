// Name: sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005a6d80
// Address: 005a6d80
// MANUAL RECONSTRUCTION
// Address Range: [[005a6d80, 005a6dec]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005a6d80(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005a6d80(CSfxSlot *this_ptr)

{
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;

  iVar3 = 0;
  if (0 < g_AudioChannelCount) {
    do {
      fVar4 = (float10)(this_ptr->options).position.x - (float10)g_VirtualSpeakerXPositions[iVar3];
      fVar5 = (float10)(this_ptr->options).position.y - (float10)g_VirtualSpeakerYPositions[iVar3];
      fVar6 = (float10)(this_ptr->options).position.z - (float10)g_VirtualSpeakerZPositions[iVar3];
      this_ptr->distance_to_speakers[iVar3] =
           (float)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < g_AudioChannelCount);
  }
  return;
}
