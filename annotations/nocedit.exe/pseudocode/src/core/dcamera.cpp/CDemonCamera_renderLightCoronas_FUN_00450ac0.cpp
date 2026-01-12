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
  CVector3f *pCVar4;
  BADSPACEBASE *in_ESP;
  CMatrix3x3i *pCVar5;
  int *piVar6;
  byte bVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int aiStackY_1044 [1015];
  CVector3i *input_ptr;
  int iStack_5c;
  int local_54;
  int local_50;
  int local_4c;
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
  input_ptr = (CVector3i *)0x450b76;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)fVar10);
  g_CoronaDepthShift = (int)ROUND(dVar11);
  g_CoronaMaxDepth = (int)ROUND(fVar9);
  g_CoronaDepthShift = g_CoronaDepthShift + -1;
  if (0 < this_ptr->display_height) {
    local_2c = 0;
    local_38 = g_PrecomputedSurfaceNormals;
    local_3c = g_CoronaDepthBuffer;
    local_40 = g_CoronaBlurOutputBuffer;
    local_34 = g_TempWorldPositionRow;
    local_30 = extraout_EAX;
    do {
      if (this_ptr->display_width != *(int *)((int)g_CoronaLeftExtent + local_2c)) {
        local_18 = *(int *)((int)g_CoronaLeftExtent + local_2c);
        local_28 = *(int *)((int)g_CoronaRightExtent + local_2c);
        local_1c = local_34 + local_18;
        local_14 = *local_40 + local_18;
        local_24 = *local_3c + local_18;
        local_20 = g_ZBufferScanlineArray[local_30 << ((byte)g_CameraDownscaleIterations & 0x1f)] +
                   (local_18 << ((byte)g_CameraDownscaleIterations & 0x1f));
        pCVar4 = local_38 + local_18;
        iVar3 = local_18 - local_28;
        bVar8 = SBORROW /* signed borrow */4(local_18,local_28);
        while (bVar8 != iVar3 < 0) {
          if ((*local_20 < (uint)*local_24) &&
             (0.0 <= pCVar4->z * (float)g_CoronaCameraRotationMatrix.m[2].z +
                     pCVar4->x * (float)g_CoronaCameraRotationMatrix.m[0].z +
                     pCVar4->y * (float)g_CoronaCameraRotationMatrix.m[1].z)) {
            core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
                      (&g_CurrentLightForCorona->base,local_1c,input_ptr);
            local_54 = iStack_5c;
            *(uint *)((int)&stack0xffffffb0 + (uint)bVar7 * -8) =
                 *(uint *)(&stack0xffffffa8 + (uint)bVar7 * -8);
            *(uint *)((int)&stack0xffffffb4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                 *(uint *)((int)&stack0xffffffac + (uint)bVar7 * -8 + (uint)bVar7 * -8);
            if ((0 < local_4c) &&
               ((uVar1 = (uint)g_CurrentLightForCorona->shadow_depth_buffer
                               [(local_50 >> 0x10) * g_CurrentLightForCorona->shadow_map_width +
                                (local_54 >> 0x10)], (int)uVar1 < g_CoronaMaxDepth &&
                (local_4c < (int)(uVar1 + 0x80))))) {
              *local_14 = *local_14 +
                          (char)((int)((g_CoronaMaxDepth - uVar1) *
                                      (uint)g_CurrentLightForCorona->precomputed_lighting_textures
                                            [((g_CurrentLightForCorona->teture_coord_mask &
                                              local_50 >>
                                              ((byte)g_CurrentLightForCorona->shadow_y_shift & 0x1f)
                                              ) << ((byte)g_CurrentLightForCorona->texture_row_shift
                                                   & 0x1f)) +
                                             (local_54 >>
                                              ((byte)g_CurrentLightForCorona->shadow_x_shift & 0x1f)
                                             & g_CurrentLightForCorona->teture_coord_mask)]) >>
                                ((byte)g_CoronaDepthShift & 0x1f));
            }
          }
          pCVar4 = pCVar4 + 1;
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
