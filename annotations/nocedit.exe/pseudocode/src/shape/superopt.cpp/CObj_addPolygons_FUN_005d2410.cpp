// Name: shape_superopt.cpp_CObj_addPolygons_FUN_005d2410
// Address: 005d2410
// Address Range: [[005d2410, 005d24fe]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_addPolygons_FUN_005d2410(CObj *this_ptr,int add_count)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_addPolygons_FUN_005d2410(CObj *this_ptr,int add_count)

{
  CPoly *pCVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  CPoly local_78;
  uint local_10;
  
  bVar6 = 0;
  pCVar1 = realloc
                     (this_ptr->poly_array,(this_ptr->poly_count + add_count) * 0x68);
  if (pCVar1 != (CPoly *)0x0) {
    this_ptr->poly_array = pCVar1;
    shape_superopt_cpp_CPoly_ctor_FUN_005cc620(&local_78);
    iVar3 = this_ptr->poly_count * 0x68;
    for (local_10 = this_ptr->poly_count; uVar4 = this_ptr->poly_count + add_count, local_10 < uVar4
        ; local_10 = local_10 + 1) {
      pCVar1 = &local_78;
      puVar5 = (uint *)
               ((int)&((CPoly *)(this_ptr->poly_array->uv_coords + -1))->parent_obj + iVar3);
      for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = pCVar1->parent_obj;
        pCVar1 = (CPoly *)((int)pCVar1 + ((uint)bVar6 * -2 + 1) * 4);
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(byte *)puVar5 = *(byte *)&pCVar1->parent_obj;
        pCVar1 = (CPoly *)((int)pCVar1 + (uint)bVar6 * -2 + 1);
        puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
      }
      iVar2 = (int)&((CPoly *)(this_ptr->poly_array->uv_coords + -1))->parent_obj + iVar3;
      (*(code *)**(uint **)(iVar2 + 100))(iVar2,this_ptr);
      iVar3 = iVar3 + 0x68;
    }
    this_ptr->poly_count = uVar4;
    shape_superopt_cpp_CPoly_dtor_FUN_005cc660(&local_78,0);
    return 1;
  }
  shape_superopt_cpp_logToFile_FUN_005c7910("Unable to add polygons to object");
  return 0;
}
