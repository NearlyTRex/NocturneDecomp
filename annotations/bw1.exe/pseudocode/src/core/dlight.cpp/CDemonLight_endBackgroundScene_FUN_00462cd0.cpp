// Name: core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_00462cd0
// Address: 00462cd0
// Address Range: [[00462cd0, 00462d1d]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_00462cd0(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_00462cd0(CDemonLight *this_ptr)

{
  uint uVar1;
  int iVar2;
  byte **ppuVar3;
  byte **ppuVar4;
  
  g_BackgroundSceneNestingCount = g_BackgroundSceneNestingCount + -1;
  if (g_BackgroundSceneNestingCount != 0) {
    return;
  }
  g_BackgroundSceneNestingCount = 0;
  ppuVar3 = g_SavedScreenBufferArray;
  ppuVar4 = g_ScreenBufferArray;
  for (uVar1 = this_ptr->shadow_map_height & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    *ppuVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(byte *)ppuVar4 = *(byte *)ppuVar3;
    ppuVar3 = (byte **)((int)ppuVar3 + 1);
    ppuVar4 = (byte **)((int)ppuVar4 + 1);
  }
  engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00483e40(g_CDemonRenderer_PTR_00612560,0);
  return;
}
