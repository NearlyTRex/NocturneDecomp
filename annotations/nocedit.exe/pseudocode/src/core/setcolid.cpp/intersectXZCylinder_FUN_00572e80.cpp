// Name: core_setcolid.cpp_intersectXZCylinder_FUN_00572e80
// Address: 00572e80
// Address Range: [[00572e80, 005730ca]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_intersectXZCylinder_FUN_00572e80 (SIntersectXZCylinder *cylinder,float ray_x,float ray_z,void *bounds_struct)

#include "nocturne.h"

int __cdecl
core_setcolid_cpp_intersectXZCylinder_FUN_00572e80
          (SIntersectXZCylinder *cylinder,float ray_x,float ray_z,void *bounds_struct)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((*(float *)((int)bounds_struct + 0x14) < cylinder->bottom_y) &&
     (cylinder->top_y < *(float *)((int)bounds_struct + 0x18))) {
    fVar3 = ray_x - cylinder->center_x;
    fVar4 = ray_z - cylinder->center_z;
    fVar2 = *(float *)((int)bounds_struct + 0x1c) + cylinder->radius;
    fVar5 = fVar2 * fVar2;
    fVar1 = fVar4 * fVar4 + fVar3 * fVar3;
    if (fVar5 <= fVar1) {
      fVar1 = cylinder->axis_direction_x;
      fVar2 = cylinder->axis_direction_z;
      fVar3 = fVar4 * fVar2 + fVar3 * fVar1;
      if (0.0 < fVar3) {
        fVar7 = fVar1 * fVar3 + cylinder->center_x;
        fVar4 = ray_x - fVar7;
        fVar6 = fVar2 * fVar3 + cylinder->center_z;
        fVar3 = ray_z - fVar6;
        fVar3 = fVar3 * fVar3 + fVar4 * fVar4;
        if (fVar3 < fVar5) {
          fVar3 = SQRT(fVar5 - fVar3);
          fVar7 = fVar7 - fVar1 * fVar3;
          fVar6 = fVar6 - fVar2 * fVar3;
          if (ABS(cylinder->normal_x) <= ABS(cylinder->normal_z)) {
            fVar3 = (fVar6 - cylinder->center_z) / cylinder->normal_z;
          }
          else {
            fVar3 = (fVar7 - cylinder->center_x) / cylinder->normal_x;
          }
          if ((0.0 <= fVar3) && (fVar3 < cylinder->max_distance)) {
            if (1.0 < fVar3) {
              return 0;
            }
            cylinder->flags = 0;
            cylinder->max_distance = fVar3;
            cylinder->push_z = fVar7 - ray_x;
            cylinder->push_x = fVar6 - ray_z;
            return 1;
          }
        }
      }
    }
    else {
      fVar2 = SQRT(fVar1) - fVar2;
      if ((float)-0.001 < fVar2) {
        fVar2 = -0.001;
      }
      if (fVar2 < cylinder->max_distance) {
        cylinder->flags = 0;
        cylinder->max_distance = fVar2;
        cylinder->push_z = -fVar3;
        cylinder->push_x = -fVar4;
        return 1;
      }
    }
  }
  return 0;
}
