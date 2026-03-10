// Name: core_zombie.cpp_classifyObjectShape_FUN_005f8e50
// Address: 005f8e50
// Address Range: [[005f8e50, 005f8f99]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_classifyObjectShape_FUN_005f8e50(CVector3f *dimensions)

#include "nocturne.h"

int __cdecl core_zombie_cpp_classifyObjectShape_FUN_005f8e50(CVector3f *dimensions)

{
  if ((((((float)2 <= dimensions->x) || ((float)2 <= dimensions->y)) ||
       ((float)2 <= dimensions->z)) ||
      ((dimensions->x <= (float)0.69999999999999996 || (dimensions->y <= (float)0.69999999999999996)))) ||
     (dimensions->z <= (float)0.69999999999999996)) {
    if (((dimensions->x < 1.0) && (dimensions->y < 1.0)) &&
       (((float)2 < dimensions->z &&
        (((dimensions->z < (float)6 && (dimensions->x <= dimensions->z)) &&
         (dimensions->y <= dimensions->z)))))) {
      return 1;
    }
    if ((((dimensions->x < 1.0) && (dimensions->y < 1.0)) &&
        ((1.0 < dimensions->z &&
         ((dimensions->z < (float)2 && (dimensions->x < dimensions->z)))))) &&
       (dimensions->y < dimensions->z)) {
      return 3;
    }
  }
  return 0;
}
