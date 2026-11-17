// Name: core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_00449840
// Address: 00449840
// Address Range: [[00449840, 004499f6]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00449840(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00449840(CDemonCamera *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  byte **ppuVar4;
  byte **ppuVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (this_ptr->scene_open_flag == 0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\dcamera.cpp";
    g_INT_01d71de4 = 0x436;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonCamera::beginBackgroundScene - Scene not open");
  }
  g_BackgroundSceneDepth = g_BackgroundSceneDepth + 1;
  if (g_BackgroundSceneDepth == 1) {
    g_BackgroundSavedBitsPerPixel = g_INT_005fba20;
    g_BackgroundSavedUseExternalRenderer = g_INT_01c6cee8;
    ppuVar4 = g_ScreenBufferArray;
    ppuVar5 = g_BackgroundSavedScreenBufferArray;
    for (uVar1 = g_INT_005fba1c & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *ppuVar5 = *ppuVar4;
      ppuVar4 = ppuVar4 + (uint)bVar6 * -2 + 1;
      ppuVar5 = ppuVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)ppuVar5 = *(byte *)ppuVar4;
      ppuVar4 = (byte **)((int)ppuVar4 + (uint)bVar6 * -2 + 1);
      ppuVar5 = (byte **)((int)ppuVar5 + (uint)bVar6 * -2 + 1);
    }
    g_BackgroundSavedRedBitPosition = g_BIT_INTEGER32_01c6af74.dword;
    g_INT_005fba20 = 0x20;
    g_INT_01c6cee8 = 0;
    g_BackgroundSavedGreenBitPosition = g_BIT_INTEGER32_01c6af80.dword;
    g_BIT_INTEGER32_01c6af80.dword = 8;
    g_BackgroundSavedBlueBitPosition = g_BIT_INTEGER32_01c6af8c.dword;
    g_BIT_INTEGER32_01c6af8c.dword = 0;
    g_BIT_INTEGER32_01c6af74.dword = 0x10;
    iVar2 = 0;
    if (0 < this_ptr->framebuffer_height) {
      iVar3 = 0;
      do {
        *(void **)((int)g_ScreenBufferArray + iVar3) =
             (void *)((int)this_ptr->framebuffer_aligned + this_ptr->framebuffer_width * iVar2 * 4);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < this_ptr->framebuffer_height);
    }
    engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0046d2f0
              (g_CDemonRenderer_PTR_005f2afc,0,0,this_ptr->framebuffer_width + -1,
               this_ptr->framebuffer_height + -1);
    this_ptr_00 = g_CDemonRenderer_PTR_005f2afc;
    (this_ptr->cached_projection).half_width_fixed = g_INT_01c6b598;
    (this_ptr->cached_projection).neg_half_height_fixed = g_INT_01c6b59c;
    (this_ptr->cached_projection).center_x_fixed = g_INT_01c6b5a0;
    (this_ptr->cached_projection).center_y_fixed = g_INT_01c6b5a4;
    engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046e880
              (this_ptr_00,&g_BackgroundSavedCameraState);
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
              (g_CDemonRenderer_PTR_005f2afc,&(this_ptr->base).position.f);
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046d090
              (g_CDemonRenderer_PTR_005f2afc,(this_ptr->base).focal_length);
    engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40
              (g_CDemonRenderer_PTR_005f2afc,&(this_ptr->base).rotation_matrix);
  }
  return;
}
