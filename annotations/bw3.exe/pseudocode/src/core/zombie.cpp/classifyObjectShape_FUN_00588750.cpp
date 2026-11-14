// Name: core_zombie.cpp_classifyObjectShape_FUN_00588750
// Address: 00588750
// Address Range: [[00588750, 00588899]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_classifyObjectShape_FUN_00588750(CVector3f *dimensions)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_zombie_cpp_classifyObjectShape_FUN_00588750(CVector3f *dimensions)

{
  if ((((((float)_DAT_005d83bf <= dimensions->x) || ((float)_DAT_005d83bf <= dimensions->y)) ||
       ((float)_DAT_005d83bf <= dimensions->z)) ||
      ((dimensions->x <= (float)_DAT_005d83c7 || (dimensions->y <= (float)_DAT_005d83c7)))) ||
     (dimensions->z <= (float)_DAT_005d83c7)) {
    if (((dimensions->x < 1.0) && (dimensions->y < 1.0)) &&
       (((float)_DAT_005d83bf < dimensions->z &&
        (((dimensions->z < (float)_DAT_005d83cf && (dimensions->x <= dimensions->z)) &&
         (dimensions->y <= dimensions->z)))))) {
      return 1;
    }
    if ((((dimensions->x < 1.0) && (dimensions->y < 1.0)) &&
        ((1.0 < dimensions->z &&
         ((dimensions->z < (float)_DAT_005d83bf && (dimensions->x < dimensions->z)))))) &&
       (dimensions->y < dimensions->z)) {
      return 3;
    }
  }
  return 0;
}
