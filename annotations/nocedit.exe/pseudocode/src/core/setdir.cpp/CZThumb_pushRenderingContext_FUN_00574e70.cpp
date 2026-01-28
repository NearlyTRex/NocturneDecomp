// Name: core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70
// Address: 00574e70
// Address Range: [[00574e70, 00574eee]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CZThumb_pushRenderingContext_FUN_00574e70(CZThumb *this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CZThumb_pushRenderingContext_FUN_00574e70(CZThumb *this_ptr)

{
  g_SavedWindowWidth = g_WindowWidth;
  g_SavedWindowHeight = g_WindowHeight;
  g_WindowWidth = this_ptr->width;
  g_WindowHeight = this_ptr->height;
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
            (g_CDemonRendererPtr2,0,0,this_ptr->width + -1,g_WindowHeight + -1);
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr2,(CVector3i *)&this_ptr->camera_position);
  engine_drender_cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670
            (g_CDemonRendererPtr2,(float)this_ptr->projection_scale);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr2);
  return;
}
