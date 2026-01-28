// Name: shape_superopt.cpp_CPoly_copyFrom_FUN_005cc6a0
// Address: 005cc6a0
// Address Range: [[005cc6a0, 005cc71e]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_copyFrom_FUN_005cc6a0(CPoly *this_ptr,CPoly *source,CObj *parent_obj)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CPoly_copyFrom_FUN_005cc6a0(CPoly *this_ptr,CPoly *source,CObj *parent_obj)

{
  int iVar1;
  CPoly *pCVar2;
  CVector2d *pCVar3;
  CPoly *pCVar4;
  CVector2d *pCVar5;
  
  this_ptr->parent_obj = parent_obj;
  pCVar2 = source;
  pCVar4 = this_ptr;
  for (iVar1 = 3; pCVar4 = (CPoly *)&pCVar4->vertex_idx_0, pCVar2 = (CPoly *)&pCVar2->vertex_idx_0,
      iVar1 != 0; iVar1 = iVar1 + -1) {
    *(int *)pCVar4 = *(int *)pCVar2;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(char *)pCVar4 = (char)*(int *)pCVar2;
    pCVar2 = (CPoly *)((int)pCVar2 + 1);
    pCVar4 = (CPoly *)((int)pCVar4 + 1);
  }
  pCVar3 = source->uv_coords;
  pCVar5 = this_ptr->uv_coords;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)&pCVar5->x = *(uint *)&pCVar3->x;
    pCVar3 = (CVector2d *)((int)&pCVar3->x + 4);
    pCVar5 = (CVector2d *)((int)&pCVar5->x + 4);
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(byte *)&pCVar5->x = *(byte *)&pCVar3->x;
    pCVar3 = (CVector2d *)((int)&pCVar3->x + 1);
    pCVar5 = (CVector2d *)((int)&pCVar5->x + 1);
  }
  this_ptr->material_id = source->material_id;
  this_ptr->flags = source->flags;
  *(uint *)&(this_ptr->normal).x = *(uint *)&(source->normal).x;
  *(uint *)((int)&(this_ptr->normal).x + 4) = *(uint *)((int)&(source->normal).x + 4);
  *(uint *)&(this_ptr->normal).y = *(uint *)&(source->normal).y;
  *(uint *)((int)&(this_ptr->normal).y + 4) = *(uint *)((int)&(source->normal).y + 4);
  *(uint *)&(this_ptr->normal).z = *(uint *)&(source->normal).z;
  *(uint *)((int)&(this_ptr->normal).z + 4) = *(uint *)((int)&(source->normal).z + 4);
  return;
}
