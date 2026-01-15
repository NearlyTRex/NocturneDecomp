// Name: core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0
// Address: 0044cdf0
// Address Range: [[0044cdf0, 0044cf1b]]
// Convention: __cdecl
// Signature: int core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0(CDemonCamera * this_ptr, int restore_zbuffer)

#include "nocturne.h"

int __cdecl
core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0
          (CDemonCamera *this_ptr,int restore_zbuffer)

{
  int *piVar1;
  int in_EAX;
  int byte_count;
  uint uVar2;
  int iVar3;
  int iVar4;
  void **ppvVar5;
  void **ppvVar6;
  int iVar7;
  byte bVar8;
  
  bVar8 = 0;
  g_BackgroundSceneDepth = g_BackgroundSceneDepth + -1;
  if (g_BackgroundSceneDepth == 0) {
    engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(g_CDemonRendererPtr);
    (this_ptr->saved_viewport_rect).left = g_ViewportCenterXFixed;
    (this_ptr->saved_viewport_rect).top = g_ViewportCenterYFixed;
    (this_ptr->saved_viewport_rect).right = g_ViewportRightFixed;
    iVar3 = g_WindowHeight;
    (this_ptr->saved_viewport_rect).bottom = g_ViewportBottomFixed;
    g_BitsPerPixel = g_BackgroundSavedBitsPerPixel;
    g_UseExternalRenderer = g_BackgroundSavedUseExternalRenderer;
    ppvVar5 = g_BackgroundSavedScreenBufferArray;
    ppvVar6 = g_ScreenBufferArray;
    for (uVar2 = iVar3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *ppvVar6 = *ppvVar5;
      ppvVar5 = ppvVar5 + (uint)bVar8 * -2 + 1;
      ppvVar6 = ppvVar6 + (uint)bVar8 * -2 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(byte *)ppvVar6 = *(byte *)ppvVar5;
      ppvVar5 = (void **)((int)ppvVar5 + (uint)bVar8 * -2 + 1);
      ppvVar6 = (void **)((int)ppvVar6 + (uint)bVar8 * -2 + 1);
    }
    g_RedBitPosition = g_BackgroundSavedRedBitPosition;
    g_GreenBitPosition = g_BackgroundSavedGreenBitPosition;
    g_BlueBitPosition = g_BackgroundSavedBlueBitPosition;
    in_EAX = g_BackgroundSavedBlueBitPosition;
    if (restore_zbuffer != 0) {
      iVar3 = 0;
      if (0 < this_ptr->framebuffer_height) {
        iVar7 = 0;
        do {
          iVar4 = this_ptr->framebuffer_width * iVar3;
          piVar1 = (int *)((int)g_ZBufferScanlineArray + iVar7);
          byte_count = this_ptr->framebuffer_width * 4;
          iVar7 = iVar7 + 4;
          iVar3 = iVar3 + 1;
          core_dstrender_cpp_memcpyMMX_FUN_00492001
                    ((void *)(iVar4 * 4 + (int)this_ptr->zbuffer_aligned),
                     (void *)(*piVar1 + byte_count),byte_count);
          in_EAX = this_ptr->framebuffer_height;
        } while (iVar3 < in_EAX);
      }
      if (g_UseExternalRenderer != 0) {
        iVar3 = wincore_windll_cpp_masterZBuffer_FUN_005b7d00(0);
        return iVar3;
      }
    }
  }
  return in_EAX;
}
