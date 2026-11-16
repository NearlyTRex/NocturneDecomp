// Name: core_demnfolk.cpp_classifyObjectShape_FUN_004549e0
// Address: 004549e0
// Address Range: [[004549e0, 00454b29]]
// Convention: __cdecl
// Signature: int __cdecl core_demnfolk_cpp_classifyObjectShape_FUN_004549e0(CVector3f *dimensions)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_demnfolk_cpp_classifyObjectShape_FUN_004549e0(CVector3f *dimensions)

{
  if ((((((float)_DAT_005ba3a2 <= dimensions->x) || ((float)_DAT_005ba3a2 <= dimensions->y)) ||
       ((float)_DAT_005ba3a2 <= dimensions->z)) ||
      ((dimensions->x <= (float)_DAT_005ba3aa || (dimensions->y <= (float)_DAT_005ba3aa)))) ||
     (dimensions->z <= (float)_DAT_005ba3aa)) {
    if (((dimensions->x < 1.0) && (dimensions->y < 1.0)) &&
       (((float)_DAT_005ba3a2 < dimensions->z &&
        (((dimensions->z < (float)_DAT_005ba3b2 && (dimensions->x <= dimensions->z)) &&
         (dimensions->y <= dimensions->z)))))) {
      return 1;
    }
    if ((((dimensions->x < 1.0) && (dimensions->y < 1.0)) &&
        ((1.0 < dimensions->z &&
         ((dimensions->z < (float)_DAT_005ba3a2 && (dimensions->x < dimensions->z)))))) &&
       (dimensions->y < dimensions->z)) {
      return 3;
    }
  }
  return 0;
}
