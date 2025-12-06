// Name: core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360
// Address: 0044e360
// Address Range: [[0044e360, 0044e789]]
// Convention: __cdecl
// Signature: CDemonCamera * core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360(CDemonCamera * this_ptr)

#include "nocturne.h"

CDemonCamera * __cdecl
core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044e360(CDemonCamera *this_ptr)

{
  char cVar1;
  uint uVar2;
  float fVar3;
  CVector3i *alpha_index;
  CDemonCamera *pCVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  int iVar9;
  int *piVar10;
  uint uVar11;
  byte bVar12;
  int aiStackY_1068 [1013];
  CVector3i *output_ptr;
  CVector3i *in_stack_ffffff7c;
  uint uStack_80;
  CVector3i CStack_70;
  int aiStack_64 [2];
  byte auStack_5c [8];
  CVector3i *local_54;
  int iStack_4c;
  int local_48 [4];
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  char *local_24;
  uint *local_1c;
  CVector3i *local_18;
  uint local_14;
  
  bVar12 = 0;
  local_38 = 1;
  output_ptr = (CVector3i *)0x0;
  if (1 < this_ptr->display_height) {
    local_48[2] = 0x500;
    local_48[1] = 0xf00;
    do {
      local_28 = 1;
      local_24 = (char *)g_ScreenBufferArray[local_38 * this_ptr->scale_factor];
      if (1 < this_ptr->display_width) {
        local_30 = local_48[1] + 0xc;
        local_2c = local_48[2] + 4;
        iVar7 = local_30;
        do {
          local_24 = local_24 + this_ptr->scale_factor * 4;
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (this_ptr,(CVector3i *)(local_28 * this_ptr->scale_factor),
                     local_38 * this_ptr->scale_factor,(int)output_ptr);
          aiStack_64[1] = uStack_80;
          *(uint *)(auStack_5c + (uint)bVar12 * -8) =
               *(uint *)(&stack0xffffff84 + (uint)bVar12 * -8);
          *(uint *)(auStack_5c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 4) =
               *(uint *)(&stack0xffffff88 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
          if ((local_54 != (CVector3i *)0x7fffffff) && ((int)in_stack_ffffff7c < (int)local_54)) {
            in_stack_ffffff7c = local_54;
          }
          output_ptr = (CVector3i *)auStack_5c;
          core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                    (this_ptr,output_ptr,in_stack_ffffff7c);
          CStack_70.z = iStack_4c;
          aiStack_64[(uint)bVar12 * -2] = local_48[(uint)bVar12 * -2];
          *(int *)(auStack_5c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + -4) =
               local_48[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          piVar10 = (int *)(local_28 + 0x9e4e78 + (uint)bVar12 * -8);
          *(int *)((int)&g_TempWorldPositionRow[0].x + local_28) = iStack_4c;
          *piVar10 = local_48[(uint)bVar12 * -2];
          piVar10[(uint)bVar12 * -2 + 1] = local_48[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          alpha_index = (CVector3i *)(*local_1c >> 0x18);
          if (alpha_index != (CVector3i *)0x0) {
            output_ptr = (CVector3i *)(auStack_5c + 4);
            core_dcamera_cpp_CDemonCamera_restoreAlphaTransform_FUN_00453a70
                      (this_ptr,output_ptr,(int)alpha_index,&CStack_70);
            aiStack_64[0] = CStack_70.y;
            *(int *)(auStack_5c + (uint)bVar12 * -8 + -4) = aiStack_64[(uint)bVar12 * -2 + -1];
            *(int *)(auStack_5c + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
                 aiStack_64[(uint)bVar12 * -2 + (uint)bVar12 * -2];
            in_stack_ffffff7c = alpha_index;
          }
          piVar10 = (int *)(iVar7 + 0x902f78 + (uint)bVar12 * -8);
          *(int *)((int)&g_PrecomputedWorldPositions[0].x + iVar7) = CStack_70.y;
          *piVar10 = aiStack_64[(uint)bVar12 * -2 + -1];
          piVar10[(uint)bVar12 * -2 + 1] = aiStack_64[(uint)bVar12 * -2 + (uint)bVar12 * -2];
          *(uint *)((int)g_PrecomputedDepthBuffer + local_2c) = auStack_5c._4_4_;
          uVar2 = *(uint *)local_24;
          cVar1 = *local_24;
          fVar3 = (float)0.0078740157480314994;
          local_14 = (uint)(ushort)(short)cVar1;
          local_30 = local_30 + 0xc;
          local_28 = local_28 + 1;
          local_2c = local_2c + 4;
          *(float *)((int)&g_PrecomputedSurfaceNormals[0].x + iVar7) =
               (float)(short)(char)((uint)*(uint *)local_24 >> 0x10) * fVar3;
          *(float *)((int)&g_PrecomputedSurfaceNormals[0].y + iVar7) =
               (float)(short)(char)((uint)uVar2 >> 8) * fVar3;
          *(float *)((int)&g_PrecomputedSurfaceNormals[0].z + iVar7) = (float)(short)cVar1 * fVar3;
          iVar7 = iVar7 + 0xc;
        } while (local_28 < this_ptr->display_width);
      }
      local_48[1] = local_48[1] + 0xf00;
      local_48[2] = local_48[2] + 0x500;
      local_38 = local_38 + 1;
    } while (local_38 < this_ptr->display_height);
  }
  this_ptr->max_distance = (float)(int)output_ptr * (float)0.00390625;
  local_18 = output_ptr;
  core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_004529b0(this_ptr);
  g_LightBufferPoolIndex = 0;
  g_LightBufferPool[0x18][0] = '\0';
  g_LightBufferPool[0x18][1] = '\0';
  g_LightBufferPool[0x18][2] = '\0';
  g_LightBufferPool[0x18][3] = '\0';
  g_CameraEdgeCount = 0;
  pCVar4 = this_ptr;
  if (0x1df < this_ptr->framebuffer_height) {
    local_18 = (CVector3i *)this_ptr->scale_factor;
    local_48[1] = (int)local_18 << 2;
    for (; pCVar4 = (CDemonCamera *)(this_ptr->framebuffer_height - this_ptr->scale_factor),
        (int)local_18 < (int)pCVar4; local_18 = (CVector3i *)((int)local_18 + 1)) {
      uVar11 = this_ptr->scale_factor;
      local_30 = uVar11 * 4;
      for (; (int)uVar11 < this_ptr->framebuffer_width + this_ptr->scale_factor * -2;
          uVar11 = uVar11 + 1) {
        if ((g_CameraEdgeCount < 10000) && (((uVar11 & 1) != 0 || (((uint)local_18 & 1) != 0)))) {
          iVar7 = *(int *)(*(int *)((int)g_ZBufferScanlineArray + local_48[1]) + local_30);
          iVar9 = 0x7fffffff;
          if (iVar7 == 0) {
            iVar7 = 0x7fffffff;
          }
          else {
            iVar7 = (int)(0x7fffffff / (longlong)iVar7);
          }
          uVar6 = iVar7 - g_PrecomputedDepthBuffer
                          [((int)local_18 >> ((byte)g_CameraDownscaleIterations & 0x1f)) * 0x140 +
                           ((int)uVar11 >> ((byte)g_CameraDownscaleIterations & 0x1f))] >> 0x1f;
          if (0x400 < (int)((iVar7 - g_PrecomputedDepthBuffer
                                     [((int)local_18 >> ((byte)g_CameraDownscaleIterations & 0x1f))
                                      * 0x140 + ((int)uVar11 >>
                                                ((byte)g_CameraDownscaleIterations & 0x1f))] ^ uVar6
                            ) - uVar6)) {
            iVar8 = 0;
            do {
              uVar6 = iVar7 - g_PrecomputedDepthBuffer
                              [(((int)local_18 >> ((byte)g_CameraDownscaleIterations & 0x1f)) +
                               *(int *)((int)g_CameraEdgeOffsetY + iVar8)) * 0x140 +
                               ((int)uVar11 >> ((byte)g_CameraDownscaleIterations & 0x1f)) +
                               *(int *)((int)g_CameraEdgeOffsetX + iVar8)] >> 0x1f;
              iVar5 = (iVar7 - g_PrecomputedDepthBuffer
                               [(((int)local_18 >> ((byte)g_CameraDownscaleIterations & 0x1f)) +
                                *(int *)((int)g_CameraEdgeOffsetY + iVar8)) * 0x140 +
                                ((int)uVar11 >> ((byte)g_CameraDownscaleIterations & 0x1f)) +
                                *(int *)((int)g_CameraEdgeOffsetX + iVar8)] ^ uVar6) - uVar6;
              if (iVar5 < iVar9) {
                g_CameraEdgeDetectionResults[g_CameraEdgeCount * 3] =
                     *(int *)((int)g_CameraEdgeOffsetX + iVar8) +
                     *(int *)((int)g_CameraEdgeOffsetY + iVar8) * 0x140;
                iVar9 = iVar5;
              }
              iVar8 = iVar8 + 4;
            } while (iVar8 != 0x20);
            if (g_CameraEdgeDetectionResults[g_CameraEdgeCount * 3] != 0) {
              g_CameraEdgeDetectionResults[g_CameraEdgeCount * 3 + 1] = uVar11;
              g_CameraEdgeDetectionResults[g_CameraEdgeCount * 3 + 2] = (int)local_18;
              g_CameraEdgeCount = g_CameraEdgeCount + 1;
            }
          }
        }
        local_30 = local_30 + 4;
      }
      local_48[1] = local_48[1] + 4;
    }
  }
  return pCVar4;
}
