// Name: core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0
// Address: 0044cdf0
// Address Range: [[0044cdf0, 0044cf1b]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0(CDemonCamera *this_ptr,int restore_zbuffer)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0(CDemonCamera *this_ptr,int restore_zbuffer)

{
  int *piVar1;
  int byte_count;
  uint uVar2;
  int iVar3;
  int iVar4;
  void **ppvVar5;
  void **ppvVar6;
  int iVar7;
  byte bVar8;
  int in_stack_0000000c;
  
  bVar8 = 0;
  g_BackgroundSceneDepth = g_BackgroundSceneDepth + -1;
  if (g_BackgroundSceneDepth == 0) {
    engine_drender_cpp_CDemonRenderer_popViewport_FUN_0048c8c0(g_CDemonRendererPtr2);
    (this_ptr->cached_projection).half_width_fixed = g_Projection.half_width_fixed;
    (this_ptr->cached_projection).neg_half_height_fixed = g_Projection.neg_half_height_fixed;
    (this_ptr->cached_projection).center_x_fixed = g_Projection.center_x_fixed;
    iVar3 = g_WindowHeight;
    (this_ptr->cached_projection).center_y_fixed = g_Projection.center_y_fixed;
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
    g_RedBitPosition.dword = g_BackgroundSavedRedBitPosition;
    g_GreenBitPosition.dword = g_BackgroundSavedGreenBitPosition;
    g_BlueBitPosition.dword = g_BackgroundSavedBlueBitPosition;
    if (in_stack_0000000c != 0) {
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
        } while (iVar3 < this_ptr->framebuffer_height);
      }
      if (g_UseExternalRenderer != 0) {
        engine_special_cpp_masterZBuffer_FUN_005b7d00(0);
        return;
      }
    }
  }
  return;
}
