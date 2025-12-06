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
  uint extraout_EAX;
  int iVar3;
  uint extraout_EDX;
  CVector3f *pCVar4;
  BADSPACEBASE *in_ESP;
  CMatrix3x3i *pCVar5;
  int *piVar6;
  byte bVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  char *unaff_retaddr;
  int aiStackY_1034 [1013];
  uint uStack_5c;
  CVector3i *in_stack_ffffffb0;
  uint local_4c;
  uint uStack_44;
  int local_40;
  int local_3c;
  int local_38;
  char (*local_30) [320];
  int (*local_2c) [320];
  CVector3f *local_28;
  CVector3i *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  uint *puVar12;
  CVector3i *output_ptr;
  
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
  uStack_5c = 0x450b6d;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)((ulonglong)dVar11 & 0xffffffff00000000));
  local_20 = SUB84 /* extract 2-byte value */(dVar11,0);
  g_CoronaDepthShift = (int)ROUND(fVar10);
  g_CoronaMaxDepth = (int)ROUND(fVar9);
  g_CoronaDepthShift = g_CoronaDepthShift + -1;
  if (0 < this_ptr->display_height) {
    local_1c = 0;
    local_28 = g_PrecomputedSurfaceNormals;
    local_2c = g_CoronaDepthBuffer;
    local_30 = g_CoronaBlurOutputBuffer;
    local_24 = g_TempWorldPositionRow;
    do {
      if (this_ptr->display_width != *(int *)((int)g_CoronaLeftExtent + local_1c)) {
        iVar3 = *(int *)((int)g_CoronaLeftExtent + local_1c);
        local_18 = *(int *)((int)g_CoronaRightExtent + local_1c);
        output_ptr = local_24 + iVar3;
        local_14 = *local_2c + iVar3;
        puVar12 = g_ZBufferScanlineArray[local_20 << ((byte)g_CameraDownscaleIterations & 0x1f)] +
                  (iVar3 << ((byte)g_CameraDownscaleIterations & 0x1f));
        pCVar4 = local_28 + iVar3;
        iVar2 = iVar3 - local_18;
        bVar8 = SBORROW /* signed borrow */4(iVar3,local_18);
        while (bVar8 != iVar2 < 0) {
          if ((*puVar12 < (uint)*local_14) &&
             (0.0 <= pCVar4->z * (float)g_CoronaCameraRotationMatrix.m[2].z +
                     pCVar4->x * (float)g_CoronaCameraRotationMatrix.m[0].z +
                     pCVar4->y * (float)g_CoronaCameraRotationMatrix.m[1].z)) {
            uStack_5c = 0x450d1b;
            core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
                      (&g_CurrentLightForCorona->base,output_ptr,in_stack_ffffffb0);
            uStack_44 = local_4c;
            *(uint *)((int)&stack0xffffffc0 + (uint)bVar7 * -8) =
                 *(uint *)(&stack0xffffffb8 + (uint)bVar7 * -8);
            *(uint *)((int)&stack0xffffffc4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                 *(uint *)((int)&stack0xffffffbc + (uint)bVar7 * -8 + (uint)bVar7 * -8);
            if ((0 < local_38) &&
               ((uVar1 = (uint)g_CurrentLightForCorona->shadow_depth_buffer
                               [(local_3c >> 0x10) * g_CurrentLightForCorona->shadow_map_width +
                                (local_40 >> 0x10)], (int)uVar1 < g_CoronaMaxDepth &&
                (local_38 < (int)(uVar1 + 0x80))))) {
              *unaff_retaddr =
                   *unaff_retaddr +
                   (char)((int)((g_CoronaMaxDepth - uVar1) *
                               (uint)g_CurrentLightForCorona->precomputed_lighting_textures
                                     [((g_CurrentLightForCorona->teture_coord_mask &
                                       local_3c >>
                                       ((byte)g_CurrentLightForCorona->shadow_y_shift & 0x1f)) <<
                                      ((byte)g_CurrentLightForCorona->texture_row_shift & 0x1f)) +
                                      (local_40 >>
                                       ((byte)g_CurrentLightForCorona->shadow_x_shift & 0x1f) &
                                      g_CurrentLightForCorona->teture_coord_mask)]) >>
                         ((byte)g_CoronaDepthShift & 0x1f));
            }
          }
          pCVar4 = pCVar4 + 1;
          local_14 = local_14 + 1;
          output_ptr = output_ptr + 1;
          iVar3 = iVar3 + 1;
          puVar12 = puVar12 + (1 << ((byte)g_CameraDownscaleIterations & 0x1f));
          iVar2 = iVar3 - local_18;
          bVar8 = SBORROW /* signed borrow */4(iVar3,local_18);
        }
      }
      local_1c = local_1c + 4;
      local_28 = local_28 + 0x140;
      local_2c = local_2c + 1;
      local_30 = local_30 + 1;
      local_24 = local_24 + 0x140;
      local_20 = local_20 + 1;
    } while (local_20 < this_ptr->display_height);
  }
  g_BackdropSaveActive = 1;
  return;
}
