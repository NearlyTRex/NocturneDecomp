// Name: cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_004f3f20
// Address: 004f3f20
// Address Range: [[004f3f20, 004f3f40]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_004f3f20(CPackedBitmap *this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_004f3f20(CPackedBitmap *this_ptr)

{
  this_ptr->width = 0;
  this_ptr->height = 0;
  this_ptr->row_offsets = (int *)0x0;
  this_ptr->packed_data = (ushort *)0x0;
  return;
}
