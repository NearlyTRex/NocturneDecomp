// Name: shape_superopt.cpp_CPoly_rayIntersect_FUN_005d0010
// Address: 005d0010
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
  int iVar4;
  int iVar5;
  CVert *pCVar5;
  double *pdVar8;
  double *pdVar6;
  double *pdVar9;
  double *pdVar7;
  uint *puVar8;
  double local_d8;
  uint local_c8 [4];
  uint local_b8;
  uint local_b4;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  int local_18;
  CVert *local_14;
  double dVar1;
  
  local_14 = this_ptr->parent_obj->vertex_data;
  pCVar5 = local_14 + this_ptr->vertex_idx_0;
  pCVar3 = local_14 + this_ptr->vertex_idx_1;
  local_18 = this_ptr->vertex_idx_2 * 8;
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
    pdVar8 = &local_b0;
    pdVar9 = &local_98;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(uint *)pdVar9 = *(uint *)pdVar8;
      pdVar8 = (double *)((int)pdVar8 + 4);
      pdVar9 = (double *)((int)pdVar9 + 4);
    }
    local_50 = local_98 * dVar2;
    local_48 = local_90 * dVar2;
    local_40 = local_88 * dVar2;
    pdVar8 = &local_50;
    pdVar7 = &local_80;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pdVar7 = *(uint *)pdVar8;
      pdVar8 = (double *)((int)pdVar8 + 4);
      pdVar7 = (double *)((int)pdVar7 + 4);
    }
    local_68 = ray_origin->x + local_80;
    local_60 = ray_origin->y + local_78;
    local_58 = ray_origin->z + local_70;
    pdVar6 = &local_68;
    puVar8 = local_c8;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *(uint *)pdVar6;
      pdVar6 = (double *)((int)pdVar6 + 4);
      puVar8 = puVar8 + 1;
    }
    *(uint *)&out_hit_point->x = local_c8[0];
    *(uint *)((int)&out_hit_point->x + 4) = local_c8[1];
    *(uint *)&out_hit_point->y = local_c8[2];
    *(uint *)((int)&out_hit_point->y + 4) = local_c8[3];
    *(uint *)&out_hit_point->z = local_b8;
    *(uint *)((int)&out_hit_point->z + 4) = local_b4;
    iVar5 = (*this_ptr->vtable->containsPoint2D)(this_ptr,(CVector2d *)out_hit_point);
    return iVar5;
  }
  return 0;
}
