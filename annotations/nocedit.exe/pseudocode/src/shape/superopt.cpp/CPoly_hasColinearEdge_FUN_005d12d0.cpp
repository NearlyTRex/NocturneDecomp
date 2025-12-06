// Name: shape_superopt.cpp_CPoly_hasColinearEdge_FUN_005d12d0
// Address: 005d12d0
// Address Range: [[005d12d0, 005d1386]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CPoly_hasColinearEdge_FUN_005d12d0(CPoly * this_ptr, CPoly * other)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CPoly_hasColinearEdge_FUN_005d12d0(CPoly *this_ptr,CPoly *other)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = &other->vertex_idx_0;
  piVar1 = &this_ptr->vertex_idx_0;
  if ((((((this_ptr->vertex_idx_0 != other->vertex_idx_0) ||
         (other->vertex_idx_1 != this_ptr->vertex_idx_1)) &&
        ((other->vertex_idx_1 != *piVar1 || (other->vertex_idx_2 != this_ptr->vertex_idx_1)))) &&
       ((other->vertex_idx_2 != *piVar1 || (*piVar2 != this_ptr->vertex_idx_1)))) &&
      ((other->vertex_idx_1 != this_ptr->vertex_idx_1 ||
       (other->vertex_idx_2 != this_ptr->vertex_idx_2)))) &&
     (((((other->vertex_idx_2 != this_ptr->vertex_idx_1 || (*piVar2 != this_ptr->vertex_idx_2)) &&
        ((*piVar2 != this_ptr->vertex_idx_1 || (other->vertex_idx_1 != this_ptr->vertex_idx_2)))) &&
       ((other->vertex_idx_2 != this_ptr->vertex_idx_2 || (*piVar2 != *piVar1)))) &&
      (((*piVar2 != this_ptr->vertex_idx_2 || (other->vertex_idx_1 != *piVar1)) &&
       ((other->vertex_idx_1 != this_ptr->vertex_idx_2 || (other->vertex_idx_2 != *piVar1)))))))) {
    return 0;
  }
  return 1;
}
