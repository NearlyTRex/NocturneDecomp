// Name: shape_superopt.cpp_CObj_copyFrom_FUN_005d2650
// Address: 005d2650
// Address Range: [[005d2650, 005d2715]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_copyFrom_FUN_005d2650(CObj *this_ptr,CObj *source)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_copyFrom_FUN_005d2650(CObj *this_ptr,CObj *source)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  CVert *pCVar5;
  CVert *pCVar6;
  byte bVar7;
  
  bVar7 = 0;
  (*this_ptr->vtable->free)(this_ptr);
  (*this_ptr->vtable->reset)(this_ptr);
  iVar1 = (*this_ptr->vtable->init)(this_ptr,source->poly_count,source->vertex_count);
  if (iVar1 == 0) {
    shape_superopt_cpp_logToFile_FUN_005c7910("Unable to allocate RAM for object copy");
    return 0;
  }
  pCVar5 = source->vertex_data;
  pCVar6 = this_ptr->vertex_data;
  for (uVar3 = (uint)(this_ptr->vertex_count * 0x38) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(uint *)&(pCVar6->position).x = *(uint *)&(pCVar5->position).x;
    pCVar5 = (CVert *)((int)pCVar5 + (uint)bVar7 * -8 + 4);
    pCVar6 = (CVert *)((int)pCVar6 + (uint)bVar7 * -8 + 4);
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(byte *)&(pCVar6->position).x = *(byte *)&(pCVar5->position).x;
    pCVar5 = (CVert *)((int)pCVar5 + (uint)bVar7 * -2 + 1);
    pCVar6 = (CVert *)((int)pCVar6 + (uint)bVar7 * -2 + 1);
  }
  uVar3 = 0;
  if (this_ptr->poly_count != 0) {
    iVar1 = 0;
    do {
      iVar4 = (int)&((CPoly *)(source->poly_array->uv_coords + -1))->parent_obj + iVar1;
      iVar2 = (int)&((CPoly *)(this_ptr->poly_array->uv_coords + -1))->parent_obj + iVar1;
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + 0x68;
      (**(code **)(*(int *)(iVar2 + 100) + 4))(iVar2,iVar4,this_ptr);
    } while (uVar3 < (uint)this_ptr->poly_count);
  }
  this_ptr->flags = source->flags;
  return 1;
}
