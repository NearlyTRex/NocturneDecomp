// Name: shape_superopt.cpp_COptimize_splitToConvex_FUN_005d7690
// Address: 005d7690
// Address Range: [[005d7690, 005d76de]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_COptimize_splitToConvex_FUN_005d7690(COptimize *this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_COptimize_splitToConvex_FUN_005d7690(COptimize *this_ptr)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (this_ptr->complex_polygon_count != 0) {
    iVar3 = 0;
    do {
      iVar1 = shape_superopt_cpp_CComplexPolygon_splitToConvex_FUN_005c84c0
                        (*(CComplexPolygon **)(iVar3 + (int)this_ptr->complex_polygons));
      if (iVar1 == 0) {
        shape_superopt_cpp_logToFile_FUN_005c7910("Unable to split polygon to convex... continuing anyway");
        return 0;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 < (uint)this_ptr->complex_polygon_count);
  }
  return 1;
}
