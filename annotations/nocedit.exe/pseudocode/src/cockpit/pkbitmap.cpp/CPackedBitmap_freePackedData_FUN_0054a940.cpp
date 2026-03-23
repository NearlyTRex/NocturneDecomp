// Name: cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_0054a940
// Address: 0054a940
// Address Range: [[0054a940, 0054a969]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_freePackedData_FUN_0054a940(CPackedBitmap *this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_freePackedData_FUN_0054a940(CPackedBitmap *this_ptr)

{
  if (this_ptr->packed_data == (ushort *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460
            (this_ptr->packed_data,"..\\cockpit\\pkbitmap.cpp",0xa4);
  this_ptr->packed_data = (ushort *)0x0;
  return;
}
