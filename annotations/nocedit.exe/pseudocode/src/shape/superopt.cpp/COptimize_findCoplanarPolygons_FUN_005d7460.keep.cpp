// Name: shape_superopt.cpp_COptimize_findCoplanarPolygons_FUN_005d7460
// Address: 005d7460
// MANUAL RECONSTRUCTION
// Address Range: [[005d7460, 005d7688]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_COptimize_findCoplanarPolygons_FUN_005d7460(COptimize *this_ptr,CPoly *polygon,COptimize *search_obj)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_COptimize_findCoplanarPolygons_FUN_005d7460(COptimize *this_ptr,CPoly *polygon,COptimize *search_obj)

{
  double dVar1;
  int iVar5;
  int iVar6;
  uint uVar9;
  uint local_30;
  uint uStack_24;
  double dVar2;
  double dVar3;
  bool bVar4;
  CPoly *poly_a;
  CPoly *poly_b;
  CPoly *poly_c;

  polygon->flags = polygon->flags | 0x2000;
  dVar2 = this_ptr->coplanar_angle_threshold;
  do {
    local_30 = 0;
    bVar4 = true;
    if ((search_obj->base).poly_count != 0) {
      do {
        poly_a = &(search_obj->base).poly_array[local_30];
        if (((poly_a->flags & 0x8000) == 0) && ((poly_a->flags & 0x2000) != 0)) {
          dVar3 = (*poly_a->vtable->computePlaneDistance)(poly_a);
          uStack_24 = 0;
          if ((search_obj->base).poly_count != 0) {
            do {
              poly_b = &(search_obj->base).poly_array[uStack_24];
              if ((((poly_b->flags & 0xa000) == 0) &&
                  (poly_b->material_id == poly_a->material_id)) &&
                 (1.0 - dVar2 <=
                  (poly_b->normal).impl.z * (poly_a->normal).impl.z +
                  (poly_b->normal).impl.x * (poly_a->normal).impl.x +
                  (poly_b->normal).impl.y * (poly_a->normal).impl.y)) {
                dVar1 = (*poly_b->vtable->computePlaneDistance)(poly_b);
                if ((ABS(dVar1 - dVar3) <= this_ptr->coplanar_distance_threshold) &&
                   (iVar5 = (*poly_a->vtable->hasSeamlessEdge)(poly_a,poly_b), iVar5 != 0)) {
                  uVar9 = 0;
                  if ((search_obj->base).poly_count != 0) {
                    do {
                      poly_c = &(search_obj->base).poly_array[uVar9];
                      if (((poly_c->flags & 0x8000) == 0) &&
                         ((poly_c->flags & 0x2000) != 0) &&
                         ((iVar6 = (*poly_b->vtable->hasColinearEdge)(poly_b,poly_c),
                          iVar6 != 0 ||
                          ((iVar5 = (*poly_b->vtable->hasCentroidIntersection)(poly_b,poly_c),
                           iVar5 != 0 ||
                           (iVar6 = (*poly_b->vtable->hasEdgeIntersection)(poly_b,poly_c),
                           iVar6 != 0)))))) break;
                      uVar9 = uVar9 + 1;
                    } while (uVar9 < (uint)(search_obj->base).poly_count);
                  }
                  if (uVar9 == (uint)(search_obj->base).poly_count) {
                    bVar4 = false;
                    poly_b->flags = poly_b->flags | 0x2000;
                  }
                }
              }
              uStack_24 = uStack_24 + 1;
            } while (uStack_24 < (uint)(search_obj->base).poly_count);
          }
        }
        local_30 = local_30 + 1;
      } while (local_30 < (uint)(search_obj->base).poly_count);
    }
    if (bVar4) {
      return;
    }
  } while( true );
}
