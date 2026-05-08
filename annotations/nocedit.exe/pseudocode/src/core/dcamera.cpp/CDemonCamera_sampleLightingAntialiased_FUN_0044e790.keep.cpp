// Name: core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044e790
// Address: 0044e790
// MANUAL RECONSTRUCTION
// Address Range: [[0044e790, 0044edea]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044e790(CDemonCamera *this_ptr,CVector3i *world_pos,CDemonLight *light_source,int intensity)

#include "nocturne.h"

int __cdecl core_dcamera_cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044e790(CDemonCamera *this_ptr,CVector3i *world_pos,CDemonLight *light_source,int intensity)

{
  longlong lVar1;
  longlong lVar5;
  longlong lVar6;
  int iVar6;
  CVector3i *pCVar7;
  int iVar7;
  CVector3i *pCVar8;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar10;
  int local_18;
  longlong lVar3;
  longlong lVar2;
  float fVar5;
  longlong lVar4;

  if (light_source->antialiasing_enabled == 0) {
    iVar8 = world_pos->x - (light_source->base).camera_origin.x;
    iVar9 = world_pos->y - (light_source->base).camera_origin.y;
    iVar6 = world_pos->z - (light_source->base).camera_origin.z;
    lVar2 = (longlong)(light_source->base).source_matrix.m[0].z * (longlong)iVar8;
    lVar3 = (longlong)(light_source->base).source_matrix.m[1].z * (longlong)iVar9;
    lVar4 = (longlong)(light_source->base).source_matrix.m[2].z * (longlong)iVar6;
    g_TempProjectedCoord.z =
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
         ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
    if (((g_TempProjectedCoord.z < 1) ||
        (lVar1 = (longlong)(light_source->base).source_matrix.m[0].x * (longlong)iVar8,
        lVar5 = (longlong)(light_source->base).source_matrix.m[1].x * (longlong)iVar9,
        lVar6 = (longlong)(light_source->base).source_matrix.m[2].x * (longlong)iVar6,
        g_TempProjectedCoord.x =
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
             ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
             ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10),
        g_TempProjectedCoord.z <= g_TempProjectedCoord.x)) ||
       ((g_TempProjectedCoord.x <= -g_TempProjectedCoord.z ||
        ((lVar1 = (longlong)(light_source->base).source_matrix.m[0].y * (longlong)iVar8,
         lVar5 = (longlong)(light_source->base).source_matrix.m[1].y * (longlong)iVar9,
         lVar6 = (longlong)(light_source->base).source_matrix.m[2].y * (longlong)iVar6,
         g_TempProjectedCoord.y =
              ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
              ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10),
         g_TempProjectedCoord.z <= g_TempProjectedCoord.y ||
         (g_TempProjectedCoord.y <= -g_TempProjectedCoord.z)))))) {
      pCVar7 = &g_CameraOutOfBoundsCoord;
    }
    else {
      g_TempProjectedCoord.x =
           (int)(((longlong)g_TempProjectedCoord.x *
                 (longlong)(light_source->base).cached_projection.half_width_fixed) /
                (longlong)g_TempProjectedCoord.z) +
           (light_source->base).cached_projection.center_x_fixed;
      g_TempProjectedCoord.y =
           (int)(((longlong)g_TempProjectedCoord.y *
                 (longlong)(light_source->base).cached_projection.neg_half_height_fixed) /
                (longlong)g_TempProjectedCoord.z) +
           (light_source->base).cached_projection.center_y_fixed;
      pCVar7 = &g_TempProjectedCoord;
    }
    if (((0 < pCVar7->z) &&
        (light_source->shadow_depth_buffer
         [(pCVar7->x >> 0x10) + light_source->shadow_map_width * (pCVar7->y >> 0x10)] != 0)) &&
       (fVar5 = (float)pCVar7->z * (float)0.00390625,
       fVar5 < (light_source->base).max_distance)) {
      return (int)ROUND((float)intensity *
                        (((light_source->base).max_distance - fVar5) /
                        (light_source->base).max_distance));
    }
    return 0;
  }
  iVar10 = world_pos->x - (light_source->base).camera_origin.x;
  iVar11 = world_pos->y - (light_source->base).camera_origin.y;
  iVar7 = world_pos->z - (light_source->base).camera_origin.z;
  lVar1 = (longlong)(light_source->base).source_matrix.m[0].z * (longlong)iVar10;
  lVar5 = (longlong)(light_source->base).source_matrix.m[1].z * (longlong)iVar11;
  lVar6 = (longlong)(light_source->base).source_matrix.m[2].z * (longlong)iVar7;
  g_TempProjectedCoord.z =
       ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
       ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
       ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
  if ((((g_TempProjectedCoord.z < 1) ||
       (lVar1 = (longlong)(light_source->base).source_matrix.m[0].x * (longlong)iVar10,
       lVar5 = (longlong)(light_source->base).source_matrix.m[1].x * (longlong)iVar11,
       lVar6 = (longlong)(light_source->base).source_matrix.m[2].x * (longlong)iVar7,
       g_TempProjectedCoord.x =
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
            ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
            ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10),
       g_TempProjectedCoord.z <= g_TempProjectedCoord.x)) ||
      (g_TempProjectedCoord.x <= -g_TempProjectedCoord.z)) ||
     ((lVar1 = (longlong)(light_source->base).source_matrix.m[0].y * (longlong)iVar10,
      lVar5 = (longlong)(light_source->base).source_matrix.m[1].y * (longlong)iVar11,
      lVar6 = (longlong)(light_source->base).source_matrix.m[2].y * (longlong)iVar7,
      g_TempProjectedCoord.y =
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
           ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
           ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10),
      g_TempProjectedCoord.z <= g_TempProjectedCoord.y ||
      (g_TempProjectedCoord.y <= -g_TempProjectedCoord.z)))) {
    pCVar8 = &g_CameraOutOfBoundsCoord;
  }
  else {
    g_TempProjectedCoord.x =
         (int)(((longlong)g_TempProjectedCoord.x *
               (longlong)(light_source->base).cached_projection.half_width_fixed) /
              (longlong)g_TempProjectedCoord.z) +
         (light_source->base).cached_projection.center_x_fixed;
    g_TempProjectedCoord.y =
         (int)(((longlong)g_TempProjectedCoord.y *
               (longlong)(light_source->base).cached_projection.neg_half_height_fixed) /
              (longlong)g_TempProjectedCoord.z) +
         (light_source->base).cached_projection.center_y_fixed;
    pCVar8 = &g_TempProjectedCoord;
  }
  if (pCVar8->z < 1) {
    return 0;
  }
  local_18 = 1;
  uVar10 = 0;
  if (pCVar8->z <
      (int)(light_source->shadow_depth_buffer
            [(pCVar8->x >> 0x10) + light_source->shadow_map_width * (pCVar8->y >> 0x10)] + 0x90)) {
    lVar1 = (longlong)
            (int)((uint)light_source->precomputed_lighting_textures
                        [((pCVar8->y >> ((byte)light_source->shadow_y_shift & 0x1f) &
                          light_source->texture_coord_mask) <<
                         ((byte)light_source->texture_row_shift & 0x1f)) +
                         (light_source->texture_coord_mask &
                         pCVar8->x >> ((byte)light_source->shadow_x_shift & 0x1f))] << 10) *
            (longlong)intensity;
    uVar10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  }
  pCVar8->x = pCVar8->x + 0x10000;
  iVar7 = pCVar8->x >> 0x10;
  if (iVar7 < light_source->shadow_map_width) {
    if (pCVar8->z <
        (int)(light_source->shadow_depth_buffer
              [iVar7 + (pCVar8->y >> 0x10) * light_source->shadow_map_width] + 0x90)) {
      lVar1 = (longlong)
              (int)((uint)light_source->precomputed_lighting_textures
                          [(light_source->texture_coord_mask &
                           pCVar8->x >> ((byte)light_source->shadow_x_shift & 0x1f)) +
                           ((pCVar8->y >> ((byte)light_source->shadow_y_shift & 0x1f) &
                            light_source->texture_coord_mask) <<
                           ((byte)light_source->texture_row_shift & 0x1f))] << 10) *
              (longlong)intensity;
      uVar10 = uVar10 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    local_18 = 2;
  }
  iVar10 = pCVar8->x + -0x20000;
  iVar7 = iVar10 >> 0x10;
  pCVar8->x = iVar10;
  if (0 < iVar7) {
    if (pCVar8->z <
        (int)(light_source->shadow_depth_buffer
              [iVar7 + (pCVar8->y >> 0x10) * light_source->shadow_map_width] + 0x90)) {
      lVar1 = (longlong)
              (int)((uint)light_source->precomputed_lighting_textures
                          [((pCVar8->y >> ((byte)light_source->shadow_y_shift & 0x1f) &
                            light_source->texture_coord_mask) <<
                           ((byte)light_source->texture_row_shift & 0x1f)) +
                           (light_source->texture_coord_mask &
                           pCVar8->x >> ((byte)light_source->shadow_x_shift & 0x1f))] << 10) *
              (longlong)intensity;
      uVar10 = uVar10 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    local_18 = local_18 + 1;
  }
  pCVar8->y = pCVar8->y + 0x10000;
  pCVar8->x = pCVar8->x + 0x10000;
  iVar7 = pCVar8->y >> 0x10;
  if (iVar7 < light_source->shadow_map_height) {
    if (pCVar8->z <
        (int)(light_source->shadow_depth_buffer
              [(pCVar8->x >> 0x10) + light_source->shadow_map_width * iVar7] + 0x90)) {
      lVar1 = (longlong)
              (int)((uint)light_source->precomputed_lighting_textures
                          [((pCVar8->y >> ((byte)light_source->shadow_y_shift & 0x1f) &
                            light_source->texture_coord_mask) <<
                           ((byte)light_source->texture_row_shift & 0x1f)) +
                           (light_source->texture_coord_mask &
                           pCVar8->x >> ((byte)light_source->shadow_x_shift & 0x1f))] << 10) *
              (longlong)intensity;
      uVar10 = uVar10 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    local_18 = local_18 + 1;
  }
  iVar7 = pCVar8->y + -0x20000;
  pCVar8->y = iVar7;
  if (0 < iVar7) {
    if (pCVar8->z <
        (int)(light_source->shadow_depth_buffer
              [(pCVar8->x >> 0x10) + (iVar7 >> 0x10) * light_source->shadow_map_width] + 0x90)) {
      lVar1 = (longlong)
              (int)((uint)light_source->precomputed_lighting_textures
                          [(light_source->texture_coord_mask &
                           pCVar8->x >> ((byte)light_source->shadow_x_shift & 0x1f)) +
                           ((pCVar8->y >> ((byte)light_source->shadow_y_shift & 0x1f) &
                            light_source->texture_coord_mask) <<
                           ((byte)light_source->texture_row_shift & 0x1f))] << 10) *
              (longlong)intensity;
      uVar10 = uVar10 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    local_18 = local_18 + 1;
  }
  return (int)uVar10 / local_18;
}
