// Name: core_setcolid.cpp_intersectXZCylinder_FUN_00572e80
// Address: 00572e80
// Address Range: [[00572e80, 005730ca]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_intersectXZCylinder_FUN_00572e80(SIntersectXZCylinder *cylinder,float obstacle_x,float obstacle_y,SCollisionInfo *collision_info)

#include "nocturne.h"

int __cdecl core_setcolid_cpp_intersectXZCylinder_FUN_00572e80(SIntersectXZCylinder *cylinder,float obstacle_x,float obstacle_y,SCollisionInfo *collision_info)

{
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar6;
  float fVar1;
  float fVar4;
  float fVar5;
  float fVar7;
  float fVar3;
  float fVar2;
  
  if ((collision_info->cylinder_bottom_y < cylinder->top_y) &&
     (cylinder->bottom_y < collision_info->cylinder_top_y)) {
    fVar3 = obstacle_x - cylinder->center_x;
    fVar4 = obstacle_y - cylinder->center_z;
    fVar9 = collision_info->cylinder_radius + cylinder->radius;
    fVar5 = fVar9 * fVar9;
    fVar8 = fVar4 * fVar4 + fVar3 * fVar3;
    if (fVar5 <= fVar8) {
      fVar1 = cylinder->normal_x;
      fVar2 = cylinder->normal_z;
      fVar8 = fVar4 * fVar2 + fVar3 * fVar1;
      if (0.0 < fVar8) {
        fVar7 = fVar1 * fVar8 + cylinder->center_x;
        fVar6 = fVar2 * fVar8 + cylinder->center_z;
        fVar8 = (obstacle_y - fVar6) * (obstacle_y - fVar6) +
                (obstacle_x - fVar7) * (obstacle_x - fVar7);
        if (fVar8 < fVar5) {
          fVar8 = SQRT(fVar5 - fVar8);
          fVar9 = fVar7 - fVar1 * fVar8;
          fVar8 = fVar6 - fVar2 * fVar8;
          if (ABS(cylinder->dir_x) <= ABS(cylinder->dir_z)) {
            fVar10 = (fVar8 - cylinder->center_z) / cylinder->dir_z;
          }
          else {
            fVar10 = (fVar9 - cylinder->center_x) / cylinder->dir_x;
          }
          if ((0.0 <= fVar10) && (fVar10 < cylinder->closest_t)) {
            if (1.0 < fVar10) {
              return 0;
            }
            (cylinder->push_normal).y = 0.0;
            cylinder->closest_t = fVar10;
            (cylinder->push_normal).x = fVar9 - obstacle_x;
            (cylinder->push_normal).z = fVar8 - obstacle_y;
            return 1;
          }
        }
      }
    }
    else {
      fVar9 = SQRT(fVar8) - fVar9;
      if ((float)-0.001 < fVar9) {
        fVar9 = -0.001;
      }
      if (fVar9 < cylinder->closest_t) {
        (cylinder->push_normal).y = 0.0;
        cylinder->closest_t = fVar9;
        (cylinder->push_normal).x = -fVar3;
        (cylinder->push_normal).z = -fVar4;
        return 1;
      }
    }
  }
  return 0;
}
