// Name: core_zombie.cpp_FUN_00588750
// Address: 00588750
// Address Range: [[00588750, 00588899]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_FUN_00588750(CVector3f *dimensions)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_zombie_cpp_FUN_00588750(CVector3f *dimensions)

{
  if ((((((float)_DAT_005d83bf <= *(float *)dimensions) ||
        ((float)_DAT_005d83bf <= *(float *)&dimensions->field_0x4)) ||
       ((float)_DAT_005d83bf <= *(float *)&dimensions->field_0x8)) ||
      ((*(float *)dimensions <= (float)_DAT_005d83c7 ||
       (*(float *)&dimensions->field_0x4 <= (float)_DAT_005d83c7)))) ||
     (*(float *)&dimensions->field_0x8 <= (float)_DAT_005d83c7)) {
    if (((*(float *)dimensions < 1.0) && (*(float *)&dimensions->field_0x4 < 1.0)) &&
       (((float)_DAT_005d83bf < *(float *)&dimensions->field_0x8 &&
        (((*(float *)&dimensions->field_0x8 < (float)_DAT_005d83cf &&
          (*(float *)dimensions <= *(float *)&dimensions->field_0x8)) &&
         (*(float *)&dimensions->field_0x4 <= *(float *)&dimensions->field_0x8)))))) {
      return 1;
    }
    if ((((*(float *)dimensions < 1.0) && (*(float *)&dimensions->field_0x4 < 1.0)) &&
        ((1.0 < *(float *)&dimensions->field_0x8 &&
         ((*(float *)&dimensions->field_0x8 < (float)_DAT_005d83bf &&
          (*(float *)dimensions < *(float *)&dimensions->field_0x8)))))) &&
       (*(float *)&dimensions->field_0x4 < *(float *)&dimensions->field_0x8)) {
      return 3;
    }
  }
  return 0;
}
