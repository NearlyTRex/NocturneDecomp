// Name: core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_004470f0
// Address: 004470f0
// Address Range: [[004470f0, 004474d5]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_004470f0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_004470f0(CDemonCamera *this_ptr)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  char (*pacVar5) [320];
  uint *output_buffer;
  ulonglong *puVar6;
  char (*pacVar7) [320];
  ulonglong *texture_buffer;
  uint uVar8;
  int iVar9;
  
  g_ImageProcessingState2 = g_ImageProcessingState2 + g_GlobalDeltaTimeInt * 4;
  iVar9 = 0;
  if (0x10000 < g_ImageProcessingState2) {
    g_ImageProcessingState2 = g_ImageProcessingState2 + -0x10000;
    g_ImageProcessingState1 = g_ImageProcessingState1 + 1;
    if (0xf < g_ImageProcessingState1) {
      g_ImageProcessingState1 = 0;
    }
    core_dcamera_cpp_updateFogScrollOffset_FUN_0043fe60
              (&g_CameraFogGrid,g_ImageProcessingState1,g_ImageProcessingState2);
  }
  core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_00444810(this_ptr);
  if (g_BitsPerPixel == 0x20) {
    g_SolidColorMode =
         (g_UINT_ARRAY_00b0e1fc[g_INT_005ad458] & 0xff) << (g_BlueBitPosition.bytes[0] & 0x1f) |
         (g_UINT_ARRAY_00b0e1fc[g_INT_005ad454] & 0xff) << (g_GreenBitPosition.bytes[0] & 0x1f) |
         (g_UINT_ARRAY_00b0e1fc[(int)g_CHAR_ARRAY_005ad450] & 0xff) <<
         (g_RedBitPosition.bytes[0] & 0x1f);
  }
  else {
    g_SolidColorMode =
         (g_UINT_ARRAY_00b0e1fc[g_INT_005ad454] & 0xff) << 8 |
         (g_UINT_ARRAY_00b0e1fc[(int)g_CHAR_ARRAY_005ad450] & 0xff) << 0x10 |
         g_UINT_ARRAY_00b0e1fc[g_INT_005ad458] & 0xff;
  }
  if (g_BitsPerPixel == 0x10) {
    uVar8 = 1;
    while ((int)uVar8 < this_ptr->framebuffer_height + -1) {
      output_buffer =
           (uint *)((int)g_ScreenBufferArray[(this_ptr->viewport_y + uVar8) - g_INT_012ceb74] +
                   g_INT_012ceb70 * 2 + this_ptr->viewport_x * 2);
      puVar6 = (ulonglong *)
               ((int)this_ptr->framebuffer_aligned + this_ptr->framebuffer_width * uVar8 * 4);
      iVar4 = (int)uVar8 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f);
      pacVar5 = g_SFogImagePlane_012ceb78.pixels + iVar4;
      pacVar7 = g_CoronaBlurWorkBuffer + iVar4;
      if ((uVar8 & 1) == 0) {
        if (this_ptr->scale_factor == 1) {
          core_dstrendr_cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00466930
                    (output_buffer,(uint *)puVar6,(byte *)pacVar7,(byte *)pacVar5,
                     this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrendr_cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00465fc9
                    (output_buffer,puVar6,(byte *)pacVar7,(byte *)pacVar5,
                     this_ptr->framebuffer_width);
        }
      }
      else {
        if (this_ptr->scale_factor == 1) {
          core_dstrendr_cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00466e94
                    (output_buffer,puVar6,(byte *)pacVar7,(byte *)pacVar5,
                     this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrendr_cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_00466520
                    (output_buffer,puVar6,(byte *)pacVar7,(byte *)pacVar5,
                     this_ptr->framebuffer_width);
        }
      }
      iVar4 = iVar9 * 0xc;
      if (iVar9 < g_CameraEdgeCount) {
        do {
          uVar3 = *(uint *)((int)&g_CameraEdgeDetectionResults[0].y + iVar4);
          if (uVar8 != uVar3) goto LAB_0044729d;
          piVar1 = (int *)((int)&g_CameraEdgeDetectionResults[0].v + iVar4);
          piVar2 = (int *)((int)&g_CameraEdgeDetectionResults[0].x + iVar4);
          iVar4 = iVar4 + 0xc;
          iVar9 = iVar9 + 1;
          core_dcamera_cpp_CDemonCamera_blendLightmapPixel16_FUN_00447c60
                    (this_ptr,*piVar2,uVar3,*piVar1);
        } while (iVar9 < g_CameraEdgeCount);
        uVar8 = uVar8 + 1;
      }
      else {
LAB_0044729d:
        uVar8 = uVar8 + 1;
      }
    }
  }
  else {
    uVar8 = 1;
    while ((int)uVar8 < this_ptr->framebuffer_height + -1) {
      puVar6 = (ulonglong *)
               ((int)g_ScreenBufferArray[(this_ptr->viewport_y + uVar8) - g_INT_012ceb74] +
               g_INT_012ceb70 * 4 + this_ptr->viewport_x * 4);
      texture_buffer =
           (ulonglong *)
           ((int)this_ptr->framebuffer_aligned + this_ptr->framebuffer_width * uVar8 * 4);
      iVar4 = (int)uVar8 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f);
      pacVar5 = g_CoronaBlurWorkBuffer + iVar4;
      pacVar7 = g_SFogImagePlane_012ceb78.pixels + iVar4;
      if ((uVar8 & 1) == 0) {
        if (this_ptr->scale_factor == 1) {
          core_dstrendr_cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_004657a7
                    ((uint *)puVar6,(uint *)texture_buffer,(byte *)pacVar5,(byte *)pacVar7,
                     this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrendr_cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00464afc
                    (puVar6,texture_buffer,(byte *)pacVar5,(byte *)pacVar7,
                     this_ptr->framebuffer_width);
        }
      }
      else {
        if (this_ptr->scale_factor == 1) {
          core_dstrendr_cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00465c9b
                    ((uint *)puVar6,texture_buffer,(byte *)pacVar5,(byte *)pacVar7,
                     this_ptr->framebuffer_width);
        }
        if (this_ptr->scale_factor == 2) {
          core_dstrendr_cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_00464fda
                    (puVar6,texture_buffer,(byte *)pacVar5,(byte *)pacVar7,
                     this_ptr->framebuffer_width);
        }
      }
      iVar4 = iVar9 * 0xc;
      if (iVar9 < g_CameraEdgeCount) {
        do {
          uVar3 = *(uint *)((int)&g_CameraEdgeDetectionResults[0].y + iVar4);
          if (uVar8 != uVar3) goto LAB_00447422;
          piVar1 = (int *)((int)&g_CameraEdgeDetectionResults[0].v + iVar4);
          piVar2 = (int *)((int)&g_CameraEdgeDetectionResults[0].x + iVar4);
          iVar4 = iVar4 + 0xc;
          iVar9 = iVar9 + 1;
          core_dcamera_cpp_CDemonCamera_blendLightmapPixel32_FUN_00447bb0
                    (this_ptr,*piVar2,uVar3,*piVar1);
        } while (iVar9 < g_CameraEdgeCount);
        uVar8 = uVar8 + 1;
      }
      else {
LAB_00447422:
        uVar8 = uVar8 + 1;
      }
    }
  }
  return;
}
