// Name: core_carved.cpp_classifyObjectShape_FUN_004257e0
// Address: 004257e0
// Address Range: [[004257e0, 00425929]]
// Convention: __cdecl
// Signature: int __cdecl core_carved_cpp_classifyObjectShape_FUN_004257e0(CVector3f *dimensions)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_carved_cpp_classifyObjectShape_FUN_004257e0(CVector3f *dimensions)

{
  if ((((((float)_DAT_005b79af <= dimensions->x) || ((float)_DAT_005b79af <= dimensions->y)) ||
       ((float)_DAT_005b79af <= dimensions->z)) ||
      ((dimensions->x <= (float)_DAT_005b79b7 || (dimensions->y <= (float)_DAT_005b79b7)))) ||
     (dimensions->z <= (float)_DAT_005b79b7)) {
    if (((dimensions->x < 1.0) && (dimensions->y < 1.0)) &&
       (((float)_DAT_005b79af < dimensions->z &&
        (((dimensions->z < (float)_DAT_005b79bf && (dimensions->x <= dimensions->z)) &&
         (dimensions->y <= dimensions->z)))))) {
      return 1;
    }
    if ((((dimensions->x < 1.0) && (dimensions->y < 1.0)) &&
        ((1.0 < dimensions->z &&
         ((dimensions->z < (float)_DAT_005b79af && (dimensions->x < dimensions->z)))))) &&
       (dimensions->y < dimensions->z)) {
      return 3;
    }
  }
  return 0;
}
