// Name: shape_design.c_arePolygonsCoplanar_FUN_00461b70
// Address: 00461b70
// Address Range: [[00461b70, 00461c41]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_arePolygonsCoplanar_FUN_00461b70 (SShapeEditorPolygon *polygon1_ptr,SShapeEditorPolygon *polygon2_ptr,float scale_factor, int tolerance)

#include "nocturne.h"

int __cdecl
shape_design_c_arePolygonsCoplanar_FUN_00461b70
          (SShapeEditorPolygon *polygon1_ptr,SShapeEditorPolygon *polygon2_ptr,float scale_factor,
          int tolerance)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int local_2c;
  
  dVar2 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float)(int)scale_factor * (polygon1_ptr->normal).x));
  dVar3 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float)(int)scale_factor * (polygon1_ptr->normal).y));
  dVar4 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float)(int)scale_factor * (polygon1_ptr->normal).z));
  dVar5 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float)(int)scale_factor * (polygon2_ptr->normal).x));
  dVar6 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float)(int)scale_factor * (polygon2_ptr->normal).y));
  dVar7 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float)(int)scale_factor * (polygon2_ptr->normal).z));
  uVar1 = (int)ROUND(dVar2) - (int)ROUND(dVar5) >> 0x1f;
  if ((((int)(((int)ROUND(dVar2) - (int)ROUND(dVar5) ^ uVar1) - uVar1) < tolerance) &&
      (uVar1 = (int)ROUND(dVar3) - (int)ROUND(dVar6) >> 0x1f,
      (int)(((int)ROUND(dVar3) - (int)ROUND(dVar6) ^ uVar1) - uVar1) < tolerance)) &&
     (uVar1 = (int)ROUND(dVar4) - (int)ROUND(dVar7) >> 0x1f,
     (int)(((int)ROUND(dVar4) - (int)ROUND(dVar7) ^ uVar1) - uVar1) < tolerance)) {
    local_2c = 1;
  }
  else {
    local_2c = 0;
  }
  return local_2c;
}
