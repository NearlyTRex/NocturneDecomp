// Name: shape_superopt.cpp_CObj_appendTo_FUN_005d2720
// Address: 005d2720
// Address Range: [[005d2720, 005d2871]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_appendTo_FUN_005d2720(CObj *this_ptr,CObj *dest_obj)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_appendTo_FUN_005d2720(CObj *this_ptr,CObj *dest_obj)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  CVert *pCVar6;
  int iVar7;
  CVert *pCVar8;
  byte bVar9;
  uint local_10;
  
  bVar9 = 0;
  local_10 = this_ptr->poly_count;
  iVar2 = this_ptr->vertex_count;
  if ((dest_obj->vertex_count != 0) &&
     (iVar3 = (*this_ptr->vtable->addVertices)(this_ptr,dest_obj->vertex_count), iVar3 == 0)) {
    shape_superopt_cpp_logToFile_FUN_005c7910("Unable to add vertices to object");
    return 0;
  }
  if ((dest_obj->poly_count != 0) &&
     (iVar3 = (*this_ptr->vtable->addPolygons)(this_ptr,dest_obj->poly_count), iVar3 == 0)) {
    shape_superopt_cpp_logToFile_FUN_005c7910("Unable to add polygons to object");
    return 0;
  }
  pCVar6 = dest_obj->vertex_data;
  pCVar8 = this_ptr->vertex_data + iVar2;
  for (uVar5 = (uint)(dest_obj->vertex_count * 0x38) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(uint *)&(pCVar8->position).x = *(uint *)&(pCVar6->position).x;
    pCVar6 = (CVert *)((int)pCVar6 + (uint)bVar9 * -8 + 4);
    pCVar8 = (CVert *)((int)pCVar8 + (uint)bVar9 * -8 + 4);
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(byte *)&(pCVar8->position).x = *(byte *)&(pCVar6->position).x;
    pCVar6 = (CVert *)((int)pCVar6 + (uint)bVar9 * -2 + 1);
    pCVar8 = (CVert *)((int)pCVar8 + (uint)bVar9 * -2 + 1);
  }
  if (local_10 < (uint)this_ptr->poly_count) {
    iVar3 = 0;
    iVar7 = local_10 * 0x68;
    do {
      iVar4 = (int)&((CPoly *)(this_ptr->poly_array->uv_coords + -1))->parent_obj + iVar7;
      (**(code **)(*(int *)(iVar4 + 100) + 4))
                (iVar4,(int)&((CPoly *)(dest_obj->poly_array->uv_coords + -1))->parent_obj + iVar3,
                 this_ptr);
      piVar1 = (int *)((int)this_ptr->poly_array->uv_coords + iVar7 + -0xc);
      *piVar1 = *piVar1 + iVar2;
      piVar1 = (int *)((int)this_ptr->poly_array->uv_coords + iVar7 + -8);
      *piVar1 = *piVar1 + iVar2;
      *(int *)((int)this_ptr->poly_array->uv_coords + iVar7 + -4) =
           *(int *)((int)this_ptr->poly_array->uv_coords + iVar7 + -4) + iVar2;
      iVar3 = iVar3 + 0x68;
      local_10 = local_10 + 1;
      iVar7 = iVar7 + 0x68;
    } while (local_10 < (uint)this_ptr->poly_count);
  }
  return 1;
}
