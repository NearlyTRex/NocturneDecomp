// Name: core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_00472f30
// Address: 00472f30
// MANUAL RECONSTRUCTION
// Address Range: [[00472f30, 00472f7d]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_00472f30(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_endBackgroundScene_FUN_00472f30(CDemonLight *this_ptr)

{
  g_BackgroundSceneNestingCount = g_BackgroundSceneNestingCount + -1;
  if (g_BackgroundSceneNestingCount != 0) {
    return;
  }
  g_BackgroundSceneNestingCount = 0;
  memcpy(g_ScreenBufferArray,g_SavedScreenBufferArray,this_ptr->shadow_map_height * sizeof(void *));
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr2,0);
  return;
}
