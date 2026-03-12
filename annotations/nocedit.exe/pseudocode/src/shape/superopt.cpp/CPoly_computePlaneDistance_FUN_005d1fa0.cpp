// Name: shape_superopt.cpp_CPoly_computePlaneDistance_FUN_005d1fa0
// Address: 005d1fa0
// Address Range: [[005d1fa0, 005d1fe2]]
// Convention: __cdecl
// Signature: double __cdecl shape_superopt_cpp_CPoly_computePlaneDistance_FUN_005d1fa0(CPoly *this_ptr)

#include "nocturne.h"

double __cdecl shape_superopt_cpp_CPoly_computePlaneDistance_FUN_005d1fa0(CPoly *this_ptr)

{
  CVert *pCVar2;
  int iVar1;
  
  iVar1 = this_ptr->vertex_idx_0;
  pCVar2 = this_ptr->parent_obj->vertex_data;
  return -(pCVar2[iVar1].position.z * (this_ptr->normal).impl.z +
          pCVar2[iVar1].position.x * (this_ptr->normal).impl.x +
          pCVar2[iVar1].position.y * (this_ptr->normal).impl.y);
}
