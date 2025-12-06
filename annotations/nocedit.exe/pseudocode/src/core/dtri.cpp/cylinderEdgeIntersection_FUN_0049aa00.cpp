// Name: core_dtri.cpp_cylinderEdgeIntersection_FUN_0049aa00
// Address: 0049aa00
// Address Range: [[0049aa00, 0049acd1]]
// Convention: __cdecl
// Signature: int core_dtri.cpp_cylinderEdgeIntersection_FUN_0049aa00(SIntersectXZCylinder * cylinder)

#include "nocturne.h"

int __cdecl core_dtri_cpp_cylinderEdgeIntersection_FUN_0049aa00(SIntersectXZCylinder *cylinder)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_3c;
  float local_14;
  float local_10;
  
  fVar2 = cylinder->edge_z2 - cylinder->edge_z1;
  fVar1 = cylinder->edge_x2 - cylinder->edge_x1;
  local_10 = -fVar2;
  fVar5 = fVar1 * fVar1 + local_10 * local_10;
  if (0.0 < fVar5) {
    local_14 = 1.0 / SQRT(fVar5);
    local_10 = local_10 * local_14;
    local_14 = fVar1 * local_14;
    if (0.0 < (cylinder->center_z - cylinder->edge_z1) * local_14 +
              (cylinder->center_x - cylinder->edge_x1) * local_10) {
      local_14 = -local_14;
      local_10 = -local_10;
    }
    fVar5 = cylinder->normal_z * local_14 + cylinder->normal_x * local_10;
    if (fVar5 <= 0.0) {
      return 0;
    }
    local_3c = cylinder->edge_z1 * local_14 + cylinder->edge_x1 * local_10;
    if (local_3c < cylinder->center_z * local_14 + cylinder->center_x * local_10) {
      return 0;
    }
    fVar4 = local_10 * cylinder->radius + cylinder->center_x;
    fVar3 = local_14 * cylinder->radius + cylinder->center_z;
    local_3c = local_3c - (fVar3 * local_14 + fVar4 * local_10);
    if (fVar5 < local_3c) {
      return 0;
    }
    local_3c = local_3c / fVar5;
    if (cylinder->max_distance <= local_3c) {
      return 0;
    }
    cylinder->intersect_x = cylinder->normal_x * local_3c + fVar4;
    cylinder->intersect_z = cylinder->normal_z * local_3c + fVar3;
    if (ABS(fVar1) <= ABS(fVar2)) {
      fVar1 = (cylinder->intersect_z - cylinder->edge_z1) / fVar2;
    }
    else {
      fVar1 = (cylinder->intersect_x - cylinder->edge_x1) / fVar1;
    }
    cylinder->param_clamped = fVar1;
    if (0.0 <= cylinder->param_clamped) {
      if (cylinder->param_clamped <= 1.0) {
        if (local_3c < 0.0) {
          local_3c = 0.0;
        }
        cylinder->param_t = local_3c;
        return 1;
      }
      cylinder->param_clamped = 1.0;
      fVar1 = cylinder->edge_x2;
      fVar5 = cylinder->edge_z2;
    }
    else {
      cylinder->param_clamped = 0.0;
      fVar1 = cylinder->edge_x1;
      fVar5 = cylinder->edge_z1;
    }
    cylinder->intersect_z = fVar5;
    cylinder->intersect_x = fVar1;
    fVar5 = cylinder->intersect_x - cylinder->center_x;
    fVar3 = cylinder->intersect_z - cylinder->center_z;
    fVar1 = cylinder->normal_z * cylinder->normal_z + cylinder->normal_x * cylinder->normal_x;
    fVar2 = (cylinder->normal_z * fVar3 + cylinder->normal_x * fVar5) * -2f;
    fVar5 = fVar2 * fVar2 -
            fVar1 * 4f *
            ((fVar3 * fVar3 + fVar5 * fVar5) - cylinder->radius * cylinder->radius);
    if (0.0 <= fVar5) {
      fVar1 = (-fVar2 - SQRT(fVar5)) / (fVar1 * 2f);
      cylinder->param_t = fVar1;
      if (((0.0 <= fVar1) && (fVar1 <= 1.0)) && (cylinder->param_t < cylinder->max_distance)) {
        return 1;
      }
    }
  }
  return 0;
}
