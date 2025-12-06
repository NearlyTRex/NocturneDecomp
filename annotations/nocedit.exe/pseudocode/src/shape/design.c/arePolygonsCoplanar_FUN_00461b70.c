// Name: shape_design.c_arePolygonsCoplanar_FUN_00461b70
// Address: 00461b70
// Address Range: [[00461b70, 00461c41]]
// Convention: __cdecl
// Signature: int shape_design.c_arePolygonsCoplanar_FUN_00461b70(SShapeEditorPolygon * polygon1_ptr, SShapeEditorPolygon * polygon2_ptr, float scale_factor, int tolerance)

#include "nocturne.h"

int __cdecl
shape_design_c_arePolygonsCoplanar_FUN_00461b70
          (SShapeEditorPolygon *polygon1_ptr,SShapeEditorPolygon *polygon2_ptr,float scale_factor,
          int tolerance)

{
  uint in_EDX;
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  int local_2c;
  
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,polygon1_ptr));
  dVar4 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar4 >> 0x20),polygon1_ptr));
  dVar4 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar4 >> 0x20),polygon1_ptr));
  dVar4 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar4 >> 0x20),polygon2_ptr));
  fVar2 = (float10)(int)scale_factor * (float10)(polygon2_ptr->normal).y;
  dVar4 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar4 >> 0x20),polygon2_ptr));
  fVar3 = (float10)(int)scale_factor * (float10)(polygon2_ptr->normal).z;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar4 >> 0x20),polygon2_ptr));
  if (((tolerance < 0x3d) ||
      (uVar1 = (int)(0x461bc9U - (int)ROUND(fVar2)) >> 0x1f,
      tolerance <= (int)((0x461bc9U - (int)ROUND(fVar2) ^ uVar1) - uVar1))) ||
     (uVar1 = (int)(0x461bddU - (int)ROUND(fVar3)) >> 0x1f,
     tolerance <= (int)((0x461bddU - (int)ROUND(fVar3) ^ uVar1) - uVar1))) {
    local_2c = 0;
  }
  else {
    local_2c = 1;
  }
  return local_2c;
}
