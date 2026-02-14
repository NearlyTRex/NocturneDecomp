// Name: shape_design.c_calculateAngleBetweenPolygonNormals_FUN_00461cb0
// Address: 00461cb0
// Address Range: [[00461cb0, 00461d22]]
// Convention: __cdecl
// Signature: double __cdecl shape_design_c_calculateAngleBetweenPolygonNormals_FUN_00461cb0(SShapeEditorPolygon *normal1_ptr,SShapeEditorPolygon *normal2_ptr)

#include "nocturne.h"

double __cdecl shape_design_c_calculateAngleBetweenPolygonNormals_FUN_00461cb0(SShapeEditorPolygon *normal1_ptr,SShapeEditorPolygon *normal2_ptr)

{
  double dVar1;
  int in_stack_00000004;
  uint in_stack_ffffffe0;
  
  dVar1 = shape_design_c_clampedArccos_FUN_00461c50
                    ((double)CONCAT44(in_stack_ffffffe0,
                                      (int)((ulonglong)
                                            (double)(*(float *)(in_stack_00000004 + 0xb0) *
                                                     (normal1_ptr->normal).z +
                                                    *(float *)(in_stack_00000004 + 0xac) *
                                                    (normal1_ptr->normal).y +
                                                    *(float *)(in_stack_00000004 + 0xa8) *
                                                    (normal1_ptr->normal).x) >> 0x20)));
  return dVar1 * 57.295779513079999;
}
