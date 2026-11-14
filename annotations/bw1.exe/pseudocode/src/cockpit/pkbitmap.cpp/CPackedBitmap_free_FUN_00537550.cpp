// Name: cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_00537550
// Address: 00537550
// Address Range: [[00537550, 0053757f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_00537550(CPackedBitmap *this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_00537550(CPackedBitmap *this_ptr)

{
  if (this_ptr->packed_data != (ushort *)0x0) {
    FUN_005c09f0(this_ptr->packed_data);
  }
  FUN_005c0336(this_ptr->row_offsets);
  cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_00537520(this_ptr);
  return;
}
