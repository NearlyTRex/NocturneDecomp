// Name: core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270
// Address: 00453270
// Address Range: [[00453270, 00453632]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270(CDemonCamera *this_ptr)

{
  int *piVar2;
  int *piVar3;
  uint screen_y;
  int iVar4;
  char (*pacVar5) [320];
  char (*lightmap_indices) [320];
  ulonglong *puVar6;
  ulonglong *puVar7;
  char (*pacVar8) [320];
  int iVar5;
  ulonglong *output_buffer;
  ulonglong *texture_buffer;
  char (*texture_indices) [320];
  uint uVar9;
  uint uVar6;
  int iVar10;
  int iVar3;
  uint uVar2;
  int *piVar1;
  
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
         (g_LightmapTexturePalette[g_FogColorIndexB] & 0xff) << (g_BlueBitPosition.bytes[0] & 0x1f)
         | (g_LightmapTexturePalette[g_FogColorIndexR] & 0xff) << (g_RedBitPosition.bytes[0] & 0x1f)
           | (g_LightmapTexturePalette[g_FogColorIndexG] & 0xff) <<
             (g_GreenBitPosition.bytes[0] & 0x1f);
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
      iVar4 = (int)uVar9 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f);
      pacVar5 = g_CameraPlaneWorkBuffer.pixels + iVar4;
      pacVar8 = g_CoronaBlurWorkBuffer + iVar4;
      if ((uVar9 & 1) == 0) {
        if (this_ptr->scale_factor == 1) {
          core_dstrender_cpp_blendTextureWithLightmapMMX_FUN_00493860
                    ((uint *)puVar6,(uint *)puVar7,(byte *)pacVar8,(byte *)pacVar5,
                     this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrender_cpp_blendLightmapToTextureMMX32BitBlendBias_FUN_00492f03
                    ((uint *)puVar6,puVar7,(byte *)pacVar8,(byte *)pacVar5,
                     this_ptr->framebuffer_width);
        }
      }
      else {
        if (this_ptr->scale_factor == 1) {
          core_dstrender_cpp_blendLightmapToTextureMMX64BitAmbient_FUN_00493dc4
                    (puVar6,puVar7,(byte *)pacVar8,(byte *)pacVar5,this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrender_cpp_blendBilerpTextureWithLightmapMMX_FUN_00493450
                    ((uint *)puVar6,puVar7,(byte *)pacVar8,(byte *)pacVar5,
                     this_ptr->framebuffer_width);
        }
      }
      iVar5 = iVar10 * 0xc;
      if (iVar10 < g_CameraEdgeCount) {
        do {
          uVar2 = *(uint *)((int)&g_CameraEdgeDetectionResults[0].y + iVar5);
          if (uVar9 != uVar2) goto LAB_0045340c;
          piVar2 = (int *)((int)&g_CameraEdgeDetectionResults[0].v + iVar5);
          piVar3 = (int *)((int)&g_CameraEdgeDetectionResults[0].x + iVar5);
          iVar5 = iVar5 + 0xc;
          iVar10 = iVar10 + 1;
          core_dcamera_cpp_CDemonCamera_blendLightmapPixel16_FUN_00453db0
                    (this_ptr,*piVar3,uVar2,*piVar2);
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
    uVar6 = 1;
    while ((int)uVar6 < this_ptr->framebuffer_height + -1) {
      output_buffer =
           (ulonglong *)
           ((int)g_ScreenBufferArray[uVar6 - g_CameraShakeOffsetY] + g_CameraShakeOffsetX * 4);
      texture_buffer =
           (ulonglong *)
           ((int)this_ptr->framebuffer_aligned + this_ptr->framebuffer_width * uVar6 * 4);
      iVar5 = (int)uVar6 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f);
      lightmap_indices = g_CameraPlaneWorkBuffer.pixels + iVar5;
      texture_indices = g_CoronaBlurWorkBuffer + iVar5;
      if ((uVar6 & 1) == 0) {
        if (this_ptr->scale_factor == 1) {
          core_dstrender_cpp_blendLightmapToTexture32BitInputOutput_FUN_004926e1
                    ((uint *)output_buffer,(uint *)texture_buffer,(byte *)texture_indices,
                     (byte *)lightmap_indices,this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrender_cpp_blendBilerpLightmapToTexture64BitOutput_FUN_004917bc
                    (output_buffer,texture_buffer,(byte *)texture_indices,(byte *)lightmap_indices,
                     this_ptr->framebuffer_width);
        }
      }
      else {
        if (this_ptr->scale_factor == 1) {
          core_dstrender_cpp_blendLightmapToTexture32BitOutputAmbient_FUN_00492bd5
                    ((uint *)output_buffer,texture_buffer,(byte *)texture_indices,
                     (byte *)lightmap_indices,this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrender_cpp_blendBilerpLightmapToTexture64BitOutputOffset_FUN_00491c9a
                    (output_buffer,texture_buffer,(byte *)texture_indices,(byte *)lightmap_indices,
                     this_ptr->framebuffer_width);
        }
      }
      iVar5 = iVar10 * 0xc;
      if (iVar10 < g_CameraEdgeCount) {
        do {
          screen_y = *(uint *)((int)&g_CameraEdgeDetectionResults[0].y + iVar5);
          if (uVar6 != screen_y) goto LAB_00453583;
          piVar1 = (int *)((int)&g_CameraEdgeDetectionResults[0].v + iVar5);
          piVar2 = (int *)((int)&g_CameraEdgeDetectionResults[0].x + iVar5);
          iVar5 = iVar5 + 0xc;
          iVar10 = iVar10 + 1;
          core_dcamera_cpp_CDemonCamera_blendLightmapPixel32_FUN_00453d10
                    (this_ptr,*piVar2,screen_y,*piVar1);
        } while (iVar10 < g_CameraEdgeCount);
        uVar6 = uVar6 + 1;
      }
      else {
LAB_00453583:
        uVar6 = uVar6 + 1;
      }
    }
  }
  return;
}
