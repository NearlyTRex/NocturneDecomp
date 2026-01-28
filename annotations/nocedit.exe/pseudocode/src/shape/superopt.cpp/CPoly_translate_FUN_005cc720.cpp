// Name: shape_superopt.cpp_CPoly_translate_FUN_005cc720
// Address: 005cc720
// Address Range: [[005cc720, 005cc7b2]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_translate_FUN_005cc720(CPoly *this_ptr,CVector3d *offset)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_translate_FUN_005cc720(CPoly *this_ptr,CVector3d *offset)

{
  int iVar1;
  CVert *pCVar2;
  
  iVar1 = this_ptr->vertex_idx_0;
  pCVar2 = this_ptr->parent_obj->vertex_data;
  pCVar2[iVar1].position.x = offset->x + pCVar2[iVar1].position.x;
  pCVar2[iVar1].position.y = offset->y + pCVar2[iVar1].position.y;
  pCVar2[iVar1].position.z = offset->z + pCVar2[iVar1].position.z;
  iVar1 = this_ptr->vertex_idx_1;
  pCVar2[iVar1].position.x = offset->x + pCVar2[iVar1].position.x;
  pCVar2[iVar1].position.y = offset->y + pCVar2[iVar1].position.y;
  pCVar2[iVar1].position.z = offset->z + pCVar2[iVar1].position.z;
  iVar1 = this_ptr->vertex_idx_2;
  pCVar2[iVar1].position.x = offset->x + pCVar2[iVar1].position.x;
  pCVar2[iVar1].position.y = offset->y + pCVar2[iVar1].position.y;
  pCVar2[iVar1].position.z = offset->z + pCVar2[iVar1].position.z;
  return;
}
