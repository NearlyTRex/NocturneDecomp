// Name: core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0043d870
// Address: 0043d870
// Address Range: [[0043d870, 0043dc99]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0043d870(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0043d870(CDemonCamera *this_ptr)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  byte bVar9;
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
  
  bVar9 = 0;
  local_38 = 1;
  local_88 = 0;
  if (1 < this_ptr->display_height) {
    local_40 = 0x500;
    local_44 = 0xf00;
    do {
      local_28 = 1;
      local_24 = (uint *)g_ScreenBufferArray[local_38 * this_ptr->scale_factor];
      if (1 < this_ptr->display_width) {
        local_30 = local_44 + 0xc;
        local_2c = local_40 + 4;
        iVar4 = local_30;
        do {
          local_24 = local_24 + this_ptr->scale_factor;
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0043c6b0
                    (this_ptr,local_28 * this_ptr->scale_factor,local_38 * this_ptr->scale_factor,
                     &local_84);
          local_60.x = local_84.x;
          *(uint *)((int)&local_60 + (uint)bVar9 * -8 + 4) =
               *(uint *)((int)&local_84 + (uint)bVar9 * -8 + 4);
          *(uint *)((int)&local_60 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
               *(uint *)((int)&local_84 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
          if ((local_60.z != 0x7fffffff) && (local_88 < local_60.z)) {
            local_88 = local_60.z;
          }
          core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0043c780
                    (this_ptr,&local_60,&local_54);
          local_6c = local_54.x;
          aiStack_68[(uint)bVar9 * -2] = *(int *)((int)&local_54 + (uint)bVar9 * -8 + 4);
          aiStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               *(int *)((int)&local_54 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
          puVar7 = (uint *)(local_30 + 0x91e6d8 + (uint)bVar9 * -8);
          *(int *)((int)&g_TempWorldPositions[0][0].x + local_30) = local_54.x;
          *puVar7 = *(uint *)((int)&local_54 + (uint)bVar9 * -8 + 4);
          puVar7[(uint)bVar9 * -2 + 1] =
               *(uint *)((int)&local_54 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
          if (*local_24 >> 0x18 != 0) {
            core_dcamera_cpp_CDemonCamera_restoreAlphaTransform_FUN_00443020
                      (this_ptr,&local_60,*local_24 >> 0x18,&local_78);
            local_6c = local_78.x;
            aiStack_68[(uint)bVar9 * -2] = *(int *)((int)&local_78 + (uint)bVar9 * -8 + 4);
            aiStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                 *(int *)((int)&local_78 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
          }
          *(int *)(&DAT_0083c7d4 + iVar4) = local_6c;
          *(int *)(&DAT_0083c7d8 + (uint)bVar9 * -8 + iVar4) = aiStack_68[(uint)bVar9 * -2];
          *(int *)((int)(&DAT_0083c7d8 + (uint)bVar9 * -8 + iVar4) + ((uint)bVar9 * -2 + 1) * 4) =
               aiStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          *(int *)((int)g_PrecomputedDepthBuffer + local_2c) = local_60.z;
          uVar8 = *local_24;
          uVar3 = *local_24;
          fVar1 = (float)0.0078740157480314994;
          local_14 = (uint)(ushort)(short)(char)uVar3;
          local_30 = local_30 + 0xc;
          local_28 = local_28 + 1;
          local_2c = local_2c + 4;
          *(float *)((int)&g_PrecomputedSurfaceNormals[0][0].x + iVar4) =
               (float)(short)(char)(*local_24 >> 0x10) * fVar1;
          *(float *)((int)&g_PrecomputedSurfaceNormals[0][0].y + iVar4) =
               (float)(short)(char)(uVar8 >> 8) * fVar1;
          *(float *)((int)&g_PrecomputedSurfaceNormals[0][0].z + iVar4) =
               (float)(short)(char)uVar3 * fVar1;
          iVar4 = iVar4 + 0xc;
        } while (local_28 < this_ptr->display_width);
      }
      local_44 = local_44 + 0xf00;
      local_40 = local_40 + 0x500;
      local_38 = local_38 + 1;
    } while (local_38 < this_ptr->display_height);
  }
  local_18 = local_88;
  this_ptr->max_distance = (float)local_88 * (float)0.00390625;
  core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_00441f50(this_ptr);
  g_LightBufferPoolIndex = 0;
  g_CoronaLightCache.count = 0;
  g_CameraEdgeCount = 0;
  if (0x1df < this_ptr->framebuffer_height) {
    local_1c = this_ptr->scale_factor;
    local_48 = local_1c << 2;
    for (; (int)local_1c < this_ptr->framebuffer_height - this_ptr->scale_factor;
        local_1c = local_1c + 1) {
      uVar8 = this_ptr->scale_factor;
      local_34 = uVar8 * 4;
      for (; (int)uVar8 < this_ptr->framebuffer_width + this_ptr->scale_factor * -2;
          uVar8 = uVar8 + 1) {
        if ((g_CameraEdgeCount < 10000) && (((uVar8 & 1) != 0 || ((local_1c & 1) != 0)))) {
          iVar4 = *(int *)(*(int *)((int)g_ZBufferScanlineArray + local_48) + local_34);
          iVar6 = 0x7fffffff;
          if (iVar4 == 0) {
            iVar4 = 0x7fffffff;
          }
          else {
            iVar4 = (int)(0x7fffffff / (longlong)iVar4);
          }
          uVar3 = iVar4 - g_PrecomputedDepthBuffer
                          [((int)local_1c >> (g_CameraDownscaleIterations.bytes[0] & 0x1f)) * 0x140
                           + ((int)uVar8 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f))] >> 0x1f;
          if (0x400 < (int)((iVar4 - g_PrecomputedDepthBuffer
                                     [((int)local_1c >>
                                      (g_CameraDownscaleIterations.bytes[0] & 0x1f)) * 0x140 +
                                      ((int)uVar8 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f))]
                            ^ uVar3) - uVar3)) {
            iVar5 = 0;
            do {
              uVar3 = iVar4 - g_PrecomputedDepthBuffer
                              [(((int)local_1c >> (g_CameraDownscaleIterations.bytes[0] & 0x1f)) +
                               *(int *)((int)g_CameraEdgeOffsetY + iVar5)) * 0x140 +
                               ((int)uVar8 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f)) +
                               *(int *)((int)g_CameraEdgeOffsetX + iVar5)] >> 0x1f;
              iVar2 = (iVar4 - g_PrecomputedDepthBuffer
                               [(((int)local_1c >> (g_CameraDownscaleIterations.bytes[0] & 0x1f)) +
                                *(int *)((int)g_CameraEdgeOffsetY + iVar5)) * 0x140 +
                                ((int)uVar8 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f)) +
                                *(int *)((int)g_CameraEdgeOffsetX + iVar5)] ^ uVar3) - uVar3;
              if (iVar2 < iVar6) {
                g_CameraEdgeDetectionResults[g_CameraEdgeCount].v =
                     *(int *)((int)g_CameraEdgeOffsetX + iVar5) +
                     *(int *)((int)g_CameraEdgeOffsetY + iVar5) * 0x140;
                iVar6 = iVar2;
              }
              iVar5 = iVar5 + 4;
            } while (iVar5 != 0x20);
            if (g_CameraEdgeDetectionResults[g_CameraEdgeCount].v != 0) {
              g_CameraEdgeDetectionResults[g_CameraEdgeCount].x = uVar8;
              g_CameraEdgeDetectionResults[g_CameraEdgeCount].y = local_1c;
              g_CameraEdgeCount = g_CameraEdgeCount + 1;
            }
          }
        }
        local_34 = local_34 + 4;
      }
      local_48 = local_48 + 4;
    }
  }
  return;
}
