// Name: shape_design.c_polygonMergerSelectAndProcess_FUN_00465160
// Address: 00465160
// Address Range: [[00465160, 004651aa]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_polygonMergerSelectAndProcess_FUN_00465160(int polygon_index,float tolerance)

#include "nocturne.h"

void __cdecl
shape_design_c_polygonMergerSelectAndProcess_FUN_00465160(int polygon_index,float tolerance)

{
  if (g_SecondaryPolygonIndex == -1) {
    g_SecondaryPolygonIndex = polygon_index;
  }
  else {
    shape_design_c_mergePolygonsWithValidation_FUN_00465b40
              (g_SecondaryPolygonIndex,polygon_index,tolerance,0);
    g_SecondaryPolygonIndex = -1;
  }
  return;
}
