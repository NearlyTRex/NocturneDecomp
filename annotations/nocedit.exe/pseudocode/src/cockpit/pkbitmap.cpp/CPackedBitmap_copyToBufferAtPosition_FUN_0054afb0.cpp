// Name: cockpit_pkbitmap.cpp_CPackedBitmap_copyToBufferAtPosition_FUN_0054afb0
// Address: 0054afb0
// Address Range: [[0054afb0, 0054aff6]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyToBufferAtPosition_FUN_0054afb0 (CPackedBitmap *this_ptr,uchar *dest_buffer,int dest_x,int dest_y,int bits_per_pixel, int buffer_stride)

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_copyToBufferAtPosition_FUN_0054afb0
          (CPackedBitmap *this_ptr,uchar *dest_buffer,int dest_x,int dest_y,int bits_per_pixel,
          int buffer_stride)

{
  int iVar1;
  
  if (dest_buffer == (uchar *)0x0) {
    return;
  }
  iVar1 = dest_y * bits_per_pixel >> 0x1f;
  cockpit_pkbitmap_cpp_CPackedBitmap_copyNoClip_FUN_0054ae70
            (this_ptr,dest_buffer +
                      ((int)((dest_y * bits_per_pixel + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3)
                      + dest_x * buffer_stride,dest_x,dest_y);
  return;
}
