// Name: core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360
// Address: 0044e360
// MANUAL RECONSTRUCTION
// Address Range: [[0044e360, 0044e789] [0060a0a0, 0060a119] [0060c3a4, 0060c3c1]]
// Convention: __cdecl
// Signature: CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044e360(CDemonCamera *this_ptr)

#include "nocturne.h"

CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044e360(CDemonCamera *this_ptr)

{
  int iVar1;
  uint uVar2;
  CDemonCamera *pCVar2;
  int iVar3;
  uint uVar4;
  uint uVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar10;
  int local_88;
  CVector3i local_84;
  CVector3i local_78;
  int local_6c;
  int aiStack_68 [2];
  CVector3i local_60;
  CVector3i local_54;
  int local_38;
  int local_28;
  uint *local_24;
  uint local_1c;
  float fVar1;
  
  local_38 = 1;
  local_88 = 0;
  fVar1 = (float)0.0078740157480314994;
  if (1 < this_ptr->display_height) {
    do {
      local_28 = 1;
      local_24 = (uint *)g_ScreenBufferArray[local_38 * this_ptr->scale_factor];
      if (1 < this_ptr->display_width) {
        do {
          local_24 = local_24 + this_ptr->scale_factor;
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (this_ptr,local_28 * this_ptr->scale_factor,local_38 * this_ptr->scale_factor,
                     &local_84);
          local_60.z = local_84.z;
          if ((local_84.z != 0x7fffffff) && (local_88 < local_84.z)) {
            local_88 = local_84.z;
          }
          core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                    (this_ptr,&local_60,&local_54);
          local_6c = local_54.x;
          aiStack_68[0] = local_54.y;
          aiStack_68[1] = local_54.z;
          g_TempWorldPositions[local_38][local_28] = local_54;
          if (*local_24 >> 0x18 != 0) {
            core_dcamera_cpp_CDemonCamera_restoreAlphaTransform_FUN_00453a70
                      (this_ptr,&local_60,*local_24 >> 0x18,&local_78);
            local_6c = local_78.x;
            aiStack_68[0] = local_78.y;
            aiStack_68[1] = local_78.z;
          }
          g_PrecomputedWorldPositions[local_38 * 320 + local_28].x = local_6c;
          g_PrecomputedWorldPositions[local_38 * 320 + local_28].y = aiStack_68[0];
          g_PrecomputedWorldPositions[local_38 * 320 + local_28].z = aiStack_68[1];
          g_PrecomputedDepthBuffer[local_38 * 320 + local_28] = local_60.z;
          uVar3 = *local_24;
          uVar2 = *local_24;
          g_PrecomputedSurfaceNormals[local_38][local_28].x =
               (float)(short)(char)(*local_24 >> 0x10) * fVar1;
          g_PrecomputedSurfaceNormals[local_38][local_28].y =
               (float)(short)(char)(uVar3 >> 8) * fVar1;
          g_PrecomputedSurfaceNormals[local_38][local_28].z =
               (float)(short)(char)uVar2 * fVar1;
          local_28 = local_28 + 1;
        } while (local_28 < this_ptr->display_width);
      }
      local_38 = local_38 + 1;
    } while (local_38 < this_ptr->display_height);
  }
  this_ptr->max_distance = (float)local_88 * (float)0.00390625;
  core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_004529b0(this_ptr);
  g_LightBufferPoolIndex = 0;
  g_CoronaLightCache.count = 0;
  g_CameraEdgeCount = 0;
  pCVar2 = this_ptr;
  if (0x1df < this_ptr->framebuffer_height) {
    local_1c = this_ptr->scale_factor;
    for (; pCVar2 = (CDemonCamera *)(this_ptr->framebuffer_height - this_ptr->scale_factor),
        (int)local_1c < (int)pCVar2; local_1c = local_1c + 1) {
      uVar10 = this_ptr->scale_factor;
      for (; (int)uVar10 < this_ptr->framebuffer_width + this_ptr->scale_factor * -2;
          uVar10 = uVar10 + 1) {
        if ((g_CameraEdgeCount < 10000) && (((uVar10 & 1) != 0 || ((local_1c & 1) != 0)))) {
          iVar1 = ((int *)g_ZBufferScanlineArray[local_1c])[uVar10];
          iVar7 = 0x7fffffff;
          if (iVar1 == 0) {
            iVar5 = 0x7fffffff;
          }
          else {
            iVar5 = (int)(0x7fffffff / (longlong)iVar1);
          }
          uVar4 = iVar5 - g_PrecomputedDepthBuffer
                          [((int)local_1c >> (g_CameraDownscaleIterations.bytes[0] & 0x1f)) * 0x140
                           + ((int)uVar10 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f))] >> 0x1f
          ;
          if (0x400 < (int)((iVar5 - g_PrecomputedDepthBuffer
                                     [((int)local_1c >>
                                      (g_CameraDownscaleIterations.bytes[0] & 0x1f)) * 0x140 +
                                      ((int)uVar10 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f))
                                     ] ^ uVar4) - uVar4)) {
            iVar6 = 0;
            do {
              uVar3 = iVar5 - g_PrecomputedDepthBuffer
                              [(((int)local_1c >> (g_CameraDownscaleIterations.bytes[0] & 0x1f)) +
                               g_CameraEdgeOffsetY[iVar6 >> 2]) * 0x140 +
                               ((int)uVar10 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f)) +
                               g_CameraEdgeOffsetX[iVar6 >> 2]] >> 0x1f;
              iVar3 = (iVar5 - g_PrecomputedDepthBuffer
                               [(((int)local_1c >> (g_CameraDownscaleIterations.bytes[0] & 0x1f)) +
                                g_CameraEdgeOffsetY[iVar6 >> 2]) * 0x140 +
                                ((int)uVar10 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f)) +
                                g_CameraEdgeOffsetX[iVar6 >> 2]] ^ uVar3) - uVar3;
              if (iVar3 < iVar7) {
                g_CameraEdgeDetectionResults[g_CameraEdgeCount].v =
                     g_CameraEdgeOffsetX[iVar6 >> 2] +
                     g_CameraEdgeOffsetY[iVar6 >> 2] * 0x140;
                iVar7 = iVar3;
              }
              iVar6 = iVar6 + 4;
            } while (iVar6 != 0x20);
            if (g_CameraEdgeDetectionResults[g_CameraEdgeCount].v != 0) {
              g_CameraEdgeDetectionResults[g_CameraEdgeCount].x = uVar10;
              g_CameraEdgeDetectionResults[g_CameraEdgeCount].y = local_1c;
              g_CameraEdgeCount = g_CameraEdgeCount + 1;
            }
          }
        }
      }
    }
  }
  return pCVar2;
}
