// Name: core_zombie.cpp_FUN_005ba990
// Address: 005ba990
// Address Range: [[005ba990, 005baad9]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_FUN_005ba990(CVector3f *dimensions)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_zombie_cpp_FUN_005ba990(CVector3f *dimensions)

{
  if ((((((float)_DAT_005fa3fc <= *(float *)dimensions) ||
        ((float)_DAT_005fa3fc <= *(float *)&dimensions->field_0x4)) ||
       ((float)_DAT_005fa3fc <= *(float *)&dimensions->field_0x8)) ||
      ((*(float *)dimensions <= (float)_DAT_005fa404 ||
       (*(float *)&dimensions->field_0x4 <= (float)_DAT_005fa404)))) ||
     (*(float *)&dimensions->field_0x8 <= (float)_DAT_005fa404)) {
    if (((*(float *)dimensions < 1.0) && (*(float *)&dimensions->field_0x4 < 1.0)) &&
       (((float)_DAT_005fa3fc < *(float *)&dimensions->field_0x8 &&
        (((*(float *)&dimensions->field_0x8 < (float)_DAT_005fa40c &&
          (*(float *)dimensions <= *(float *)&dimensions->field_0x8)) &&
         (*(float *)&dimensions->field_0x4 <= *(float *)&dimensions->field_0x8)))))) {
      return 1;
    }
    if ((((*(float *)dimensions < 1.0) && (*(float *)&dimensions->field_0x4 < 1.0)) &&
        ((1.0 < *(float *)&dimensions->field_0x8 &&
         ((*(float *)&dimensions->field_0x8 < (float)_DAT_005fa3fc &&
          (*(float *)dimensions < *(float *)&dimensions->field_0x8)))))) &&
       (*(float *)&dimensions->field_0x4 < *(float *)&dimensions->field_0x8)) {
      return 3;
    }
  }
  return 0;
}
