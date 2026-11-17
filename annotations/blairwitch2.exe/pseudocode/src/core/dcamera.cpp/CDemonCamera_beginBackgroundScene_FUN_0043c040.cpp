// Name: core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040
// Address: 0043c040
// Address Range: [[0043c040, 0043c1f6]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040(CDemonCamera *this_ptr)

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
    g_CHAR_PTR_01d046a0 = "..\\core\\dcamera.cpp";
    g_INT_01d046a4 = 0x432;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonCamera::beginBackgroundScene - Scene not open");
  }
  g_BackgroundSceneDepth = g_BackgroundSceneDepth + 1;
  if (g_BackgroundSceneDepth == 1) {
    g_BackgroundSavedBitsPerPixel = g_INT_006141c0;
    g_BackgroundSavedUseExternalRenderer = g_INT_01c37788;
    ppuVar4 = g_ScreenBufferArray;
    ppuVar5 = g_BackgroundSavedScreenBufferArray;
    for (uVar1 = g_INT_006141bc & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *ppuVar5 = *ppuVar4;
      ppuVar4 = ppuVar4 + (uint)bVar6 * -2 + 1;
      ppuVar5 = ppuVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)ppuVar5 = *(byte *)ppuVar4;
      ppuVar4 = (byte **)((int)ppuVar4 + (uint)bVar6 * -2 + 1);
      ppuVar5 = (byte **)((int)ppuVar5 + (uint)bVar6 * -2 + 1);
    }
    g_BackgroundSavedRedBitPosition = g_RedBitPosition.dword;
    g_INT_006141c0 = 0x20;
    g_INT_01c37788 = 0;
    g_BackgroundSavedGreenBitPosition = g_GreenBitPosition.dword;
    g_GreenBitPosition.dword = 8;
    g_BackgroundSavedBlueBitPosition = g_BlueBitPosition.dword;
    g_BlueBitPosition.dword = 0;
    g_RedBitPosition.dword = 0x10;
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
    engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0046b710
              (g_CDemonRenderer_PTR_0060b280,0,0,this_ptr->framebuffer_width + -1,
               this_ptr->framebuffer_height + -1);
    this_ptr_00 = g_CDemonRenderer_PTR_0060b280;
    (this_ptr->cached_projection).half_width_fixed = g_INT_01c35e38;
    (this_ptr->cached_projection).neg_half_height_fixed = g_INT_01c35e3c;
    (this_ptr->cached_projection).center_x_fixed = g_INT_01c35e40;
    (this_ptr->cached_projection).center_y_fixed = g_INT_01c35e44;
    engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046cca0
              (this_ptr_00,&g_BackgroundSavedCameraState);
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0
              (g_CDemonRenderer_PTR_0060b280,&(this_ptr->base).position.f);
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0
              (g_CDemonRenderer_PTR_0060b280,(this_ptr->base).focal_length);
    engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060
              (g_CDemonRenderer_PTR_0060b280,&(this_ptr->base).rotation_matrix);
  }
  return;
}
