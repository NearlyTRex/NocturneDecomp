// Name: cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_004f4310
// Address: 004f4310
// Address Range: [[004f4310, 004f4401]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_004f4310(CPackedBitmap *this_ptr,int dest_x,int dest_y,int src_left,int src_top,int width,int height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_004f4310(CPackedBitmap *this_ptr,int dest_x,int dest_y,int src_left,int src_top,int width,int height)

{
  if ((this_ptr->row_offsets != (int *)0x0) && (this_ptr->packed_data != (ushort *)0x0)) {
    if (dest_x < _DAT_01c00c58) {
      src_left = src_left + (_DAT_01c00c58 - dest_x);
      dest_x = _DAT_01c00c58;
    }
    if (dest_y < _DAT_01c00c5c) {
      src_top = src_top + (_DAT_01c00c5c - dest_y);
      dest_y = _DAT_01c00c5c;
    }
    if (_DAT_01c00c60 < (width + dest_x) - src_left) {
      width = (_DAT_01c00c60 - dest_x) + src_left;
    }
    if (_DAT_01c00c64 < (dest_y + height) - src_top) {
      height = (_DAT_01c00c64 - dest_y) + src_top;
    }
    if ((((src_left <= width) && (src_top <= height)) && (0 < width)) &&
       (((0 < height && (src_left < this_ptr->width)) && (src_top < this_ptr->height)))) {
      if (src_left < 0) {
        dest_x = dest_x - src_left;
        src_left = 0;
      }
      if (src_top < 0) {
        dest_y = dest_y - src_top;
        src_top = 0;
      }
      if (this_ptr->width <= width) {
        width = this_ptr->width + -1;
      }
      if (this_ptr->height <= height) {
        height = this_ptr->height + -1;
      }
      cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_004f4170
                (this_ptr,dest_x,dest_y,src_left,src_top,width,height);
    }
  }
  return;
}
