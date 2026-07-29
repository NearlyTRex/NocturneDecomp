// Name: cockpit_pkbitmap.cpp_CPackedBitmap_getTotalMemoryUsage_FUN_004f3fa0
// Address: 004f3fa0
// Address Range: [[004f3fa0, 004f3fbe]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getTotalMemoryUsage_FUN_004f3fa0(CPackedBitmap *this_ptr)

#include "nocturne.h"

int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getTotalMemoryUsage_FUN_004f3fa0(CPackedBitmap *this_ptr)

{
  if (this_ptr->row_offsets == (int *)0x0) {
    return 0;
  }
  return (this_ptr->height + 1) * 4 + this_ptr->row_offsets[this_ptr->height];
}
