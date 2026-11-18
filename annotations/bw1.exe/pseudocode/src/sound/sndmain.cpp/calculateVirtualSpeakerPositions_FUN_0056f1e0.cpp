// Name: sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_0056f1e0
// Address: 0056f1e0
// Address Range: [[0056f1e0, 0056f358]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_0056f1e0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_0056f1e0(void)

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
  
  iVar11 = g_INT_02c7fc88 * 8;
  if (g_AudioChannelCount != 2) {
    if (0 < g_AudioChannelCount) {
      uVar4 = *(uint *)(&g_DOUBLE_02c7fbf8 + g_INT_02c7fc88);
      uVar5 = *(uint *)((int)&g_DOUBLE_02c7fbf8 + iVar11 + 4);
      uVar6 = *(uint *)(&g_DOUBLE_02c7fc08 + g_INT_02c7fc88);
      uVar7 = *(uint *)((int)&g_DOUBLE_02c7fc08 + iVar11 + 4);
      uVar8 = *(uint *)(&g_DOUBLE_02c7fc18 + g_INT_02c7fc88);
      uVar9 = *(uint *)((int)&g_DOUBLE_02c7fc18 + iVar11 + 4);
      iVar11 = 0;
      do {
        iVar12 = iVar11 + 8;
        *(uint *)((int)g_DOUBLE_ARRAY_02c80710 + iVar11) = uVar4;
        *(uint *)((int)g_DOUBLE_ARRAY_02c80710 + iVar11 + 4) = uVar5;
        *(uint *)((int)g_DOUBLE_ARRAY_02c80750 + iVar11) = uVar6;
        *(uint *)((int)g_DOUBLE_ARRAY_02c80750 + iVar11 + 4) = uVar7;
        *(uint *)((int)g_DOUBLE_ARRAY_02c80790 + iVar11) = uVar8;
        *(uint *)((int)g_DOUBLE_ARRAY_02c80790 + iVar11 + 4) = uVar9;
        iVar11 = iVar12;
      } while (iVar12 < g_AudioChannelCount * 8);
    }
    return;
  }
  fVar10 = g_FLOAT_00623308 * 0.5f;
  dVar1 = (double)(*(float *)((int)&g_CVector3d_02c7fc40.x + g_INT_02c7fc88 * 4) * fVar10);
  dVar2 = (double)(*(float *)((int)&g_CVector3d_02c7fc40.y + g_INT_02c7fc88 * 4) * fVar10);
  dVar3 = (double)(*(float *)((int)&g_CVector3d_02c7fc40.z + g_INT_02c7fc88 * 4) * fVar10);
  g_DOUBLE_ARRAY_02c80710[0] = (&g_DOUBLE_02c7fbf8)[g_INT_02c7fc88] - dVar1;
  g_DOUBLE_ARRAY_02c80750[0] = (&g_DOUBLE_02c7fc08)[g_INT_02c7fc88] - dVar2;
  g_DOUBLE_ARRAY_02c80790[0] = (&g_DOUBLE_02c7fc18)[g_INT_02c7fc88] - dVar3;
  g_DOUBLE_ARRAY_02c80710[1] = (&g_DOUBLE_02c7fbf8)[g_INT_02c7fc88] + dVar1;
  g_DOUBLE_ARRAY_02c80750[1] = (&g_DOUBLE_02c7fc08)[g_INT_02c7fc88] + dVar2;
  g_DOUBLE_ARRAY_02c80790[1] = (&g_DOUBLE_02c7fc18)[g_INT_02c7fc88] + dVar3;
  return;
}
