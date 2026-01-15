// Name: core_actor.cpp_rayCylinderIntersect_FUN_00408340
// Address: 00408340
// Address Range: [[00408340, 004087a1]]
// Convention: __cdecl
// Signature: float core_actor.cpp_rayCylinderIntersect_FUN_00408340(SCollisionInfo * collision_info, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)

#include "nocturne.h"

float __cdecl
core_actor_cpp_rayCylinderIntersect_FUN_00408340
          (SCollisionInfo *collision_info,CVector3f *ray_origin,CVector3f *ray_direction,
          CVector3f *out_normal)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  CVector3f local_60 [7];
  
  fVar1 = collision_info->cylinder_radius * collision_info->cylinder_radius;
  if (fVar1 <= ray_origin->x * ray_origin->x + ray_origin->z * ray_origin->z) {
    fVar2 = SQRT(ray_direction->x * ray_direction->x + ray_direction->z * ray_direction->z);
    if (0.0 < fVar2) {
      fVar10 = 1.0 / fVar2;
      fVar3 = ray_direction->x;
      fVar7 = fVar3 * fVar10;
      fVar4 = ray_direction->z;
      fVar8 = fVar4 * fVar10;
      fVar5 = ray_origin->z;
      fVar6 = ray_origin->x;
      fVar9 = -(fVar6 * fVar7 + fVar5 * fVar8);
      if (0.0 < fVar9) {
        fVar11 = fVar7 * fVar9 + fVar6;
        fVar7 = fVar8 * fVar9 + fVar5;
        fVar7 = fVar7 * fVar7 + fVar11 * fVar11;
        if ((fVar1 <= fVar7) || (fVar9 = fVar9 - SQRT(fVar1 - fVar7), fVar2 < fVar9)) {
          return 2.0;
        }
        fVar9 = fVar9 * fVar10;
        fVar2 = ray_direction->y * fVar9 + ray_origin->y;
        if ((collision_info->cylinder_bottom_y <= fVar2) &&
           (fVar2 <= collision_info->cylinder_top_y)) {
          out_normal->y = 0.0;
          fVar6 = fVar3 * fVar9 + fVar6;
          out_normal->x = fVar6;
          fVar5 = fVar4 * fVar9 + fVar5;
          out_normal->z = fVar5;
          fVar1 = SQRT(fVar5 * out_normal->z + fVar6 * out_normal->x + out_normal->y * out_normal->y
                      );
          if (fVar1 <= 0.0) {
            out_normal->z = 0.0;
            out_normal->y = out_normal->z;
            out_normal->x = out_normal->y;
          }
          else {
            fVar1 = 1.0 / fVar1;
            out_normal->x = out_normal->x * fVar1;
            out_normal->y = out_normal->y * fVar1;
            out_normal->z = out_normal->z * fVar1;
          }
          return fVar9;
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
    fVar1 = SQRT(out_normal->z * out_normal->z +
                 out_normal->x * out_normal->x + out_normal->y * out_normal->y);
    if (fVar1 <= 0.0) {
      out_normal->z = 0.0;
      out_normal->y = out_normal->z;
      out_normal->x = out_normal->y;
    }
    else {
      fVar1 = 1.0 / fVar1;
      out_normal->x = out_normal->x * fVar1;
      out_normal->y = out_normal->y * fVar1;
      out_normal->z = out_normal->z * fVar1;
    }
    return 0.0;
  }
  if (collision_info->cylinder_bottom_y <= ray_origin->y) {
    if ((((collision_info->cylinder_top_y < ray_origin->y) &&
         (fVar2 = ray_direction->y, fVar2 < 0.0)) &&
        (fVar3 = collision_info->cylinder_top_y - ray_origin->y, fVar2 < fVar3)) &&
       (fVar3 = fVar3 / fVar2, fVar2 = ray_origin->x + ray_direction->x * fVar3,
       fVar4 = ray_direction->z * fVar3 + ray_origin->z, fVar4 * fVar4 + fVar2 * fVar2 <= fVar1)) {
      out_normal->y = 1.0;
      out_normal->z = 0.0;
      out_normal->x = 0.0;
      return fVar3;
    }
  }
  else {
    fVar2 = ray_direction->y;
    if ((0.0 < fVar2) && (fVar3 = collision_info->cylinder_bottom_y - ray_origin->y, fVar3 < fVar2))
    {
      fVar3 = fVar3 / fVar2;
      fVar2 = ray_origin->x + ray_direction->x * fVar3;
      fVar4 = ray_direction->z * fVar3 + ray_origin->z;
      if (fVar1 < fVar4 * fVar4 + fVar2 * fVar2) {
        return 2.0;
      }
      out_normal->y = -1.0;
      out_normal->z = 0.0;
      out_normal->x = 0.0;
      return fVar3;
    }
  }
  return 2.0;
}
