// Name: shape_superopt.cpp_CObj_appendTo_FUN_005d2720
// Address: 005d2720
// Address Range: [[005d2720, 005d2871]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_appendTo_FUN_005d2720(CObj * this_ptr, CObj * dest_obj)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_appendTo_FUN_005d2720(CObj *this_ptr,CObj *dest_obj)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint unaff_EBP;
  uint *puVar5;
  CVert *pCVar6;
  byte bVar7;
  int *in_stack_00000010;
  
  bVar7 = 0;
  iVar2 = this_ptr->vertex_count;
  if ((dest_obj->vertex_count != 0) &&
     (iVar3 = (*this_ptr->vtable->addVertices)(this_ptr,dest_obj->vertex_count), iVar3 == 0)) {
    shape_superopt_cpp_logToFile_FUN_005c7910("Unable to add vertices to object");
    return 0;
  }
  if ((in_stack_00000010[2] != 0) &&
     (iVar3 = (*this_ptr->vtable->addPolygons)(this_ptr,in_stack_00000010[2]), iVar3 == 0)) {
    shape_superopt_cpp_logToFile_FUN_005c7910("Unable to add polygons to object");
    return 0;
  }
  puVar5 = (uint *)in_stack_00000010[1];
  pCVar6 = this_ptr->vertex_data + iVar2;
  for (uVar4 = (uint)(*in_stack_00000010 * 0x38) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(uint *)&(pCVar6->position).x = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    pCVar6 = (CVert *)((int)pCVar6 + (uint)bVar7 * -8 + 4);
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(byte *)&(pCVar6->position).x = *(byte *)puVar5;
    puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
    pCVar6 = (CVert *)((int)pCVar6 + (uint)bVar7 * -2 + 1);
  }
  if (unaff_EBP < (uint)this_ptr->poly_count) {
    iVar3 = unaff_EBP * 0x68;
    do {
      (**(code **)(*(int *)((int)(this_ptr->poly_array->uv_coords + 5) + iVar3 + 4) + 4))();
      piVar1 = (int *)((int)this_ptr->poly_array->uv_coords + iVar3 + -0xc);
      *piVar1 = *piVar1 + iVar2;
      piVar1 = (int *)((int)this_ptr->poly_array->uv_coords + iVar3 + -8);
      *piVar1 = *piVar1 + iVar2;
      *(int *)((int)this_ptr->poly_array->uv_coords + iVar3 + -4) =
           *(int *)((int)this_ptr->poly_array->uv_coords + iVar3 + -4) + iVar2;
      unaff_EBP = unaff_EBP + 1;
      iVar3 = iVar3 + 0x68;
    } while (unaff_EBP < (uint)this_ptr->poly_count);
  }
  return 1;
}
