// Name: core_dglobe.cpp_CDemonGlobe_getAttenuationAtVertex_FUN_0045b070
// Address: 0045b070
// Address Range: [[0045b070, 0045b1d6]]
// Convention: __cdecl
// Signature: int __cdecl core_dglobe_cpp_CDemonGlobe_getAttenuationAtVertex_FUN_0045b070(CDemonGlobe *this_ptr,CVector3i *vertex_position,CVector3i *surface_normal)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dglobe_cpp_CDemonGlobe_getAttenuationAtVertex_FUN_0045b070(CDemonGlobe *this_ptr,CVector3i *vertex_position,CVector3i *surface_normal)

{
  float fVar1;
  float local_3c [3];
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  
  local_30 = (float)vertex_position->x * _DAT_005de388;
  local_2c = (float)vertex_position->y * _DAT_005de388;
  local_28 = (float)vertex_position->z * _DAT_005de388;
  if (&local_30 != local_3c) {
    local_30 = local_30 - (this_ptr->position).x;
    local_2c = local_2c - (this_ptr->position).y;
    local_28 = local_28 - (this_ptr->position).z;
  }
  fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
  if (this_ptr->radius_squared < fVar1) {
    return 0;
  }
  local_20 = (float)this_ptr->intensity_multiplier *
             (this_ptr->radius_squared - fVar1) * this_ptr->inverse_radius_squared;
  if (surface_normal != (CVector3i *)0x0) {
    fVar1 = (float)(_DAT_01d1a0a8 - ((int)fVar1 >> 1));
    fVar1 = local_28 * fVar1 * (float)surface_normal->z * _DAT_005de38c +
            local_30 * fVar1 * (float)surface_normal->x * _DAT_005de38c +
            local_2c * fVar1 * (float)surface_normal->y * _DAT_005de38c;
    if (0.0 < fVar1) {
      return 0;
    }
    local_20 = -fVar1 * local_20;
  }
  return (int)ROUND(local_20);
}
