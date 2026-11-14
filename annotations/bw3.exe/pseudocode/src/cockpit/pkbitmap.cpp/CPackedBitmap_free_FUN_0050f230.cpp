// Name: cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0050f230
// Address: 0050f230
// Address Range: [[0050f230, 0050f25f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_0050f230(CPackedBitmap *this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_0050f230(CPackedBitmap *this_ptr)

{
  if (this_ptr->packed_data != (ushort *)0x0) {
    FUN_005a3770(this_ptr->packed_data);
  }
  FUN_005a30b6(this_ptr->row_offsets);
  cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_0050f200(this_ptr);
  return;
}
