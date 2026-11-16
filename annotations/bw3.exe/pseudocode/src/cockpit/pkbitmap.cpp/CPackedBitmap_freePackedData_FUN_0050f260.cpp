// Name: cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_0050f260
// Address: 0050f260
// Address Range: [[0050f260, 0050f27f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_freePackedData_FUN_0050f260(CPackedBitmap *this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_freePackedData_FUN_0050f260(CPackedBitmap *this_ptr)

{
  if (this_ptr->packed_data == (ushort *)0x0) {
    return;
  }
  debugFree(this_ptr->packed_data);
  this_ptr->packed_data = (ushort *)0x0;
  return;
}
