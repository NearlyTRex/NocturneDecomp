// Name: core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0
// Address: 0044cdf0
// MANUAL RECONSTRUCTION
// Address Range: [[0044cdf0, 0044cf1b]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0(CDemonCamera *this_ptr,int restore_zbuffer)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0(CDemonCamera *this_ptr,int restore_zbuffer)

{
  int iVar3;

  g_BackgroundSceneDepth = g_BackgroundSceneDepth + -1;
  if (g_BackgroundSceneDepth == 0) {
    engine_drender_cpp_CDemonRenderer_popViewport_FUN_0048c8c0(g_CDemonRendererPtr2);
    (this_ptr->cached_projection).half_width_fixed = g_Projection.half_width_fixed;
    (this_ptr->cached_projection).neg_half_height_fixed = g_Projection.neg_half_height_fixed;
    (this_ptr->cached_projection).center_x_fixed = g_Projection.center_x_fixed;
    (this_ptr->cached_projection).center_y_fixed = g_Projection.center_y_fixed;
    g_BitsPerPixel = g_BackgroundSavedBitsPerPixel;
    g_UseExternalRenderer = g_BackgroundSavedUseExternalRenderer;
    memcpy(g_ScreenBufferArray,g_BackgroundSavedScreenBufferArray,g_WindowHeight * sizeof(void *));
    g_RedBitPosition.dword = g_BackgroundSavedRedBitPosition;
    g_GreenBitPosition.dword = g_BackgroundSavedGreenBitPosition;
    g_BlueBitPosition.dword = g_BackgroundSavedBlueBitPosition;
    if (restore_zbuffer != 0) {
      iVar3 = 0;
      if (0 < this_ptr->framebuffer_height) {
        do {
          core_dstrender_cpp_memcpyMMX_FUN_00492001
                    ((uint *)this_ptr->zbuffer_aligned + this_ptr->framebuffer_width * iVar3,
                     g_ZBufferScanlineArray[iVar3] + this_ptr->framebuffer_width,
                     this_ptr->framebuffer_width * 4);
          iVar3 = iVar3 + 1;
        } while (iVar3 < this_ptr->framebuffer_height);
      }
      if (g_UseExternalRenderer != 0) {
        wincore_windll_cpp_masterZBuffer_FUN_005b7d00(0);
        return;
      }
    }
  }
  return;
}
