// Name: shape_superopt.cpp_CPoly_rayIntersect_FUN_005d0010
// Address: 005d0010
// MANUAL RECONSTRUCTION
// Address Range: [[005d0010, 005d033c]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CPoly_rayIntersect_FUN_005d0010(CPoly *this_ptr,CVector3d *ray_origin,CVector3d *ray_end,CVector3d *out_hit_point)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CPoly_rayIntersect_FUN_005d0010(CPoly *this_ptr,CVector3d *ray_origin,CVector3d *ray_end,CVector3d *out_hit_point)

{
  double dVar2;
  double dVar3;
  double dVar4;
  CVert *pCVar2;
  CVert *pCVar3;
  int iVar5;
  CVert *pCVar5;
  double local_d8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  CVert *local_14;
  double dVar1;
  
  local_14 = this_ptr->parent_obj->vertex_data;
  pCVar5 = local_14 + this_ptr->vertex_idx_0;
  pCVar3 = local_14 + this_ptr->vertex_idx_1;
  pCVar2 = local_14 + this_ptr->vertex_idx_2;
  dVar2 = ((pCVar2->position).z - (pCVar5->position).z) *
          ((pCVar3->position).y - (pCVar5->position).y) -
          ((pCVar3->position).z - (pCVar5->position).z) *
          ((pCVar2->position).y - (pCVar5->position).y);
  dVar3 = ((pCVar2->position).x - (pCVar5->position).x) *
          ((pCVar3->position).z - (pCVar5->position).z) -
          ((pCVar3->position).x - (pCVar5->position).x) *
          ((pCVar2->position).z - (pCVar5->position).z);
  dVar4 = ((pCVar3->position).x - (pCVar5->position).x) *
          ((pCVar2->position).y - (pCVar5->position).y) -
          ((pCVar2->position).x - (pCVar5->position).x) *
          ((pCVar3->position).y - (pCVar5->position).y);
  dVar1 = 1.0 / SQRT(dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2);
  local_38 = dVar2 * dVar1;
  local_30 = dVar3 * dVar1;
  local_28 = dVar4 * dVar1;
  dVar2 = (ray_end->z - ray_origin->z) * local_28 +
          (ray_end->x - ray_origin->x) * local_38 + (ray_end->y - ray_origin->y) * local_30;
  local_d8 = dVar2;
  if (dVar2 < 0.0) {
    local_d8 = -dVar2;
  }
  if (((1e-08 <= local_d8) &&
      (dVar2 = -(local_28 * ray_origin->z +
                local_38 * ray_origin->x +
                ((-local_38 * (pCVar5->position).x - local_30 * (pCVar5->position).y) -
                local_28 * (pCVar5->position).z) + local_30 * ray_origin->y) / dVar2,
      -1e-08 <= dVar2)) && (dVar2 <= 1.0000000099999999)) {
    local_b0 = ray_end->x - ray_origin->x;
    local_a8 = ray_end->y - ray_origin->y;
    local_a0 = ray_end->z - ray_origin->z;
    local_50 = local_b0 * dVar2;
    local_48 = local_a8 * dVar2;
    local_40 = local_a0 * dVar2;
    out_hit_point->x = ray_origin->x + local_50;
    out_hit_point->y = ray_origin->y + local_48;
    out_hit_point->z = ray_origin->z + local_40;
    iVar5 = (*this_ptr->vtable->containsPoint)(this_ptr,out_hit_point);
    return iVar5;
  }
  return 0;
}
