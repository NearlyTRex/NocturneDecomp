// Name: shape_superopt.cpp_COptimize_addComplexPolygon_FUN_005d76e0
// Address: 005d76e0
// Address Range: [[005d76e0, 005d7743]]
// Convention: __cdecl
// Signature: CComplexPolygon * __cdecl shape_superopt_cpp_COptimize_addComplexPolygon_FUN_005d76e0(COptimize *this_ptr,CComplexPolygon *polygon)

#include "nocturne.h"

CComplexPolygon * __cdecl shape_superopt_cpp_COptimize_addComplexPolygon_FUN_005d76e0(COptimize *this_ptr,CComplexPolygon *polygon)

{
  int iVar1;
  CComplexPolygon **ppCVar2;
  CComplexPolygon *pCVar3;
  
  ppCVar2 = (CComplexPolygon **)realloc
                      (this_ptr->complex_polygons,(this_ptr->complex_polygon_count + 1) * 4);
  pCVar3 = (CComplexPolygon *)0x0;
  if (ppCVar2 != (CComplexPolygon **)0x0) {
    if (polygon == (CComplexPolygon *)0x0) {
      pCVar3 = (CComplexPolygon *)shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(0x34);
      polygon = (CComplexPolygon *)0x0;
      if (pCVar3 != (CComplexPolygon *)0x0) {
        polygon = shape_superopt_cpp_CComplexPolygon_ctor_FUN_005c79a0(pCVar3);
      }
      if (polygon == (CComplexPolygon *)0x0) {
        return (CComplexPolygon *)0x0;
      }
    }
    iVar1 = this_ptr->complex_polygon_count;
    this_ptr->complex_polygons = ppCVar2;
    this_ptr->complex_polygon_count = iVar1 + 1;
    this_ptr->complex_polygons[iVar1] = polygon;
    pCVar3 = polygon;
  }
  return pCVar3;
}
