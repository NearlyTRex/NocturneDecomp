// Name: cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_00516230
// Address: 00516230
// Address Range: [[00516230, 0051624f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_freePackedData_FUN_00516230(CPackedBitmap *this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_freePackedData_FUN_00516230(CPackedBitmap *this_ptr)

{
  if (this_ptr->packed_data == (ushort *)0x0) {
    return;
  }
  debugFree(this_ptr->packed_data);
  this_ptr->packed_data = (ushort *)0x0;
  return;
}
