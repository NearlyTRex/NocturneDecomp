// Name: core_carved.cpp_classifyObjectShape_FUN_00428550
// Address: 00428550
// Address Range: [[00428550, 00428699]]
// Convention: __cdecl
// Signature: int __cdecl core_carved_cpp_classifyObjectShape_FUN_00428550(CVector3f *dimensions)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_carved_cpp_classifyObjectShape_FUN_00428550(CVector3f *dimensions)

{
  if ((((((float)_DAT_005d51cd <= dimensions->x) || ((float)_DAT_005d51cd <= dimensions->y)) ||
       ((float)_DAT_005d51cd <= dimensions->z)) ||
      ((dimensions->x <= (float)_DAT_005d51d5 || (dimensions->y <= (float)_DAT_005d51d5)))) ||
     (dimensions->z <= (float)_DAT_005d51d5)) {
    if (((dimensions->x < 1.0) && (dimensions->y < 1.0)) &&
       (((float)_DAT_005d51cd < dimensions->z &&
        (((dimensions->z < (float)_DAT_005d51dd && (dimensions->x <= dimensions->z)) &&
         (dimensions->y <= dimensions->z)))))) {
      return 1;
    }
    if ((((dimensions->x < 1.0) && (dimensions->y < 1.0)) &&
        ((1.0 < dimensions->z &&
         ((dimensions->z < (float)_DAT_005d51cd && (dimensions->x < dimensions->z)))))) &&
       (dimensions->y < dimensions->z)) {
      return 3;
    }
  }
  return 0;
}
