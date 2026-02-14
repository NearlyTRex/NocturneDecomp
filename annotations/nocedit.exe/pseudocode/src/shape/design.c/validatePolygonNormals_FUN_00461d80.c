// Name: shape_design.c_validatePolygonNormals_FUN_00461d80
// Address: 00461d80
// Address Range: [[00461d80, 00461de7]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_validatePolygonNormals_FUN_00461d80(SShapeEditorPolygon *polygon1,SShapeEditorPolygon *polygon2,double cos_tolerance)

#include "nocturne.h"

int __cdecl shape_design_c_validatePolygonNormals_FUN_00461d80(SShapeEditorPolygon *polygon1,SShapeEditorPolygon *polygon2,double cos_tolerance)

{
  uint local_14;
  
  local_14 = (uint)((float)cos_tolerance <=
                   (polygon1->normal).z * (polygon2->normal).z +
                   (polygon1->normal).y * (polygon2->normal).y +
                   (polygon1->normal).x * (polygon2->normal).x);
  return local_14;
}
