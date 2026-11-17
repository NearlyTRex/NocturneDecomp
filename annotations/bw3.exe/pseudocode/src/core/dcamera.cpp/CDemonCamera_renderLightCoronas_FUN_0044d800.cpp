// Name: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_0044d800
// Address: 0044d800
// Address Range: [[0044d800, 0044db67]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_0044d800(CDemonCamera *this_ptr,CDemonLight *light_source)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_0044d800(CDemonCamera *this_ptr,CDemonLight *light_source)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  CVector3f *pCVar6;
  CMatrix3x3f *pCVar7;
  int *piVar8;
  byte bVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  int aiStackY_1050 [1016];
  int iStack_68;
  int iStack_5c;
  int iStack_58;
  int local_54;
  char (*pacStack_48) [320];
  int (*paiStack_44) [320];
  CVector3f (*local_40) [320];
  CVector3i (*local_3c) [320];
  int local_38;
  int local_34;
  int local_30;
  int *local_2c;
  uint *local_28;
  CVector3i *local_24;
  int local_20;
  char *local_1c;
  
  bVar9 = 0;
  g_CDemonLight_PTR_01340584 = light_source;
  pCVar7 = &(light_source->base).base.rotation_matrix;
  piVar8 = (int *)&g_CMatrix3x3i_01340588;
  for (iVar5 = 10; iVar4 = 0, iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar8 = (int)pCVar7->m[0].x;
    pCVar7 = (CMatrix3x3f *)&pCVar7->m[0].y;
    piVar8 = piVar8 + 1;
  }
  do {
    iVar5 = iVar4 + 4;
    uVar3 = rand();
    *(uint *)(iVar4 + 0x1340184) = uVar3 & 0xff;
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  iVar5 = 0;
  if (0 < this_ptr->display_height) {
    iVar4 = 0;
    do {
      *(int *)((int)g_INT_ARRAY_014fb300 + iVar4) = this_ptr->display_width;
      *(uint *)((int)g_INT_ARRAY_014fb6c0 + iVar4) = 0;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < this_ptr->display_height);
  }
  iStack_68 = 0x44d889;
  core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_0045d170(light_source);
  fVar1 = (light_source->base).max_distance * (float)256;
  fVar2 = (float)3.3219280948900001;
  dVar11 = round((double)fVar1);
  iStack_68 = 0x44d8b6;
  dVar12 = round((double)(fVar1 * 0.30103 * fVar2));
  local_38 = 0;
  g_INT_00b9e550 = (int)ROUND(dVar12);
  g_INT_00b9e54c = (int)ROUND(dVar11);
  g_INT_00b9e550 = g_INT_00b9e550 + -1;
  if (0 < this_ptr->display_height) {
    local_34 = 0;
    local_40 = g_CVector3f_ARRAY_ARRAY_00a38388;
    paiStack_44 = g_INT_ARRAY_ARRAY_014fba80;
    pacStack_48 = g_CHAR_ARRAY_ARRAY_00b2cfc8;
    local_3c = g_CVector3i_ARRAY_ARRAY_00956488;
    do {
      if (this_ptr->display_width != *(int *)((int)g_INT_ARRAY_014fb300 + local_34)) {
        local_20 = *(int *)((int)g_INT_ARRAY_014fb300 + local_34);
        local_30 = *(int *)((int)g_INT_ARRAY_014fb6c0 + local_34);
        local_24 = *local_3c + local_20;
        local_1c = *pacStack_48 + local_20;
        local_2c = *paiStack_44 + local_20;
        local_28 = g_UINT_PTR_ARRAY_01c60dac[local_38 << (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f)]
                   + (local_20 << (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f));
        pCVar6 = *local_40 + local_20;
        iVar5 = local_20 - local_30;
        bVar10 = SBORROW4(local_20,local_30);
        while (bVar10 != iVar5 < 0) {
          if ((*local_28 < (uint)*local_2c) &&
             (0.0 <= pCVar6->z * (float)g_CMatrix3x3i_01340588.m[2].z +
                     pCVar6->x * (float)g_CMatrix3x3i_01340588.m[0].z +
                     pCVar6->y * (float)g_CMatrix3x3i_01340588.m[1].z)) {
            core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044a3e0
                      (&g_CDemonLight_PTR_01340584->base,local_24,(CVector3i *)&stack0xffffff98);
            iStack_5c = iStack_68;
            *(uint *)((int)&stack0xffffffa8 + (uint)bVar9 * -8) =
                 *(uint *)(&stack0xffffff9c + (uint)bVar9 * -8);
            *(uint *)((int)&stack0xffffffac + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
                 *(uint *)(&stack0xffffffa0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
            if ((0 < local_54) &&
               ((uVar3 = (uint)g_CDemonLight_PTR_01340584->shadow_depth_buffer
                               [(iStack_58 >> 0x10) * g_CDemonLight_PTR_01340584->shadow_map_width +
                                (iStack_5c >> 0x10)], (int)uVar3 < g_INT_00b9e54c &&
                (local_54 < (int)(uVar3 + 0x80))))) {
              *local_1c = *local_1c +
                          (char)((int)((g_INT_00b9e54c - uVar3) *
                                      (uint)g_CDemonLight_PTR_01340584->
                                            precomputed_lighting_textures
                                            [((g_CDemonLight_PTR_01340584->texture_coord_mask &
                                              iStack_58 >>
                                              ((byte)g_CDemonLight_PTR_01340584->shadow_y_shift &
                                              0x1f)) <<
                                             ((byte)g_CDemonLight_PTR_01340584->texture_row_shift &
                                             0x1f)) + (iStack_5c >>
                                                       ((byte)g_CDemonLight_PTR_01340584->
                                                              shadow_x_shift & 0x1f) &
                                                      g_CDemonLight_PTR_01340584->texture_coord_mask
                                                      )]) >> ((byte)g_INT_00b9e550 & 0x1f));
            }
          }
          pCVar6 = pCVar6 + 1;
          local_2c = local_2c + 1;
          local_24 = local_24 + 1;
          local_20 = local_20 + 1;
          local_28 = local_28 + (1 << (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f));
          local_1c = local_1c + 1;
          iVar5 = local_20 - local_30;
          bVar10 = SBORROW4(local_20,local_30);
        }
      }
      local_34 = local_34 + 4;
      local_40 = local_40 + 1;
      paiStack_44 = paiStack_44 + 1;
      pacStack_48 = pacStack_48 + 1;
      local_3c = local_3c + 1;
      local_38 = local_38 + 1;
    } while (local_38 < this_ptr->display_height);
  }
  g_INT_0134017c = 1;
  return;
}
