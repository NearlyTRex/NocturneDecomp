// Name: core_zombie.cpp_classifyObjectShape_FUN_00595910
// Address: 00595910
// Address Range: [[00595910, 00595a59]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_classifyObjectShape_FUN_00595910(CVector3f *dimensions)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_zombie_cpp_classifyObjectShape_FUN_00595910(CVector3f *dimensions)

{
  if ((((((float)_DAT_005eee2a <= dimensions->x) || ((float)_DAT_005eee2a <= dimensions->y)) ||
       ((float)_DAT_005eee2a <= dimensions->z)) ||
      ((dimensions->x <= (float)_DAT_005eee32 || (dimensions->y <= (float)_DAT_005eee32)))) ||
     (dimensions->z <= (float)_DAT_005eee32)) {
    if (((dimensions->x < 1.0) && (dimensions->y < 1.0)) &&
       (((float)_DAT_005eee2a < dimensions->z &&
        (((dimensions->z < (float)_DAT_005eee3a && (dimensions->x <= dimensions->z)) &&
         (dimensions->y <= dimensions->z)))))) {
      return 1;
    }
    if ((((dimensions->x < 1.0) && (dimensions->y < 1.0)) &&
        ((1.0 < dimensions->z &&
         ((dimensions->z < (float)_DAT_005eee2a && (dimensions->x < dimensions->z)))))) &&
       (dimensions->y < dimensions->z)) {
      return 3;
    }
  }
  return 0;
}
