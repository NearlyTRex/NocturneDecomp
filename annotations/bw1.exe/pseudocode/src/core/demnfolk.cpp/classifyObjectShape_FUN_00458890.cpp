// Name: core_demnfolk.cpp_classifyObjectShape_FUN_00458890
// Address: 00458890
// Address Range: [[00458890, 004589d9]]
// Convention: __cdecl
// Signature: int __cdecl core_demnfolk_cpp_classifyObjectShape_FUN_00458890(CVector3f *dimensions)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_demnfolk_cpp_classifyObjectShape_FUN_00458890(CVector3f *dimensions)

{
  if ((((((float)_DAT_005d7d3b <= dimensions->x) || ((float)_DAT_005d7d3b <= dimensions->y)) ||
       ((float)_DAT_005d7d3b <= dimensions->z)) ||
      ((dimensions->x <= (float)_DAT_005d7d43 || (dimensions->y <= (float)_DAT_005d7d43)))) ||
     (dimensions->z <= (float)_DAT_005d7d43)) {
    if (((dimensions->x < 1.0) && (dimensions->y < 1.0)) &&
       (((float)_DAT_005d7d3b < dimensions->z &&
        (((dimensions->z < (float)_DAT_005d7d4b && (dimensions->x <= dimensions->z)) &&
         (dimensions->y <= dimensions->z)))))) {
      return 1;
    }
    if ((((dimensions->x < 1.0) && (dimensions->y < 1.0)) &&
        ((1.0 < dimensions->z &&
         ((dimensions->z < (float)_DAT_005d7d3b && (dimensions->x < dimensions->z)))))) &&
       (dimensions->y < dimensions->z)) {
      return 3;
    }
  }
  return 0;
}
