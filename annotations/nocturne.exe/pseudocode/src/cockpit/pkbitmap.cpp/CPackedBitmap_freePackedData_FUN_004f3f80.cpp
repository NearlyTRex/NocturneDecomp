// Name: cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_004f3f80
// Address: 004f3f80
// Address Range: [[004f3f80, 004f3f9f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_freePackedData_FUN_004f3f80(CPackedBitmap *this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_freePackedData_FUN_004f3f80(CPackedBitmap *this_ptr)

{
  if (this_ptr->packed_data == (ushort *)0x0) {
    return;
  }
  free(this_ptr->packed_data);
  this_ptr->packed_data = (ushort *)0x0;
  return;
}
