// Name: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00440000
// Address: 00440000
// Address Range: [[00440000, 00440367]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00440000(CDemonCamera *this_ptr,CDemonLight *light_source)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00440000(CDemonCamera *this_ptr,CDemonLight *light_source)

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
  char *pcStack_48;
  int *piStack_44;
  CVector3f *local_40;
  CVector3i *local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint *local_2c;
  uint *local_28;
  CVector3i *local_24;
  int local_20;
  char *local_1c;
  
  bVar9 = 0;
  g_CDemonLight_PTR_013087d4 = light_source;
  pCVar7 = &(light_source->base).base.rotation_matrix;
  piVar8 = (int *)&g_CMatrix3x3i_013087d8;
  for (iVar5 = 10; iVar4 = 0, iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar8 = (int)pCVar7->m[0].x;
    pCVar7 = (CMatrix3x3f *)&pCVar7->m[0].y;
    piVar8 = piVar8 + 1;
  }
  do {
    iVar5 = iVar4 + 4;
    uVar3 = rand();
    *(uint *)(iVar4 + 0x13083d4) = uVar3 & 0xff;
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  iVar5 = 0;
  if (0 < this_ptr->display_height) {
    iVar4 = 0;
    do {
      *(int *)((int)g_INT_ARRAY_014c3550 + iVar4) = this_ptr->display_width;
      *(uint *)((int)g_INT_ARRAY_014c3910 + iVar4) = 0;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < this_ptr->display_height);
  }
  iStack_68 = 0x440089;
  core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_0044ac60(light_source);
  fVar1 = (light_source->base).max_distance * (float)256;
  fVar2 = (float)3.3219280948900001;
  dVar11 = round((double)fVar1);
  iStack_68 = 0x4400b6;
  dVar12 = round((double)(fVar1 * 0.30103 * fVar2));
  local_38 = 0;
  g_INT_00b667a0 = (int)ROUND(dVar12);
  g_INT_00b6679c = (int)ROUND(dVar11);
  g_INT_00b667a0 = g_INT_00b667a0 + -1;
  if (0 < this_ptr->display_height) {
    local_34 = 0;
    local_40 = g_CVector3f_ARRAY_00a005d4;
    piStack_44 = g_INT_ARRAY_014c3cd0;
    pcStack_48 = g_CHAR_ARRAY_00af5218;
    local_3c = g_CVector3i_ARRAY_0091e6d4;
    do {
      if (this_ptr->display_width != *(int *)((int)g_INT_ARRAY_014c3550 + local_34)) {
        local_20 = *(int *)((int)g_INT_ARRAY_014c3550 + local_34);
        local_30 = *(int *)((int)g_INT_ARRAY_014c3910 + local_34);
        local_24 = local_3c + local_20;
        local_1c = pcStack_48 + local_20;
        local_2c = (uint *)(piStack_44 + local_20);
        local_28 = g_UINT_PTR_ARRAY_01c2b64c[local_38 << (g_BIT_INTEGER32_01308800.bytes[0] & 0x1f)]
                   + (local_20 << (g_BIT_INTEGER32_01308800.bytes[0] & 0x1f));
        pCVar6 = local_40 + local_20;
        iVar5 = local_20 - local_30;
        bVar10 = SBORROW4(local_20,local_30);
        while (bVar10 != iVar5 < 0) {
          if ((*local_28 < *local_2c) &&
             (0.0 <= pCVar6->z * (float)g_CMatrix3x3i_013087d8.m[2].z +
                     pCVar6->x * (float)g_CMatrix3x3i_013087d8.m[0].z +
                     pCVar6->y * (float)g_CMatrix3x3i_013087d8.m[1].z)) {
            core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0043cbe0
                      (&g_CDemonLight_PTR_013087d4->base,local_24,(CVector3i *)&stack0xffffff98);
            iStack_5c = iStack_68;
            *(uint *)((int)&stack0xffffffa8 + (uint)bVar9 * -8) =
                 *(uint *)(&stack0xffffff9c + (uint)bVar9 * -8);
            *(uint *)((int)&stack0xffffffac + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
                 *(uint *)(&stack0xffffffa0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
            if ((0 < local_54) &&
               ((uVar3 = (uint)g_CDemonLight_PTR_013087d4->shadow_depth_buffer
                               [(iStack_58 >> 0x10) * g_CDemonLight_PTR_013087d4->shadow_map_width +
                                (iStack_5c >> 0x10)], (int)uVar3 < g_INT_00b6679c &&
                (local_54 < (int)(uVar3 + 0x80))))) {
              *local_1c = *local_1c +
                          (char)((int)((g_INT_00b6679c - uVar3) *
                                      (uint)g_CDemonLight_PTR_013087d4->
                                            precomputed_lighting_textures
                                            [((g_CDemonLight_PTR_013087d4->texture_coord_mask &
                                              iStack_58 >>
                                              ((byte)g_CDemonLight_PTR_013087d4->shadow_y_shift &
                                              0x1f)) <<
                                             ((byte)g_CDemonLight_PTR_013087d4->texture_row_shift &
                                             0x1f)) + (iStack_5c >>
                                                       ((byte)g_CDemonLight_PTR_013087d4->
                                                              shadow_x_shift & 0x1f) &
                                                      g_CDemonLight_PTR_013087d4->texture_coord_mask
                                                      )]) >> ((byte)g_INT_00b667a0 & 0x1f));
            }
          }
          pCVar6 = pCVar6 + 1;
          local_2c = local_2c + 1;
          local_24 = local_24 + 1;
          local_20 = local_20 + 1;
          local_28 = local_28 + (1 << (g_BIT_INTEGER32_01308800.bytes[0] & 0x1f));
          local_1c = local_1c + 1;
          iVar5 = local_20 - local_30;
          bVar10 = SBORROW4(local_20,local_30);
        }
      }
      local_34 = local_34 + 4;
      local_40 = local_40 + 0x140;
      piStack_44 = piStack_44 + 0x140;
      pcStack_48 = pcStack_48 + 0x140;
      local_3c = local_3c + 0x140;
      local_38 = local_38 + 1;
    } while (local_38 < this_ptr->display_height);
  }
  g_INT_013083cc = 1;
  return;
}
