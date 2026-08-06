// Name: cockpit_pkbitmap.cpp_CPackedBitmap_FUN_004f3f50
// Address: 004f3f50
// Address Range: [[004f3f50, 004f3f7f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_FUN_004f3f50(CPackedBitmap *this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_FUN_004f3f50(CPackedBitmap *this_ptr)

{
  if (this_ptr->packed_data != (ushort *)0x0) {
    free(this_ptr->packed_data);
  }
  shape_memdbg_cpp_free_FUN_00564486(this_ptr->row_offsets);
  cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_004f3f20(this_ptr);
  return;
}
