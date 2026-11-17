// Name: sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_0054cb70
// Address: 0054cb70
// Address Range: [[0054cb70, 0054cce8]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_0054cb70(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_0054cb70(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  
  iVar11 = g_INT_026484b8 * 8;
  if (g_AudioChannelCount != 2) {
    if (0 < g_AudioChannelCount) {
      uVar4 = *(uint *)(&g_DOUBLE_02648428 + g_INT_026484b8);
      uVar5 = *(uint *)((int)&g_DOUBLE_02648428 + iVar11 + 4);
      uVar6 = *(uint *)(&g_DOUBLE_02648438 + g_INT_026484b8);
      uVar7 = *(uint *)((int)&g_DOUBLE_02648438 + iVar11 + 4);
      uVar8 = *(uint *)(&g_DOUBLE_02648448 + g_INT_026484b8);
      uVar9 = *(uint *)((int)&g_DOUBLE_02648448 + iVar11 + 4);
      iVar11 = 0;
      do {
        iVar12 = iVar11 + 8;
        *(uint *)((int)g_VirtualSpeakerXPositions + iVar11) = uVar4;
        *(uint *)((int)g_VirtualSpeakerXPositions + iVar11 + 4) = uVar5;
        *(uint *)((int)g_VirtualSpeakerYPositions + iVar11) = uVar6;
        *(uint *)((int)g_VirtualSpeakerYPositions + iVar11 + 4) = uVar7;
        *(uint *)((int)g_VirtualSpeakerZPositions + iVar11) = uVar8;
        *(uint *)((int)g_VirtualSpeakerZPositions + iVar11 + 4) = uVar9;
        iVar11 = iVar12;
      } while (iVar12 < g_AudioChannelCount * 8);
    }
    return;
  }
  fVar10 = g_FLOAT_0061bcb8 * 0.5f;
  dVar1 = (double)(*(float *)(g_INT_026484b8 * 4 + 0x2648470) * fVar10);
  dVar2 = (double)(*(float *)(g_INT_026484b8 * 4 + 0x2648478) * fVar10);
  dVar3 = (double)(*(float *)(g_INT_026484b8 * 4 + 0x2648480) * fVar10);
  g_VirtualSpeakerXPositions[0] = (&g_DOUBLE_02648428)[g_INT_026484b8] - dVar1;
  g_VirtualSpeakerYPositions[0] = (&g_DOUBLE_02648438)[g_INT_026484b8] - dVar2;
  g_VirtualSpeakerZPositions[0] = (&g_DOUBLE_02648448)[g_INT_026484b8] - dVar3;
  g_VirtualSpeakerXPositions[1] = (&g_DOUBLE_02648428)[g_INT_026484b8] + dVar1;
  g_VirtualSpeakerYPositions[1] = (&g_DOUBLE_02648438)[g_INT_026484b8] + dVar2;
  g_VirtualSpeakerZPositions[1] = (&g_DOUBLE_02648448)[g_INT_026484b8] + dVar3;
  return;
}
