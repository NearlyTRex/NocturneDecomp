// Name: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
// Address: 00450ac0
// Address Range: [[00450ac0, 00450e27]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0(CDemonCamera *this_ptr,CDemonLight *light_source)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0(CDemonCamera *this_ptr,CDemonLight *light_source)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CVector3f *pCVar5;
  CMatrix3x3i *pCVar6;
  int *piVar7;
  byte bVar8;
  bool bVar9;
  int aiStackY_1048 [1016];
  CVector3i *in_stack_ffffffa0;
  CVector3i *local_54;
  int local_50 [4];
  char (*local_40) [320];
  int (*local_3c) [320];
  CVector3f *local_38;
  CVector3i *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  uint *local_20;
  CVector3i *local_1c;
  int local_18;
  char *local_14;
  
  bVar8 = 0;
  g_CurrentLightForCorona = light_source;
  pCVar6 = &(light_source->base).base.rotation_matrix;
  piVar7 = (int *)&g_CoronaCameraRotationMatrix;
  for (iVar4 = 10; iVar3 = 0, iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = pCVar6->m[0].x;
    pCVar6 = (CMatrix3x3i *)&pCVar6->m[0].y;
    piVar7 = piVar7 + 1;
  }
  do {
    iVar4 = iVar3 + 4;
    uVar2 = rand();
    *(uint *)((int)g_DitherPatternTable + iVar3) = uVar2 & 0xff;
    iVar3 = iVar4;
  } while (iVar4 != 0x400);
  iVar4 = 0;
  if (0 < this_ptr->display_height) {
    iVar3 = 0;
    do {
      *(int *)((int)g_CoronaLeftExtent + iVar3) = this_ptr->display_width;
      *(uint *)((int)g_CoronaRightExtent + iVar3) = 0;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < this_ptr->display_height);
  }
  core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0(light_source);
  fVar1 = (light_source->base).max_distance * (float)256;
  local_30 = 0;
  g_CoronaDepthShift = (int)ROUND(ROUND(fVar1 * 0.30103 * (float)3.3219280948900001));
  g_CoronaMaxDepth = (int)ROUND(ROUND(fVar1));
  g_CoronaDepthShift = g_CoronaDepthShift + -1;
  if (0 < this_ptr->display_height) {
    local_2c = 0;
    local_38 = g_PrecomputedSurfaceNormals;
    local_3c = g_CoronaDepthBuffer;
    local_40 = g_CoronaBlurOutputBuffer;
    local_34 = g_TempWorldPositionRow;
    do {
      if (this_ptr->display_width != *(int *)((int)g_CoronaLeftExtent + local_2c)) {
        local_18 = *(int *)((int)g_CoronaLeftExtent + local_2c);
        local_28 = *(int *)((int)g_CoronaRightExtent + local_2c);
        local_1c = local_34 + local_18;
        local_14 = *local_40 + local_18;
        local_24 = *local_3c + local_18;
        local_20 = g_ZBufferScanlineArray[local_30 << (g_CameraDownscaleIterations.bytes[0] & 0x1f)]
                   + (local_18 << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
        pCVar5 = local_38 + local_18;
        iVar4 = local_18 - local_28;
        bVar9 = SBORROW4(local_18,local_28);
        while (bVar9 != iVar4 < 0) {
          if ((*local_20 < (uint)*local_24) &&
             (0.0 <= pCVar5->z * (float)g_CoronaCameraRotationMatrix.m[2].z +
                     pCVar5->x * (float)g_CoronaCameraRotationMatrix.m[0].z +
                     pCVar5->y * (float)g_CoronaCameraRotationMatrix.m[1].z)) {
            core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
                      (&g_CurrentLightForCorona->base,local_1c,in_stack_ffffffa0);
            local_54 = in_stack_ffffffa0;
            local_50[(uint)bVar8 * -2] = *(int *)(&stack0xffffffa4 + (uint)bVar8 * -8);
            local_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 *(int *)(&stack0xffffffa8 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
            if ((0 < local_50[1]) &&
               ((uVar2 = (uint)g_CurrentLightForCorona->shadow_depth_buffer
                               [(local_50[0] >> 0x10) * g_CurrentLightForCorona->shadow_map_width +
                                ((int)local_54 >> 0x10)], (int)uVar2 < g_CoronaMaxDepth &&
                (local_50[1] < (int)(uVar2 + 0x80))))) {
              *local_14 = *local_14 +
                          (char)((int)((g_CoronaMaxDepth - uVar2) *
                                      (uint)g_CurrentLightForCorona->precomputed_lighting_textures
                                            [((g_CurrentLightForCorona->teture_coord_mask &
                                              local_50[0] >>
                                              ((byte)g_CurrentLightForCorona->shadow_y_shift & 0x1f)
                                              ) << ((byte)g_CurrentLightForCorona->texture_row_shift
                                                   & 0x1f)) +
                                             ((int)local_54 >>
                                              ((byte)g_CurrentLightForCorona->shadow_x_shift & 0x1f)
                                             & g_CurrentLightForCorona->teture_coord_mask)]) >>
                                ((byte)g_CoronaDepthShift & 0x1f));
            }
          }
          pCVar5 = pCVar5 + 1;
          local_24 = local_24 + 1;
          local_1c = local_1c + 1;
          local_18 = local_18 + 1;
          local_20 = local_20 + (1 << (g_CameraDownscaleIterations.bytes[0] & 0x1f));
          local_14 = local_14 + 1;
          iVar4 = local_18 - local_28;
          bVar9 = SBORROW4(local_18,local_28);
        }
      }
      local_2c = local_2c + 4;
      local_38 = local_38 + 0x140;
      local_3c = local_3c + 1;
      local_40 = local_40 + 1;
      local_34 = local_34 + 0x140;
      local_30 = local_30 + 1;
    } while (local_30 < this_ptr->display_height);
  }
  g_BackdropSaveActive = 1;
  return;
}
