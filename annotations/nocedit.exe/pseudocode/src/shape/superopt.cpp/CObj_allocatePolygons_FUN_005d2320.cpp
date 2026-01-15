// Name: shape_superopt.cpp_CObj_allocatePolygons_FUN_005d2320
// Address: 005d2320
// Address Range: [[005d2320, 005d240d]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_allocatePolygons_FUN_005d2320(CObj * this_ptr, int poly_count)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_allocatePolygons_FUN_005d2320(CObj *this_ptr,int poly_count)

{
  CPoly *pCVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  CPoly local_78;
  uint local_10;
  
  bVar5 = 0;
  this_ptr->poly_count = poly_count;
  pCVar1 = crt_memory_c_malloc_FUN_00601bb0(poly_count * 0x68);
  this_ptr->poly_array = pCVar1;
  if (pCVar1 != (CPoly *)0x0) {
    shape_superopt_cpp_CPoly_ctor_FUN_005cc620(&local_78);
    local_10 = 0;
    if (this_ptr->poly_count != 0) {
      iVar3 = 0;
      do {
        pCVar1 = &local_78;
        puVar4 = (uint *)
                 ((int)&((CPoly *)(this_ptr->poly_array->uv_coords + -1))->parent_obj + iVar3);
        for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = pCVar1->parent_obj;
          pCVar1 = (CPoly *)((int)pCVar1 + ((uint)bVar5 * -2 + 1) * 4);
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(byte *)puVar4 = *(byte *)&pCVar1->parent_obj;
          pCVar1 = (CPoly *)((int)pCVar1 + (uint)bVar5 * -2 + 1);
          puVar4 = (uint *)((int)puVar4 + (uint)bVar5 * -2 + 1);
        }
        (*(code *)**(uint **)((int)(this_ptr->poly_array->uv_coords + 5) + iVar3 + 4))();
        iVar3 = iVar3 + 0x68;
        local_10 = local_10 + 1;
      } while (local_10 < (uint)this_ptr->poly_count);
    }
    shape_superopt_cpp_CPoly_dtor_FUN_005cc660(&local_78);
    return 1;
  }
  if (this_ptr->vertex_data != (CVert *)0x0) {
    crt_memory_c_free_FUN_00601cd0(this_ptr->vertex_data);
  }
  this_ptr->vertex_data = (CVert *)0x0;
  shape_superopt_cpp_logToFile_FUN_005c7910("Unable to allocate RAM for object polygons");
  this_ptr->is_valid = 0;
  return 0;
}
