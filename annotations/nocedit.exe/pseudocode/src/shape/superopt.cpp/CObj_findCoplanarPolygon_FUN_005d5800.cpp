// Name: shape_superopt.cpp_CObj_findCoplanarPolygon_FUN_005d5800
// Address: 005d5800
// Address Range: [[005d5800, 005d5baf]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_findCoplanarPolygon_FUN_005d5800(CObj *this_ptr,double coplanar_threshold,CPoly *search_polygon)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005d5b52) */

int __cdecl shape_superopt_cpp_CObj_findCoplanarPolygon_FUN_005d5800(CObj *this_ptr,double coplanar_threshold,CPoly *search_polygon)

{
  CVert *point_00;
  int iVar1;
  int iVar2;
  int *piVar2;
  CPoly *other;
  CPoly *pCVar3;
  CP3D *pCVar4;
  uint uVar5;
  uint uVar3;
  uint *puVar6;
  int *piVar7;
  CPoly *this_ptr_00;
  uint *puVar8;
  byte bVar9;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40 [6];
  int local_28;
  CP3D *local_24;
  uint local_20;
  uint local_1c;
  CPoly *local_18;
  CP3D *local_14;
  CVert *point;
  
  bVar9 = 0;
  if (search_polygon == (CPoly *)0x0) {
    if (this_ptr->poly_count == 0) {
      iVar1 = 0;
    }
    else {
      (*this_ptr->vtable->clearStateFlags)(this_ptr,0x2000);
      iVar1 = (*this_ptr->vtable->findCoplanarPolygon)
                        (this_ptr,coplanar_threshold,this_ptr->poly_array);
    }
    return iVar1;
  }
  *(byte *)((int)&search_polygon->flags + 1) = *(byte *)((int)&search_polygon->flags + 1) | 0x20;
  local_18 = this_ptr->poly_array;
  local_20 = 0;
  if (this_ptr->poly_count != 0) {
    local_24 = &search_polygon->normal;
    pCVar4 = &local_18->normal;
    piVar7 = &local_18->vertex_idx_0;
    piVar2 = &search_polygon->vertex_idx_0;
    do {
      if (((local_18->flags & 0x2000) == 0) &&
         (1.0 - coplanar_threshold <=
          (pCVar4->impl).z * (search_polygon->normal).impl.z +
          (pCVar4->impl).x * (local_24->impl).x + (pCVar4->impl).y * (search_polygon->normal).impl.y
         )) {
        local_28 = -1;
        if ((((*piVar7 == search_polygon->vertex_idx_1) && (piVar7[1] == *piVar2)) ||
            ((*piVar7 == search_polygon->vertex_idx_2 && (piVar7[1] == search_polygon->vertex_idx_1)
             ))) || ((*piVar7 == *piVar2 && (piVar7[1] == search_polygon->vertex_idx_2)))) {
          local_28 = 2;
LAB_005d59af:
          point_00 = this_ptr->vertex_data +
                     *(int *)((int)local_18->uv_coords + local_28 * 4 + -0xc);
          local_14 = &search_polygon->normal;
          shape_superopt_cpp_projectPointOntoPlane_FUN_005d63d0
                    (&point_00->position,
                     &this_ptr->vertex_data[search_polygon->vertex_idx_0].position,&local_14->impl);
          puVar6 = local_40;
          puVar8 = &local_58;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
            *puVar8 = *puVar6;
            puVar6 = puVar6;
            puVar8 = puVar8;
          }
          *(uint *)&(point_00->position).x = local_58;
          *(uint *)((int)&(point_00->position).x + 4) = local_54;
          *(uint *)&(point_00->position).y = local_50;
          *(uint *)((int)&(point_00->position).y + 4) = local_4c;
          *(uint *)&(point_00->position).z = local_48;
          *(uint *)((int)&(point_00->position).z + 4) = local_44;
          (local_18->normal).impl.x = (local_14->impl).x;
          *(uint *)&(local_18->normal).impl.y = *(uint *)&(local_14->impl).y;
          *(uint *)((int)&(local_18->normal).impl.y + 4) =
               *(uint *)((int)&(local_14->impl).y + 4);
          *(uint *)&(local_18->normal).impl.z = *(uint *)&(local_14->impl).z;
          *(uint *)((int)&(local_18->normal).impl.z + 4) =
               *(uint *)((int)&(local_14->impl).z + 4);
          iVar2 = (*this_ptr->vtable->findCoplanarPolygon)(this_ptr,coplanar_threshold,local_18);
          return iVar2;
        }
        if ((piVar7[1] == search_polygon->vertex_idx_2) &&
           (piVar7[2] == search_polygon->vertex_idx_1)) {
          local_28 = 0;
          goto LAB_005d59af;
        }
        if ((piVar7[1] == *piVar2) && (piVar7[2] == search_polygon->vertex_idx_2)) {
          local_28 = 0;
          goto LAB_005d59af;
        }
        if ((piVar7[1] == search_polygon->vertex_idx_1) && (piVar7[2] == *piVar2)) {
          local_28 = 0;
          goto LAB_005d59af;
        }
        if ((piVar7[2] == *piVar2) && (*piVar7 == search_polygon->vertex_idx_2)) {
          local_28 = 1;
          goto LAB_005d59af;
        }
        if ((piVar7[2] == search_polygon->vertex_idx_1) && (*piVar7 == *piVar2)) {
          local_28 = 1;
          goto LAB_005d59af;
        }
        if ((piVar7[2] == search_polygon->vertex_idx_2) && (search_polygon->vertex_idx_1 == *piVar7)
           ) {
          local_28 = 1;
          goto LAB_005d59af;
        }
      }
      local_18 = local_18 + 1;
      pCVar4 = (CP3D *)&pCVar4[4].impl.y;
      piVar7 = piVar7 + 0x1a;
      local_20 = local_20 + 1;
    } while (local_20 < (uint)this_ptr->poly_count);
  }
  local_1c = 0;
  this_ptr_00 = this_ptr->poly_array;
  if (this_ptr->poly_count != 0) {
    do {
      if ((this_ptr_00->flags & 0x2000) != 0) {
        uVar5 = 0;
        other = this_ptr->poly_array;
        if (this_ptr->poly_count != 0) {
          do {
            if (((other->flags & 0x2000) == 0) &&
               (iVar2 = (*this_ptr_00->vtable->hasSharedEdge)(this_ptr_00,other), iVar2 != 0)) {
              iVar2 = (*this_ptr->vtable->findCoplanarPolygon)(this_ptr,coplanar_threshold,other);
              return iVar2;
            }
            uVar5 = uVar5 + 1;
            other = other + 1;
          } while (uVar5 < (uint)this_ptr->poly_count);
        }
      }
      this_ptr_00 = this_ptr_00 + 1;
      local_1c = local_1c + 1;
    } while (local_1c < (uint)this_ptr->poly_count);
  }
  uVar3 = 0;
  pCVar3 = this_ptr->poly_array;
  if (this_ptr->poly_count != 0) {
    do {
      if ((pCVar3->flags & 0x2000) == 0) {
        iVar2 = (*this_ptr->vtable->findCoplanarPolygon)(this_ptr,coplanar_threshold,pCVar3);
        return iVar2;
      }
      uVar3 = uVar3 + 1;
      pCVar3 = pCVar3 + 1;
    } while (uVar3 < (uint)this_ptr->poly_count);
  }
  return 1;
}
