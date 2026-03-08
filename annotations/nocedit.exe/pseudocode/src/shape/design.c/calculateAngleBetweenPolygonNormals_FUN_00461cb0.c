// Name: shape_design.c_calculateAngleBetweenPolygonNormals_FUN_00461cb0
// Address: 00461cb0
// Address Range: [[00461cb0, 00461d22]]
// Convention: __cdecl
// Signature: double __cdecl shape_design_c_calculateAngleBetweenPolygonNormals_FUN_00461cb0(SShapeEditorPolygon *normal1_ptr,SShapeEditorPolygon *normal2_ptr)

#include "nocturne.h"

double __cdecl shape_design_c_calculateAngleBetweenPolygonNormals_FUN_00461cb0(SShapeEditorPolygon *normal1_ptr,SShapeEditorPolygon *normal2_ptr)

{
  double dVar1;
  
  dVar1 = shape_design_c_clampedArccos_FUN_00461c50
                    ((double)((normal1_ptr->normal).z * (normal2_ptr->normal).z +
                             (normal1_ptr->normal).y * (normal2_ptr->normal).y +
                             (normal1_ptr->normal).x * (normal2_ptr->normal).x));
  return dVar1 * 57.295779513079999;
}
