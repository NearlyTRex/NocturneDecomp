// Name: cockpit_pkbitmap.cpp_CPackedBitmap_getTotalMemoryUsage_FUN_00516250
// Address: 00516250
// Address Range: [[00516250, 0051626e]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getTotalMemoryUsage_FUN_00516250(CPackedBitmap *this_ptr)

#include "nocturne.h"

int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getTotalMemoryUsage_FUN_00516250(CPackedBitmap *this_ptr)

{
  if (*(int *)&this_ptr->field_0x20 == 0) {
    return 0;
  }
  return (*(int *)&this_ptr->field_0x1c + 1) * 4 +
         *(int *)(*(int *)&this_ptr->field_0x20 + *(int *)&this_ptr->field_0x1c * 4);
}
