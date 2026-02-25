// Name: core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044e790
// Address: 0044e790
// Address Range: [[0044e790, 0044edea]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044e790(CDemonCamera *this_ptr,CVector3i *world_pos,CDemonLight *light_source,int intensity)

#include "nocturne.h"

int __cdecl core_dcamera_cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044e790(CDemonCamera *this_ptr,CVector3i *world_pos,CDemonLight *light_source,int intensity)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  int iVar6;
  CVector3i *pCVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_18;
  
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
        (lVar2 = (longlong)(light_source->base).source_matrix.m[0].x * (longlong)iVar8,
        lVar3 = (longlong)(light_source->base).source_matrix.m[1].x * (longlong)iVar9,
        lVar4 = (longlong)(light_source->base).source_matrix.m[2].x * (longlong)iVar6,
        g_TempProjectedCoord.x =
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
             ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10),
        g_TempProjectedCoord.z <= g_TempProjectedCoord.x)) ||
       ((g_TempProjectedCoord.x <= -g_TempProjectedCoord.z ||
        ((lVar2 = (longlong)(light_source->base).source_matrix.m[0].y * (longlong)iVar8,
         lVar3 = (longlong)(light_source->base).source_matrix.m[1].y * (longlong)iVar9,
         lVar4 = (longlong)(light_source->base).source_matrix.m[2].y * (longlong)iVar6,
         g_TempProjectedCoord.y =
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
              ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
              ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10),
         g_TempProjectedCoord.z <= g_TempProjectedCoord.y ||
         (g_TempProjectedCoord.y <= -g_TempProjectedCoord.z)))))) {
      pCVar7 = &g_CameraOutOfBoundsCoord;
    }
    else {
      g_TempProjectedCoord.x =
           (int)(((longlong)g_TempProjectedCoord.x *
                 (longlong)(light_source->base).saved_viewport_rect.left) /
                (longlong)g_TempProjectedCoord.z) + (light_source->base).saved_viewport_rect.right;
      g_TempProjectedCoord.y =
           (int)(((longlong)g_TempProjectedCoord.y *
                 (longlong)(light_source->base).saved_viewport_rect.top) /
                (longlong)g_TempProjectedCoord.z) + (light_source->base).saved_viewport_rect.bottom;
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
  if ((((g_TempProjectedCoord.z < 1) ||
       (lVar2 = (longlong)(light_source->base).source_matrix.m[0].x * (longlong)iVar8,
       lVar3 = (longlong)(light_source->base).source_matrix.m[1].x * (longlong)iVar9,
       lVar4 = (longlong)(light_source->base).source_matrix.m[2].x * (longlong)iVar6,
       g_TempProjectedCoord.x =
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
            ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
            ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10),
       g_TempProjectedCoord.z <= g_TempProjectedCoord.x)) ||
      (g_TempProjectedCoord.x <= -g_TempProjectedCoord.z)) ||
     ((lVar2 = (longlong)(light_source->base).source_matrix.m[0].y * (longlong)iVar8,
      lVar3 = (longlong)(light_source->base).source_matrix.m[1].y * (longlong)iVar9,
      lVar4 = (longlong)(light_source->base).source_matrix.m[2].y * (longlong)iVar6,
      g_TempProjectedCoord.y =
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10),
      g_TempProjectedCoord.z <= g_TempProjectedCoord.y ||
      (g_TempProjectedCoord.y <= -g_TempProjectedCoord.z)))) {
    pCVar7 = &g_CameraOutOfBoundsCoord;
  }
  else {
    g_TempProjectedCoord.x =
         (int)(((longlong)g_TempProjectedCoord.x *
               (longlong)(light_source->base).saved_viewport_rect.left) /
              (longlong)g_TempProjectedCoord.z) + (light_source->base).saved_viewport_rect.right;
    g_TempProjectedCoord.y =
         (int)(((longlong)g_TempProjectedCoord.y *
               (longlong)(light_source->base).saved_viewport_rect.top) /
              (longlong)g_TempProjectedCoord.z) + (light_source->base).saved_viewport_rect.bottom;
    pCVar7 = &g_TempProjectedCoord;
  }
  if (pCVar7->z < 1) {
    return 0;
  }
  local_18 = 1;
  uVar10 = 0;
  if (pCVar7->z <
      (int)(light_source->shadow_depth_buffer
            [(pCVar7->x >> 0x10) + light_source->shadow_map_width * (pCVar7->y >> 0x10)] + 0x90)) {
    lVar2 = (longlong)
            (int)((uint)light_source->precomputed_lighting_textures
                        [((pCVar7->y >> ((byte)light_source->shadow_y_shift & 0x1f) &
                          light_source->texture_coord_mask) <<
                         ((byte)light_source->texture_row_shift & 0x1f)) +
                         (light_source->texture_coord_mask &
                         pCVar7->x >> ((byte)light_source->shadow_x_shift & 0x1f))] << 10) *
            (longlong)intensity;
    uVar10 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  }
  psVar1 = (short *)((int)&pCVar7->x + 2);
  *psVar1 = *psVar1 + 1;
  iVar6 = pCVar7->x >> 0x10;
  if (iVar6 < light_source->shadow_map_width) {
    if (pCVar7->z <
        (int)(light_source->shadow_depth_buffer
              [iVar6 + (pCVar7->y >> 0x10) * light_source->shadow_map_width] + 0x90)) {
      lVar2 = (longlong)
              (int)((uint)light_source->precomputed_lighting_textures
                          [(light_source->texture_coord_mask &
                           pCVar7->x >> ((byte)light_source->shadow_x_shift & 0x1f)) +
                           ((pCVar7->y >> ((byte)light_source->shadow_y_shift & 0x1f) &
                            light_source->texture_coord_mask) <<
                           ((byte)light_source->texture_row_shift & 0x1f))] << 10) *
              (longlong)intensity;
      uVar10 = uVar10 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    }
    local_18 = 2;
  }
  iVar8 = pCVar7->x + -0x20000;
  iVar6 = iVar8 >> 0x10;
  pCVar7->x = iVar8;
  if (0 < iVar6) {
    if (pCVar7->z <
        (int)(light_source->shadow_depth_buffer
              [iVar6 + (pCVar7->y >> 0x10) * light_source->shadow_map_width] + 0x90)) {
      lVar2 = (longlong)
              (int)((uint)light_source->precomputed_lighting_textures
                          [((pCVar7->y >> ((byte)light_source->shadow_y_shift & 0x1f) &
                            light_source->texture_coord_mask) <<
                           ((byte)light_source->texture_row_shift & 0x1f)) +
                           (light_source->texture_coord_mask &
                           pCVar7->x >> ((byte)light_source->shadow_x_shift & 0x1f))] << 10) *
              (longlong)intensity;
      uVar10 = uVar10 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    }
    local_18 = local_18 + 1;
  }
  *(short *)((int)&pCVar7->y + 2) = *(short *)((int)&pCVar7->y + 2) + 1;
  *(short *)((int)&pCVar7->x + 2) = *(short *)((int)&pCVar7->x + 2) + 1;
  iVar6 = pCVar7->y >> 0x10;
  if (iVar6 < light_source->shadow_map_height) {
    if (pCVar7->z <
        (int)(light_source->shadow_depth_buffer
              [(pCVar7->x >> 0x10) + light_source->shadow_map_width * iVar6] + 0x90)) {
      lVar2 = (longlong)
              (int)((uint)light_source->precomputed_lighting_textures
                          [((pCVar7->y >> ((byte)light_source->shadow_y_shift & 0x1f) &
                            light_source->texture_coord_mask) <<
                           ((byte)light_source->texture_row_shift & 0x1f)) +
                           (light_source->texture_coord_mask &
                           pCVar7->x >> ((byte)light_source->shadow_x_shift & 0x1f))] << 10) *
              (longlong)intensity;
      uVar10 = uVar10 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    }
    local_18 = local_18 + 1;
  }
  iVar6 = pCVar7->y + -0x20000;
  pCVar7->y = iVar6;
  if (0 < iVar6) {
    if (pCVar7->z <
        (int)(light_source->shadow_depth_buffer
              [(pCVar7->x >> 0x10) + (iVar6 >> 0x10) * light_source->shadow_map_width] + 0x90)) {
      lVar2 = (longlong)
              (int)((uint)light_source->precomputed_lighting_textures
                          [(light_source->texture_coord_mask &
                           pCVar7->x >> ((byte)light_source->shadow_x_shift & 0x1f)) +
                           ((pCVar7->y >> ((byte)light_source->shadow_y_shift & 0x1f) &
                            light_source->texture_coord_mask) <<
                           ((byte)light_source->texture_row_shift & 0x1f))] << 10) *
              (longlong)intensity;
      uVar10 = uVar10 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    }
    local_18 = local_18 + 1;
  }
  return (int)uVar10 / local_18;
}
