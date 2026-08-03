// Name: core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_004425f0
// Address: 004425f0
// Address Range: [[004425f0, 00442c4a]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_sampleLightingAntialiased_FUN_004425f0(CDemonCamera *this_ptr,CVector3i *world_pos,CDemonLight *light_source,int intensity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dcamera_cpp_CDemonCamera_sampleLightingAntialiased_FUN_004425f0(CDemonCamera *this_ptr,CVector3i *world_pos,CDemonLight *light_source,int intensity)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_18;
  
  if (light_source->antialiasing_enabled == 0) {
    iVar6 = world_pos->x - (light_source->base).camera_origin.x;
    iVar7 = world_pos->y - (light_source->base).camera_origin.y;
    iVar4 = world_pos->z - (light_source->base).camera_origin.z;
    lVar1 = (longlong)(light_source->base).source_matrix.m[0].z * (longlong)iVar6;
    lVar2 = (longlong)(light_source->base).source_matrix.m[1].z * (longlong)iVar7;
    lVar3 = (longlong)(light_source->base).source_matrix.m[2].z * (longlong)iVar4;
    _DAT_02de5d88 =
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
         ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
         ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    if (((_DAT_02de5d88 < 1) ||
        (lVar1 = (longlong)(light_source->base).source_matrix.m[0].x * (longlong)iVar6,
        lVar2 = (longlong)(light_source->base).source_matrix.m[1].x * (longlong)iVar7,
        lVar3 = (longlong)(light_source->base).source_matrix.m[2].x * (longlong)iVar4,
        _DAT_02de5d80 =
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10),
        _DAT_02de5d88 <= _DAT_02de5d80)) ||
       ((_DAT_02de5d80 <= -_DAT_02de5d88 ||
        ((lVar1 = (longlong)(light_source->base).source_matrix.m[0].y * (longlong)iVar6,
         lVar2 = (longlong)(light_source->base).source_matrix.m[1].y * (longlong)iVar7,
         lVar3 = (longlong)(light_source->base).source_matrix.m[2].y * (longlong)iVar4,
         _DAT_02de5d84 =
              ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
              ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10),
         _DAT_02de5d88 <= _DAT_02de5d84 || (_DAT_02de5d84 <= -_DAT_02de5d88)))))) {
      piVar5 = (int *)&DAT_01410280;
    }
    else {
      _DAT_02de5d80 =
           (int)(((longlong)_DAT_02de5d80 *
                 (longlong)(light_source->base).cached_projection.half_width_fixed) /
                (longlong)_DAT_02de5d88) + (light_source->base).cached_projection.center_x_fixed;
      _DAT_02de5d84 =
           (int)(((longlong)_DAT_02de5d84 *
                 (longlong)(light_source->base).cached_projection.neg_half_height_fixed) /
                (longlong)_DAT_02de5d88) + (light_source->base).cached_projection.center_y_fixed;
      piVar5 = (int *)&DAT_02de5d80;
    }
    if (((0 < piVar5[2]) &&
        (light_source->shadow_depth_buffer
         [(*piVar5 >> 0x10) + light_source->shadow_map_width * (piVar5[1] >> 0x10)] != 0)) &&
       ((float)piVar5[2] * (float)0.00390625 < (light_source->base).fixed_point_scale)) {
      return (int)ROUND((float)intensity *
                        (((light_source->base).fixed_point_scale -
                         (float)piVar5[2] * (float)0.00390625) /
                        (light_source->base).fixed_point_scale));
    }
    return 0;
  }
  iVar6 = world_pos->x - (light_source->base).camera_origin.x;
  iVar7 = world_pos->y - (light_source->base).camera_origin.y;
  iVar4 = world_pos->z - (light_source->base).camera_origin.z;
  lVar1 = (longlong)(light_source->base).source_matrix.m[0].z * (longlong)iVar6;
  lVar2 = (longlong)(light_source->base).source_matrix.m[1].z * (longlong)iVar7;
  lVar3 = (longlong)(light_source->base).source_matrix.m[2].z * (longlong)iVar4;
  _DAT_02de5d88 =
       ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
       ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
       ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  if ((((_DAT_02de5d88 < 1) ||
       (lVar1 = (longlong)(light_source->base).source_matrix.m[0].x * (longlong)iVar6,
       lVar2 = (longlong)(light_source->base).source_matrix.m[1].x * (longlong)iVar7,
       lVar3 = (longlong)(light_source->base).source_matrix.m[2].x * (longlong)iVar4,
       _DAT_02de5d80 =
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
            ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10),
       _DAT_02de5d88 <= _DAT_02de5d80)) || (_DAT_02de5d80 <= -_DAT_02de5d88)) ||
     ((lVar1 = (longlong)(light_source->base).source_matrix.m[0].y * (longlong)iVar6,
      lVar2 = (longlong)(light_source->base).source_matrix.m[1].y * (longlong)iVar7,
      lVar3 = (longlong)(light_source->base).source_matrix.m[2].y * (longlong)iVar4,
      _DAT_02de5d84 =
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10),
      _DAT_02de5d88 <= _DAT_02de5d84 || (_DAT_02de5d84 <= -_DAT_02de5d88)))) {
    piVar5 = (int *)&DAT_01410280;
  }
  else {
    _DAT_02de5d80 =
         (int)(((longlong)_DAT_02de5d80 *
               (longlong)(light_source->base).cached_projection.half_width_fixed) /
              (longlong)_DAT_02de5d88) + (light_source->base).cached_projection.center_x_fixed;
    _DAT_02de5d84 =
         (int)(((longlong)_DAT_02de5d84 *
               (longlong)(light_source->base).cached_projection.neg_half_height_fixed) /
              (longlong)_DAT_02de5d88) + (light_source->base).cached_projection.center_y_fixed;
    piVar5 = (int *)&DAT_02de5d80;
  }
  if (piVar5[2] < 1) {
    return 0;
  }
  local_18 = 1;
  uVar8 = 0;
  if (piVar5[2] <
      (int)(light_source->shadow_depth_buffer
            [(*piVar5 >> 0x10) + light_source->shadow_map_width * (piVar5[1] >> 0x10)] + 0x90)) {
    lVar1 = (longlong)
            (int)((uint)light_source->precomputed_lighting_textures
                        [((piVar5[1] >> ((byte)light_source->shadow_y_shift & 0x1f) &
                          light_source->texture_coord_mask) <<
                         ((byte)light_source->texture_row_shift & 0x1f)) +
                         (light_source->texture_coord_mask &
                         *piVar5 >> ((byte)light_source->shadow_x_shift & 0x1f))] << 10) *
            (longlong)intensity;
    uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  }
  *(short *)((int)piVar5 + 2) = *(short *)((int)piVar5 + 2) + 1;
  if (*piVar5 >> 0x10 < light_source->shadow_map_width) {
    if (piVar5[2] <
        (int)(light_source->shadow_depth_buffer
              [(*piVar5 >> 0x10) + (piVar5[1] >> 0x10) * light_source->shadow_map_width] + 0x90)) {
      lVar1 = (longlong)
              (int)((uint)light_source->precomputed_lighting_textures
                          [(light_source->texture_coord_mask &
                           *piVar5 >> ((byte)light_source->shadow_x_shift & 0x1f)) +
                           ((piVar5[1] >> ((byte)light_source->shadow_y_shift & 0x1f) &
                            light_source->texture_coord_mask) <<
                           ((byte)light_source->texture_row_shift & 0x1f))] << 10) *
              (longlong)intensity;
      uVar8 = uVar8 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    local_18 = 2;
  }
  iVar4 = *piVar5 + -0x20000 >> 0x10;
  *piVar5 = *piVar5 + -0x20000;
  if (0 < iVar4) {
    if (piVar5[2] <
        (int)(light_source->shadow_depth_buffer
              [iVar4 + (piVar5[1] >> 0x10) * light_source->shadow_map_width] + 0x90)) {
      lVar1 = (longlong)
              (int)((uint)light_source->precomputed_lighting_textures
                          [((piVar5[1] >> ((byte)light_source->shadow_y_shift & 0x1f) &
                            light_source->texture_coord_mask) <<
                           ((byte)light_source->texture_row_shift & 0x1f)) +
                           (light_source->texture_coord_mask &
                           *piVar5 >> ((byte)light_source->shadow_x_shift & 0x1f))] << 10) *
              (longlong)intensity;
      uVar8 = uVar8 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    local_18 = local_18 + 1;
  }
  *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + 1;
  *(short *)((int)piVar5 + 2) = *(short *)((int)piVar5 + 2) + 1;
  if (piVar5[1] >> 0x10 < light_source->shadow_map_height) {
    if (piVar5[2] <
        (int)(light_source->shadow_depth_buffer
              [(*piVar5 >> 0x10) + light_source->shadow_map_width * (piVar5[1] >> 0x10)] + 0x90)) {
      lVar1 = (longlong)
              (int)((uint)light_source->precomputed_lighting_textures
                          [((piVar5[1] >> ((byte)light_source->shadow_y_shift & 0x1f) &
                            light_source->texture_coord_mask) <<
                           ((byte)light_source->texture_row_shift & 0x1f)) +
                           (light_source->texture_coord_mask &
                           *piVar5 >> ((byte)light_source->shadow_x_shift & 0x1f))] << 10) *
              (longlong)intensity;
      uVar8 = uVar8 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    local_18 = local_18 + 1;
  }
  iVar4 = piVar5[1] + -0x20000;
  piVar5[1] = iVar4;
  if (0 < iVar4) {
    if (piVar5[2] <
        (int)(light_source->shadow_depth_buffer
              [(*piVar5 >> 0x10) + (iVar4 >> 0x10) * light_source->shadow_map_width] + 0x90)) {
      lVar1 = (longlong)
              (int)((uint)light_source->precomputed_lighting_textures
                          [(light_source->texture_coord_mask &
                           *piVar5 >> ((byte)light_source->shadow_x_shift & 0x1f)) +
                           ((piVar5[1] >> ((byte)light_source->shadow_y_shift & 0x1f) &
                            light_source->texture_coord_mask) <<
                           ((byte)light_source->texture_row_shift & 0x1f))] << 10) *
              (longlong)intensity;
      uVar8 = uVar8 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    local_18 = local_18 + 1;
  }
  return (int)uVar8 / local_18;
}
