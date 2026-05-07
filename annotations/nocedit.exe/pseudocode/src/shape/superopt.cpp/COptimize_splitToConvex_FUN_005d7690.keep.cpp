// Name: shape_superopt.cpp_COptimize_splitToConvex_FUN_005d7690
// Address: 005d7690
// MANUAL RECONSTRUCTION
// Address Range: [[005d7690, 005d76de]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_COptimize_splitToConvex_FUN_005d7690(COptimize *this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_COptimize_splitToConvex_FUN_005d7690(COptimize *this_ptr)

{
  int iVar1;
  uint uVar2;

  for (uVar2 = 0; uVar2 < (uint)this_ptr->complex_polygon_count; uVar2 = uVar2 + 1) {
    iVar1 = shape_superopt_cpp_CComplexPolygon_splitToConvex_FUN_005c84c0
                      (this_ptr->complex_polygons[uVar2]);
    if (iVar1 == 0) {
      shape_superopt_cpp_logToFile_FUN_005c7910("Unable to split polygon to convex... continuing anyway");
      return 0;
    }
  }
  return 1;
}
