// Name: core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_004421b0
// Address: 004421b0
// Address Range: [[004421b0, 004425cf]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_004421b0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_004421b0(CDemonCamera *this_ptr)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  byte bVar11;
  int aiStackY_1064 [1014];
  int local_80;
  CVector3i local_7c;
  CVector3i local_70;
  CVector3i local_64;
  CVector3i local_58;
  int local_4c;
  int aiStack_48 [6];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_1c;
  int local_18;
  uint local_14;
  
  bVar11 = 0;
  aiStack_48[4] = 1;
  local_80 = 0;
  if (1 < this_ptr->display_height) {
    aiStack_48[2] = 0x500;
    aiStack_48[3] = 0xf00;
    do {
      local_28 = 1;
      puVar4 = (uint *)((int)g_ScreenBufferArray
                             [aiStack_48[4] * this_ptr->scale_factor + this_ptr->viewport_y] +
                       this_ptr->viewport_x * 4);
      if (1 < this_ptr->display_width) {
        aiStack_48[5] = aiStack_48[3] + 0xc;
        local_2c = aiStack_48[2] + 4;
        local_24 = aiStack_48[5];
        do {
          puVar4 = puVar4 + this_ptr->scale_factor;
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
                    (this_ptr,local_28 * this_ptr->scale_factor,
                     aiStack_48[4] * this_ptr->scale_factor,&local_64);
          local_7c.x = local_64.x;
          *(uint *)((int)&local_7c + (uint)bVar11 * -8 + 4) =
               *(uint *)((int)&local_64 + (uint)bVar11 * -8 + 4);
          *(uint *)((int)&local_7c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
               *(uint *)((int)&local_64 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          if ((local_7c.z != 0x7fffffff) && (local_80 < local_7c.z)) {
            local_80 = local_7c.z;
          }
          core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0
                    (this_ptr,&local_7c,&local_70);
          local_4c = local_70.x;
          aiStack_48[(uint)bVar11 * -2] = *(int *)((int)&local_70 + (uint)bVar11 * -8 + 4);
          aiStack_48[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               *(int *)((int)&local_70 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          puVar8 = (uint *)(aiStack_48[5] + 0x8d927c + (uint)bVar11 * -8);
          *(int *)((int)&g_CVector3i_ARRAY_ARRAY_008d9278[0][0].x + aiStack_48[5]) = local_70.x;
          *puVar8 = *(uint *)((int)&local_70 + (uint)bVar11 * -8 + 4);
          puVar8[(uint)bVar11 * -2 + 1] =
               *(uint *)((int)&local_70 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          if (*puVar4 >> 0x18 != 0) {
            core_dcamera_cpp_CDemonCamera_restoreAlphaTransform_FUN_00447910
                      (this_ptr,&local_7c,*puVar4 >> 0x18,&local_58);
            local_4c = local_58.x;
            aiStack_48[(uint)bVar11 * -2] = *(int *)((int)&local_58 + (uint)bVar11 * -8 + 4);
            aiStack_48[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                 *(int *)((int)&local_58 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          }
          piVar9 = (int *)(local_24 + 0x7f737c + (uint)bVar11 * -8);
          *(int *)((int)&g_PrecomputedWorldPositions[0].x + local_24) = local_4c;
          *piVar9 = aiStack_48[(uint)bVar11 * -2];
          piVar9[(uint)bVar11 * -2 + 1] = aiStack_48[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          *(int *)((int)g_INT_ARRAY_00ac2af8 + local_2c) = local_7c.z;
          uVar10 = *puVar4;
          fVar1 = (float)0.0078740157480314994;
          uVar3 = *puVar4;
          *(float *)((int)&g_PrecomputedSurfaceNormals[0].x + local_24) =
               (float)(short)(char)(*puVar4 >> 0x10) * fVar1;
          *(float *)((int)&g_PrecomputedSurfaceNormals[0].y + local_24) =
               (float)(short)(char)(uVar10 >> 8) * fVar1;
          local_14 = CONCAT22((short)((uint)local_24 >> 0x10),(short)(char)uVar3);
          aiStack_48[5] = aiStack_48[5] + 0xc;
          local_2c = local_2c + 4;
          iVar5 = local_24 + 0xc;
          *(float *)((int)&g_PrecomputedSurfaceNormals[0].z + local_24) =
               (float)(short)(char)uVar3 * fVar1;
          local_28 = local_28 + 1;
          local_24 = iVar5;
        } while (local_28 < this_ptr->display_width);
      }
      aiStack_48[3] = aiStack_48[3] + 0xf00;
      aiStack_48[2] = aiStack_48[2] + 0x500;
      aiStack_48[4] = aiStack_48[4] + 1;
    } while (aiStack_48[4] < this_ptr->display_height);
  }
  local_18 = local_80;
  this_ptr->fixed_point_scale = (float)local_80 * (float)0.00390625;
  core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_00446810(this_ptr);
  g_LightBufferPoolIndex = 0;
  g_CoronaLightCache.count = 0;
  g_CameraEdgeCount = 0;
  if (0x1df < this_ptr->framebuffer_height) {
    for (local_1c = this_ptr->scale_factor; uVar10 = this_ptr->scale_factor,
        (int)local_1c < (int)(this_ptr->framebuffer_height - uVar10); local_1c = local_1c + 1) {
      local_30 = uVar10 * 4;
      for (; (int)uVar10 < this_ptr->framebuffer_width + this_ptr->scale_factor * -2;
          uVar10 = uVar10 + 1) {
        if ((g_CameraEdgeCount < 10000) && (((uVar10 & 1) != 0 || ((local_1c & 1) != 0)))) {
          iVar5 = *(int *)((int)g_ZBufferScanlineArray[local_1c + this_ptr->viewport_y] +
                          this_ptr->viewport_x * 4 + local_30);
          iVar7 = 0x7fffffff;
          if (iVar5 == 0) {
            iVar5 = 0x7fffffff;
          }
          else {
            iVar5 = (int)(0x7fffffff / (longlong)iVar5);
          }
          uVar3 = iVar5 - g_INT_ARRAY_00ac2af8
                          [((int)local_1c >> (g_CameraDownscaleIterations.bytes[0] & 0x1f)) * 0x140
                           + ((int)uVar10 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f))] >> 0x1f
          ;
          if (0x400 < (int)((iVar5 - g_INT_ARRAY_00ac2af8
                                     [((int)local_1c >>
                                      (g_CameraDownscaleIterations.bytes[0] & 0x1f)) * 0x140 +
                                      ((int)uVar10 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f))
                                     ] ^ uVar3) - uVar3)) {
            iVar6 = 0;
            do {
              uVar3 = iVar5 - g_INT_ARRAY_00ac2af8
                              [(((int)local_1c >> (g_CameraDownscaleIterations.bytes[0] & 0x1f)) +
                               *(int *)((int)g_CameraEdgeOffsetY + iVar6)) * 0x140 +
                               ((int)uVar10 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f)) +
                               *(int *)((int)g_CameraEdgeOffsetX + iVar6)] >> 0x1f;
              iVar2 = (iVar5 - g_INT_ARRAY_00ac2af8
                               [(((int)local_1c >> (g_CameraDownscaleIterations.bytes[0] & 0x1f)) +
                                *(int *)((int)g_CameraEdgeOffsetY + iVar6)) * 0x140 +
                                ((int)uVar10 >> (g_CameraDownscaleIterations.bytes[0] & 0x1f)) +
                                *(int *)((int)g_CameraEdgeOffsetX + iVar6)] ^ uVar3) - uVar3;
              if (iVar2 < iVar7) {
                g_CameraEdgeDetectionResults[g_CameraEdgeCount].v =
                     *(int *)((int)g_CameraEdgeOffsetY + iVar6) * 0x140 +
                     *(int *)((int)g_CameraEdgeOffsetX + iVar6);
                iVar7 = iVar2;
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
        local_30 = local_30 + 4;
      }
    }
  }
  return;
}
