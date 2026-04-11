// Name: shape_design.c_normalizeVertex_FUN_00461e60
// Address: 00461e60
// Address Range: [[00461e60, 00461ed3]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_normalizeVertex_FUN_00461e60(CVector3d *vertex)

#include "nocturne.h"

void __cdecl shape_design_c_normalizeVertex_FUN_00461e60(CVector3d *vertex)

{
  double local_18;
  
  local_18 = SQRT(vertex->z * vertex->z + vertex->x * vertex->x + vertex->y * vertex->y);
  if ((((ulonglong)local_18 & 0x7fffffff00000000) == 0) && (local_18._0_4_ == 0)) {
    local_18 = 1.0;
  }
  vertex->x = vertex->x / local_18;
  vertex->y = vertex->y / local_18;
  vertex->z = vertex->z / local_18;
  return;
}
