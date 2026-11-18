// Name: core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_0044e920
// Address: 0044e920
// Address Range: [[0044e920, 0044e96d]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_0044e920(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_0044e920(CDemonLight *this_ptr)

{
  uint uVar1;
  int iVar2;
  byte **ppuVar3;
  void **ppvVar4;
  
  g_BackgroundSceneNestingCount = g_BackgroundSceneNestingCount + -1;
  if (g_BackgroundSceneNestingCount != 0) {
    return;
  }
  g_BackgroundSceneNestingCount = 0;
  ppuVar3 = g_SavedScreenBufferArray;
  ppvVar4 = g_ScreenBufferArray;
  for (uVar1 = this_ptr->shadow_map_height & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    *ppvVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 1;
    ppvVar4 = ppvVar4 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(byte *)ppvVar4 = *(byte *)ppuVar3;
    ppuVar3 = (byte **)((int)ppuVar3 + 1);
    ppvVar4 = (void **)((int)ppvVar4 + 1);
  }
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00461070(g_CDemonRenderer_PTR_005ae704,0);
  return;
}
