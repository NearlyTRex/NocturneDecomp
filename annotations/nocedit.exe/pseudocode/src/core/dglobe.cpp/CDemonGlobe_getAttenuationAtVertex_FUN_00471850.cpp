// Name: core_dglobe.cpp_CDemonGlobe_getAttenuationAtVertex_FUN_00471850
// Address: 00471850
// Address Range: [[00471850, 004719a9]]
// Convention: __cdecl
// Signature: int core_dglobe.cpp_CDemonGlobe_getAttenuationAtVertex_FUN_00471850(CDemonGlobe * this_ptr, CVector3i * vertex_position, CVector3i * surface_normal)

#include "nocturne.h"

int __cdecl
core_dglobe_cpp_CDemonGlobe_getAttenuationAtVertex_FUN_00471850
          (CDemonGlobe *this_ptr,CVector3i *vertex_position,CVector3i *surface_normal)

{
  float fVar1;
  float local_48 [6];
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  
  local_30 = (float)vertex_position->x * 0.00390625f;
  local_2c = (float)vertex_position->y * 0.00390625f;
  local_28 = (float)vertex_position->z * 0.00390625f;
  if (&local_30 != local_48) {
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
    fVar1 = (float)(g_LightAttenuationMax - ((int)fVar1 >> 1));
    fVar1 = local_28 * fVar1 * (float)surface_normal->z * 1.525879e-05f +
            local_30 * fVar1 * (float)surface_normal->x * 1.525879e-05f +
            local_2c * fVar1 * (float)surface_normal->y * 1.525879e-05f;
    if (0.0 < fVar1) {
      return 0;
    }
    local_20 = -fVar1 * local_20;
  }
  return (int)ROUND(local_20);
}
