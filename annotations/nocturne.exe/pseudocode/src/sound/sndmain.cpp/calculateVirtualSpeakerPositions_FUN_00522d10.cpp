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
  if (g_INT_005bea68 == 2) {
    dVar1 = g_DOUBLE_005bea88 * 0.5;
    g_DOUBLE_ARRAY_02dc83d8[0] = g_DOUBLE_02dc78e0 - g_DOUBLE_02dc7910 * dVar1;
    g_DOUBLE_ARRAY_02dc8418[0] = g_DOUBLE_02dc78e8 - g_DOUBLE_02dc7918 * dVar1;
    g_DOUBLE_ARRAY_02dc8458[0] = g_DOUBLE_02dc78f0 - g_DOUBLE_02dc7920 * dVar1;
    g_DOUBLE_ARRAY_02dc83d8[1] = g_DOUBLE_02dc78e0 + g_DOUBLE_02dc7910 * dVar1;
    g_DOUBLE_ARRAY_02dc8418[1] = g_DOUBLE_02dc78e8 + g_DOUBLE_02dc7918 * dVar1;
    g_DOUBLE_ARRAY_02dc8458[1] = g_DOUBLE_02dc78f0 + g_DOUBLE_02dc7920 * dVar1;
    return;
  }
  if (0 < g_INT_005bea68) {
    iVar4 = 0;
    do {
      iVar5 = iVar4 + 8;
      *(double *)((int)g_DOUBLE_ARRAY_02dc83d8 + iVar4) = dVar1;
      *(double *)((int)g_DOUBLE_ARRAY_02dc8418 + iVar4) = dVar2;
      *(double *)((int)g_DOUBLE_ARRAY_02dc8458 + iVar4) = dVar3;
      iVar4 = iVar5;
    } while (iVar5 < g_INT_005bea68 * 8);
  }
  return;
}
