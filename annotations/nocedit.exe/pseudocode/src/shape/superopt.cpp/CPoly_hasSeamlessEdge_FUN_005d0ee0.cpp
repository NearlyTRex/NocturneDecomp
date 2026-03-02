// Name: shape_superopt.cpp_CPoly_hasSeamlessEdge_FUN_005d0ee0
// Address: 005d0ee0
// Address Range: [[005d0ee0, 005d122b]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CPoly_hasSeamlessEdge_FUN_005d0ee0(CPoly *this_ptr,CPoly *other)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CPoly_hasSeamlessEdge_FUN_005d0ee0(CPoly *this_ptr,CPoly *other)

{
  int *piVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  CP2D *pCVar5;
  CP2D *pCVar6;
  
  piVar1 = &this_ptr->vertex_idx_0;
  piVar2 = &other->vertex_idx_0;
  pCVar6 = this_ptr->uv_coords;
  pCVar5 = other->uv_coords;
  if (((((((*piVar1 != other->vertex_idx_1) || (*piVar2 != this_ptr->vertex_idx_1)) ||
         (dVar3 = other->uv_coords[1].impl.x - (pCVar6->impl).x,
         dVar4 = other->uv_coords[1].impl.y - this_ptr->uv_coords[0].impl.y,
         0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))) ||
        (dVar3 = (pCVar5->impl).x - this_ptr->uv_coords[1].impl.x,
        dVar4 = other->uv_coords[0].impl.y - this_ptr->uv_coords[1].impl.y,
        0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))) &&
       (((other->vertex_idx_2 != *piVar1 || (other->vertex_idx_1 != this_ptr->vertex_idx_1)) ||
        ((dVar3 = other->uv_coords[2].impl.x - (pCVar6->impl).x,
         dVar4 = other->uv_coords[2].impl.y - this_ptr->uv_coords[0].impl.y,
         0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3) ||
         (dVar3 = other->uv_coords[1].impl.x - this_ptr->uv_coords[1].impl.x,
         dVar4 = other->uv_coords[1].impl.y - this_ptr->uv_coords[1].impl.y,
         0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))))))) &&
      ((((((*piVar2 != *piVar1 || (other->vertex_idx_2 != this_ptr->vertex_idx_1)) ||
          ((dVar3 = (pCVar5->impl).x - (pCVar6->impl).x,
           dVar4 = other->uv_coords[0].impl.y - this_ptr->uv_coords[0].impl.y,
           0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3) ||
           (dVar3 = other->uv_coords[2].impl.x - this_ptr->uv_coords[1].impl.x,
           dVar4 = other->uv_coords[2].impl.y - this_ptr->uv_coords[1].impl.y,
           0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))))) &&
         (((((other->vertex_idx_2 != this_ptr->vertex_idx_1 ||
             (other->vertex_idx_1 != this_ptr->vertex_idx_2)) ||
            (dVar3 = other->uv_coords[2].impl.x - this_ptr->uv_coords[1].impl.x,
            dVar4 = other->uv_coords[2].impl.y - this_ptr->uv_coords[1].impl.y,
            0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))) ||
           (dVar3 = other->uv_coords[1].impl.x - this_ptr->uv_coords[2].impl.x,
           dVar4 = other->uv_coords[1].impl.y - this_ptr->uv_coords[2].impl.y,
           0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))) &&
          (((*piVar2 != this_ptr->vertex_idx_1 || (other->vertex_idx_2 != this_ptr->vertex_idx_2))
           || ((dVar3 = (pCVar5->impl).x - this_ptr->uv_coords[1].impl.x,
               dVar4 = other->uv_coords[0].impl.y - this_ptr->uv_coords[1].impl.y,
               0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3) ||
               (dVar3 = other->uv_coords[2].impl.x - this_ptr->uv_coords[2].impl.x,
               dVar4 = other->uv_coords[2].impl.y - this_ptr->uv_coords[2].impl.y,
               0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))))))))) &&
        (((other->vertex_idx_1 != this_ptr->vertex_idx_1 || (*piVar2 != this_ptr->vertex_idx_2)) ||
         ((dVar3 = other->uv_coords[1].impl.x - this_ptr->uv_coords[1].impl.x,
          dVar4 = other->uv_coords[1].impl.y - this_ptr->uv_coords[1].impl.y,
          0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3) ||
          (dVar3 = (pCVar5->impl).x - this_ptr->uv_coords[2].impl.x,
          dVar4 = other->uv_coords[0].impl.y - this_ptr->uv_coords[2].impl.y,
          0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))))))) &&
       ((((*piVar2 != this_ptr->vertex_idx_2 || (other->vertex_idx_2 != *piVar1)) ||
         (dVar3 = (pCVar5->impl).x - this_ptr->uv_coords[2].impl.x,
         dVar4 = other->uv_coords[0].impl.y - this_ptr->uv_coords[2].impl.y,
         0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))) ||
        (dVar3 = other->uv_coords[2].impl.x - (pCVar6->impl).x,
        dVar4 = other->uv_coords[2].impl.y - this_ptr->uv_coords[0].impl.y,
        0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))))))) &&
     ((((other->vertex_idx_1 != this_ptr->vertex_idx_2 || (*piVar2 != *piVar1)) ||
       ((dVar3 = other->uv_coords[1].impl.x - this_ptr->uv_coords[2].impl.x,
        dVar4 = other->uv_coords[1].impl.y - this_ptr->uv_coords[2].impl.y,
        0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3) ||
        (dVar3 = (pCVar5->impl).x - (pCVar6->impl).x,
        dVar4 = other->uv_coords[0].impl.y - this_ptr->uv_coords[0].impl.y,
        0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))))) &&
      (((other->vertex_idx_2 != this_ptr->vertex_idx_2 || (*piVar1 != other->vertex_idx_1)) ||
       ((dVar3 = other->uv_coords[2].impl.x - this_ptr->uv_coords[2].impl.x,
        dVar4 = other->uv_coords[2].impl.y - this_ptr->uv_coords[2].impl.y,
        0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3) ||
        (dVar3 = other->uv_coords[1].impl.x - (pCVar6->impl).x,
        dVar4 = other->uv_coords[1].impl.y - this_ptr->uv_coords[0].impl.y,
        0.00390625 <= SQRT(dVar4 * dVar4 + dVar3 * dVar3))))))))) {
    return 0;
  }
  return 1;
}
