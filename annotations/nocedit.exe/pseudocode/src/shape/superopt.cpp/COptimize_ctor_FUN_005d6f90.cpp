// Name: shape_superopt.cpp_COptimize_ctor_FUN_005d6f90
// Address: 005d6f90
// Address Range: [[005d6f90, 005d6fc5]]
// Convention: __cdecl
// Signature: COptimize * __cdecl shape_superopt_cpp_COptimize_ctor_FUN_005d6f90(COptimize *this_ptr)

#include "nocturne.h"

COptimize * __cdecl shape_superopt_cpp_COptimize_ctor_FUN_005d6f90(COptimize *this_ptr)

{
  COptimize *this_ptr_00;
  
  this_ptr_00 = (COptimize *)shape_superopt_cpp_CObj_ctor_FUN_005d2230(&this_ptr->base,0,0);
  this_ptr_00->vtable = &g_COptimizeVTable;
  this_ptr_00->complex_polygons = (CComplexPolygon **)0x0;
  this_ptr_00->complex_polygon_count = 0;
  shape_superopt_cpp_COptimize_cleanup_FUN_005d7000(this_ptr_00);
  return this_ptr_00;
}
