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
  uint uVar1;
  int iVar2;
  int extraout_EAX;
  int iVar3;
  float *pfVar4;
  CMatrix3x3i *pCVar5;
  int *piVar6;
  byte bVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int aiStackY_1048 [1016];
  CVector3i *in_stack_ffffffa0;
  CVector3i *local_54;
  int local_50 [2];
  char (*pacStack_48) [320];
  int (*paiStack_44) [320];
  CVector3f *local_40;
  CVector3i *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  uint *local_20;
  CVector3i *local_1c;
  int local_18;
  char *local_14;
  
  bVar7 = 0;
  g_CurrentLightForCorona = light_source;
  pCVar5 = &(light_source->base).base.rotation_matrix;
  piVar6 = (int *)&g_CoronaCameraRotationMatrix;
  for (iVar3 = 10; iVar2 = 0, iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = pCVar5->m[0].x;
    pCVar5 = (CMatrix3x3i *)&pCVar5->m[0].y;
    piVar6 = piVar6 + 1;
  }
  do {
    iVar3 = iVar2 + 4;
    uVar1 = crt_stdlib_c_rand_FUN_005feb5c();
    *(uint *)((int)g_DitherPatternTable + iVar2) = uVar1 & 0xff;
    iVar2 = iVar3;
  } while (iVar3 != 0x400);
  iVar3 = 0;
  if (0 < this_ptr->display_height) {
    iVar2 = 0;
    do {
      *(int *)((int)g_CoronaLeftExtent + iVar2) = this_ptr->display_width;
      *(uint *)((int)g_CoronaRightExtent + iVar2) = 0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < this_ptr->display_height);
  }
  core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0(light_source);
  fVar9 = (float10)(light_source->base).max_distance * (float10)256;
  fVar10 = (float10)0.3010299956639812 * fVar9 * (float10)3.3219280948900001;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)fVar9);
  fVar9 = (float10)dVar11;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)fVar10);
  g_CoronaDepthShift = (int)ROUND(dVar11);
  g_CoronaMaxDepth = (int)ROUND(fVar9);
  g_CoronaDepthShift = g_CoronaDepthShift + -1;
  if (0 < this_ptr->display_height) {
    local_34 = 0;
    local_40 = g_PrecomputedSurfaceNormals;
    paiStack_44 = g_CoronaDepthBuffer;
    pacStack_48 = g_CoronaBlurOutputBuffer;
    local_3c = g_TempWorldPositionRow;
    local_38 = extraout_EAX;
    do {
      if (this_ptr->display_width != *(int *)((int)g_CoronaLeftExtent + local_2c)) {
        local_18 = *(int *)((int)g_CoronaLeftExtent + local_2c);
        local_28 = *(int *)((int)g_CoronaRightExtent + local_2c);
        local_1c = (CVector3i *)(local_34 + local_18 * 0xc);
        local_14 = (char *)((int)&local_40->x + local_18);
        local_24 = &local_3c->x + local_18;
        local_20 = g_ZBufferScanlineArray[local_30 << ((byte)g_CameraDownscaleIterations & 0x1f)] +
                   (local_18 << ((byte)g_CameraDownscaleIterations & 0x1f));
        pfVar4 = (float *)(local_18 * 0xc + local_38);
        iVar3 = local_18 - local_28;
        bVar8 = SBORROW /* signed borrow */4(local_18,local_28);
        while (bVar8 != iVar3 < 0) {
          if ((*local_20 < (uint)*local_24) &&
             (0.0 <= pfVar4[2] * (float)g_CoronaCameraRotationMatrix.m[2].z +
                     *pfVar4 * (float)g_CoronaCameraRotationMatrix.m[0].z +
                     pfVar4[1] * (float)g_CoronaCameraRotationMatrix.m[1].z)) {
            core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
                      (&g_CurrentLightForCorona->base,local_1c,in_stack_ffffffa0);
            local_54 = in_stack_ffffffa0;
            local_50[(uint)bVar7 * -2] = *(int *)(&stack0xffffffa4 + (uint)bVar7 * -8);
            local_50[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 *(int *)(&stack0xffffffa8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
            if ((0 < local_50[1]) &&
               ((uVar1 = (uint)g_CurrentLightForCorona->shadow_depth_buffer
                               [(local_50[0] >> 0x10) * g_CurrentLightForCorona->shadow_map_width +
                                ((int)local_54 >> 0x10)], (int)uVar1 < g_CoronaMaxDepth &&
                (local_50[1] < (int)(uVar1 + 0x80))))) {
              *local_14 = *local_14 +
                          (char)((int)((g_CoronaMaxDepth - uVar1) *
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
          pfVar4 = pfVar4 + 3;
          local_24 = local_24 + 1;
          local_1c = local_1c + 1;
          local_18 = local_18 + 1;
          local_20 = local_20 + (1 << ((byte)g_CameraDownscaleIterations & 0x1f));
          local_14 = local_14 + 1;
          iVar3 = local_18 - local_28;
          bVar8 = SBORROW /* signed borrow */4(local_18,local_28);
        }
      }
      local_2c = local_2c + 4;
      local_38 = local_38 + 0xf00;
      local_3c = (CVector3i *)&local_3c[0x6a].z;
      local_40 = (CVector3f *)&local_40[0x1a].z;
      local_34 = local_34 + 0xf00;
      local_30 = local_30 + 1;
    } while (local_30 < this_ptr->display_height);
  }
  g_BackdropSaveActive = 1;
  return;
}
