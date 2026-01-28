// Name: shape_design.c_isNormalDotProductBelowThreshold_FUN_00461df0
// Address: 00461df0
// Address Range: [[00461df0, 00461e57]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_isNormalDotProductBelowThreshold_FUN_00461df0 (SShapeEditorPolygon *polygon1,SShapeEditorPolygon *polygon2,double threshold)

#include "nocturne.h"

int __cdecl
shape_design_c_isNormalDotProductBelowThreshold_FUN_00461df0
          (SShapeEditorPolygon *polygon1,SShapeEditorPolygon *polygon2,double threshold)

{
  uint local_14;
  
  local_14 = (uint)((polygon1->normal).z * (polygon2->normal).z +
                    (polygon1->normal).y * (polygon2->normal).y +
                    (polygon1->normal).x * (polygon2->normal).x <= (float)threshold);
  return local_14;
}
