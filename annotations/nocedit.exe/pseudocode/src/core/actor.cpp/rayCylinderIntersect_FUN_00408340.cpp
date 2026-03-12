// Name: core_actor.cpp_rayCylinderIntersect_FUN_00408340
// Address: 00408340
// Address Range: [[00408340, 004087a1]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_rayCylinderIntersect_FUN_00408340(SCollisionInfo *collision_info,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

float __cdecl core_actor_cpp_rayCylinderIntersect_FUN_00408340(SCollisionInfo *collision_info,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

{
  float fVar1_00;
  float fVar12;
  float fVar13;
  float fVar14;
  CVector3f local_60 [7];
  float fVar6;
  float fVar3;
  float fVar4;
  float fVar1;
  float fVar2;
  float fVar11;
  float fVar9;
  float fVar10;
  float fVar5;
  float fVar7;
  float fVar8;
  
  fVar12 = collision_info->cylinder_radius * collision_info->cylinder_radius;
  if (fVar12 <= ray_origin->x * ray_origin->x + ray_origin->z * ray_origin->z) {
    fVar1_00 = SQRT(ray_direction->x * ray_direction->x + ray_direction->z * ray_direction->z);
    if (0.0 < fVar1_00) {
      fVar10 = 1.0 / fVar1_00;
      fVar3 = ray_direction->x;
      fVar7 = fVar3 * fVar10;
      fVar4 = ray_direction->z;
      fVar8 = fVar4 * fVar10;
      fVar5 = ray_origin->z;
      fVar6 = ray_origin->x;
      fVar9 = -(fVar6 * fVar7 + fVar5 * fVar8);
      if (0.0 < fVar9) {
        fVar11 = fVar7 * fVar9 + fVar6;
        fVar13 = fVar8 * fVar9 + fVar5;
        fVar13 = fVar13 * fVar13 + fVar11 * fVar11;
        if ((fVar12 <= fVar13) || (fVar13 = fVar9 - SQRT(fVar12 - fVar13), fVar1_00 < fVar13)) {
          return 2.0;
        }
        fVar13 = fVar13 * fVar10;
        fVar1_00 = ray_direction->y * fVar13 + ray_origin->y;
        if ((collision_info->cylinder_bottom_y <= fVar1_00) &&
           (fVar1_00 <= collision_info->cylinder_top_y)) {
          out_normal->y = 0.0;
          fVar1_00 = fVar3 * fVar13 + fVar6;
          out_normal->x = fVar1_00;
          fVar12 = fVar4 * fVar13 + fVar5;
          out_normal->z = fVar12;
          fVar12 = SQRT(fVar12 * out_normal->z +
                        fVar1_00 * out_normal->x + out_normal->y * out_normal->y);
          if (fVar12 <= 0.0) {
            out_normal->z = 0.0;
            out_normal->y = out_normal->z;
            out_normal->x = out_normal->y;
          }
          else {
            fVar12 = 1.0 / fVar12;
            out_normal->x = out_normal->x * fVar12;
            out_normal->y = out_normal->y * fVar12;
            out_normal->z = out_normal->z * fVar12;
          }
          return fVar13;
        }
      }
    }
  }
  else if ((collision_info->cylinder_bottom_y <= ray_origin->y) &&
          (ray_origin->y <= collision_info->cylinder_top_y)) {
    fVar1 = ray_direction->y;
    fVar2 = ray_direction->z;
    if (out_normal != local_60) {
      out_normal->x = -ray_direction->x;
      out_normal->y = -fVar1;
      out_normal->z = -fVar2;
    }
    fVar12 = SQRT(out_normal->z * out_normal->z +
                  out_normal->x * out_normal->x + out_normal->y * out_normal->y);
    if (fVar12 <= 0.0) {
      out_normal->z = 0.0;
      out_normal->y = out_normal->z;
      out_normal->x = out_normal->y;
    }
    else {
      fVar12 = 1.0 / fVar12;
      out_normal->x = out_normal->x * fVar12;
      out_normal->y = out_normal->y * fVar12;
      out_normal->z = out_normal->z * fVar12;
    }
    return 0.0;
  }
  if (collision_info->cylinder_bottom_y <= ray_origin->y) {
    if ((((collision_info->cylinder_top_y < ray_origin->y) &&
         (fVar1_00 = ray_direction->y, fVar1_00 < 0.0)) &&
        (fVar13 = collision_info->cylinder_top_y - ray_origin->y, fVar1_00 < fVar13)) &&
       (fVar13 = fVar13 / fVar1_00, fVar1_00 = ray_origin->x + ray_direction->x * fVar13,
       fVar14 = ray_direction->z * fVar13 + ray_origin->z,
       fVar14 * fVar14 + fVar1_00 * fVar1_00 <= fVar12)) {
      out_normal->y = 1.0;
      out_normal->z = 0.0;
      out_normal->x = 0.0;
      return fVar13;
    }
  }
  else {
    fVar1_00 = ray_direction->y;
    if ((0.0 < fVar1_00) &&
       (fVar13 = collision_info->cylinder_bottom_y - ray_origin->y, fVar13 < fVar1_00)) {
      fVar13 = fVar13 / fVar1_00;
      fVar1_00 = ray_origin->x + ray_direction->x * fVar13;
      fVar14 = ray_direction->z * fVar13 + ray_origin->z;
      if (fVar12 < fVar14 * fVar14 + fVar1_00 * fVar1_00) {
        return 2.0;
      }
      out_normal->y = -1.0;
      out_normal->z = 0.0;
      out_normal->x = 0.0;
      return fVar13;
    }
  }
  return 2.0;
}
