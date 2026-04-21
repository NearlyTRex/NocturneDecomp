// Name: core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70
// Address: 0044cc70
// MANUAL RECONSTRUCTION
// Address Range: [[0044cc70, 0044cdef]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70(CDemonCamera *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  void **ppvVar4;
  void **ppvVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (this_ptr->scene_open_flag == 0) {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 0x42d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCamera::beginBackgroundScene - Scene not open");
  }
  g_BackgroundSceneDepth = g_BackgroundSceneDepth + 1;
  if (g_BackgroundSceneDepth == 1) {
    g_BackgroundSavedBitsPerPixel = g_BitsPerPixel;
    g_BackgroundSavedUseExternalRenderer = g_UseExternalRenderer;
    memcpy(g_BackgroundSavedScreenBufferArray,g_ScreenBufferArray,g_WindowHeight * sizeof(void *));
    g_BackgroundSavedRedBitPosition = g_RedBitPosition.dword;
    g_BitsPerPixel = 0x20;
    g_UseExternalRenderer = 0;
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
    engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
              (g_CDemonRendererPtr2,0,0,this_ptr->framebuffer_width + -1,
               this_ptr->framebuffer_height + -1);
    this_ptr_00 = g_CDemonRendererPtr2;
    (this_ptr->saved_viewport_rect).left = g_ViewportCenterXFixed;
    (this_ptr->saved_viewport_rect).top = g_ViewportCenterYFixed;
    (this_ptr->saved_viewport_rect).right = g_ViewportRightFixed;
    (this_ptr->saved_viewport_rect).bottom = g_ViewportBottomFixed;
    engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20
              (this_ptr_00,&g_BackgroundSavedCameraState);
  }
  return;
}
