// Name: shape_design.c_arePolygonsCoplanar_FUN_00461b70
// Address: 00461b70
// Address Range: [[00461b70, 00461c41]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_arePolygonsCoplanar_FUN_00461b70(SShapeEditorPolygon *polygon1_ptr,SShapeEditorPolygon *polygon2_ptr,float scale_factor,int tolerance)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl shape_design_c_arePolygonsCoplanar_FUN_00461b70(SShapeEditorPolygon *polygon1_ptr,SShapeEditorPolygon *polygon2_ptr,float scale_factor,int tolerance)

{
  uint uVar1;
  uint uVar2;
  int local_2c;
  
  uVar1 = (int)ROUND(ROUND((float)(int)scale_factor * (polygon1_ptr->normal).x)) -
          (int)ROUND(ROUND((float)(int)scale_factor * (polygon2_ptr->normal).x));
  uVar2 = (int)uVar1 >> 0x1f;
  if ((((int)((uVar1 ^ uVar2) - uVar2) < tolerance) &&
      (uVar1 = (int)ROUND(ROUND((float)(int)scale_factor * (polygon1_ptr->normal).y)) -
               (int)ROUND(ROUND((float)(int)scale_factor * (polygon2_ptr->normal).y)),
      uVar2 = (int)uVar1 >> 0x1f, (int)((uVar1 ^ uVar2) - uVar2) < tolerance)) &&
     (uVar1 = (int)ROUND(ROUND((float)(int)scale_factor * (polygon1_ptr->normal).z)) -
              (int)ROUND(ROUND((float)(int)scale_factor * (polygon2_ptr->normal).z)),
     uVar2 = (int)uVar1 >> 0x1f, (int)((uVar1 ^ uVar2) - uVar2) < tolerance)) {
    local_2c = 1;
  }
  else {
    local_2c = 0;
  }
  return local_2c;
}
