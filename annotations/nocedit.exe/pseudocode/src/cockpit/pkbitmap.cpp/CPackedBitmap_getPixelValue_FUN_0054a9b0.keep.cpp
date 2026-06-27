// Name: cockpit_pkbitmap.cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0
// Address: 0054a9b0
// MANUAL RECONSTRUCTION
// Address Range: [[0054a9b0, 0054aa1b]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0(CPackedBitmap *this_ptr,int x_coordinate,int row_index)

#include "nocturne.h"

int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0(CPackedBitmap *this_ptr,int x_coordinate,int row_index)

{
  ushort *puVar1;
  uint uVar2;
  
  if ((-1 < row_index) && (row_index < this_ptr->height)) {
    for (puVar1 = (ushort *)((char *)this_ptr->packed_data +
                             this_ptr->row_offsets[row_index]);
        (puVar1 < (ushort *)((char *)this_ptr->packed_data +
                             this_ptr->row_offsets[row_index + 1]) &&
        (uVar2 = (uint)*puVar1, (int)uVar2 <= x_coordinate));
        puVar1 = (ushort *)((char *)puVar1 + (puVar1[1] + 3 & 0xfffffffc) + 4)) {
      if (x_coordinate < (int)(uVar2 + puVar1[1])) {
        return (uint)((byte *)puVar1)[(x_coordinate - uVar2) + 4];
      }
    }
  }
  return -1;
}
