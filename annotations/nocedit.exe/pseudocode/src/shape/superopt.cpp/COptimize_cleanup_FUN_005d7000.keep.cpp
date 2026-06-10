// Name: shape_superopt.cpp_COptimize_cleanup_FUN_005d7000
// Address: 005d7000
// MANUAL RECONSTRUCTION
// Address Range: [[005d7000, 005d70c5]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_COptimize_cleanup_FUN_005d7000(COptimize *this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_COptimize_cleanup_FUN_005d7000(COptimize *this_ptr)

{
  CComplexPolygon *pCVar1;
  uint uVar3;

  shape_superopt_cpp_CObj_free_FUN_005d2600(&this_ptr->base);
  uVar3 = 0;
  if (this_ptr->complex_polygon_count != 0) {
    do {
      shape_superopt_cpp_CComplexPolygon_free_FUN_005c79f0
                (this_ptr->complex_polygons[uVar3]);
      pCVar1 = this_ptr->complex_polygons[uVar3];
      if (pCVar1 != (CComplexPolygon *)0x0) {
        pCVar1 = shape_superopt_cpp_CComplexPolygon_dtor_FUN_005c79d0(pCVar1,0);
        shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(pCVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)this_ptr->complex_polygon_count);
  }
  if (this_ptr->complex_polygons != (CComplexPolygon **)0x0) {
    free(this_ptr->complex_polygons);
  }
  this_ptr->complex_polygons = (CComplexPolygon **)0x0;
  this_ptr->complex_polygon_count = 0;
  (*this_ptr->vtable->setWeldThreshold)(this_ptr,0.001);
  (*this_ptr->vtable->setCoplanarAngleThreshold)(this_ptr,0.001);
  (*this_ptr->vtable->setCoplanarDistanceThreshold)(this_ptr,0.001);
  (*this_ptr->vtable->setMaxPolygonSides)(this_ptr,0x10);
  return;
}
