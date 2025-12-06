// Name: core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_00472f30
// Address: 00472f30
// Address Range: [[00472f30, 00472f7d]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_00472f30(CDemonLight * this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_00472f30(CDemonLight *this_ptr)

{
  uint uVar1;
  int iVar2;
  void **ppvVar3;
  void **ppvVar4;
  
  g_BackgroundSceneNestingCount = g_BackgroundSceneNestingCount + -1;
  if (g_BackgroundSceneNestingCount != 0) {
    return;
  }
  g_BackgroundSceneNestingCount = 0;
  ppvVar3 = g_SavedScreenBufferArray;
  ppvVar4 = g_ScreenBufferArray;
  for (uVar1 = this_ptr->shadow_map_height & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    *ppvVar4 = *ppvVar3;
    ppvVar3 = ppvVar3 + 1;
    ppvVar4 = ppvVar4 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(byte *)ppvVar4 = *(byte *)ppvVar3;
    ppvVar3 = (void **)((int)ppvVar3 + 1);
    ppvVar4 = (void **)((int)ppvVar4 + 1);
  }
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr,0);
  return;
}
