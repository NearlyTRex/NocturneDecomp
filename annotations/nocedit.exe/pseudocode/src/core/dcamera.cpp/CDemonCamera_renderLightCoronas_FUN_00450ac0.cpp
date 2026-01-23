// Name: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
// Address: 00450ac0
// Address Range: [[00450ac0, 00450e27]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0(CDemonCamera * this_ptr, CDemonLight * light_source)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
          (CDemonCamera *this_ptr,CDemonLight *light_source)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  CVector3f *pCVar6;
  CMatrix3x3i *pCVar7;
  int *piVar8;
  byte bVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  int aiStackY_1050 [1016];
  CVector3i *input_ptr;
  CVector3i *pCStack_5c;
  int aiStack_58 [4];
  char (*pacStack_48) [320];
  int (*paiStack_44) [320];
  CVector3f *local_40;
  CVector3i *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int *local_2c;
  uint *local_28;
  CVector3i *local_24;
  int local_20;
  char *local_1c;
  
  bVar9 = 0;
  g_CurrentLightForCorona = light_source;
  pCVar7 = &(light_source->base).base.rotation_matrix;
  piVar8 = (int *)&g_CoronaCameraRotationMatrix;
  for (iVar5 = 10; iVar4 = 0, iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar8 = pCVar7->m[0].x;
    pCVar7 = (CMatrix3x3i *)&pCVar7->m[0].y;
    piVar8 = piVar8 + 1;
  }
  do {
    iVar5 = iVar4 + 4;
    uVar3 = crt_stdlib_c_rand_FUN_005feb5c();
    *(uint *)((int)g_DitherPatternTable + iVar4) = uVar3 & 0xff;
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  iVar5 = 0;
  if (0 < this_ptr->display_height) {
    iVar4 = 0;
    do {
      *(int *)((int)g_CoronaLeftExtent + iVar4) = this_ptr->display_width;
      *(uint *)((int)g_CoronaRightExtent + iVar4) = 0;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < this_ptr->display_height);
  }
  core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0(light_source);
  fVar1 = (light_source->base).max_distance * (float)256;
  fVar2 = (float)3.3219280948900001;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)fVar1);
  input_ptr = (CVector3i *)0x450b76;
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)(fVar1 * 0.30103 * fVar2));
  local_38 = 0;
  g_CoronaDepthShift = (int)ROUND(dVar12);
  g_CoronaMaxDepth = (int)ROUND(dVar11);
  g_CoronaDepthShift = g_CoronaDepthShift + -1;
  if (0 < this_ptr->display_height) {
    local_34 = 0;
    local_40 = g_PrecomputedSurfaceNormals;
    paiStack_44 = g_CoronaDepthBuffer;
    pacStack_48 = g_CoronaBlurOutputBuffer;
    local_3c = g_TempWorldPositionRow;
    do {
      if (this_ptr->display_width != *(int *)((int)g_CoronaLeftExtent + local_34)) {
        local_20 = *(int *)((int)g_CoronaLeftExtent + local_34);
        local_30 = *(int *)((int)g_CoronaRightExtent + local_34);
        local_24 = local_3c + local_20;
        local_1c = *pacStack_48 + local_20;
        local_2c = *paiStack_44 + local_20;
        local_28 = g_ZBufferScanlineArray[local_38 << ((byte)g_CameraDownscaleIterations & 0x1f)] +
                   (local_20 << ((byte)g_CameraDownscaleIterations & 0x1f));
        pCVar6 = local_40 + local_20;
        iVar5 = local_20 - local_30;
        bVar10 = SBORROW4(local_20,local_30);
        while (bVar10 != iVar5 < 0) {
          if ((*local_28 < (uint)*local_2c) &&
             (0.0 <= pCVar6->z * (float)g_CoronaCameraRotationMatrix.m[2].z +
                     pCVar6->x * (float)g_CoronaCameraRotationMatrix.m[0].z +
                     pCVar6->y * (float)g_CoronaCameraRotationMatrix.m[1].z)) {
            core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
                      (&g_CurrentLightForCorona->base,local_24,input_ptr);
            pCStack_5c = input_ptr;
            aiStack_58[(uint)bVar9 * -2] = *(int *)(&stack0xffffff9c + (uint)bVar9 * -8);
            aiStack_58[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                 *(int *)(&stack0xffffffa0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
            if ((0 < aiStack_58[1]) &&
               ((uVar3 = (uint)g_CurrentLightForCorona->shadow_depth_buffer
                               [(aiStack_58[0] >> 0x10) * g_CurrentLightForCorona->shadow_map_width
                                + ((int)pCStack_5c >> 0x10)], (int)uVar3 < g_CoronaMaxDepth &&
                (aiStack_58[1] < (int)(uVar3 + 0x80))))) {
              *local_1c = *local_1c +
                          (char)((int)((g_CoronaMaxDepth - uVar3) *
                                      (uint)g_CurrentLightForCorona->precomputed_lighting_textures
                                            [((g_CurrentLightForCorona->teture_coord_mask &
                                              aiStack_58[0] >>
                                              ((byte)g_CurrentLightForCorona->shadow_y_shift & 0x1f)
                                              ) << ((byte)g_CurrentLightForCorona->texture_row_shift
                                                   & 0x1f)) +
                                             ((int)pCStack_5c >>
                                              ((byte)g_CurrentLightForCorona->shadow_x_shift & 0x1f)
                                             & g_CurrentLightForCorona->teture_coord_mask)]) >>
                                ((byte)g_CoronaDepthShift & 0x1f));
            }
          }
          pCVar6 = pCVar6 + 1;
          local_2c = local_2c + 1;
          local_24 = local_24 + 1;
          local_20 = local_20 + 1;
          local_28 = local_28 + (1 << ((byte)g_CameraDownscaleIterations & 0x1f));
          local_1c = local_1c + 1;
          iVar5 = local_20 - local_30;
          bVar10 = SBORROW4(local_20,local_30);
        }
      }
      local_34 = local_34 + 4;
      local_40 = local_40 + 0x140;
      paiStack_44 = paiStack_44 + 1;
      pacStack_48 = pacStack_48 + 1;
      local_3c = local_3c + 0x140;
      local_38 = local_38 + 1;
    } while (local_38 < this_ptr->display_height);
  }
  g_BackdropSaveActive = 1;
  return;
}
