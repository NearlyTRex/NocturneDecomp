// Name: cockpit_pkbitmap.cpp_CPackedBitmap_getTotalMemoryUsage_FUN_0054a970
// Address: 0054a970
// Address Range: [[0054a970, 0054a98e]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getTotalMemoryUsage_FUN_0054a970(CPackedBitmap *this_ptr)

#include "nocturne.h"

int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getTotalMemoryUsage_FUN_0054a970(CPackedBitmap *this_ptr)

{
  if (this_ptr->row_offsets == (int *)0x0) {
    return 0;
  }
  return (this_ptr->height + 1) * 4 + this_ptr->row_offsets[this_ptr->height];
}
