// Name: core_zombie.cpp_classifyObjectShape_FUN_005ba990
// Address: 005ba990
// Address Range: [[005ba990, 005baad9]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_classifyObjectShape_FUN_005ba990(CVector3f *dimensions)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_zombie_cpp_classifyObjectShape_FUN_005ba990(CVector3f *dimensions)

{
  if ((((((float)_DAT_005fa3fc <= dimensions->x) || ((float)_DAT_005fa3fc <= dimensions->y)) ||
       ((float)_DAT_005fa3fc <= dimensions->z)) ||
      ((dimensions->x <= (float)_DAT_005fa404 || (dimensions->y <= (float)_DAT_005fa404)))) ||
     (dimensions->z <= (float)_DAT_005fa404)) {
    if (((dimensions->x < 1.0) && (dimensions->y < 1.0)) &&
       (((float)_DAT_005fa3fc < dimensions->z &&
        (((dimensions->z < (float)_DAT_005fa40c && (dimensions->x <= dimensions->z)) &&
         (dimensions->y <= dimensions->z)))))) {
      return 1;
    }
    if ((((dimensions->x < 1.0) && (dimensions->y < 1.0)) &&
        ((1.0 < dimensions->z &&
         ((dimensions->z < (float)_DAT_005fa3fc && (dimensions->x < dimensions->z)))))) &&
       (dimensions->y < dimensions->z)) {
      return 3;
    }
  }
  return 0;
}
