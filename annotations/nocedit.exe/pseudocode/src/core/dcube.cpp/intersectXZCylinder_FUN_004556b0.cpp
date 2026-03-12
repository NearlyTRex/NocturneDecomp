// Name: core_dcube.cpp_intersectXZCylinder_FUN_004556b0
// Address: 004556b0
// Address Range: [[004556b0, 00455981]]
// Convention: __cdecl
// Signature: int __cdecl core_dcube_cpp_intersectXZCylinder_FUN_004556b0(SIntersectXZCylinder *cylinder)

#include "nocturne.h"

int __cdecl core_dcube_cpp_intersectXZCylinder_FUN_004556b0(SIntersectXZCylinder *cylinder)

{
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar5;
  float local_3c;
  float local_14;
  float local_10;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar1;
  
  fVar2 = cylinder->edge_z2 - cylinder->edge_z1;
  fVar6 = cylinder->edge_x2 - cylinder->edge_x1;
  fVar8 = -fVar2;
  fVar7 = fVar6 * fVar6 + fVar8 * fVar8;
  if (0.0 < fVar7) {
    fVar7 = 1.0 / SQRT(fVar7);
    local_10 = fVar8 * fVar7;
    local_14 = fVar6 * fVar7;
    if (0.0 < (cylinder->center_z - cylinder->edge_z1) * local_14 +
              (cylinder->center_x - cylinder->edge_x1) * local_10) {
      local_14 = -local_14;
      local_10 = -local_10;
    }
    fVar7 = cylinder->dir_z * local_14 + cylinder->dir_x * local_10;
    if (fVar7 <= 0.0) {
      return 0;
    }
    fVar8 = cylinder->edge_z1 * local_14 + cylinder->edge_x1 * local_10;
    if (fVar8 < cylinder->center_z * local_14 + cylinder->center_x * local_10) {
      return 0;
    }
    fVar4 = local_10 * cylinder->radius + cylinder->center_x;
    fVar3 = local_14 * cylinder->radius + cylinder->center_z;
    fVar8 = fVar8 - (fVar3 * local_14 + fVar4 * local_10);
    if (fVar7 < fVar8) {
      return 0;
    }
    local_3c = fVar8 / fVar7;
    if (cylinder->closest_t <= local_3c) {
      return 0;
    }
    cylinder->intersect_x = cylinder->dir_x * local_3c + fVar4;
    cylinder->intersect_z = cylinder->dir_z * local_3c + fVar3;
    if (ABS(fVar6) <= ABS(fVar2)) {
      fVar6 = (cylinder->intersect_z - cylinder->edge_z1) / fVar2;
    }
    else {
      fVar6 = (cylinder->intersect_x - cylinder->edge_x1) / fVar6;
    }
    cylinder->param_clamped = fVar6;
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
    fVar7 = cylinder->intersect_x - cylinder->center_x;
    fVar9 = cylinder->intersect_z - cylinder->center_z;
    fVar6 = cylinder->dir_z * cylinder->dir_z + cylinder->dir_x * cylinder->dir_x;
    fVar8 = (cylinder->dir_z * fVar9 + cylinder->dir_x * fVar7) * -2.0f;
    fVar7 = fVar8 * fVar8 -
            fVar6 * 4.0f *
            ((fVar9 * fVar9 + fVar7 * fVar7) - cylinder->radius * cylinder->radius);
    if (0.0 <= fVar7) {
      fVar6 = (-fVar8 - SQRT(fVar7)) / (fVar6 * 2.0f);
      cylinder->param_t = fVar6;
      if (((0.0 <= fVar6) && (fVar6 <= 1.0)) && (cylinder->param_t < cylinder->closest_t)) {
        return 1;
      }
    }
  }
  return 0;
}
