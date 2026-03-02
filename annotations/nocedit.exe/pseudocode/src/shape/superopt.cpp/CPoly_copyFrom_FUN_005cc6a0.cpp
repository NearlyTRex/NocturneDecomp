// Name: shape_superopt.cpp_CPoly_copyFrom_FUN_005cc6a0
// Address: 005cc6a0
// Address Range: [[005cc6a0, 005cc71e]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_copyFrom_FUN_005cc6a0(CPoly *this_ptr,CPoly *source,CObj *parent_obj)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_copyFrom_FUN_005cc6a0(CPoly *this_ptr,CPoly *source,CObj *parent_obj)

{
  int iVar1;
  CPoly *pCVar2;
  CP2D *pCVar3;
  CPoly *pCVar4;
  CP2D *pCVar5;
  
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
    *(uint *)&(pCVar5->impl).x = *(uint *)&(pCVar3->impl).x;
    pCVar3 = (CP2D *)((int)&(pCVar3->impl).x + 4);
    pCVar5 = (CP2D *)((int)&(pCVar5->impl).x + 4);
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(byte *)&(pCVar5->impl).x = *(byte *)&(pCVar3->impl).x;
    pCVar3 = (CP2D *)((int)&(pCVar3->impl).x + 1);
    pCVar5 = (CP2D *)((int)&(pCVar5->impl).x + 1);
  }
  this_ptr->material_id = source->material_id;
  this_ptr->flags = source->flags;
  *(uint *)&(this_ptr->normal).impl.x = *(uint *)&(source->normal).impl.x;
  *(uint *)((int)&(this_ptr->normal).impl.x + 4) =
       *(uint *)((int)&(source->normal).impl.x + 4);
  *(uint *)&(this_ptr->normal).impl.y = *(uint *)&(source->normal).impl.y;
  *(uint *)((int)&(this_ptr->normal).impl.y + 4) =
       *(uint *)((int)&(source->normal).impl.y + 4);
  *(uint *)&(this_ptr->normal).impl.z = *(uint *)&(source->normal).impl.z;
  *(uint *)((int)&(this_ptr->normal).impl.z + 4) =
       *(uint *)((int)&(source->normal).impl.z + 4);
  return;
}
