// Name: core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270
// Address: 00453270
// Address Range: [[00453270, 00453632]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270(CDemonCamera * this_ptr)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270(CDemonCamera *this_ptr)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char (*pacVar5) [320];
  ulonglong *puVar6;
  ulonglong *puVar7;
  char (*pacVar8) [320];
  uint uVar9;
  int iVar10;
  
  g_ImageProcessingState2 = g_ImageProcessingState2 + g_GlobalDeltaTimeInt * 4;
  iVar10 = 0;
  if (0x10000 < g_ImageProcessingState2) {
    g_ImageProcessingState2 = g_ImageProcessingState2 + -0x10000;
    g_ImageProcessingState1 = g_ImageProcessingState1 + 1;
    if (0xf < g_ImageProcessingState1) {
      g_ImageProcessingState1 = 0;
    }
    core_dcamera_cpp_updateFogScrollOffset_FUN_0044bfb0
              (&g_CameraFogGrid,g_ImageProcessingState1,g_ImageProcessingState2);
  }
  core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004509b0(this_ptr);
  if (g_BitsPerPixel == 0x20) {
    g_SolidColorMode =
         (g_LightmapTexturePalette[g_FogColorIndexB] & 0xff) << ((byte)g_BlueBitPosition & 0x1f) |
         (g_LightmapTexturePalette[g_FogColorIndexR] & 0xff) << ((byte)g_RedBitPosition & 0x1f) |
         (g_LightmapTexturePalette[g_FogColorIndexG] & 0xff) << ((byte)g_GreenBitPosition & 0x1f);
  }
  else {
    g_SolidColorMode =
         (g_LightmapTexturePalette[g_FogColorIndexR] & 0xff) << 0x10 |
         (g_LightmapTexturePalette[g_FogColorIndexG] & 0xff) << 8 |
         g_LightmapTexturePalette[g_FogColorIndexB] & 0xff;
  }
  if (g_BitsPerPixel == 0x10) {
    uVar9 = 1;
    while ((int)uVar9 < this_ptr->framebuffer_height + -1) {
      puVar6 = (ulonglong *)
               ((int)g_ScreenBufferArray[uVar9 - g_CameraShakeOffsetY] + g_CameraShakeOffsetX * 2);
      puVar7 = (ulonglong *)
               ((int)this_ptr->framebuffer_aligned + this_ptr->framebuffer_width * uVar9 * 4);
      iVar4 = (int)uVar9 >> ((byte)g_CameraDownscaleIterations & 0x1f);
      pacVar5 = g_CameraPlaneWorkBuffer.pixels + iVar4;
      pacVar8 = g_CoronaBlurWorkBuffer + iVar4;
      if ((uVar9 & 1) == 0) {
        if (this_ptr->scale_factor == 1) {
          core_dstrender_cpp_blendTextureWithLightmapMMX_FUN_00493860
                    ((uint *)puVar6,(uint *)puVar7,(byte *)pacVar8,(byte *)pacVar5,
                     this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrender_cpp_blendLightmapToTextureMMX_Variant2_FUN_00492f03
                    ((uint *)puVar6,puVar7,(byte *)pacVar8,(byte *)pacVar5,
                     this_ptr->framebuffer_width);
        }
      }
      else {
        if (this_ptr->scale_factor == 1) {
          core_dstrender_cpp_blendLightmapToTextureMMX_FUN_00493dc4
                    (puVar6,puVar7,(byte *)pacVar8,(byte *)pacVar5,this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrender_cpp_blendBilerpTextureWithLightmapMMX_FUN_00493450
                    ((uint *)puVar6,puVar7,(byte *)pacVar8,(byte *)pacVar5,
                     this_ptr->framebuffer_width);
        }
      }
      iVar4 = iVar10 * 0xc;
      if (iVar10 < g_CameraEdgeCount) {
        do {
          uVar2 = *(uint *)((int)g_CameraEdgeDetectionResults + iVar4 + 8);
          if (uVar9 != uVar2) goto LAB_0045340c;
          piVar1 = (int *)((int)g_CameraEdgeDetectionResults + iVar4);
          iVar3 = iVar4 + 4;
          iVar4 = iVar4 + 0xc;
          iVar10 = iVar10 + 1;
          core_dcamera_cpp_CDemonCamera_blendLightmapPixel16_FUN_00453db0
                    (this_ptr,*(int *)((int)g_CameraEdgeDetectionResults + iVar3),uVar2,*piVar1);
        } while (iVar10 < g_CameraEdgeCount);
        uVar9 = uVar9 + 1;
      }
      else {
LAB_0045340c:
        uVar9 = uVar9 + 1;
      }
    }
  }
  else {
    uVar9 = 1;
    while ((int)uVar9 < this_ptr->framebuffer_height + -1) {
      puVar6 = (ulonglong *)
               ((int)g_ScreenBufferArray[uVar9 - g_CameraShakeOffsetY] + g_CameraShakeOffsetX * 4);
      puVar7 = (ulonglong *)
               ((int)this_ptr->framebuffer_aligned + this_ptr->framebuffer_width * uVar9 * 4);
      iVar4 = (int)uVar9 >> ((byte)g_CameraDownscaleIterations & 0x1f);
      pacVar5 = g_CameraPlaneWorkBuffer.pixels + iVar4;
      pacVar8 = g_CoronaBlurWorkBuffer + iVar4;
      if ((uVar9 & 1) == 0) {
        if (this_ptr->scale_factor == 1) {
          core_dstrender_cpp_blendLightmapToTexture32BitInputOutput_FUN_004926e1
                    ((uint *)puVar6,(uint *)puVar7,(byte *)pacVar8,(byte *)pacVar5,
                     this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrender_cpp_blendBilerpLightmapToTexture64BitOutput_FUN_004917bc
                    (puVar6,puVar7,(byte *)pacVar8,(byte *)pacVar5,this_ptr->framebuffer_width);
        }
      }
      else {
        if (this_ptr->scale_factor == 1) {
          core_dstrender_cpp_blendLightmapToTexture64BitOutput_FUN_00492bd5
                    ((uint *)puVar6,puVar7,(byte *)pacVar8,(byte *)pacVar5,
                     this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrender_cpp_blendBilerpLightmapToTexture64BitOutput_FUN_00491c9a
                    (puVar6,puVar7,(byte *)pacVar8,(byte *)pacVar5,this_ptr->framebuffer_width);
        }
      }
      iVar4 = iVar10 * 0xc;
      if (iVar10 < g_CameraEdgeCount) {
        do {
          uVar2 = *(uint *)((int)g_CameraEdgeDetectionResults + iVar4 + 8);
          if (uVar9 != uVar2) goto LAB_00453583;
          piVar1 = (int *)((int)g_CameraEdgeDetectionResults + iVar4);
          iVar3 = iVar4 + 4;
          iVar4 = iVar4 + 0xc;
          iVar10 = iVar10 + 1;
          core_dcamera_cpp_CDemonCamera_blendLightmapPixel32_FUN_00453d10
                    (this_ptr,*(int *)((int)g_CameraEdgeDetectionResults + iVar3),uVar2,*piVar1);
        } while (iVar10 < g_CameraEdgeCount);
        uVar9 = uVar9 + 1;
      }
      else {
LAB_00453583:
        uVar9 = uVar9 + 1;
      }
    }
  }
  return;
}
