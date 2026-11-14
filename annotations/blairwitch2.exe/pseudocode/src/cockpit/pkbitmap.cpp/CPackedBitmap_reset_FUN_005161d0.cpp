// Name: cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_005161d0
// Address: 005161d0
// Address Range: [[005161d0, 005161f0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_005161d0(CPackedBitmap *this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_005161d0(CPackedBitmap *this_ptr)

{
  this_ptr->width = 0;
  this_ptr->height = 0;
  this_ptr->row_offsets = (int *)0x0;
  this_ptr->packed_data = (ushort *)0x0;
  return;
}
