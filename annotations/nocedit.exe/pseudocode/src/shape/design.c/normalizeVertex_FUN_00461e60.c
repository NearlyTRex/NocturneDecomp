// Name: shape_design.c_normalizeVertex_FUN_00461e60
// Address: 00461e60
// Address Range: [[00461e60, 00461ed3]]
// Convention: __cdecl
// Signature: void shape_design.c_normalizeVertex_FUN_00461e60(CVector3f * vertex)

#include "nocturne.h"

void __cdecl shape_design_c_normalizeVertex_FUN_00461e60(CVector3f *vertex)

{
  double local_18;
  
  local_18 = SQRT(*(double *)&vertex[1].y * *(double *)&vertex[1].y +
                  *(double *)vertex * *(double *)vertex +
                  *(double *)&vertex->z * *(double *)&vertex->z);
  if ((((ulonglong)local_18 & 0x7fffffff00000000) == 0) && (local_18._0_4_ == 0)) {
    local_18 = 1.0;
  }
  *(double *)vertex = *(double *)vertex / local_18;
  *(double *)&vertex->z = *(double *)&vertex->z / local_18;
  *(double *)&vertex[1].y = *(double *)&vertex[1].y / local_18;
  return;
}
