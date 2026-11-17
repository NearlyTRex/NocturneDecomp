// Name: core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700
// Address: 0044d700
// Address Range: [[0044d700, 0044d8b6]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700(CDemonCamera *this_ptr)

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
    g_CHAR_PTR_01d1d400 = "..\\core\\dcamera.cpp";
    g_INT_01d1d404 = 0x436;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonCamera::beginBackgroundScene - Scene not open");
  }
  g_INT_01482658 = g_INT_01482658 + 1;
  if (g_INT_01482658 == 1) {
    g_INT_0148265c = g_INT_0061b4a0;
    g_INT_01482660 = g_INT_01c50948;
    ppuVar4 = g_ARRAY_PTR_01c4354c;
    ppuVar5 = g_ARRAY_PTR_01482664;
    for (uVar1 = g_INT_0061b49c & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *ppuVar5 = *ppuVar4;
      ppuVar4 = ppuVar4 + (uint)bVar6 * -2 + 1;
      ppuVar5 = ppuVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)ppuVar5 = *(byte *)ppuVar4;
      ppuVar4 = (byte **)((int)ppuVar4 + (uint)bVar6 * -2 + 1);
      ppuVar5 = (byte **)((int)ppuVar5 + (uint)bVar6 * -2 + 1);
    }
    g_INT_01483924 = g_BIT_INTEGER32_01c4e9d4.dword;
    g_INT_0061b4a0 = 0x20;
    g_INT_01c50948 = 0;
    g_INT_01483928 = g_BIT_INTEGER32_01c4e9e0.dword;
    g_BIT_INTEGER32_01c4e9e0.dword = 8;
    g_INT_0148392c = g_BIT_INTEGER32_01c4e9ec.dword;
    g_BIT_INTEGER32_01c4e9ec.dword = 0;
    g_BIT_INTEGER32_01c4e9d4.dword = 0x10;
    iVar2 = 0;
    if (0 < this_ptr->framebuffer_height) {
      iVar3 = 0;
      do {
        *(void **)((int)g_ARRAY_PTR_01c4354c + iVar3) =
             (void *)((int)this_ptr->framebuffer_aligned + this_ptr->framebuffer_width * iVar2 * 4);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < this_ptr->framebuffer_height);
    }
    engine_drender_cpp_CDemonRenderer_pushViewport_FUN_00483c10
              (g_CDemonRenderer_PTR_00612560,0,0,this_ptr->framebuffer_width + -1,
               this_ptr->framebuffer_height + -1);
    this_ptr_00 = g_CDemonRenderer_PTR_00612560;
    (this_ptr->cached_projection).half_width_fixed = g_INT_01c4eff8;
    (this_ptr->cached_projection).neg_half_height_fixed = g_INT_01c4effc;
    (this_ptr->cached_projection).center_x_fixed = g_INT_01c4f000;
    (this_ptr->cached_projection).center_y_fixed = g_INT_01c4f004;
    engine_drender_cpp_CDemonRenderer_getCameraAndViewportState_FUN_004851a0
              (this_ptr_00,&g_SCameraViewportState_01483940);
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
              (g_CDemonRenderer_PTR_00612560,&(this_ptr->base).position.f);
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_004839b0
              (g_CDemonRenderer_PTR_00612560,(this_ptr->base).focal_length);
    engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560
              (g_CDemonRenderer_PTR_00612560,&(this_ptr->base).rotation_matrix);
  }
  return;
}
