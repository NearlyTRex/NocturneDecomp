// Name: core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360
// Address: 0044e360
// Address Range: [[0044e360, 0044e789]]
// Convention: __cdecl
// Signature: CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044e360(CDemonCamera *this_ptr)

#include "nocturne.h"

CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044e360(CDemonCamera *this_ptr)

{
  float fVar1;
  CDemonCamera *pCVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  byte bVar11;
  int aiStackY_106c [1014];
  int local_88;
  CVector3i local_84;
  CVector3i local_78;
  int local_6c;
  int aiStack_68 [2];
  CVector3i local_60;
  CVector3i local_54;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  uint local_1c;
  int local_18;
  uint local_14;
  
  bVar11 = 0;
  local_38 = 1;
  local_88 = 0;
  if (1 < this_ptr->display_height) {
    local_40 = 0x500;
    local_44 = 0xf00;
    do {
      local_28 = 1;
      local_24 = g_ScreenBufferArray[local_38 * this_ptr->scale_factor];
      if (1 < this_ptr->display_width) {
        local_30 = local_44 + 0xc;
        local_2c = local_40 + 4;
        iVar5 = local_30;
        do {
          local_24 = local_24 + this_ptr->scale_factor;
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (this_ptr,local_28 * this_ptr->scale_factor,local_38 * this_ptr->scale_factor,
                     &local_84);
          local_60.x = local_84.x;
          *(uint *)((int)&local_60 + (uint)bVar11 * -8 + 4) =
               *(uint *)((int)&local_84 + (uint)bVar11 * -8 + 4);
          *(uint *)((int)&local_60 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
               *(uint *)((int)&local_84 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          if ((local_60.z != 0x7fffffff) && (local_88 < local_60.z)) {
            local_88 = local_60.z;
          }
          core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                    (this_ptr,&local_60,&local_54);
          local_6c = local_54.x;
          aiStack_68[(uint)bVar11 * -2] = *(int *)((int)&local_54 + (uint)bVar11 * -8 + 4);
          aiStack_68[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               *(int *)((int)&local_54 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          puVar8 = (uint *)(local_30 + 0x9e4e78 + (uint)bVar11 * -8);
          *(int *)((int)&g_TempWorldPositionRow[0].x + local_30) = local_54.x;
          *puVar8 = *(uint *)((int)&local_54 + (uint)bVar11 * -8 + 4);
          puVar8[(uint)bVar11 * -2 + 1] =
               *(uint *)((int)&local_54 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          if (*local_24 >> 0x18 != 0) {
            core_dcamera_cpp_CDemonCamera_restoreAlphaTransform_FUN_00453a70
                      (this_ptr,&local_60,*local_24 >> 0x18,&local_78);
            local_6c = local_78.x;
            aiStack_68[(uint)bVar11 * -2] = *(int *)((int)&local_78 + (uint)bVar11 * -8 + 4);
            aiStack_68[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                 *(int *)((int)&local_78 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          }
          piVar9 = (int *)(iVar5 + 0x902f78 + (uint)bVar11 * -8);
          *(int *)((int)&g_PrecomputedWorldPositions[0].x + iVar5) = local_6c;
          *piVar9 = aiStack_68[(uint)bVar11 * -2];
          piVar9[(uint)bVar11 * -2 + 1] = aiStack_68[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          *(int *)((int)g_PrecomputedDepthBuffer + local_2c) = local_60.z;
          uVar10 = *local_24;
          uVar4 = *local_24;
          fVar1 = (float)0.0078740157480314994;
          local_14 = (uint)(ushort)(short)(char)uVar4;
          local_30 = local_30 + 0xc;
          local_28 = local_28 + 1;
          local_2c = local_2c + 4;
          *(float *)((int)&g_PrecomputedSurfaceNormals[0].x + iVar5) =
               (float)(short)(char)(*local_24 >> 0x10) * fVar1;
          *(float *)((int)&g_PrecomputedSurfaceNormals[0].y + iVar5) =
               (float)(short)(char)(uVar10 >> 8) * fVar1;
          *(float *)((int)&g_PrecomputedSurfaceNormals[0].z + iVar5) =
               (float)(short)(char)uVar4 * fVar1;
          iVar5 = iVar5 + 0xc;
        } while (local_28 < this_ptr->display_width);
      }
      local_44 = local_44 + 0xf00;
      local_40 = local_40 + 0x500;
      local_38 = local_38 + 1;
    } while (local_38 < this_ptr->display_height);
  }
  local_18 = local_88;
  this_ptr->max_distance = (float)local_88 * (float)0.00390625;
  core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_004529b0(this_ptr);
  g_LightBufferPoolIndex = 0;
  g_LightBufferPool[0x18][0] = '\0';
  g_LightBufferPool[0x18][1] = '\0';
  g_LightBufferPool[0x18][2] = '\0';
  g_LightBufferPool[0x18][3] = '\0';
  g_CameraEdgeCount = 0;
  pCVar2 = this_ptr;
  if (0x1df < this_ptr->framebuffer_height) {
    local_1c = this_ptr->scale_factor;
    local_48 = local_1c << 2;
    for (; pCVar2 = (CDemonCamera *)(this_ptr->framebuffer_height - this_ptr->scale_factor),
        (int)local_1c < (int)pCVar2; local_1c = local_1c + 1) {
      uVar10 = this_ptr->scale_factor;
      local_34 = uVar10 * 4;
      for (; (int)uVar10 < this_ptr->framebuffer_width + this_ptr->scale_factor * -2;
          uVar10 = uVar10 + 1) {
        if ((g_CameraEdgeCount < 10000) && (((uVar10 & 1) != 0 || ((local_1c & 1) != 0)))) {
          iVar5 = *(int *)(*(int *)((int)g_ZBufferScanlineArray + local_48) + local_34);
          iVar7 = 0x7fffffff;
          if (iVar5 == 0) {
            iVar5 = 0x7fffffff;
          }
          else {
            iVar5 = (int)(0x7fffffff / (longlong)iVar5);
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
              uVar4 = iVar5 - g_PrecomputedDepthBuffer
                              [(((int)local_1c >> (g_CameraDownscaleIterations.bytes[0] & 0x1f)) +
                               *(int *)((int)g_CameraEdgeOffsetY + iVar6)) * 0x140 +
                               ((int)uVar10 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f)) +
                               *(int *)((int)g_CameraEdgeOffsetX + iVar6)] >> 0x1f;
              iVar3 = (iVar5 - g_PrecomputedDepthBuffer
                               [(((int)local_1c >> (g_CameraDownscaleIterations.bytes[0] & 0x1f)) +
                                *(int *)((int)g_CameraEdgeOffsetY + iVar6)) * 0x140 +
                                ((int)uVar10 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f)) +
                                *(int *)((int)g_CameraEdgeOffsetX + iVar6)] ^ uVar4) - uVar4;
              if (iVar3 < iVar7) {
                g_CameraEdgeDetectionResults[g_CameraEdgeCount * 3] =
                     *(int *)((int)g_CameraEdgeOffsetX + iVar6) +
                     *(int *)((int)g_CameraEdgeOffsetY + iVar6) * 0x140;
                iVar7 = iVar3;
              }
              iVar6 = iVar6 + 4;
            } while (iVar6 != 0x20);
            if (g_CameraEdgeDetectionResults[g_CameraEdgeCount * 3] != 0) {
              g_CameraEdgeDetectionResults[g_CameraEdgeCount * 3 + 1] = uVar10;
              g_CameraEdgeDetectionResults[g_CameraEdgeCount * 3 + 2] = local_1c;
              g_CameraEdgeCount = g_CameraEdgeCount + 1;
            }
          }
        }
        local_34 = local_34 + 4;
      }
      local_48 = local_48 + 4;
    }
  }
  return pCVar2;
}
