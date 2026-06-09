// Name: shape_design.c_arePolygonsCoplanar_FUN_00461b70
// Address: 00461b70
// MANUAL RECONSTRUCTION
// Address Range: [[00461b70, 00461c41]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_arePolygonsCoplanar_FUN_00461b70(SShapeEditorPolygon *polygon1_ptr,SShapeEditorPolygon *polygon2_ptr,int scale_factor,int tolerance)

#include "nocturne.h"

int __cdecl shape_design_c_arePolygonsCoplanar_FUN_00461b70(SShapeEditorPolygon *polygon1_ptr,SShapeEditorPolygon *polygon2_ptr,int scale_factor,int tolerance)

{
  uint uVar1;
  uint uVar3;
  int local_2c;

  uVar1 = ROUND((float)scale_factor * (polygon1_ptr->normal).x) -
          ROUND((float)scale_factor * (polygon2_ptr->normal).x);
  if (((ABS((int)uVar1) < tolerance) &&
      (uVar3 = ROUND((float)scale_factor * (polygon1_ptr->normal).y) -
               ROUND((float)scale_factor * (polygon2_ptr->normal).y),
      ABS((int)uVar3) < tolerance)) &&
     (uVar3 = ROUND((float)scale_factor * (polygon1_ptr->normal).z) -
              ROUND((float)scale_factor * (polygon2_ptr->normal).z),
     ABS((int)uVar3) < tolerance)) {
    local_2c = 1;
  }
  else {
    local_2c = 0;
  }
  return local_2c;
}
