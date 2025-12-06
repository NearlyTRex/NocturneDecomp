// Name: shape_design.c_isAngleBelowThreshold_FUN_00461d30
// Address: 00461d30
// Address Range: [[00461d30, 00461d76]]
// Convention: __cdecl
// Signature: int shape_design.c_isAngleBelowThreshold_FUN_00461d30(SShapeEditorPolygon * polygon1, SShapeEditorPolygon * polygon2, double angle_threshold)

#include "nocturne.h"

int __cdecl
shape_design_c_isAngleBelowThreshold_FUN_00461d30
          (SShapeEditorPolygon *polygon1,SShapeEditorPolygon *polygon2,double angle_threshold)

{
  double dVar1;
  SShapeEditorPolygon *in_stack_ffffffe4;
  uint local_14;
  
  dVar1 = shape_design_c_calculateAngleBetweenPolygonNormals_FUN_00461cb0
                    (polygon2,in_stack_ffffffe4);
  local_14 = (uint)(dVar1 < angle_threshold);
  return local_14;
}
