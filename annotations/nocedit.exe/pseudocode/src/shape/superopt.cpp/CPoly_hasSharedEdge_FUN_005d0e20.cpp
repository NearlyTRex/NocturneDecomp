// Name: shape_superopt.cpp_CPoly_hasSharedEdge_FUN_005d0e20
// Address: 005d0e20
// Address Range: [[005d0e20, 005d0ed5]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CPoly_hasSharedEdge_FUN_005d0e20(CPoly *this_ptr,CPoly *other)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CPoly_hasSharedEdge_FUN_005d0e20(CPoly *this_ptr,CPoly *other)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = &other->vertex_idx_0;
  piVar1 = &this_ptr->vertex_idx_0;
  if ((((((this_ptr->vertex_idx_0 != other->vertex_idx_1) || (*piVar2 != this_ptr->vertex_idx_1)) &&
        ((other->vertex_idx_2 != *piVar1 || (other->vertex_idx_1 != this_ptr->vertex_idx_1)))) &&
       ((*piVar2 != *piVar1 || (other->vertex_idx_2 != this_ptr->vertex_idx_1)))) &&
      ((other->vertex_idx_2 != this_ptr->vertex_idx_1 ||
       (other->vertex_idx_1 != this_ptr->vertex_idx_2)))) &&
     (((((*piVar2 != this_ptr->vertex_idx_1 || (other->vertex_idx_2 != this_ptr->vertex_idx_2)) &&
        ((other->vertex_idx_1 != this_ptr->vertex_idx_1 || (*piVar2 != this_ptr->vertex_idx_2)))) &&
       ((*piVar2 != this_ptr->vertex_idx_2 || (other->vertex_idx_2 != *piVar1)))) &&
      (((other->vertex_idx_1 != this_ptr->vertex_idx_2 || (*piVar2 != *piVar1)) &&
       ((other->vertex_idx_2 != this_ptr->vertex_idx_2 || (other->vertex_idx_1 != *piVar1)))))))) {
    return 0;
  }
  return 1;
}
