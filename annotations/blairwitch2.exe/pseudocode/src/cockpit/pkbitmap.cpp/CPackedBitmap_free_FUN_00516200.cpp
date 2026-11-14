// Name: cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_00516200
// Address: 00516200
// Address Range: [[00516200, 0051622f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_00516200(CPackedBitmap *this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_00516200(CPackedBitmap *this_ptr)

{
  if (this_ptr->packed_data != (ushort *)0x0) {
    FUN_005b86a0(this_ptr->packed_data);
  }
  FUN_005b7fce(this_ptr->row_offsets);
  cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_005161d0(this_ptr);
  return;
}
