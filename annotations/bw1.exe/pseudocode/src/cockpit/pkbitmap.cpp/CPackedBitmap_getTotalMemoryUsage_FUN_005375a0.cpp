// Name: cockpit_pkbitmap.cpp_CPackedBitmap_getTotalMemoryUsage_FUN_005375a0
// Address: 005375a0
// Address Range: [[005375a0, 005375be]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getTotalMemoryUsage_FUN_005375a0(CPackedBitmap *this_ptr)

#include "nocturne.h"

int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getTotalMemoryUsage_FUN_005375a0(CPackedBitmap *this_ptr)

{
  if (*(int *)&this_ptr->field_0x20 == 0) {
    return 0;
  }
  return (*(int *)&this_ptr->field_0x1c + 1) * 4 +
         *(int *)(*(int *)&this_ptr->field_0x20 + *(int *)&this_ptr->field_0x1c * 4);
}
