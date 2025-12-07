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
  BADSPACEBASE *in_ESP;
  char *unaff_EBP;
  CMatrix3x3i *pCVar7;
  int *piVar8;
  byte bVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  int aiStackY_1044 [1015];
  CVector3i *input_ptr;
  uint uStack_5c;
  uint local_54;
  int local_50;
  int local_4c;
  int iStack_48;
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
  uStack_5c = 0x450b6d;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)fVar1);
  input_ptr = (CVector3i *)0x450b76;
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)(fVar1 * 0.30103 * fVar2));
  local_30 = 0;
  g_CoronaDepthShift = (int)ROUND(dVar12);
  g_CoronaMaxDepth = (int)ROUND(dVar11);
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
        local_20 = g_ZBufferScanlineArray[local_30 << ((byte)g_CameraDownscaleIterations & 0x1f)] +
                   (local_18 << ((byte)g_CameraDownscaleIterations & 0x1f));
        pCVar6 = local_38 + local_18;
        iVar5 = local_18 - local_28;
        bVar10 = SBORROW /* signed borrow */4(local_18,local_28);
        while (bVar10 != iVar5 < 0) {
          if ((*local_20 < (uint)*local_24) &&
             (0.0 <= pCVar6->z * (float)g_CoronaCameraRotationMatrix.m[2].z +
                     pCVar6->x * (float)g_CoronaCameraRotationMatrix.m[0].z +
                     pCVar6->y * (float)g_CoronaCameraRotationMatrix.m[1].z)) {
            core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
                      (&g_CurrentLightForCorona->base,local_1c,input_ptr);
            local_54 = uStack_5c;
            *(uint *)((int)&stack0xffffffb0 + (uint)bVar9 * -8) =
                 *(uint *)(&stack0xffffffa8 + (uint)bVar9 * -8);
            *(uint *)((int)&stack0xffffffb4 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
                 *(uint *)((int)&stack0xffffffac + (uint)bVar9 * -8 + (uint)bVar9 * -8);
            if ((0 < iStack_48) &&
               ((uVar3 = (uint)g_CurrentLightForCorona->shadow_depth_buffer
                               [(local_4c >> 0x10) * g_CurrentLightForCorona->shadow_map_width +
                                (local_50 >> 0x10)], (int)uVar3 < g_CoronaMaxDepth &&
                (iStack_48 < (int)(uVar3 + 0x80))))) {
              *unaff_EBP = *unaff_EBP +
                           (char)((int)((g_CoronaMaxDepth - uVar3) *
                                       (uint)g_CurrentLightForCorona->precomputed_lighting_textures
                                             [((g_CurrentLightForCorona->teture_coord_mask &
                                               local_4c >>
                                               ((byte)g_CurrentLightForCorona->shadow_y_shift & 0x1f
                                               )) << ((byte)g_CurrentLightForCorona->
                                                            texture_row_shift & 0x1f)) +
                                              (local_50 >>
                                               ((byte)g_CurrentLightForCorona->shadow_x_shift & 0x1f
                                               ) & g_CurrentLightForCorona->teture_coord_mask)]) >>
                                 ((byte)g_CoronaDepthShift & 0x1f));
            }
          }
          pCVar6 = pCVar6 + 1;
          local_24 = local_24 + 1;
          local_1c = local_1c + 1;
          local_18 = local_18 + 1;
          local_20 = local_20 + (1 << ((byte)g_CameraDownscaleIterations & 0x1f));
          local_14 = local_14 + 1;
          iVar5 = local_18 - local_28;
          bVar10 = SBORROW /* signed borrow */4(local_18,local_28);
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
