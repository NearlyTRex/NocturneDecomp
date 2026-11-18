// Name: cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_00537580
// Address: 00537580
// Address Range: [[00537580, 0053759f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_freePackedData_FUN_00537580(CPackedBitmap *this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_freePackedData_FUN_00537580(CPackedBitmap *this_ptr)

{
  if (this_ptr->packed_data == (ushort *)0x0) {
    return;
  }
  debugFree(this_ptr->packed_data);
  this_ptr->packed_data = (ushort *)0x0;
  return;
}
