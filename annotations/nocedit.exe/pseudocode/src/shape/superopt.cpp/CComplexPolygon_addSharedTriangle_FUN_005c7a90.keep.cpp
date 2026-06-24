// Name: shape_superopt.cpp_CComplexPolygon_addSharedTriangle_FUN_005c7a90
// Address: 005c7a90
// MANUAL RECONSTRUCTION
// Address Range: [[005c7a90, 005c7b18]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_addSharedTriangle_FUN_005c7a90(CComplexPolygon *this_ptr,CPoly *poly)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_addSharedTriangle_FUN_005c7a90(CComplexPolygon *this_ptr,CPoly *poly)

{
  int iVar1;
  CPoly **ppCVar2;
  
  if ((this_ptr->polygon_list != (CPoly **)0x0) &&
     (poly->parent_obj != (*this_ptr->polygon_list)->parent_obj)) {
    return 0;
  }
  if (this_ptr->polygon_list == (CPoly **)0x0) {
    this_ptr->normal = poly->normal.impl;
    this_ptr->material_id = poly->material_id;
  }
  ppCVar2 = (CPoly **)realloc
                      (this_ptr->polygon_list,(this_ptr->polygon_count + 1) * 4);
  if (ppCVar2 != (CPoly **)0x0) {
    this_ptr->polygon_list = ppCVar2;
    iVar1 = this_ptr->polygon_count;
    this_ptr->polygon_count = iVar1 + 1;
    this_ptr->polygon_list[iVar1] = poly;
  }
  return (uint)(ppCVar2 != (CPoly **)0x0);
}
