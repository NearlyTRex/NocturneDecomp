// Name: shape_superopt.cpp_CObj_findCoplanarPolygon_FUN_005d5800
// Address: 005d5800
// Address Range: [[005d5800, 005d5baf]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_findCoplanarPolygon_FUN_005d5800 (CObj *this_ptr,double coplanar_threshold,CPoly *search_polygon)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005d5b52) */

int __cdecl
shape_superopt_cpp_CObj_findCoplanarPolygon_FUN_005d5800
          (CObj *this_ptr,double coplanar_threshold,CPoly *search_polygon)

{
  CVert *point;
  int iVar1;
  int *piVar2;
  CPoly *other;
  CPoly *pCVar3;
  CVector3d *pCVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
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
  CVector3d *local_24;
  uint local_20;
  uint local_1c;
  CPoly *local_18;
  CVector3d *local_14;
  
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
          pCVar4->z * (search_polygon->normal).z +
          pCVar4->x * local_24->x + pCVar4->y * (search_polygon->normal).y)) {
        local_28 = 0xffffffff;
        if ((((*piVar7 == search_polygon->vertex_idx_1) && (piVar7[1] == *piVar2)) ||
            ((*piVar7 == search_polygon->vertex_idx_2 && (piVar7[1] == search_polygon->vertex_idx_1)
             ))) || ((*piVar7 == *piVar2 && (piVar7[1] == search_polygon->vertex_idx_2)))) {
          local_28 = 2;
LAB_005d59af:
          point = this_ptr->vertex_data + *(int *)((int)local_18->uv_coords + local_28 * 4 + -0xc);
          local_14 = &search_polygon->normal;
          shape_superopt_cpp_projectPointOntoPlane_FUN_005d63d0
                    (&point->position,&this_ptr->vertex_data[search_polygon->vertex_idx_0].position,
                     local_14);
          puVar6 = local_40;
          puVar8 = &local_58;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          }
          *(uint *)&(point->position).x = local_58;
          *(uint *)((int)&(point->position).x + 4) = local_54;
          *(uint *)&(point->position).y = local_50;
          *(uint *)((int)&(point->position).y + 4) = local_4c;
          *(uint *)&(point->position).z = local_48;
          *(uint *)((int)&(point->position).z + 4) = local_44;
          (local_18->normal).x = local_14->x;
          *(uint *)&(local_18->normal).y = *(uint *)&local_14->y;
          *(uint *)((int)&(local_18->normal).y + 4) = *(uint *)((int)&local_14->y + 4);
          *(uint *)&(local_18->normal).z = *(uint *)&local_14->z;
          *(uint *)((int)&(local_18->normal).z + 4) = *(uint *)((int)&local_14->z + 4);
          iVar1 = (*this_ptr->vtable->findCoplanarPolygon)(this_ptr,coplanar_threshold,local_18);
          return iVar1;
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
      pCVar4 = (CVector3d *)((int)(pCVar4 + 4) + 8);
      piVar7 = piVar7 + 0x1a;
      local_20 = local_20 + 1;
    } while (local_20 < (uint)this_ptr->poly_count);
  }
  local_1c = 0;
  pCVar3 = this_ptr->poly_array;
  if (this_ptr->poly_count != 0) {
    do {
      if ((pCVar3->flags & 0x2000) != 0) {
        uVar5 = 0;
        other = this_ptr->poly_array;
        if (this_ptr->poly_count != 0) {
          do {
            if (((other->flags & 0x2000) == 0) &&
               (iVar1 = (*pCVar3->vtable->hasSharedEdge)(pCVar3,other), iVar1 != 0)) {
              iVar1 = (*this_ptr->vtable->findCoplanarPolygon)(this_ptr,coplanar_threshold,other);
              return iVar1;
            }
            uVar5 = uVar5 + 1;
            other = other + 1;
          } while (uVar5 < (uint)this_ptr->poly_count);
        }
      }
      pCVar3 = pCVar3 + 1;
      local_1c = local_1c + 1;
    } while (local_1c < (uint)this_ptr->poly_count);
  }
  uVar5 = 0;
  pCVar3 = this_ptr->poly_array;
  if (this_ptr->poly_count != 0) {
    do {
      if ((pCVar3->flags & 0x2000) == 0) {
        iVar1 = (*this_ptr->vtable->findCoplanarPolygon)(this_ptr,coplanar_threshold,pCVar3);
        return iVar1;
      }
      uVar5 = uVar5 + 1;
      pCVar3 = pCVar3 + 1;
    } while (uVar5 < (uint)this_ptr->poly_count);
  }
  return 1;
}
